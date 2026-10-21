// Nekki.SF2.GUI.Dialogs.Raids.ClanQuickRaidAccessView$$Init @ RVA 0x3034738

void Nekki_SF2_GUI_Dialogs_Raids_ClanQuickRaidAccessView__Init
               (Nekki_SF2_GUI_Dialogs_Raids_ClanQuickRaidAccessView_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *GDGNEIBAJLB,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_c *pNVar2;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o **ppNVar3;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *pNVar4;
  
  if ((DAT_04565d2d & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_TypeInfo);
    DAT_04565d2d = 1;
  }
  ppNVar3 = &(__this->fields).super.FLLHHEODKPH;
  *ppNVar3 = GDGNEIBAJLB;
  thunk_FUN_01c20e04(ppNVar3,GDGNEIBAJLB);
  pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_TypeInfo;
  if (GDGNEIBAJLB == (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0) {
    GDGNEIBAJLB = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0;
    (__this->fields).KKKFAIEIDAI = (Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o *)0x0
    ;
  }
  else {
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_TypeInfo->_2).naturalAligment;
    if ((GDGNEIBAJLB->klass->_2).naturalAligment < bVar1) {
      pNVar4 = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0;
    }
    else {
      pNVar4 = GDGNEIBAJLB;
      if ((GDGNEIBAJLB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_TypeInfo) {
        pNVar4 = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0;
      }
    }
    (__this->fields).KKKFAIEIDAI =
         (Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o *)pNVar4;
    if ((GDGNEIBAJLB->klass->_2).naturalAligment < bVar1) {
      GDGNEIBAJLB = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0;
    }
    else if ((GDGNEIBAJLB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)pNVar2) {
      GDGNEIBAJLB = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0;
    }
  }
  thunk_FUN_01c20e04(&(__this->fields).KKKFAIEIDAI,GDGNEIBAJLB);
  Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__FillSpritesCache((MethodInfo *)0x0);
  return;
}

