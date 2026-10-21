// MGNPHCAAEIO$$HGLNKDMEKNK @ RVA 0x34080E4

void MGNPHCAAEIO__HGLNKDMEKNK(MethodInfo *method)

{
  Nekki_Utils_RaidBetaLogger_o *pNVar1;
  
  if ((DAT_04568022 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    DAT_04568022 = 1;
  }
  if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar1 = Nekki_Utils_RaidBetaLogger__Instance((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_Utils_RaidBetaLogger_o *)0x0) {
    Nekki_Utils_RaidBetaLogger__DuplicatedItemsDetected(pNVar1,(MethodInfo *)0x0);
  }
  if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar1 = Nekki_Utils_RaidBetaLogger__Instance((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_Utils_RaidBetaLogger_o *)0x0) {
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Nekki_Utils_RaidBetaLogger__TrySendDump
              (pNVar1,MGNPHCAAEIO_TypeInfo->static_fields->GEMEDHGOFIG,false,(MethodInfo *)0x0);
    return;
  }
  return;
}

