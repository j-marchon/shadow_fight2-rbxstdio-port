// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$ShowNotEnoughDamageHint @ RVA 0x30E2564

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__ShowNotEnoughDamageHint
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this_00;
  
  __this_00 = (__this->fields)._raidPlayersRoll;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *)0x0) {
                    /* try { // try from 031e2570 to 032e259b has its CatchHandler @ 031e273c */
    Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__ShowNotEnoughDamageHint_ForPlayer
              (__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

