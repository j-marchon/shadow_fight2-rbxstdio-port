// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$.cctor @ RVA 0x325457C

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF___cctor(MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_StaticFields *pNVar1;
  
  if ((DAT_04567150 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    DAT_04567150 = 1;
  }
  pNVar1 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->static_fields;
  pNVar1->ShowChatMode = 1;
  pNVar1->HasEverShownChat = false;
  return;
}

