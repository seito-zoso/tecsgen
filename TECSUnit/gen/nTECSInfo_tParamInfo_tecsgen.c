/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tParamInfo_tecsgen.h"
#include "nTECSInfo_tParamInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eParamInfo */
struct tag_nTECSInfo_tParamInfo_eParamInfo_DES {
    const struct tag_nTECSInfo_sParamInfo_VMT *vmt;
    tParamInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eParamInfo */
ER             nTECSInfo_tParamInfo_eParamInfo_getName_skel( const struct tag_nTECSInfo_sParamInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tParamInfo_eParamInfo_DES *lepd
        = (struct tag_nTECSInfo_tParamInfo_eParamInfo_DES *)epd;
    return nTECSInfo_tParamInfo_eParamInfo_getName( lepd->idx, name, max_len );
}
uint16_t       nTECSInfo_tParamInfo_eParamInfo_getNameLength_skel( const struct tag_nTECSInfo_sParamInfo_VDES *epd)
{
    struct tag_nTECSInfo_tParamInfo_eParamInfo_DES *lepd
        = (struct tag_nTECSInfo_tParamInfo_eParamInfo_DES *)epd;
    return nTECSInfo_tParamInfo_eParamInfo_getNameLength( lepd->idx );
}
ER             nTECSInfo_tParamInfo_eParamInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sParamInfo_VDES *epd, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
    struct tag_nTECSInfo_tParamInfo_eParamInfo_DES *lepd
        = (struct tag_nTECSInfo_tParamInfo_eParamInfo_DES *)epd;
    return nTECSInfo_tParamInfo_eParamInfo_getTypeInfo( lepd->idx, desc );
}
ER             nTECSInfo_tParamInfo_eParamInfo_getDir_skel( const struct tag_nTECSInfo_sParamInfo_VDES *epd, int8_t* dir)
{
    struct tag_nTECSInfo_tParamInfo_eParamInfo_DES *lepd
        = (struct tag_nTECSInfo_tParamInfo_eParamInfo_DES *)epd;
    return nTECSInfo_tParamInfo_eParamInfo_getDir( lepd->idx, dir );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eParamInfo */
const struct tag_nTECSInfo_sParamInfo_VMT nTECSInfo_tParamInfo_eParamInfo_MT_ = {
    nTECSInfo_tParamInfo_eParamInfo_getName_skel,
    nTECSInfo_tParamInfo_eParamInfo_getNameLength_skel,
    nTECSInfo_tParamInfo_eParamInfo_getTypeInfo_skel,
    nTECSInfo_tParamInfo_eParamInfo_getDir_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_TEXPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_SYSTIM_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_SYSUTM_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_SYSUTM_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_TMOTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_T_RSEM_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_MODETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_FLGPTN_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_MODETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_FLGPTN_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_MODETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_FLGPTN_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_TMOTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_T_RFLG_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_TMOTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_TMOTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_T_RDTQ_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_const__int8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_struct__target_struct_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_struct__tecsunit_obj_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_struct__tecsunit_obj_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_struct__tecsunit_obj_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_struct__tecsunit_obj_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sParamInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sFunctionInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCallInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sEntryInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sRawEntryDescriptorInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sNamespaceInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCellInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sRegionInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sNamespaceInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sRegionInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCellInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sRawEntryDescriptorInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sEntryInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rTEMP_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des;

/* 呼び口配列 #_CPA_# */































































































































































































































/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tParamInfo_INIB nTECSInfo_tParamInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tParamInfo_CB_tab[0]:  sTaskExceptionBody_main_patternParamInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_TEXPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pattern",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[1]:  sKernel_delay_delay_timeParamInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "delay_time",                            /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[2]:  sKernel_getTime_p_system_timeParamInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_SYSTIM_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_system_time",                         /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[3]:  sKernel_getMicroTime_p_system_micro_timeParamInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_SYSUTM_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_system_micro_time",                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[4]:  siKernel_getMicroTime_p_system_micro_timeParamInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_SYSUTM_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_system_micro_time",                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[5]:  sSemaphore_waitTimeout_timeoutParamInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_TMOTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "timeout",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[6]:  sSemaphore_refer_pk_semaphore_statusParamInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_T_RSEM_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pk_semaphore_status",                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[7]:  sEventflag_set_set_patternParamInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "set_pattern",                           /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[8]:  sEventflag_clear_clear_patternParamInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "clear_pattern",                         /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[9]:  sEventflag_wait_wait_patternParamInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "wait_pattern",                          /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[10]:  sEventflag_wait_wait_flag_modeParamInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_MODETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "wait_flag_mode",                        /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[11]:  sEventflag_wait_p_flag_patternParamInfo id=12 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_FLGPTN_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_flag_pattern",                        /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[12]:  sEventflag_waitPolling_wait_patternParamInfo id=13 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "wait_pattern",                          /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[13]:  sEventflag_waitPolling_wait_flag_modeParamInfo id=14 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_MODETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "wait_flag_mode",                        /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[14]:  sEventflag_waitPolling_p_flag_patternParamInfo id=15 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_FLGPTN_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_flag_pattern",                        /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[15]:  sEventflag_waitTimeout_wait_patternParamInfo id=16 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "wait_pattern",                          /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[16]:  sEventflag_waitTimeout_wait_flag_modeParamInfo id=17 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_MODETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "wait_flag_mode",                        /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[17]:  sEventflag_waitTimeout_p_flag_patternParamInfo id=18 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_FLGPTN_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_flag_pattern",                        /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[18]:  sEventflag_waitTimeout_timeoutParamInfo id=19 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_TMOTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "timeout",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[19]:  sEventflag_refer_pk_eventflag_statusParamInfo id=20 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_T_RFLG_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pk_eventflag_status",                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[20]:  siEventflag_set_set_patternParamInfo id=21 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "set_pattern",                           /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[21]:  sDataqueue_send_dataParamInfo id=22 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[22]:  sDataqueue_sendPolling_dataParamInfo id=23 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[23]:  sDataqueue_sendTimeout_dataParamInfo id=24 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[24]:  sDataqueue_sendTimeout_timeoutParamInfo id=25 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_TMOTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "timeout",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[25]:  sDataqueue_sendForce_dataParamInfo id=26 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[26]:  sDataqueue_receive_p_dataParamInfo id=27 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_data",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[27]:  sDataqueue_receivePolling_p_dataParamInfo id=28 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_data",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[28]:  sDataqueue_receiveTimeout_p_dataParamInfo id=29 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_data",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[29]:  sDataqueue_receiveTimeout_timeoutParamInfo id=30 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_TMOTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "timeout",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[30]:  sDataqueue_refer_pk_dataqueue_statusParamInfo id=31 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_T_RDTQ_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pk_dataqueue_status",                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[31]:  siDataqueue_sendPolling_dataParamInfo id=32 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[32]:  siDataqueue_sendForce_dataParamInfo id=33 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[33]:  sAccessor_selectNamespaceInfoByName_namespacePathParamInfo id=34 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "namespacePath",                         /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[34]:  sAccessor_selectCelltypeInfoByName_namespacePathParamInfo id=35 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "namespacePath",                         /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[35]:  sAccessor_selectSignatureInfoByName_namespacePathParamInfo id=36 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "namespacePath",                         /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[36]:  sAccessor_selectRegionInfoByName_regionPathParamInfo id=37 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "regionPath",                            /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[37]:  sAccessor_selectCellInfoByName_cellPathParamInfo id=38 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cellPath",                              /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[38]:  sAccessor_getSelectedNamespaceInfo_nameParamInfo id=39 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[39]:  sAccessor_getSelectedNamespaceInfo_max_lenParamInfo id=40 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[40]:  sAccessor_getSelectedNamespaceInfo_num_namespaceParamInfo id=41 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num_namespace",                         /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[41]:  sAccessor_getSelectedNamespaceInfo_num_celltypeParamInfo id=42 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num_celltype",                          /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[42]:  sAccessor_getSelectedNamespaceInfo_num_signatureParamInfo id=43 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num_signature",                         /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[43]:  sAccessor_selectCelltypeInfo_ithParamInfo id=44 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[44]:  sAccessor_selectSignatureInfo_ithParamInfo id=45 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[45]:  sAccessor_getSelectedCelltypeInfo_nameParamInfo id=46 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[46]:  sAccessor_getSelectedCelltypeInfo_max_lenParamInfo id=47 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[47]:  sAccessor_getSelectedCelltypeInfo_num_attrParamInfo id=48 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num_attr",                              /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[48]:  sAccessor_getSelectedCelltypeInfo_num_varParamInfo id=49 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num_var",                               /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[49]:  sAccessor_getSelectedCelltypeInfo_num_callParamInfo id=50 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num_call",                              /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[50]:  sAccessor_getSelectedCelltypeInfo_num_entryParamInfo id=51 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num_entry",                             /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[51]:  sAccessor_selectCallInfo_ithParamInfo id=52 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[52]:  sAccessor_selectEntryInfo_ithParamInfo id=53 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[53]:  sAccessor_selectAttrInfo_ithParamInfo id=54 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[54]:  sAccessor_selectVarInfo_ithParamInfo id=55 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[55]:  sAccessor_getSelectedAttrInfo_nameParamInfo id=56 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[56]:  sAccessor_getSelectedAttrInfo_max_lenParamInfo id=57 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[57]:  sAccessor_getSizeIsExprOfAttr_expr_strParamInfo id=58 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "expr_str",                              /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[58]:  sAccessor_getSizeIsExprOfAttr_max_lenParamInfo id=59 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[59]:  sAccessor_getSelectedVarInfo_nameParamInfo id=60 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[60]:  sAccessor_getSelectedVarInfo_max_lenParamInfo id=61 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[61]:  sAccessor_getSizeIsExprOfVar_expr_strParamInfo id=62 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "expr_str",                              /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[62]:  sAccessor_getSizeIsExprOfVar_max_lenParamInfo id=63 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[63]:  sAccessor_getSelectedCallInfo_nameParamInfo id=64 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[64]:  sAccessor_getSelectedCallInfo_max_lenParamInfo id=65 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[65]:  sAccessor_getSelectedCallInfo_array_sizeParamInfo id=66 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "array_size",                            /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[66]:  sAccessor_getSelectedCallSpecifierInfo_b_optionalParamInfo id=67 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_optional",                            /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[67]:  sAccessor_getSelectedCallSpecifierInfo_b_dynamicParamInfo id=68 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_dynamic",                             /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[68]:  sAccessor_getSelectedCallSpecifierInfo_b_ref_descParamInfo id=69 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_ref_desc",                            /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[69]:  sAccessor_getSelectedCallSpecifierInfo_b_omitParamInfo id=70 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_omit",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[70]:  sAccessor_getSelectedCallInternalInfo_b_allocator_portParamInfo id=71 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_allocator_port",                      /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[71]:  sAccessor_getSelectedCallInternalInfo_b_require_portParamInfo id=72 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_require_port",                        /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[72]:  sAccessor_getSelectedCallLocationInfo_offsetParamInfo id=73 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "offset",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[73]:  sAccessor_getSelectedCallLocationInfo_placeParamInfo id=74 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "place",                                 /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[74]:  sAccessor_getSelectedCallOptimizeInfo_b_VMT_uselessParamInfo id=75 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_VMT_useless",                         /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[75]:  sAccessor_getSelectedCallOptimizeInfo_b_skelton_uselessParamInfo id=76 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_skelton_useless",                     /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[76]:  sAccessor_getSelectedCallOptimizeInfo_b_cell_uniqueParamInfo id=77 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_cell_unique",                         /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[77]:  sAccessor_getSelectedEntryInfo_nameParamInfo id=78 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[78]:  sAccessor_getSelectedEntryInfo_max_lenParamInfo id=79 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[79]:  sAccessor_getSelectedEntryInfo_array_sizeParamInfo id=80 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "array_size",                            /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[80]:  sAccessor_getSelectedEntryInlineInfo_b_inlineParamInfo id=81 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_inline",                              /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[81]:  sAccessor_getSelectedSignatureInfo_nameParamInfo id=82 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[82]:  sAccessor_getSelectedSignatureInfo_max_lenParamInfo id=83 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[83]:  sAccessor_getSelectedSignatureInfo_num_functionParamInfo id=84 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num_function",                          /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[84]:  sAccessor_selectFunctionInfoByIndex_ithParamInfo id=85 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[85]:  sAccessor_getSelectedFunctionInfo_nameParamInfo id=86 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[86]:  sAccessor_getSelectedFunctionInfo_max_lenParamInfo id=87 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[87]:  sAccessor_getSelectedFunctionInfo_num_argsParamInfo id=88 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num_args",                              /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[88]:  sAccessor_getSelectedParamInfo_nameParamInfo id=89 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[89]:  sAccessor_getSelectedParamInfo_max_lenParamInfo id=90 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[90]:  sAccessor_getSelectedParamInfo_dirParamInfo id=91 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "dir",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[91]:  sAccessor_selectParamInfo_ithParamInfo id=92 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[92]:  sAccessor_getSelectedTypeInfo_nameParamInfo id=93 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[93]:  sAccessor_getSelectedTypeInfo_max_lenParamInfo id=94 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[94]:  sAccessor_getSelectedTypeInfo_kindParamInfo id=95 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "kind",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[95]:  sAccessor_getSelectedRegionInfo_nameParamInfo id=96 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[96]:  sAccessor_getSelectedRegionInfo_max_lenParamInfo id=97 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[97]:  sAccessor_getSelectedRegionInfo_num_cellParamInfo id=98 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num_cell",                              /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[98]:  sAccessor_selectCellInfo_ithParamInfo id=99 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[99]:  sAccessor_getSelectedCellInfo_nameParamInfo id=100 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[100]:  sAccessor_getSelectedCellInfo_max_lenParamInfo id=101 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[101]:  sAccessor_getAttrValueInStr_bufParamInfo id=102 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "buf",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[102]:  sAccessor_getAttrValueInStr_max_lenParamInfo id=103 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[103]:  sAccessor_getVarValueInStr_bufParamInfo id=104 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "buf",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[104]:  sAccessor_getVarValueInStr_max_lenParamInfo id=105 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[105]:  sTarget1_double_argParamInfo id=106 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "arg",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[106]:  sTarget2_add_arg1ParamInfo id=107 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "arg1",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[107]:  sTarget2_add_arg2ParamInfo id=108 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "arg2",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[108]:  sTarget3_send_bufParamInfo id=109 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_const__int8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "buf",                                   /* name */
        1,                                       /* dir */
        " $1",                                   /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[109]:  sTarget3_send_lenParamInfo id=110 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "len",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[110]:  sTarget3_sendMessage_bufParamInfo id=111 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "buf",                                   /* name */
        1,                                       /* dir */
        " $1",                                   /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[111]:  sTarget3_sendMessage_lenParamInfo id=112 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "len",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[112]:  sTarget3_sendStruct_dataParamInfo id=113 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_struct__target_struct_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[113]:  sTarget3_receiveMessage_bufParamInfo id=114 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "buf",                                   /* name */
        2,                                       /* dir */
        " $1",                                   /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[114]:  sTarget3_receiveMessage_lenParamInfo id=115 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "len",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[115]:  sTECSUnit_main_cell_pathParamInfo id=116 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cell_path",                             /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[116]:  sTECSUnit_main_entry_pathParamInfo id=117 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "entry_path",                            /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[117]:  sTECSUnit_main_signature_pathParamInfo id=118 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "signature_path",                        /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[118]:  sTECSUnit_main_function_pathParamInfo id=119 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "function_path",                         /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[119]:  sTECSUnit_main_argumentsParamInfo id=120 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_struct__tecsunit_obj_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "arguments",                             /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[120]:  sTECSUnit_main_exp_valParamInfo id=121 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_struct__tecsunit_obj_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "exp_val",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[121]:  sJSMN_json_parse_path_c_pathParamInfo id=122 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "c_path",                                /* name */
        2,                                       /* dir */
        " $4",                                   /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[122]:  sJSMN_json_parse_path_e_pathParamInfo id=123 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "e_path",                                /* name */
        2,                                       /* dir */
        " $4",                                   /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[123]:  sJSMN_json_parse_path_f_pathParamInfo id=124 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "f_path",                                /* name */
        2,                                       /* dir */
        " $4",                                   /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[124]:  sJSMN_json_parse_path_target_numParamInfo id=125 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "target_num",                            /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[125]:  sJSMN_json_parse_path_btrParamInfo id=126 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "btr",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[126]:  sJSMN_json_parse_arg_argumentsParamInfo id=127 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_struct__tecsunit_obj_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "arguments",                             /* name */
        3,                                       /* dir */
        " $4",                                   /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[127]:  sJSMN_json_parse_arg_exp_valParamInfo id=128 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_struct__tecsunit_obj_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "exp_val",                               /* name */
        3,                                       /* dir */
        " $4",                                   /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[128]:  sJSMN_json_parse_arg_arg_numParamInfo id=129 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "arg_num",                               /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[129]:  sJSMN_json_parse_arg_target_numParamInfo id=130 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "target_num",                            /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[130]:  sJSMN_json_parse_arg_btrParamInfo id=131 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "btr",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[131]:  nTECSInfo_sTypeInfo_getName_nameParamInfo id=132 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[132]:  nTECSInfo_sTypeInfo_getName_max_lenParamInfo id=133 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[133]:  nTECSInfo_sTypeInfo_getTypeInfo_descParamInfo id=134 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[134]:  nTECSInfo_sTypeInfo_getMemberInfo_ithParamInfo id=135 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[135]:  nTECSInfo_sTypeInfo_getMemberInfo_descParamInfo id=136 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[136]:  nTECSInfo_sVarDeclInfo_getName_nameParamInfo id=137 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[137]:  nTECSInfo_sVarDeclInfo_getName_max_lenParamInfo id=138 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[138]:  nTECSInfo_sVarDeclInfo_getLocationInfo_offsetParamInfo id=139 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "offset",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[139]:  nTECSInfo_sVarDeclInfo_getLocationInfo_placeParamInfo id=140 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "place",                                 /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[140]:  nTECSInfo_sVarDeclInfo_getTypeInfo_descParamInfo id=141 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[141]:  nTECSInfo_sVarDeclInfo_getSizeIsExpr_expr_strParamInfo id=142 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "expr_str",                              /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[142]:  nTECSInfo_sVarDeclInfo_getSizeIsExpr_max_lenParamInfo id=143 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[143]:  nTECSInfo_sVarDeclInfo_getSizeIs_sizeParamInfo id=144 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "size",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[144]:  nTECSInfo_sVarDeclInfo_getSizeIs_p_cbParamInfo id=145 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_cb",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[145]:  nTECSInfo_sParamInfo_getName_nameParamInfo id=146 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[146]:  nTECSInfo_sParamInfo_getName_max_lenParamInfo id=147 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[147]:  nTECSInfo_sParamInfo_getTypeInfo_descParamInfo id=148 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[148]:  nTECSInfo_sParamInfo_getDir_dirParamInfo id=149 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "dir",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[149]:  nTECSInfo_sFunctionInfo_getName_nameParamInfo id=150 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[150]:  nTECSInfo_sFunctionInfo_getName_max_lenParamInfo id=151 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[151]:  nTECSInfo_sFunctionInfo_getReturnTypeInfo_descParamInfo id=152 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[152]:  nTECSInfo_sFunctionInfo_getParamInfo_ithParamInfo id=153 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[153]:  nTECSInfo_sFunctionInfo_getParamInfo_paramParamInfo id=154 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sParamInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "param",                                 /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[154]:  nTECSInfo_sSignatureInfo_getName_nameParamInfo id=155 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[155]:  nTECSInfo_sSignatureInfo_getName_max_lenParamInfo id=156 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[156]:  nTECSInfo_sSignatureInfo_getFunctionInfo_ithParamInfo id=157 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[157]:  nTECSInfo_sSignatureInfo_getFunctionInfo_descParamInfo id=158 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sFunctionInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[158]:  nTECSInfo_sCallInfo_getName_nameParamInfo id=159 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[159]:  nTECSInfo_sCallInfo_getName_max_lenParamInfo id=160 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[160]:  nTECSInfo_sCallInfo_getSignatureInfo_descParamInfo id=161 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[161]:  nTECSInfo_sCallInfo_getSpecifierInfo_b_optionalParamInfo id=162 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_optional",                            /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[162]:  nTECSInfo_sCallInfo_getSpecifierInfo_b_dynamicParamInfo id=163 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_dynamic",                             /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[163]:  nTECSInfo_sCallInfo_getSpecifierInfo_b_ref_descParamInfo id=164 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_ref_desc",                            /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[164]:  nTECSInfo_sCallInfo_getSpecifierInfo_b_omitParamInfo id=165 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_omit",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[165]:  nTECSInfo_sCallInfo_getInternalInfo_b_allocator_portParamInfo id=166 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_allocator_port",                      /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[166]:  nTECSInfo_sCallInfo_getInternalInfo_b_require_portParamInfo id=167 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_require_port",                        /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[167]:  nTECSInfo_sCallInfo_getLocationInfo_offsetParamInfo id=168 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "offset",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[168]:  nTECSInfo_sCallInfo_getLocationInfo_placeParamInfo id=169 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "place",                                 /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[169]:  nTECSInfo_sCallInfo_getOptimizeInfo_b_VMT_uselessParamInfo id=170 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_VMT_useless",                         /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[170]:  nTECSInfo_sCallInfo_getOptimizeInfo_b_skelton_uselessParamInfo id=171 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_skelton_useless",                     /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[171]:  nTECSInfo_sCallInfo_getOptimizeInfo_b_cell_uniqueParamInfo id=172 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_cell_unique",                         /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[172]:  nTECSInfo_sEntryInfo_getName_nameParamInfo id=173 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[173]:  nTECSInfo_sEntryInfo_getName_max_lenParamInfo id=174 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[174]:  nTECSInfo_sEntryInfo_getSignatureInfo_descParamInfo id=175 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[175]:  nTECSInfo_sCelltypeInfo_getName_nameParamInfo id=176 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[176]:  nTECSInfo_sCelltypeInfo_getName_max_lenParamInfo id=177 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[177]:  nTECSInfo_sCelltypeInfo_getAttrInfo_ithParamInfo id=178 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[178]:  nTECSInfo_sCelltypeInfo_getAttrInfo_descParamInfo id=179 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[179]:  nTECSInfo_sCelltypeInfo_getVarInfo_ithParamInfo id=180 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[180]:  nTECSInfo_sCelltypeInfo_getVarInfo_descParamInfo id=181 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[181]:  nTECSInfo_sCelltypeInfo_getCallInfo_ithParamInfo id=182 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[182]:  nTECSInfo_sCelltypeInfo_getCallInfo_descParamInfo id=183 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCallInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[183]:  nTECSInfo_sCelltypeInfo_getEntryInfo_ithParamInfo id=184 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[184]:  nTECSInfo_sCelltypeInfo_getEntryInfo_descParamInfo id=185 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sEntryInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[185]:  nTECSInfo_sCellInfo_getName_nameParamInfo id=186 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[186]:  nTECSInfo_sCellInfo_getName_max_lenParamInfo id=187 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[187]:  nTECSInfo_sCellInfo_getRawEntryDescriptorInfo_indexParamInfo id=188 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "index",                                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[188]:  nTECSInfo_sCellInfo_getRawEntryDescriptorInfo_descParamInfo id=189 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sRawEntryDescriptorInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[189]:  nTECSInfo_sCellInfo_getCelltypeInfo_descParamInfo id=190 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[190]:  nTECSInfo_sCellInfo_getCBP_cbpParamInfo id=191 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cbp",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[191]:  nTECSInfo_sCellInfo_getINIBP_inibpParamInfo id=192 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "inibp",                                 /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[192]:  nTECSInfo_sRawEntryDescriptorInfo_getRawDescriptor_ithParamInfo id=193 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[193]:  nTECSInfo_sRawEntryDescriptorInfo_getRawDescriptor_rawDescParamInfo id=194 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "rawDesc",                               /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[194]:  nTECSInfo_sNamespaceInfo_getName_nameParamInfo id=195 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[195]:  nTECSInfo_sNamespaceInfo_getName_max_lenParamInfo id=196 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[196]:  nTECSInfo_sNamespaceInfo_getNamespaceInfo_ithParamInfo id=197 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[197]:  nTECSInfo_sNamespaceInfo_getNamespaceInfo_desParamInfo id=198 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sNamespaceInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "des",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[198]:  nTECSInfo_sNamespaceInfo_getSignatureInfo_ithParamInfo id=199 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[199]:  nTECSInfo_sNamespaceInfo_getSignatureInfo_desParamInfo id=200 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "des",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[200]:  nTECSInfo_sNamespaceInfo_getCelltypeInfo_ithParamInfo id=201 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[201]:  nTECSInfo_sNamespaceInfo_getCelltypeInfo_desParamInfo id=202 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "des",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[202]:  nTECSInfo_sRegionInfo_getName_nameParamInfo id=203 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[203]:  nTECSInfo_sRegionInfo_getName_max_lenParamInfo id=204 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[204]:  nTECSInfo_sRegionInfo_getCellInfo_ithParamInfo id=205 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[205]:  nTECSInfo_sRegionInfo_getCellInfo_desParamInfo id=206 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCellInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "des",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[206]:  nTECSInfo_sRegionInfo_getRegionInfo_ithParamInfo id=207 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[207]:  nTECSInfo_sRegionInfo_getRegionInfo_desParamInfo id=208 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sRegionInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "des",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[208]:  nTECSInfo_sTECSInfo_findNamespace_namespace_pathParamInfo id=209 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "namespace_path",                        /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[209]:  nTECSInfo_sTECSInfo_findNamespace_nsDescParamInfo id=210 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sNamespaceInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "nsDesc",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[210]:  nTECSInfo_sTECSInfo_findRegion_namespace_pathParamInfo id=211 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "namespace_path",                        /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[211]:  nTECSInfo_sTECSInfo_findRegion_regionDescParamInfo id=212 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sRegionInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "regionDesc",                            /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[212]:  nTECSInfo_sTECSInfo_findSignature_namespace_pathParamInfo id=213 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "namespace_path",                        /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[213]:  nTECSInfo_sTECSInfo_findSignature_signatureDescParamInfo id=214 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "signatureDesc",                         /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[214]:  nTECSInfo_sTECSInfo_findCelltype_namespace_pathParamInfo id=215 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "namespace_path",                        /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[215]:  nTECSInfo_sTECSInfo_findCelltype_celltypeDescParamInfo id=216 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "celltypeDesc",                          /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[216]:  nTECSInfo_sTECSInfo_findCell_namespace_pathParamInfo id=217 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "namespace_path",                        /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[217]:  nTECSInfo_sTECSInfo_findCell_cellDescParamInfo id=218 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sCellInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cellDesc",                              /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[218]:  nTECSInfo_sTECSInfo_findRawEntryDescriptor_namespace_pathParamInfo id=219 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "namespace_path",                        /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[219]:  nTECSInfo_sTECSInfo_findRawEntryDescriptor_rawEntryDescDescParamInfo id=220 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sRawEntryDescriptorInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "rawEntryDescDesc",                      /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[220]:  nTECSInfo_sTECSInfo_findRawEntryDescriptor_entryDescParamInfo id=221 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_Descriptor_of_nTECSInfo_sEntryInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "entryDesc",                             /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[221]:  nTECSInfo_sTECSInfo_findRawEntryDescriptor_unsafe_namespace_pathParamInfo id=222 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "namespace_path",                        /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[222]:  nTECSInfo_sTECSInfo_findRawEntryDescriptor_unsafe_rawDescParamInfo id=223 */
    {
        /* call port (INIB) #_CP_# */ 
        &rTEMP_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "rawDesc",                               /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTaskExceptionBody_main_patternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTaskExceptionBody_main_patternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[0],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sKernel_delay_delay_timeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sKernel_delay_delay_timeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[1],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sKernel_getTime_p_system_timeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sKernel_getTime_p_system_timeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[2],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sKernel_getMicroTime_p_system_micro_timeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sKernel_getMicroTime_p_system_micro_timeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[3],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_siKernel_getMicroTime_p_system_micro_timeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_siKernel_getMicroTime_p_system_micro_timeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[4],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sSemaphore_waitTimeout_timeoutParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sSemaphore_waitTimeout_timeoutParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[5],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sSemaphore_refer_pk_semaphore_statusParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sSemaphore_refer_pk_semaphore_statusParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[6],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sEventflag_set_set_patternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sEventflag_set_set_patternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[7],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sEventflag_clear_clear_patternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sEventflag_clear_clear_patternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[8],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sEventflag_wait_wait_patternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sEventflag_wait_wait_patternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[9],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sEventflag_wait_wait_flag_modeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sEventflag_wait_wait_flag_modeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[10],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sEventflag_wait_p_flag_patternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sEventflag_wait_p_flag_patternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[11],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sEventflag_waitPolling_wait_patternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sEventflag_waitPolling_wait_patternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[12],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sEventflag_waitPolling_wait_flag_modeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sEventflag_waitPolling_wait_flag_modeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[13],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sEventflag_waitPolling_p_flag_patternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sEventflag_waitPolling_p_flag_patternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[14],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sEventflag_waitTimeout_wait_patternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sEventflag_waitTimeout_wait_patternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[15],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sEventflag_waitTimeout_wait_flag_modeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sEventflag_waitTimeout_wait_flag_modeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[16],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sEventflag_waitTimeout_p_flag_patternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sEventflag_waitTimeout_p_flag_patternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[17],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sEventflag_waitTimeout_timeoutParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sEventflag_waitTimeout_timeoutParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[18],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sEventflag_refer_pk_eventflag_statusParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sEventflag_refer_pk_eventflag_statusParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[19],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_siEventflag_set_set_patternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_siEventflag_set_set_patternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[20],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sDataqueue_send_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sDataqueue_send_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[21],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sDataqueue_sendPolling_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sDataqueue_sendPolling_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[22],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sDataqueue_sendTimeout_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sDataqueue_sendTimeout_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[23],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sDataqueue_sendTimeout_timeoutParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sDataqueue_sendTimeout_timeoutParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[24],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sDataqueue_sendForce_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sDataqueue_sendForce_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[25],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sDataqueue_receive_p_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sDataqueue_receive_p_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[26],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sDataqueue_receivePolling_p_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sDataqueue_receivePolling_p_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[27],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sDataqueue_receiveTimeout_p_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sDataqueue_receiveTimeout_p_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[28],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sDataqueue_receiveTimeout_timeoutParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sDataqueue_receiveTimeout_timeoutParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[29],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sDataqueue_refer_pk_dataqueue_statusParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sDataqueue_refer_pk_dataqueue_statusParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[30],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_siDataqueue_sendPolling_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_siDataqueue_sendPolling_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[31],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_siDataqueue_sendForce_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_siDataqueue_sendForce_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[32],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_selectNamespaceInfoByName_namespacePathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_selectNamespaceInfoByName_namespacePathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[33],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_selectCelltypeInfoByName_namespacePathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_selectCelltypeInfoByName_namespacePathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[34],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_selectSignatureInfoByName_namespacePathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_selectSignatureInfoByName_namespacePathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[35],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_selectRegionInfoByName_regionPathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_selectRegionInfoByName_regionPathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[36],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_selectCellInfoByName_cellPathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_selectCellInfoByName_cellPathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[37],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedNamespaceInfo_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedNamespaceInfo_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[38],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedNamespaceInfo_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedNamespaceInfo_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[39],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedNamespaceInfo_num_namespaceParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedNamespaceInfo_num_namespaceParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[40],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedNamespaceInfo_num_celltypeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedNamespaceInfo_num_celltypeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[41],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedNamespaceInfo_num_signatureParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedNamespaceInfo_num_signatureParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[42],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_selectCelltypeInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_selectCelltypeInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[43],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_selectSignatureInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_selectSignatureInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[44],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCelltypeInfo_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCelltypeInfo_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[45],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCelltypeInfo_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCelltypeInfo_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[46],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCelltypeInfo_num_attrParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCelltypeInfo_num_attrParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[47],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCelltypeInfo_num_varParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCelltypeInfo_num_varParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[48],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCelltypeInfo_num_callParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCelltypeInfo_num_callParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[49],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCelltypeInfo_num_entryParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCelltypeInfo_num_entryParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[50],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_selectCallInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_selectCallInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[51],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_selectEntryInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_selectEntryInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[52],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_selectAttrInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_selectAttrInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[53],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_selectVarInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_selectVarInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[54],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedAttrInfo_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedAttrInfo_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[55],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedAttrInfo_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedAttrInfo_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[56],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSizeIsExprOfAttr_expr_strParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSizeIsExprOfAttr_expr_strParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[57],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSizeIsExprOfAttr_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSizeIsExprOfAttr_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[58],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedVarInfo_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedVarInfo_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[59],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedVarInfo_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedVarInfo_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[60],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSizeIsExprOfVar_expr_strParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSizeIsExprOfVar_expr_strParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[61],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSizeIsExprOfVar_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSizeIsExprOfVar_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[62],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCallInfo_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCallInfo_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[63],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCallInfo_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCallInfo_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[64],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCallInfo_array_sizeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCallInfo_array_sizeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[65],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCallSpecifierInfo_b_optionalParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCallSpecifierInfo_b_optionalParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[66],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCallSpecifierInfo_b_dynamicParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCallSpecifierInfo_b_dynamicParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[67],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCallSpecifierInfo_b_ref_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCallSpecifierInfo_b_ref_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[68],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCallSpecifierInfo_b_omitParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCallSpecifierInfo_b_omitParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[69],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCallInternalInfo_b_allocator_portParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCallInternalInfo_b_allocator_portParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[70],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCallInternalInfo_b_require_portParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCallInternalInfo_b_require_portParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[71],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCallLocationInfo_offsetParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCallLocationInfo_offsetParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[72],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCallLocationInfo_placeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCallLocationInfo_placeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[73],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCallOptimizeInfo_b_VMT_uselessParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCallOptimizeInfo_b_VMT_uselessParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[74],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCallOptimizeInfo_b_skelton_uselessParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCallOptimizeInfo_b_skelton_uselessParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[75],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCallOptimizeInfo_b_cell_uniqueParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCallOptimizeInfo_b_cell_uniqueParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[76],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedEntryInfo_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedEntryInfo_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[77],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedEntryInfo_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedEntryInfo_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[78],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedEntryInfo_array_sizeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedEntryInfo_array_sizeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[79],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedEntryInlineInfo_b_inlineParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedEntryInlineInfo_b_inlineParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[80],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedSignatureInfo_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedSignatureInfo_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[81],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedSignatureInfo_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedSignatureInfo_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[82],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedSignatureInfo_num_functionParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedSignatureInfo_num_functionParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[83],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_selectFunctionInfoByIndex_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_selectFunctionInfoByIndex_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[84],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedFunctionInfo_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedFunctionInfo_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[85],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedFunctionInfo_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedFunctionInfo_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[86],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedFunctionInfo_num_argsParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedFunctionInfo_num_argsParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[87],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedParamInfo_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedParamInfo_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[88],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedParamInfo_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedParamInfo_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[89],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedParamInfo_dirParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedParamInfo_dirParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[90],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_selectParamInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_selectParamInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[91],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedTypeInfo_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedTypeInfo_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[92],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedTypeInfo_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedTypeInfo_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[93],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedTypeInfo_kindParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedTypeInfo_kindParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[94],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedRegionInfo_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedRegionInfo_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[95],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedRegionInfo_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedRegionInfo_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[96],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedRegionInfo_num_cellParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedRegionInfo_num_cellParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[97],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_selectCellInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_selectCellInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[98],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCellInfo_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCellInfo_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[99],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCellInfo_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getSelectedCellInfo_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[100],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getAttrValueInStr_bufParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getAttrValueInStr_bufParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[101],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getAttrValueInStr_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getAttrValueInStr_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[102],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getVarValueInStr_bufParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getVarValueInStr_bufParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[103],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getVarValueInStr_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sAccessor_getVarValueInStr_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[104],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTarget1_double_argParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTarget1_double_argParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[105],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTarget2_add_arg1ParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTarget2_add_arg1ParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[106],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTarget2_add_arg2ParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTarget2_add_arg2ParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[107],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTarget3_send_bufParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTarget3_send_bufParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[108],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTarget3_send_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTarget3_send_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[109],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTarget3_sendMessage_bufParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTarget3_sendMessage_bufParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[110],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTarget3_sendMessage_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTarget3_sendMessage_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[111],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTarget3_sendStruct_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTarget3_sendStruct_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[112],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTarget3_receiveMessage_bufParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTarget3_receiveMessage_bufParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[113],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTarget3_receiveMessage_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTarget3_receiveMessage_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[114],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTECSUnit_main_cell_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTECSUnit_main_cell_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[115],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTECSUnit_main_entry_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTECSUnit_main_entry_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[116],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTECSUnit_main_signature_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTECSUnit_main_signature_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[117],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTECSUnit_main_function_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTECSUnit_main_function_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[118],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTECSUnit_main_argumentsParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTECSUnit_main_argumentsParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[119],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTECSUnit_main_exp_valParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sTECSUnit_main_exp_valParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[120],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sJSMN_json_parse_path_c_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sJSMN_json_parse_path_c_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[121],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sJSMN_json_parse_path_e_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sJSMN_json_parse_path_e_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[122],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sJSMN_json_parse_path_f_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sJSMN_json_parse_path_f_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[123],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sJSMN_json_parse_path_target_numParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sJSMN_json_parse_path_target_numParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[124],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sJSMN_json_parse_path_btrParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sJSMN_json_parse_path_btrParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[125],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sJSMN_json_parse_arg_argumentsParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sJSMN_json_parse_arg_argumentsParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[126],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sJSMN_json_parse_arg_exp_valParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sJSMN_json_parse_arg_exp_valParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[127],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sJSMN_json_parse_arg_arg_numParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sJSMN_json_parse_arg_arg_numParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[128],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sJSMN_json_parse_arg_target_numParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sJSMN_json_parse_arg_target_numParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[129],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sJSMN_json_parse_arg_btrParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_sJSMN_json_parse_arg_btrParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[130],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTypeInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTypeInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[131],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTypeInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTypeInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[132],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTypeInfo_getTypeInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTypeInfo_getTypeInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[133],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTypeInfo_getMemberInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTypeInfo_getMemberInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[134],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTypeInfo_getMemberInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTypeInfo_getMemberInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[135],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sVarDeclInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sVarDeclInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[136],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sVarDeclInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sVarDeclInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[137],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sVarDeclInfo_getLocationInfo_offsetParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sVarDeclInfo_getLocationInfo_offsetParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[138],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sVarDeclInfo_getLocationInfo_placeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sVarDeclInfo_getLocationInfo_placeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[139],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sVarDeclInfo_getTypeInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sVarDeclInfo_getTypeInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[140],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sVarDeclInfo_getSizeIsExpr_expr_strParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sVarDeclInfo_getSizeIsExpr_expr_strParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[141],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sVarDeclInfo_getSizeIsExpr_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sVarDeclInfo_getSizeIsExpr_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[142],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sVarDeclInfo_getSizeIs_sizeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sVarDeclInfo_getSizeIs_sizeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[143],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sVarDeclInfo_getSizeIs_p_cbParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sVarDeclInfo_getSizeIs_p_cbParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[144],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sParamInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sParamInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[145],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sParamInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sParamInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[146],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sParamInfo_getTypeInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sParamInfo_getTypeInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[147],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sParamInfo_getDir_dirParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sParamInfo_getDir_dirParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[148],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sFunctionInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sFunctionInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[149],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sFunctionInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sFunctionInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[150],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sFunctionInfo_getReturnTypeInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sFunctionInfo_getReturnTypeInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[151],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sFunctionInfo_getParamInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sFunctionInfo_getParamInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[152],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sFunctionInfo_getParamInfo_paramParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sFunctionInfo_getParamInfo_paramParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[153],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sSignatureInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sSignatureInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[154],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sSignatureInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sSignatureInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[155],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sSignatureInfo_getFunctionInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sSignatureInfo_getFunctionInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[156],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sSignatureInfo_getFunctionInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sSignatureInfo_getFunctionInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[157],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCallInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCallInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[158],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCallInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCallInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[159],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCallInfo_getSignatureInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCallInfo_getSignatureInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[160],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCallInfo_getSpecifierInfo_b_optionalParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCallInfo_getSpecifierInfo_b_optionalParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[161],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCallInfo_getSpecifierInfo_b_dynamicParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCallInfo_getSpecifierInfo_b_dynamicParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[162],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCallInfo_getSpecifierInfo_b_ref_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCallInfo_getSpecifierInfo_b_ref_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[163],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCallInfo_getSpecifierInfo_b_omitParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCallInfo_getSpecifierInfo_b_omitParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[164],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCallInfo_getInternalInfo_b_allocator_portParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCallInfo_getInternalInfo_b_allocator_portParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[165],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCallInfo_getInternalInfo_b_require_portParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCallInfo_getInternalInfo_b_require_portParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[166],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCallInfo_getLocationInfo_offsetParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCallInfo_getLocationInfo_offsetParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[167],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCallInfo_getLocationInfo_placeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCallInfo_getLocationInfo_placeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[168],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCallInfo_getOptimizeInfo_b_VMT_uselessParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCallInfo_getOptimizeInfo_b_VMT_uselessParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[169],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCallInfo_getOptimizeInfo_b_skelton_uselessParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCallInfo_getOptimizeInfo_b_skelton_uselessParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[170],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCallInfo_getOptimizeInfo_b_cell_uniqueParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCallInfo_getOptimizeInfo_b_cell_uniqueParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[171],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sEntryInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sEntryInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[172],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sEntryInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sEntryInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[173],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sEntryInfo_getSignatureInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sEntryInfo_getSignatureInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[174],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCelltypeInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCelltypeInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[175],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCelltypeInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCelltypeInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[176],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCelltypeInfo_getAttrInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCelltypeInfo_getAttrInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[177],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCelltypeInfo_getAttrInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCelltypeInfo_getAttrInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[178],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCelltypeInfo_getVarInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCelltypeInfo_getVarInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[179],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCelltypeInfo_getVarInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCelltypeInfo_getVarInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[180],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCelltypeInfo_getCallInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCelltypeInfo_getCallInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[181],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCelltypeInfo_getCallInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCelltypeInfo_getCallInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[182],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCelltypeInfo_getEntryInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCelltypeInfo_getEntryInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[183],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCelltypeInfo_getEntryInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCelltypeInfo_getEntryInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[184],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCellInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCellInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[185],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCellInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCellInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[186],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCellInfo_getRawEntryDescriptorInfo_indexParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCellInfo_getRawEntryDescriptorInfo_indexParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[187],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCellInfo_getRawEntryDescriptorInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCellInfo_getRawEntryDescriptorInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[188],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCellInfo_getCelltypeInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCellInfo_getCelltypeInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[189],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCellInfo_getCBP_cbpParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCellInfo_getCBP_cbpParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[190],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCellInfo_getINIBP_inibpParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sCellInfo_getINIBP_inibpParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[191],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sRawEntryDescriptorInfo_getRawDescriptor_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sRawEntryDescriptorInfo_getRawDescriptor_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[192],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sRawEntryDescriptorInfo_getRawDescriptor_rawDescParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sRawEntryDescriptorInfo_getRawDescriptor_rawDescParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[193],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sNamespaceInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sNamespaceInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[194],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sNamespaceInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sNamespaceInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[195],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sNamespaceInfo_getNamespaceInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sNamespaceInfo_getNamespaceInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[196],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sNamespaceInfo_getNamespaceInfo_desParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sNamespaceInfo_getNamespaceInfo_desParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[197],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sNamespaceInfo_getSignatureInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sNamespaceInfo_getSignatureInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[198],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sNamespaceInfo_getSignatureInfo_desParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sNamespaceInfo_getSignatureInfo_desParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[199],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sNamespaceInfo_getCelltypeInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sNamespaceInfo_getCelltypeInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[200],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sNamespaceInfo_getCelltypeInfo_desParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sNamespaceInfo_getCelltypeInfo_desParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[201],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sRegionInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sRegionInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[202],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sRegionInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sRegionInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[203],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sRegionInfo_getCellInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sRegionInfo_getCellInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[204],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sRegionInfo_getCellInfo_desParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sRegionInfo_getCellInfo_desParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[205],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sRegionInfo_getRegionInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sRegionInfo_getRegionInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[206],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sRegionInfo_getRegionInfo_desParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sRegionInfo_getRegionInfo_desParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[207],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findNamespace_namespace_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findNamespace_namespace_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[208],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findNamespace_nsDescParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findNamespace_nsDescParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[209],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findRegion_namespace_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findRegion_namespace_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[210],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findRegion_regionDescParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findRegion_regionDescParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[211],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findSignature_namespace_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findSignature_namespace_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[212],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findSignature_signatureDescParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findSignature_signatureDescParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[213],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findCelltype_namespace_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findCelltype_namespace_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[214],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findCelltype_celltypeDescParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findCelltype_celltypeDescParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[215],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findCell_namespace_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findCell_namespace_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[216],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findCell_cellDescParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findCell_cellDescParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[217],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findRawEntryDescriptor_namespace_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findRawEntryDescriptor_namespace_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[218],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findRawEntryDescriptor_rawEntryDescDescParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findRawEntryDescriptor_rawEntryDescDescParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[219],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findRawEntryDescriptor_entryDescParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findRawEntryDescriptor_entryDescParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[220],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findRawEntryDescriptor_unsafe_namespace_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findRawEntryDescriptor_unsafe_namespace_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[221],   /* INIB 4 */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findRawEntryDescriptor_unsafe_rawDescParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rTEMP_rTECSInfo_nTECSInfo_sTECSInfo_findRawEntryDescriptor_unsafe_rawDescParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[222],   /* INIB 4 */
};
