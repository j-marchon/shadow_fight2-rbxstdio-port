// ACHLOMELAJE$$GMMADOHJHEB @ RVA 0x3059D34

void ACHLOMELAJE__GMMADOHJHEB(ACHLOMELAJE_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  CBOEGGBIJMD_o *__this_00;
  MethodInfo *method_00;
  GCFHEEKPCPJ_o *__this_01;
  
  if ((DAT_04565e78 & 1) == 0) {
    FUN_01bab630(&CBOEGGBIJMD_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&MGAGKCEDNNN_TypeInfo);
    FUN_01bab630(&StringLiteral_16268);
    DAT_04565e78 = 1;
  }
  if (CJNHFNHJHPE < 1) {
    __this_00 = (CBOEGGBIJMD_o *)thunk_FUN_01bda818(CBOEGGBIJMD_TypeInfo);
    CBOEGGBIJMD___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 == (CBOEGGBIJMD_o *)0x0) goto LAB_03159e44;
    method_00 = StringLiteral_16268;
    pSVar1 = CBOEGGBIJMD__FBLGOHOOMJG
                       (__this_00,10,(System_String_o *)StringLiteral_16268,(MethodInfo *)0x0);
  }
  else {
    if ((MGAGKCEDNNN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = (GCFHEEKPCPJ_o *)MGAGKCEDNNN_TypeInfo->static_fields->EGHMLJDHLPK;
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
    }
    pSVar1 = EOAOCPLIKOI__MHLLAKBCAHD((MethodInfo *)0x0);
    if (__this_01 == (GCFHEEKPCPJ_o *)0x0) {
LAB_03159e44:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method_00 = (MethodInfo *)0x0;
    pSVar1 = GCFHEEKPCPJ__IDDPLJLECPA(__this_01,pSVar1,(System_String_o *)0x0,(MethodInfo *)0x0);
  }
  ACHLOMELAJE__FDBDFOBGKFH(__this,pSVar1,method_00);
  return;
}

