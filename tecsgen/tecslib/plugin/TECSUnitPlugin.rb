# -*- coding: utf-8 -*-
#
#  TECS Generator
#      Generator for TOPPERS Embedded Component System
#
#   Copyright (C) 2008-2017 by TOPPERS Project
#--
#   上記著作権者は，以下の(1)〜(4)の条件を満たす場合に限り，本ソフトウェ
#   ア（本ソフトウェアを改変したものを含む．以下同じ）を使用・複製・改
#   変・再配布（以下，利用と呼ぶ）することを無償で許諾する．
#   (1) 本ソフトウェアをソースコードの形で利用する場合には，上記の著作
#       権表示，この利用条件および下記の無保証規定が，そのままの形でソー
#       スコード中に含まれていること．
#   (2) 本ソフトウェアを，ライブラリ形式など，他のソフトウェア開発に使
#       用できる形で再配布する場合には，再配布に伴うドキュメント（利用
#       者マニュアルなど）に，上記の著作権表示，この利用条件および下記
#       の無保証規定を掲載すること．
#   (3) 本ソフトウェアを，機器に組み込むなど，他のソフトウェア開発に使
#       用できない形で再配布する場合には，次のいずれかの条件を満たすこ
#       と．
#     (a) 再配布に伴うドキュメント（利用者マニュアルなど）に，上記の著
#         作権表示，この利用条件および下記の無保証規定を掲載すること．
#     (b) 再配布の形態を，別に定める方法によって，TOPPERSプロジェクトに
#         報告すること．
#   (4) 本ソフトウェアの利用により直接的または間接的に生じるいかなる損
#       害からも，上記著作権者およびTOPPERSプロジェクトを免責すること．
#       また，本ソフトウェアのユーザまたはエンドユーザからのいかなる理
#       由に基づく請求からも，上記著作権者およびTOPPERSプロジェクトを
#       免責すること．
#
#   本ソフトウェアは，無保証で提供されているものである．上記著作権者お
#   よびTOPPERSプロジェクトは，本ソフトウェアに関して，特定の使用目的
#   に対する適合性も含めて，いかなる保証も行わない．また，本ソフトウェ
#   アの利用により直接的または間接的に生じたいかなる損害に関しても，そ
#   の責任を負わない．
#
#   $Id: MrubyBridgeCellPlugin.rb 3072 2019-05-02 23:47:42Z okuma-top $
#++

#== celltype プラグインの共通の親クラス
class TECSUnitPlugin < CellPlugin

  # プラグイン引数名 => Proc
  # @@cell_list = {}      # gen_cdl_file'ed list to avoid duplicate generation
  # @@signature_list = {}

  #=== CellPlugin# initialize
  #cell::     Cell        セル（インスタンス）
  # このメソッドは、セルの構文解析が終わったところで呼び出される
  # この段階では意味解析が終わっていない
  def initialize( cell, option )
    dbgPrint "  #{self.class.name}: initialzie=#{cell.get_name} option=#{option}\n"
    super
    @cell = cell

    @plugin_arg_str = CDLString.remove_dquote option
    # @plugin_arg_str = option.gsub( /\A"(.*)/, '\1' )    # 前後の "" を取り除く
    # @plugin_arg_str.sub!( /(.*)"\z/, '\1' )
    @plugin_arg_list = {}
  end

  def gen_cdl_file file
    # tTECSUnit の定義を生成する
    file.print <<EOT

