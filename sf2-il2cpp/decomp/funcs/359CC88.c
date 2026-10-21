// Nekki.Utils.RaidBetaLogger$$PANJDBGFBJD @ RVA 0x359CC88

void Nekki_Utils_RaidBetaLogger__PANJDBGFBJD
               (Nekki_Utils_RaidBetaLogger_o *__this,MethodInfo *method)

{
  Nekki_Utils_RaidBetaLogger_c *method_00;
  System_String_o *AAIHDEKMIJG;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568df9 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    DAT_04568df9 = 1;
    method = extraout_x1;
  }
  method_00 = Nekki_Utils_RaidBetaLogger_TypeInfo;
  if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (Nekki_Utils_RaidBetaLogger_c *)
                thunk_FUN_01ba7564(Nekki_Utils_RaidBetaLogger_TypeInfo,method);
  }
  AAIHDEKMIJG = Nekki_Utils_RaidBetaLogger__OKDDBDJLADD((MethodInfo *)method_00);
  NEHNBJKKABI__MGLIGNDGBCN(AAIHDEKMIJG,(MethodInfo *)0x0);
  return;
}

