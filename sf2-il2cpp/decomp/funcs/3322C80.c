// IAGNPGHOAIC$$HLLOEIGKDPL @ RVA 0x3322C80

System_String_o * IAGNPGHOAIC__HLLOEIGKDPL(System_String_o *EIJDDKJONFO,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  GCFHEEKPCPJ_o *__this;
  
  if ((DAT_0456785b & 1) == 0) {
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&MGAGKCEDNNN_TypeInfo);
    DAT_0456785b = 1;
    method = extraout_x1;
  }
  if ((MGAGKCEDNNN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGAGKCEDNNN_TypeInfo,method);
    method = extraout_x1_00;
  }
  __this = (GCFHEEKPCPJ_o *)MGAGKCEDNNN_TypeInfo->static_fields->EGHMLJDHLPK;
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CLFCKIFNGHA_TypeInfo,method);
  }
  pSVar1 = CLFCKIFNGHA__DPHMDPHEIKO((MethodInfo *)0x0);
  if (__this != (GCFHEEKPCPJ_o *)0x0) {
    pSVar1 = GCFHEEKPCPJ__OHJODGBLEIN(__this,EIJDDKJONFO,pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

