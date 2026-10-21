// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$SetRaidEndedState @ RVA 0x30E1FAC

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__SetRaidEndedState
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,bool INMJNAJNOAE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this_00;
  
  __this_00 = (__this->fields)._raidInfoSprite;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__SetRaidEndedState
              (__this_00,INMJNAJNOAE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

