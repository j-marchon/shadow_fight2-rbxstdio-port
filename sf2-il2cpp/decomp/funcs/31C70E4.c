// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidSlider$$DeleteAllItems @ RVA 0x31C70E4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__DeleteAllItems
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_GEKCMGLDMEE__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04566c3a & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<GEKCMGLDMEE>_Clear__);
    DAT_04566c3a = 1;
  }
  pSVar1 = (__this->fields).KNPKLNHJLEN;
  if (pSVar1 != (System_Collections_Generic_List_GEKCMGLDMEE__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

