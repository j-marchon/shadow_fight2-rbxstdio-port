// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$SetButtonsEnabled @ RVA 0x30E1E34

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__SetButtonsEnabled
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this,bool IHEPHBIPLPM,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this_00;
  
  __this_00 = (__this->fields)._raidInfoSprite;
                    /* try { // try from 031e1e3c to 032e1e47 has its CatchHandler @ 031e19a8 */
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
                    /* try { // try from 031e1e48 to 032e1e4f has its CatchHandler @ 031e1e50 */
    Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__SetButtonsEnabled
              (__this_00,IHEPHBIPLPM,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 031e1e14 with catch @ 031e1e50
                       catch() { ... } // from try @ 031e1e48 with catch @ 031e1e50 */
  FUN_01bab8c8();
}

