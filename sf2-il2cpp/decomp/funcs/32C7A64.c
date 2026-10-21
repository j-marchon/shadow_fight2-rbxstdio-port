// Nekki.SF2.GUI.Dialogs.Raids.PlayerInfoHeaderView$$OnDestroy @ RVA 0x32C7A64

void Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityAction_o *call;
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this_00;
  System_Action_EOLFEKNCPLM__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  SFButton_o *pSVar2;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  if ((DAT_045674f9 & 1) == 0) {
    FUN_01bab630(&System_Action<EOLFEKNCPLM>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_NOJIAJAMFPH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_OGPINCKBAKE__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_045674f9 = 1;
    method = extraout_x1;
  }
  pSVar2 = (__this->fields)._clanButton;
  if (pSVar2 != (SFButton_o *)0x0) {
    __this_01 = (UnityEngine_Events_UnityEvent_o *)(pSVar2->fields).super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__RemoveListener(__this_01,call,(MethodInfo *)0x0);
      bVar1 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__IsActive((MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      __this_00 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__Current((MethodInfo *)0x0);
      CJNHFNHJHPE = (System_Action_EOLFEKNCPLM__o *)
                    thunk_FUN_01bda818(System_Action<EOLFEKNCPLM>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_00 != (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *)0x0) {
        Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__remove_OnRefreshPlayer
                  (__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

