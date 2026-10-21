// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidCell$$OnClick @ RVA 0x313CF78

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell__OnClick
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
  __this_00 = (__this->fields).PDHMLFAMNCO;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ScrollToItem
              (__this_00,(Nekki_SF2_GUI_BaseScrollItem_o *)__this,0.2,5,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

