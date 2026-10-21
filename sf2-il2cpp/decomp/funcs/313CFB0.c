// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidCell$$GetFight @ RVA 0x313CFB0

AFFHKININGD_o *
Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell__GetFight
          (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *__this,MethodInfo *method)

{
  AFFHKININGD_o *pAVar1;
  MethodInfo *extraout_x1;
  OHDDKGHEEPA_o *BANHBMINMMP;
  
  if ((DAT_0456673c & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456673c = 1;
    method = extraout_x1;
  }
  BANHBMINMMP = (__this->fields)._battle;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  pAVar1 = MGNPHCAAEIO__PHFFPADFANK((OOMHDDBCBJP_o *)BANHBMINMMP,(MethodInfo *)0x0);
  return pAVar1;
}

