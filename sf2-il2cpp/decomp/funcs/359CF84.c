// Nekki.Utils.RaidBetaLogger$$GLNBJGJPBFD @ RVA 0x359CF84

System_String_o * Nekki_Utils_RaidBetaLogger__GLNBJGJPBFD(MethodInfo *method)

{
  Nekki_Utils_RaidBetaLogger_c *method_00;
  MethodInfo *method_01;
  System_String_o *pSVar1;
  
  if ((DAT_04568dd8 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    FUN_01bab630(&StringLiteral_2470);
    DAT_04568dd8 = 1;
  }
  method_00 = Nekki_Utils_RaidBetaLogger_TypeInfo;
  if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (Nekki_Utils_RaidBetaLogger_c *)thunk_FUN_01ba7564();
  }
  method_01 = (MethodInfo *)Nekki_Utils_RaidBetaLogger__DINNIAOENFN((MethodInfo *)method_00);
  pSVar1 = Nekki_Utils_RaidBetaLogger__KPCDOGFJFNA(method_01);
                    /* try { // try from 0369cff4 to 0379cffb has its CatchHandler @ 0369d308 */
  pSVar1 = System_String__Concat
                     ((System_String_o *)method_01,StringLiteral_2470,pSVar1,StringLiteral_2470,
                      (MethodInfo *)0x0);
  return pSVar1;
}

