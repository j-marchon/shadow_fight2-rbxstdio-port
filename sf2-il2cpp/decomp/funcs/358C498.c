// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$LCGFJKFJKJK @ RVA 0x358C498

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__LCGFJKFJKJK
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,int32_t DNBBBGEENMM,
               MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  LabelButton_o *pLVar1;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  if ((DAT_04568d4c & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_CHJFOFKEHJB__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568d4c = 1;
  }
  Nekki_SF2_GUI_Dialogs_SettingsDialog__LCGFJKFJKJK
            ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)__this,DNBBBGEENMM,(MethodInfo *)0x0);
  pLVar1 = (__this->fields).super.super._btnOK;
  if ((pLVar1 != (LabelButton_o *)0x0) &&
     (__this_00 = (pLVar1->fields).super.super.super.m_OnClick,
     __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    pLVar1 = (__this->fields).super.super._btnOK;
    if (pLVar1 != (LabelButton_o *)0x0) {
      __this_01 = (UnityEngine_Events_UnityEvent_o *)(pLVar1->fields).super.super.super.m_OnClick;
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

