// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidSlider$$GetCurrentItemLogicIndex @ RVA 0x31C72DC

int32_t Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__GetCurrentItemLogicIndex
                  (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  int32_t local_4;
  
  local_4 = -1;
                    /* try { // try from 032c72e8 to 033c72eb has its CatchHandler @ 032c7314 */
  __this_00 = (__this->fields)._scroll;
                    /* try { // try from 032c72ec to 033c7323 has its CatchHandler @ 032c68a4 */
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__GetSelectedItemAndLogicId(__this_00,&local_4,(MethodInfo *)0x0);
    return local_4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

