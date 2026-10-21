// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$CreateChatMessageView @ RVA 0x32547E0

Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *
Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CreateChatMessageView
          (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,
          Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *ELHFHAPBFMI,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *pNVar1;
  
  if ((DAT_04567152 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_Create<ChatMessageView>__);
    DAT_04567152 = 1;
  }
  pNVar1 = (Nekki_SF2_GUI_Dialogs_Raids_ChatMessageView_o *)
           Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__Create<object>
                     (__this,(__this->fields)._chatMessageViewPrefab,ELHFHAPBFMI,
                      Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_Create<ChatMessageView>__);
  return pNVar1;
}

