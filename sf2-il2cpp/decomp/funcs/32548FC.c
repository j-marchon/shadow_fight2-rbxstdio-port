// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$CanOpenChat @ RVA 0x32548FC

bool Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CanOpenChat
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  
  if (DAT_04567182 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ChatContent_TypeInfo);
    DAT_04567182 = '\x01';
  }
  if (Nekki_SF2_GUI_Dialogs_Raids_ChatContent_TypeInfo->static_fields->_MPEEBDKAEAH_k__BackingField
      == false) {
    __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (__this_00 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = Nekki_SF2_Core_Quests_QuestsManager__HasAnyActionQuest(__this_00,0x2d,(MethodInfo *)0x0)
    ;
    bVar1 = !bVar1;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

