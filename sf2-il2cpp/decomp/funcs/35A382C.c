// Nekki.Utils.RaidBetaLogger$$Instance @ RVA 0x35A382C

Nekki_Utils_RaidBetaLogger_o * Nekki_Utils_RaidBetaLogger__Instance(MethodInfo *method)

{
  Nekki_Utils_RaidBetaLogger_c *pNVar1;
  
  if ((DAT_04568ded & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    DAT_04568ded = 1;
  }
  pNVar1 = Nekki_Utils_RaidBetaLogger_TypeInfo;
  if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
    pNVar1 = (Nekki_Utils_RaidBetaLogger_c *)thunk_FUN_01ba7564();
  }
  Nekki_Utils_RaidBetaLogger__CJKFEHDJBEL((MethodInfo *)pNVar1);
  if (Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->PLFOCJOLMLN != false) {
    pNVar1 = Nekki_Utils_RaidBetaLogger_TypeInfo;
    if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
      pNVar1 = (Nekki_Utils_RaidBetaLogger_c *)thunk_FUN_01ba7564();
    }
    Nekki_Utils_RaidBetaLogger__KBGJFEHBEPH((MethodInfo *)pNVar1);
  }
  if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->CBDMFFMCJBK;
}

