// HGHEKBGHPFO$$CCPANHMBGPI @ RVA 0x31A93C0

System_String_o * HGHEKBGHPFO__CCPANHMBGPI(HGHEKBGHPFO_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566b21 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1538);
    DAT_04566b21 = 1;
    method = extraout_x1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
  }
  pSVar1 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1538,(MethodInfo *)0x0);
  return pSVar1;
}

