// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidSlider$$Update @ RVA 0x31C7014

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__Update
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *__this,MethodInfo *method)

{
  bool CJNHFNHJHPE;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  MethodInfo *method_00;
  
                    /* try { // try from 032c7014 to 033c701b has its CatchHandler @ 032c71c0 */
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
                    /* try { // try from 032c702c to 033c7033 has its CatchHandler @ 032c71e0 */
    CJNHFNHJHPE = Nekki_SF2_GUI_SimpleScroll__IsNotMovingAndNotDraggingFrames
                            (__this_00,2,(MethodInfo *)0x0);
                    /* try { // try from 032c7038 to 033c703f has its CatchHandler @ 032c71cc */
    Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__LNAECHIOFNK(__this,CJNHFNHJHPE,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

