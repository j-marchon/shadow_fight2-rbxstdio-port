// LLKDCCJMFLE$$ENIGDNLDIMK @ RVA 0x35230FC

System_String_o * LLKDCCJMFLE__ENIGDNLDIMK(MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  ACHLOMELAJE_o *__this;
  
  if ((DAT_045689e6 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_10630);
    DAT_045689e6 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this != (ACHLOMELAJE_o *)0x0) {
    bVar1 = ACHLOMELAJE__JGGHLGELFDJ(__this,StringLiteral_10630,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = EOAOCPLIKOI__IDCJKHFCJKM((MethodInfo *)0x0);
      method_00 = extraout_x1;
      if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(LLKDCCJMFLE_TypeInfo);
        method_00 = extraout_x1_00;
      }
      LLKDCCJMFLE__BJGGBNJEDLM(pSVar2,method_00);
    }
    pSVar2 = ACHLOMELAJE__NOILDCIGGJB(__this,StringLiteral_10630,(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

