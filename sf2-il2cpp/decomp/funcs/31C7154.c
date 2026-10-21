// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidSlider$$ScrollToItem @ RVA 0x31C7154

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__ScrollToItem
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *__this,int32_t OGPGLGPMEPD,
               float LFJGFLNMBMC,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ScrollToItem(__this_00,OGPGLGPMEPD,LFJGFLNMBMC,5,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

