// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$UpdateInsertedPlayer @ RVA 0x30E1FCC

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__UpdateInsertedPlayer
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,GKLPDMLELJF_o *HEHMPFLAEGE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this_00;
  
  __this_00 = (__this->fields)._raidPlayersRoll;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__UpdateInsertedPlayer
              (__this_00,HEHMPFLAEGE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

