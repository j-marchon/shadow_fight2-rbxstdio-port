// IDDIABHBDEE$$HNMBHMEELKI @ RVA 0x337FE30

int64_t IDDIABHBDEE__HNMBHMEELKI(IDDIABHBDEE_o *__this,MethodInfo *method)

{
  int64_t iVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  int64_t iVar2;
  
  if ((DAT_04567bb1 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567bb1 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b87 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b87 = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_02;
  }
  iVar2 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
  if (iVar2 == 0) {
    if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_Utils_GlobalTimer_TypeInfo,method);
    }
    iVar2 = Nekki_Utils_GlobalTimer__get_LocalTimeUTC((MethodInfo *)0x0);
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar1 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
  return iVar1 + iVar2;
}

