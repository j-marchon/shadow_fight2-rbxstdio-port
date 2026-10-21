// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$CreateClanQuickRaidAccessView @ RVA 0x325638C

Nekki_SF2_GUI_Dialogs_Raids_ClanQuickRaidAccessView_o *
Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CreateClanQuickRaidAccessView
          (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,
          Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o *ELHFHAPBFMI,MethodInfo *method
          )

{
  Nekki_SF2_GUI_Dialogs_Raids_ClanQuickRaidAccessView_o *pNVar1;
  
  if ((DAT_0456715f & 1) == 0) {
    FUN_01bab630(&
                 Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_Create<ClanQuickRaidAccessView>__
                );
    DAT_0456715f = 1;
  }
  pNVar1 = (Nekki_SF2_GUI_Dialogs_Raids_ClanQuickRaidAccessView_o *)
           Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__Create<object>
                     (__this,(__this->fields)._clanQuickRaidAccessViewPrefab,
                      (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)ELHFHAPBFMI,
                      Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_Create<ClanQuickRaidAccessView>__
                     );
  return pNVar1;
}

