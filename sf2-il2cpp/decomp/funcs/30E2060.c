// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$OnRaidExpire @ RVA 0x30E2060

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__OnRaidExpire
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this_00;
  
  __this_00 = (__this->fields)._raidPlayersRoll;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__OnRaidExpire(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