celltype tTECSUnit {
    entry sTECSUnit eUnit;
    /*----- TECSInfo -----*/
    call nTECSInfo::sTECSInfo cTECSInfo;
    [dynamic,optional]
      call  nTECSInfo::sNamespaceInfo cNSInfo;
    [dynamic,optional]
      call  nTECSInfo::sRegionInfo    cRegionInfo;
    [dynamic,optional]
      call  nTECSInfo::sCellInfo      cCellInfo;
    [dynamic,optional]
      call  nTECSInfo::sSignatureInfo cSignatureInfo;
    [dynamic,optional]
      call  nTECSInfo::sCelltypeInfo  cCelltypeInfo;
    [dynamic,optional]
      call  nTECSInfo::sVarDeclInfo   cVarDeclInfo;
    [dynamic,optional]
      call  nTECSInfo::sTypeInfo      cTypeInfo;
    /*----- TECSInfo -----*/

    /*----- RawEntryDescriptor -----*/
    [dynamic,optional]
      call  nTECSInfo::sRawEntryDescriptorInfo   cREDInfo;
    [dynamic,optional]
      call  nTECSInfo::sEntryInfo     cEntryInfo;
    /*----- RawEntryDescriptor -----*/

    /*----- TECSUnit test -----*/
      /* プラグインにより自動生成される */
EOT
    # callの記述を行う
    print_all_call_port( file, Namespace.get_root )

    file.print <<EOT
    /*----- TECSUnit test -----*/

    attr {
      int16_t LEN = 256;
    };
    var {
      int32_t out_int[16][64];
      double64_t out_double[16][32];
      char_t out_char[16][256];
      [size_is(LEN)]
        char *cell_entry;
    };
EOT

    file.print <<EOT

};
EOT
  end

  def print_all_call_port file, namespace
    namespace.travers_all_signature{ |sig|
      if sig.get_namespace_path.to_s =~ /nTECSInfo::/ || sig.get_namespace_path.to_s =~ /::sTask.*/ || sig.get_namespace_path.to_s =~ /::sAccessor/ || sig.get_namespace_path.to_s =~ /::sTECSUnit/ || sig.get_namespace_path.to_s =~ /::sJSMN/ || sig.get_namespace_path.to_s =~ /::s.*Kernel/ || sig.get_namespace_path.to_s =~ /::s.*Semaphore/ || sig.get_namespace_path.to_s =~ /::s.*Eventflag/ || sig.get_namespace_path.to_s =~ /::s.*Dataqueue/ then
      # ignnore these signatures
      else
        file.print <<EOT
    [dynamic, optional]
      call #{sig.get_namespace_path.to_s} c#{sig.get_name[1..-1]};
EOT
      end
    }
  end

  #===  受け口関数の本体コードを生成（頭部と末尾は別途出力）
  #ct_name:: Symbol    (プラグインで生成された) セルタイプ名 ．Symbol として送られてくる
  def gen_ep_func_body( file, b_singleton, ct_name, global_ct_name, sig_name, ep_name, func_name, func_global_name, func_type, paramSet )
    # tTECSUnit の受け口関数のセルタイプコード (C言語) を生成する
    file.print <<EOT
  CELLCB  *p_cellcb;
  if (VALID_IDX(idx)) {
    p_cellcb = GET_CELLCB(idx);
  }
  else {
    /* エラー処理コードをここに記述します */
  } /* end if VALID_IDX(idx) */
  puts("");
  printf( "--- TECSUnit ---\\n" );
  void *rawDesc;
EOT

    print_desc( file, Namespace.get_root )

    file.print <<EOT
  sprintf( VAR_cell_entry, "%s.%s", cell_path, entry_path );
  getRawEntryDescriptor( p_cellcb, VAR_cell_entry, &rawDesc, signature_path );
