// Nekki.SF2.GUI.Dialogs.LotteryDialog$$BPHEMMPAJGO @ RVA 0x328DF6C

void Nekki_SF2_GUI_Dialogs_LotteryDialog__BPHEMMPAJGO
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  MethodInfo *in_x3;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar1;
  LPGLKMNHELJ_o *pLVar2;
  
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
    DAT_04565b84 = '\x01';
  }
  pNVar1 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if (pNVar1 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
    if (*(char *)&(pNVar1->fields)._money == '\0') {
      return;
    }
    Nekki_SF2_GUI_Dialogs_LotteryDialog__DMKPAPKKDMP(__this,true,false,in_x3);
    pLVar2 = (__this->fields).DKMMBMBMJBO;
    if (pLVar2 != (LPGLKMNHELJ_o *)0x0) {
      if ((pLVar2->fields).BGHFADDGPAD != 0) {
        return;
      }
      __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
        Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(__this_00,0x1f,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

