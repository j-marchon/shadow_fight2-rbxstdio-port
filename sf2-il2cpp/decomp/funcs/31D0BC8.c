// Nekki.SF2.GUI.Dialogs.Raids.ClanJoinInfoView$$Init @ RVA 0x31D0BC8

void Nekki_SF2_GUI_Dialogs_Raids_ClanJoinInfoView__Init
               (Nekki_SF2_GUI_Dialogs_Raids_ClanJoinInfoView_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *ELHFHAPBFMI,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_c *pNVar2;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o **ppNVar3;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *pNVar4;
  
  if ((DAT_04566ca1 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_TypeInfo);
    DAT_04566ca1 = 1;
  }
  ppNVar3 = &(__this->fields).super.FLLHHEODKPH;
  *ppNVar3 = ELHFHAPBFMI;
  thunk_FUN_01c20e04(ppNVar3,ELHFHAPBFMI);
  pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_TypeInfo;
  if (ELHFHAPBFMI == (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0) {
    ELHFHAPBFMI = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0;
    (__this->fields).AEDDGLGAJPK = (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *)0x0;
  }
  else {
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_TypeInfo->_2).naturalAligment;
    if ((ELHFHAPBFMI->klass->_2).naturalAligment < bVar1) {
      pNVar4 = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0;
    }
    else {
      pNVar4 = ELHFHAPBFMI;
      if ((ELHFHAPBFMI->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_TypeInfo) {
        pNVar4 = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0;
      }
    }
    (__this->fields).AEDDGLGAJPK = (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *)pNVar4;
    if ((ELHFHAPBFMI->klass->_2).naturalAligment < bVar1) {
      ELHFHAPBFMI = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0;
    }
    else if ((ELHFHAPBFMI->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)pNVar2) {
      ELHFHAPBFMI = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)0x0;
    }
  }
  thunk_FUN_01c20e04(&(__this->fields).AEDDGLGAJPK,ELHFHAPBFMI);
  return;
}

