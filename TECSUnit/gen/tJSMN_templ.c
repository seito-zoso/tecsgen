/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tJSMN_templ.c => src/tJSMN.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * LEN              int16_t          ATTR_LEN        
 * TMP_LEN          int16_t          ATTR_TMP_LEN    
 * key_cell         char_t*          ATTR_key_cell   
 * key_entry        char_t*          ATTR_key_entry  
 * key_function     char_t*          ATTR_key_function
 * key_arg          char_t*          ATTR_key_arg    
 * key_exp          char_t*          ATTR_key_exp    
 * json_str         char_t*          VAR_json_str    
 * tmp_str          char_t*          VAR_tmp_str     
 * counter          int              VAR_counter     
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tJSMN_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eJSMN
 * entry port: eJSMN
 * signature:  sJSMN
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eJSMN_json_open
 * name:         eJSMN_json_open
 * global_name:  tJSMN_eJSMN_json_open
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eJSMN_json_open(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eJSMN_json_parse_path
 * name:         eJSMN_json_parse_path
 * global_name:  tJSMN_eJSMN_json_parse_path
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eJSMN_json_parse_path(CELLIDX idx, char_t* c_path, char_t* e_path, char_t* f_path, int target_num, int btr)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eJSMN_json_parse_arg
 * name:         eJSMN_json_parse_arg
 * global_name:  tJSMN_eJSMN_json_parse_arg
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eJSMN_json_parse_arg(CELLIDX idx, struct tecsunit_obj* arguments, struct tecsunit_obj* exp_val, int* arg_num, int target_num, int btr)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