EOT
    print_branch_sig( file, Namespace.get_root )
  end

  def print_desc( file, namespace )
    namespace.travers_all_signature{ |sig|
      if sig.get_namespace_path.to_s =~ /nTECSInfo::/ || sig.get_namespace_path.to_s =~ /::sTask.*/ || sig.get_namespace_path.to_s =~ /::sAccessor/ || sig.get_namespace_path.to_s =~ /::sTECSUnit/ || sig.get_namespace_path.to_s =~ /::sJSMN/ || sig.get_namespace_path.to_s =~ /::s.*Kernel/ || sig.get_namespace_path.to_s =~ /::s.*Semaphore/ || sig.get_namespace_path.to_s =~ /::s.*Eventflag/ || sig.get_namespace_path.to_s =~ /::s.*Dataqueue/ then
      # ignnore these signatures
      else
        file.print <<EOT
  Descriptor( #{sig.get_name} ) #{sig.get_name[1..-1]}Desc;
EOT
      end
    }
  end

  def print_branch_sig( file, namespace )
    flag = true
    namespace.travers_all_signature{ |sig|
      if sig.get_namespace_path.to_s =~ /nTECSInfo::/ || sig.get_namespace_path.to_s =~ /::sTask.*/ || sig.get_namespace_path.to_s =~ /::sAccessor/ || sig.get_namespace_path.to_s =~ /::sTECSUnit/ || sig.get_namespace_path.to_s =~ /::sJSMN/ || sig.get_namespace_path.to_s =~ /::s.*Kernel/ || sig.get_namespace_path.to_s =~ /::s.*Semaphore/ || sig.get_namespace_path.to_s =~ /::s.*Eventflag/ || sig.get_namespace_path.to_s =~ /::s.*Dataqueue/ then
      # ignnore these signatures
      else
        if flag then
          flag = false
          file.print <<EOT

  if( !strcmp(signature_path, "#{sig.get_name}" ) ){
    setRawEntryDescriptor( #{sig.get_name[1..-1]}Desc, #{sig.get_name}, rawDesc );
    c#{sig.get_name[1..-1]}_set_descriptor( #{sig.get_name[1..-1]}Desc );
EOT
          print_branch_func( file, sig )
          file.print <<EOT
  }
EOT
        else
          file.print <<EOT
  else if( !strcmp(signature_path, "#{sig.get_name}" ) ){
    setRawEntryDescriptor( #{sig.get_name[1..-1]}Desc, #{sig.get_name}, rawDesc );
    c#{sig.get_name[1..-1]}_set_descriptor( #{sig.get_name[1..-1]}Desc );
EOT
          print_branch_func( file, sig )
          file.print <<EOT
  }
EOT
        end
      end
    }
  end

  def print_branch_func( file, signature )
    str = ""
    paramSet = ""
    param = ""
    exp_val = ""
    flag = true # 初回のみtrue以降はelse ifを使いたい。
    first = true
    # out引数のカウント
    int_count = 0
    double_count = 0
    char_count = 0

    i = 0
    signature.each_param{ |decl, paramDecl|
      if str != decl.get_name.to_s then # 注目している関数が更新
        i = 0 # 初期化
        int_count = 0
        double_count = 0
        char_count = 0

        if first then # １回目はスキップ。先にparamを取得したいので出力タイミングを１つ後ろにずらしている
          first = false
        else # ２週目以降。declには既に新たな関数が入っている。
          if flag then # シグニチャ関数の１つ目
            flag = false
            if paramSet == "" then
             # paramSetが空ならスルー
            else
              print_call_desc1( file, str, exp_val, signature, paramSet, int_count, double_count, char_count )
            end
          else # シグニチャ関数の2つ目以降
            if paramSet == "" then
             # paramSetが空ならスルー
            else
              print_call_desc2( file, str, exp_val, signature, paramSet, int_count, double_count, char_count )
            end
          end
        end
        paramSet = "" # paramを空に
        str = decl.get_name.to_s # 関数名を更新
      end

      # paramSet を追加していく
      param = paramDecl.get_type.get_type_str
      if paramSet == "" then # paramが空
        if param.include?("*") && !param.include?("const") then
          if param.include?("int") || param.include?("short") || param.include?("long") then
            paramSet.concat("VAR_out_int[#{int_count}]")
            int_count += 1
          elsif param.include?("double") || param.include?("float") then
            paramSet.concat("VAR_out_double[#{double_count}]")
            double_count += 1
          elsif param.include?("char") then
            paramSet.concat("VAR_out_char[#{char_count}]")
            char_count += 1
          end
        else
          if param.include?("struct") then
            paramSet.concat("&arguments[#{i}].data.mem_#{param.sub(/\*/, '_buf').sub('const ', '').sub('struct ', '').downcase}")
          else
            paramSet.concat("arguments[#{i}].data.mem_#{param.sub(/\*/, '_buf').sub('const ', '').downcase}")
          end
        end
        i = i + 1
      else # 2つ目以降
        if param.include?("*") && !param.include?("const") then
          if param.include?("int") || param.include?("short") || param.include?("long") then
            paramSet.concat(", VAR_out_int[#{int_count}]")
            int_count += 1
          elsif param.include?("double") || param.include?("float") then
            paramSet.concat(", VAR_out_double[#{double_count}]")
            double_count += 1
          elsif param.include?("char") then
            paramSet.concat(", VAR_out_char[#{char_count}]")
            char_count += 1
          end
        else
          if param.include?("struct") then
            paramSet.concat(", &arguments[#{i}].data.mem_#{param.sub(/\*/, '_buf').sub('const ', '').sub('struct ', '').downcase}")
          else
            paramSet.concat(", arguments[#{i}].data.mem_#{param.sub(/\*/, '_buf').sub('const ', '').downcase}")
          end
        end
        i = i + 1
      end
      # exp_valの追加
      exp_val = "exp_val->" + "data.mem_#{decl.get_type.get_type_str.sub(/\*/, '_buf').sub('const ', '').sub('struct ', '').downcase}"
    }
    # 最後のシグニチャ関数を出力
    if flag then # シグニチャ関数の１つ目
      flag = false
      if paramSet == "" then
        # paramSetが空ならスルー
      else
        print_call_desc1( file, str, exp_val, signature, paramSet, int_count, double_count, char_count )
      end
    else # シグニチャ関数の2つ目以降
      if paramSet == "" then
        # paramSetが空ならスルー
      else
        print_call_desc2( file, str, exp_val, signature, paramSet, int_count, double_count, char_count )
      end
    end
  end
# else無し
  def print_call_desc1( file, str, exp_val, signature, paramSet, int_count, double_count, char_count )
    file.print <<EOT
      if( !strcmp( function_path, "#{str}" ) ){
        printf("Call c#{signature.get_name[1..-1]}_#{str}\\n");
        if( #{exp_val} == c#{signature.get_name[1..-1]}_#{str}( #{paramSet} ) ){
          printf("\\nResult：OK\\n");
        }else{
          printf("\\nResult：NG\\n");
        }
EOT
    out_check( file, int_count, double_count, char_count )
    file.print <<EOT
      }
EOT
  end
# elseあり
  def print_call_desc2( file, str, exp_val, signature, paramSet, int_count, double_count, char_count )
    file.print <<EOT
      else if( !strcmp( function_path, "#{str}" ) ){
        printf("Call c#{signature.get_name[1..-1]}_#{str}\\n");
        if( #{exp_val} == c#{signature.get_name[1..-1]}_#{str}( #{paramSet} ) ){
          printf("\\nResult：OK\\n");
        }else{
          printf("\\nResult：NG\\n");
        }
EOT
    out_check( file, int_count, double_count, char_count )
    file.print <<EOT
      }
EOT
  end

  def out_check( file, int_count, double_count, char_count )

    for i in 1..int_count
      file.print <<EOT
        printf("[out]：#{i}番目の整数型の値：");
        printf("%d\\n", VAR_out_int[#{i-1}]);
EOT
    end

    for i in 1..double_count
      file.print <<EOT
        printf("[out]：#{i}番目の浮動小数点型の値：");
        printf("%f\\n", VAR_out_double[#{i-1}]);
EOT
    end

    for i in 1..char_count
      file.print <<EOT
        printf("[out]：#{i}番目のchar型の値：");
        printf("%s\\n", VAR_out_char[#{i-1}]);
EOT
    end

  end
  #=== 後ろの CDL コードを生成
  #プラグインの後ろの CDL コードを生成
  #file:: File:
  def self.gen_post_code( file )

  end

  def gen_preamble( file, b_singleton, ct_name, global_ct_name )
    file.print <<EOT
ER getRawEntryDescriptor( CELLCB *p_cellcb, char_t *entry_path, void **rawEntryDesc, char_t *expected_signature );
EOT
  end
  # 非受け口関数の生成
  def gen_postamble( file, b_singleton, ct_name, global_ct_name )
    file.print <<EOT
ER getRawEntryDescriptor( CELLCB *p_cellcb, char_t *entry_path, void **rawEntryDesc, char_t *expected_signature )
{
    Descriptor( nTECSInfo_sRawEntryDescriptorInfo ) rawEntryDescDesc;
    Descriptor( nTECSInfo_sEntryInfo )              entryDesc;
    ER     ercd;
    void   *rawDesc;

    ercd = cTECSInfo_findRawEntryDescriptor( entry_path, &rawEntryDescDesc, &entryDesc );
    if( ercd != E_OK ){
        printf( "call_sTask: error cTECSInfo_findRawEntryDescriptor( entry_path=%s ) = %d\\n", entry_path, ercd );
    }
    else {
#define NAME_LEN  (256)
        Descriptor( nTECSInfo_sSignatureInfo )  signatureDesc;
        char_t  name[ NAME_LEN ];

        cREDInfo_set_descriptor( rawEntryDescDesc );
        cEntryInfo_set_descriptor( entryDesc );
        cEntryInfo_getSignatureInfo( &signatureDesc );
        cSignatureInfo_set_descriptor( signatureDesc );
        ercd = cSignatureInfo_getName( name, NAME_LEN );
        if( ercd != E_OK ){
            printf( "getRawEntryDescriptor: error cannot get signature name. expectd: \'%s\'\\n", expected_signature );
        }
        if( strcmp( name, expected_signature ) != 0 ){
            printf( "getRawEntryDescriptor: error signature name \'%s\' mismatch expecting \'%s\'\\n", name, expected_signature );
            ercd = E_NOEXS;
        }
        cREDInfo_getRawDescriptor( 0, rawEntryDesc );
    }
    return ercd;
}
EOT

  end
end

