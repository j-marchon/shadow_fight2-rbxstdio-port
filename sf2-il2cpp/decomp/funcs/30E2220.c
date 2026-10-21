// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$SetBossID @ RVA 0x30E2220

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__SetBossID
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,int32_t KLFKDPIOMIE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *pNVar1;
  
  pNVar1 = (__this->fields)._raidPlayersRoll;
  if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *)0x0) {
    (pNVar1->fields)._KDGCDFEGEHL_k__BackingField = KLFKDPIOMIE;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

