// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$HasPlayer @ RVA 0x30E2334

bool Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__HasPlayer
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,int64_t OGPGLGPMEPD,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this_00;
  
  __this_00 = (__this->fields)._raidPlayersRoll;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__HasPlayer
                      (__this_00,OGPGLGPMEPD,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

