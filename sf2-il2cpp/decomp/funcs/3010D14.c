// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyPlayerCell$$KGNBJLLJHOC @ RVA 0x3010D14

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell__KGNBJLLJHOC
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell_o *__this,
               MethodInfo *method)

{
  PEEIMHCMDND_o *__this_00;
  MethodInfo *extraout_x1;
  GKLPDMLELJF_o *pGVar1;
  
  if ((DAT_04565ba8 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565ba8 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).DICNIMJBGML == (GKLPDMLELJF_o *)0x0) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
  pGVar1 = (__this->fields).DICNIMJBGML;
  if ((pGVar1 != (GKLPDMLELJF_o *)0x0) && (__this_00 != (PEEIMHCMDND_o *)0x0)) {
    PEEIMHCMDND__JDONKPBCNLL(__this_00,(pGVar1->fields).ANAJGHJEEOC,(MethodInfo *)0x0);
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

