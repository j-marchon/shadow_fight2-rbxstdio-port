// DKEOKAONIIB$$GJFNCOKFAPP @ RVA 0x32EC590

System_String_o * DKEOKAONIIB__GJFNCOKFAPP(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04567647 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1506);
    DAT_04567647 = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__CAACPGEHHFC((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1506,(MethodInfo *)0x0);
  return pSVar1;
}

