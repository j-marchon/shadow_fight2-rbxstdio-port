// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$Init @ RVA 0x3481074

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__Init
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
                    /* try { // try from 03581078 to 0368107f has its CatchHandler @ 0358123c */
  __this_00 = (__this->fields)._scroll;
  (__this->fields)._KDGCDFEGEHL_k__BackingField = 0;
  (__this->fields).NBNHIBIPJMG = 0;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
                    /* try { // try from 03581088 to 0368108f has its CatchHandler @ 035811fc */
    Nekki_SF2_GUI_SimpleScroll__Init(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

