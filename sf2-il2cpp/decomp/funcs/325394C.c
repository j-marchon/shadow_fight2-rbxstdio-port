// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$CreateClanJoinInfoView @ RVA 0x325394C

Nekki_SF2_GUI_Dialogs_Raids_ClanJoinInfoView_o *
Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CreateClanJoinInfoView
          (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,
          Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *ELHFHAPBFMI,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_ClanJoinInfoView_o *pNVar1;
  
  if ((DAT_0456714b & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_Create<ClanJoinInfoView>__);
    DAT_0456714b = 1;
  }
  pNVar1 = (Nekki_SF2_GUI_Dialogs_Raids_ClanJoinInfoView_o *)
           Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__Create<object>
                     (__this,(__this->fields)._clanJoinInfoViewPrefab,
                      (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)ELHFHAPBFMI,
                      Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_Create<ClanJoinInfoView>__);
  return pNVar1;
}

