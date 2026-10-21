// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$RaidBattleChatTabEnable @ RVA 0x3255374

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__RaidBattleChatTabEnable
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,bool CMPKOOEKFKF,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *pNVar2;
  Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o *pNVar3;
  
  if ((DAT_04567159 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567159 = 1;
  }
  if (!CMPKOOEKFKF) {
    pNVar2 = (__this->fields)._clanChatViewController;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar2 = (__this->fields)._clanChatViewController;
      if (pNVar2 == (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *)0x0) goto LAB_03355450;
      LJLLAKHOFFF__AKKDDJDBIBD
                ((UnityEngine_UI_Selectable_o *)(pNVar2->fields).super._tabButton,(MethodInfo *)0x0)
      ;
    }
  }
  pNVar3 = (__this->fields)._raidBattleChatViewController;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar3 = (__this->fields)._raidBattleChatViewController;
  if ((pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o *)0x0) &&
     (__this_00 = (pNVar3->fields).super._tabButton,
     __this_00 != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *)0x0)) {
    UnityEngine_Behaviour__set_enabled
              ((UnityEngine_Behaviour_o *)__this_00,CMPKOOEKFKF,(MethodInfo *)0x0);
    return;
  }
LAB_03355450:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

