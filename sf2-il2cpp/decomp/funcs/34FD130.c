// LHKALFIIJKB$$FPOJCJJJGAD @ RVA 0x34FD130

System_String_o * LHKALFIIJKB__FPOJCJJJGAD(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04568842 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1514);
    DAT_04568842 = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__ANDNJCLBPGJ((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1514,(MethodInfo *)0x0);
  return pSVar1;
}

