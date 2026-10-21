// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidSlider$$LBBMPJKOINK @ RVA 0x31C6D44

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__LBBMPJKOINK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *__this,int32_t MJBMLNKAPGC,
               MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
                    /* try { // try from 032c6d60 to 033c6d63 has its CatchHandler @ 032c71f4 */
                    /* try { // try from 032c6d64 to 033c6d6f has its CatchHandler @ 032c726c */
    Nekki_SF2_GUI_SimpleScroll__ScrollToNextItems(__this_00,MJBMLNKAPGC,0.2,5,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

