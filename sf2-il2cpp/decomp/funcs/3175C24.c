// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$JBOPJALGFHH @ RVA 0x3175C24

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__JBOPJALGFHH
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,MethodInfo *method)

{
  int32_t ADBEOINGPAF;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *pNVar1;
  MethodInfo *in_x2;
  
  pNVar1 = (__this->fields)._battleRaidSlider;
  if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *)0x0) {
    ADBEOINGPAF = Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__GetCurrentItemLogicIndex
                            (pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._battleRaidSlider;
    if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__DeleteAllItems(pNVar1,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__LAHOOGJMEIC(__this,ADBEOINGPAF,in_x2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

