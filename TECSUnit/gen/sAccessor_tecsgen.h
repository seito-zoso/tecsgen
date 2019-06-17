/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sAccessor_TECSGEN_H
#define sAccessor_TECSGEN_H

/*
 * signature   :  sAccessor
 * global name :  sAccessor
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sAccessor_VDES {
    struct tag_sAccessor_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sAccessor_VMT {
    ER             (*selectNamespaceInfoByName__T)( const struct tag_sAccessor_VDES *edp, const char_t* namespacePath );
    ER             (*selectCelltypeInfoByName__T)( const struct tag_sAccessor_VDES *edp, const char_t* namespacePath );
    ER             (*selectSignatureInfoByName__T)( const struct tag_sAccessor_VDES *edp, const char_t* namespacePath );
    ER             (*selectRegionInfoByName__T)( const struct tag_sAccessor_VDES *edp, const char_t* regionPath );
    ER             (*selectCellInfoByName__T)( const struct tag_sAccessor_VDES *edp, const char_t* cellPath );
    ER             (*getSelectedNamespaceInfo__T)( const struct tag_sAccessor_VDES *edp, char_t* name, int_t max_len, int_t* num_namespace, int_t* num_celltype, int_t* num_signature );
    ER             (*selectCelltypeInfo__T)( const struct tag_sAccessor_VDES *edp, int_t ith );
    ER             (*selectSignatureInfo__T)( const struct tag_sAccessor_VDES *edp, int_t ith );
    ER             (*getSelectedCelltypeInfo__T)( const struct tag_sAccessor_VDES *edp, char_t* name, int_t max_len, int_t* num_attr, int_t* num_var, int_t* num_call, int_t* num_entry );
    ER             (*selectCallInfo__T)( const struct tag_sAccessor_VDES *edp, int_t ith );
    ER             (*selectEntryInfo__T)( const struct tag_sAccessor_VDES *edp, int_t ith );
    ER             (*selectAttrInfo__T)( const struct tag_sAccessor_VDES *edp, int_t ith );
    ER             (*selectVarInfo__T)( const struct tag_sAccessor_VDES *edp, int_t ith );
    ER             (*getSelectedAttrInfo__T)( const struct tag_sAccessor_VDES *edp, char_t* name, int_t max_len );
    ER             (*getSizeIsExprOfAttr__T)( const struct tag_sAccessor_VDES *edp, char_t* expr_str, int32_t max_len );
    ER             (*selectTypeInfoOfAttr__T)( const struct tag_sAccessor_VDES *edp );
    ER             (*getSelectedVarInfo__T)( const struct tag_sAccessor_VDES *edp, char_t* name, int_t max_len );
    ER             (*getSizeIsExprOfVar__T)( const struct tag_sAccessor_VDES *edp, char_t* expr_str, int32_t max_len );
    ER             (*selectTypeInfoOfVar__T)( const struct tag_sAccessor_VDES *edp );
    ER             (*getSelectedCallInfo__T)( const struct tag_sAccessor_VDES *edp, char_t* name, int_t max_len, int_t* array_size );
    ER             (*selectSignatureOfCall__T)( const struct tag_sAccessor_VDES *edp );
    ER             (*getSelectedCallSpecifierInfo__T)( const struct tag_sAccessor_VDES *edp, bool_t* b_optional, bool_t* b_dynamic, bool_t* b_ref_desc, bool_t* b_omit );
    ER             (*getSelectedCallInternalInfo__T)( const struct tag_sAccessor_VDES *edp, bool_t* b_allocator_port, bool_t* b_require_port );
    ER             (*getSelectedCallLocationInfo__T)( const struct tag_sAccessor_VDES *edp, uint32_t* offset, int8_t* place );
    ER             (*getSelectedCallOptimizeInfo__T)( const struct tag_sAccessor_VDES *edp, bool_t* b_VMT_useless, bool_t* b_skelton_useless, bool_t* b_cell_unique );
    ER             (*getSelectedEntryInfo__T)( const struct tag_sAccessor_VDES *edp, char_t* name, int_t max_len, int_t* array_size );
    ER             (*selectSignatureOfEntry__T)( const struct tag_sAccessor_VDES *edp );
    ER             (*getSelectedEntryInlineInfo__T)( const struct tag_sAccessor_VDES *edp, bool_t* b_inline );
    ER             (*getSelectedSignatureInfo__T)( const struct tag_sAccessor_VDES *edp, char_t* name, int_t max_len, int_t* num_function );
    ER             (*selectFunctionInfoByIndex__T)( const struct tag_sAccessor_VDES *edp, int_t ith );
    ER             (*getSelectedFunctionInfo__T)( const struct tag_sAccessor_VDES *edp, char_t* name, int_t max_len, int_t* num_args );
    ER             (*selectTypeInfoOfReturn__T)( const struct tag_sAccessor_VDES *edp );
    ER             (*getSelectedParamInfo__T)( const struct tag_sAccessor_VDES *edp, char_t* name, int_t max_len, int8_t* dir );
    ER             (*selectParamInfo__T)( const struct tag_sAccessor_VDES *edp, int_t ith );
    ER             (*selectTypeInfoOfParam__T)( const struct tag_sAccessor_VDES *edp );
    ER             (*getSelectedTypeInfo__T)( const struct tag_sAccessor_VDES *edp, char_t* name, int_t max_len, int8_t* kind );
    ER             (*selectTypeInfoOfType__T)( const struct tag_sAccessor_VDES *edp );
    ER             (*getSelectedRegionInfo__T)( const struct tag_sAccessor_VDES *edp, char_t* name, int_t max_len, int_t* num_cell );
    ER             (*selectCellInfo__T)( const struct tag_sAccessor_VDES *edp, int_t ith );
    ER             (*getSelectedCellInfo__T)( const struct tag_sAccessor_VDES *edp, char_t* name, int_t max_len );
    ER             (*selectCelltypeInfoOfCell__T)( const struct tag_sAccessor_VDES *edp );
    ER             (*getAttrValueInStr__T)( const struct tag_sAccessor_VDES *edp, char_t* buf, int_t max_len );
    ER             (*getAttrSizeIsValue__T)( const struct tag_sAccessor_VDES *edp );
    ER             (*getVarValueInStr__T)( const struct tag_sAccessor_VDES *edp, char_t* buf, int_t max_len );
    ER             (*getVarSizeIsValue__T)( const struct tag_sAccessor_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sAccessor_Defined
#define  Descriptor_of_sAccessor_Defined
typedef struct { struct tag_sAccessor_VDES *vdes; } Descriptor( sAccessor );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SACCESSOR_SELECTNAMESPACEINFOBYNAME (1)
#define	FUNCID_SACCESSOR_SELECTCELLTYPEINFOBYNAME (2)
#define	FUNCID_SACCESSOR_SELECTSIGNATUREINFOBYNAME (3)
#define	FUNCID_SACCESSOR_SELECTREGIONINFOBYNAME (4)
#define	FUNCID_SACCESSOR_SELECTCELLINFOBYNAME  (5)
#define	FUNCID_SACCESSOR_GETSELECTEDNAMESPACEINFO (6)
#define	FUNCID_SACCESSOR_SELECTCELLTYPEINFO    (7)
#define	FUNCID_SACCESSOR_SELECTSIGNATUREINFO   (8)
#define	FUNCID_SACCESSOR_GETSELECTEDCELLTYPEINFO (9)
#define	FUNCID_SACCESSOR_SELECTCALLINFO        (10)
#define	FUNCID_SACCESSOR_SELECTENTRYINFO       (11)
#define	FUNCID_SACCESSOR_SELECTATTRINFO        (12)
#define	FUNCID_SACCESSOR_SELECTVARINFO         (13)
#define	FUNCID_SACCESSOR_GETSELECTEDATTRINFO   (14)
#define	FUNCID_SACCESSOR_GETSIZEISEXPROFATTR   (15)
#define	FUNCID_SACCESSOR_SELECTTYPEINFOOFATTR  (16)
#define	FUNCID_SACCESSOR_GETSELECTEDVARINFO    (17)
#define	FUNCID_SACCESSOR_GETSIZEISEXPROFVAR    (18)
#define	FUNCID_SACCESSOR_SELECTTYPEINFOOFVAR   (19)
#define	FUNCID_SACCESSOR_GETSELECTEDCALLINFO   (20)
#define	FUNCID_SACCESSOR_SELECTSIGNATUREOFCALL (21)
#define	FUNCID_SACCESSOR_GETSELECTEDCALLSPECIFIERINFO (22)
#define	FUNCID_SACCESSOR_GETSELECTEDCALLINTERNALINFO (23)
#define	FUNCID_SACCESSOR_GETSELECTEDCALLLOCATIONINFO (24)
#define	FUNCID_SACCESSOR_GETSELECTEDCALLOPTIMIZEINFO (25)
#define	FUNCID_SACCESSOR_GETSELECTEDENTRYINFO  (26)
#define	FUNCID_SACCESSOR_SELECTSIGNATUREOFENTRY (27)
#define	FUNCID_SACCESSOR_GETSELECTEDENTRYINLINEINFO (28)
#define	FUNCID_SACCESSOR_GETSELECTEDSIGNATUREINFO (29)
#define	FUNCID_SACCESSOR_SELECTFUNCTIONINFOBYINDEX (30)
#define	FUNCID_SACCESSOR_GETSELECTEDFUNCTIONINFO (31)
#define	FUNCID_SACCESSOR_SELECTTYPEINFOOFRETURN (32)
#define	FUNCID_SACCESSOR_GETSELECTEDPARAMINFO  (33)
#define	FUNCID_SACCESSOR_SELECTPARAMINFO       (34)
#define	FUNCID_SACCESSOR_SELECTTYPEINFOOFPARAM (35)
#define	FUNCID_SACCESSOR_GETSELECTEDTYPEINFO   (36)
#define	FUNCID_SACCESSOR_SELECTTYPEINFOOFTYPE  (37)
#define	FUNCID_SACCESSOR_GETSELECTEDREGIONINFO (38)
#define	FUNCID_SACCESSOR_SELECTCELLINFO        (39)
#define	FUNCID_SACCESSOR_GETSELECTEDCELLINFO   (40)
#define	FUNCID_SACCESSOR_SELECTCELLTYPEINFOOFCELL (41)
#define	FUNCID_SACCESSOR_GETATTRVALUEINSTR     (42)
#define	FUNCID_SACCESSOR_GETATTRSIZEISVALUE    (43)
#define	FUNCID_SACCESSOR_GETVARVALUEINSTR      (44)
#define	FUNCID_SACCESSOR_GETVARSIZEISVALUE     (45)

#endif /* sAccessor_TECSGEN_H */
