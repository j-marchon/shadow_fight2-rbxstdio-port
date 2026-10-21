// Nekki.SF2.GUI.Dialogs.Raids.RaidInvitationMessageItemContent$$HCKCCFCAODO @ RVA 0x353A8F8

void Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent__HCKCCFCAODO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInvitationMessageItemContent_o *__this,
               MethodInfo *method)

{
  PEEIMHCMDND_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568ac1 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568ac1 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
  if (__this_00 != (PEEIMHCMDND_o *)0x0) {
    PEEIMHCMDND__JDONKPBCNLL(__this_00,(__this->fields).HOJBIBBGOIH,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

