// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$GINCEPGBOIC @ RVA 0x35AE468

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__GINCEPGBOIC
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  SFButton_o *pSVar1;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  if ((DAT_04568e78 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_ShowDamageHint__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568e78 = 1;
  }
  pSVar1 = (__this->fields)._damageHintButton;
  if ((pSVar1 != (SFButton_o *)0x0) &&
     (__this_00 = (pSVar1->fields).super.m_OnClick,
     __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._damageHintButton;
    if (pSVar1 != (SFButton_o *)0x0) {
      __this_01 = (UnityEngine_Events_UnityEvent_o *)(pSVar1->fields).super.m_OnClick;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

