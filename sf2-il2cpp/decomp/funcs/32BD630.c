// MainMenuRaidRatingPanel$$DDOLHNHBCIO @ RVA 0x32BD630

void MainMenuRaidRatingPanel__DDOLHNHBCIO(MainMenuRaidRatingPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  EEGDOGKBLNG_o *__this_00;
  int64_t JBFDEJOPCDC;
  GCIFMNHADDF_o *__this_01;
  PEEIMHCMDND_o *__this_02;
  
  if ((DAT_045674a9 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045674a9 = 1;
  }
  bVar1 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__IsActive((MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
    JBFDEJOPCDC = EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
    __this_01 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_01 != (GCIFMNHADDF_o *)0x0) {
      GCIFMNHADDF__IDKIMGGFFNH(__this_01,(MethodInfo *)0x0);
      __this_02 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
      if (__this_02 != (PEEIMHCMDND_o *)0x0) {
        PEEIMHCMDND__JDONKPBCNLL(__this_02,JBFDEJOPCDC,(MethodInfo *)0x0);
        EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

