// JMDPBFOCHHP$$HHONKPEIEAD @ RVA 0x2FF84FC

System_String_o * JMDPBFOCHHP__HHONKPEIEAD(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04565ab3 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_20409);
    DAT_04565ab3 = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__GAFKBFMBPKO((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_20409,(MethodInfo *)0x0);
  return pSVar1;
}

