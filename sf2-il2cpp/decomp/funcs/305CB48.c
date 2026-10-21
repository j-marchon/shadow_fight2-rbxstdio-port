// ACHLOMELAJE$$MFDMDBEKDAD @ RVA 0x305CB48

bool ACHLOMELAJE__MFDMDBEKDAD(ACHLOMELAJE_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *IMMNELPBGIF;
  System_String_o *IJCFIDBCOIN;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  GCFHEEKPCPJ_o *__this_00;
  
  if ((DAT_04565e9d & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&MGAGKCEDNNN_TypeInfo);
    DAT_04565e9d = 1;
    method = extraout_x1;
  }
  if ((MGAGKCEDNNN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGAGKCEDNNN_TypeInfo,method);
    method = extraout_x1_00;
  }
  __this_00 = (GCFHEEKPCPJ_o *)MGAGKCEDNNN_TypeInfo->static_fields->EGHMLJDHLPK;
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo,method);
  }
  IMMNELPBGIF = EOAOCPLIKOI__MHLLAKBCAHD((MethodInfo *)0x0);
  IJCFIDBCOIN = ACHLOMELAJE__DAELLILNEIN(__this,method_00);
  if (__this_00 != (GCFHEEKPCPJ_o *)0x0) {
    bVar1 = GCFHEEKPCPJ__PCKCNMKFFHE
                      (__this_00,IMMNELPBGIF,IJCFIDBCOIN,(System_String_o *)0x0,5,(MethodInfo *)0x0)
    ;
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

