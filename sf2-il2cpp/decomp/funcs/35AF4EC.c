// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$FBBEKIIDDNM @ RVA 0x35AF4EC

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__FBBEKIIDDNM
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_GameObject_o *__this_01;
  SFButton_o *pSVar1;
  UnityEngine_Events_UnityEvent_o *__this_02;
  
  if ((DAT_04568e75 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_POPLOFFOHJL__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568e75 = 1;
  }
  pSVar1 = (__this->fields)._blameButton;
  if ((pSVar1 != (SFButton_o *)0x0) &&
     (__this_00 = (pSVar1->fields).super.m_OnClick,
     __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._blameButton;
    if (pSVar1 != (SFButton_o *)0x0) {
      __this_02 = (UnityEngine_Events_UnityEvent_o *)(pSVar1->fields).super.m_OnClick;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_02 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_02,call,(MethodInfo *)0x0);
        pSVar1 = (__this->fields)._blameButton;
        if ((pSVar1 != (SFButton_o *)0x0) &&
           (__this_01 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pSVar1,(MethodInfo *)0x0),
           __this_01 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

