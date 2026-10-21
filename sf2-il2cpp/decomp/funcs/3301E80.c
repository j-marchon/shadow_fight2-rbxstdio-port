// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$GKPJMHOFIOO @ RVA 0x3301E80

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this_00;
  MethodInfo *method_00;
  LabelButton_o *pLVar3;
  UnityEngine_Events_UnityEvent_o *pUVar4;
  
  if ((DAT_04567726 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04567726 = 1;
  }
  pLVar3 = (__this->fields).super.super.super._btnCancel;
  if ((pLVar3 != (LabelButton_o *)0x0) &&
     (pUVar1 = (pLVar3->fields).super.super.super.m_OnClick,
     pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
    pLVar3 = (__this->fields).super.super.super._btnOK;
    if ((pLVar3 != (LabelButton_o *)0x0) &&
       (pUVar1 = (pLVar3->fields).super.super.super.m_OnClick,
       pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
      pLVar3 = (__this->fields).super.super.super._btnCancel;
      if (pLVar3 != (LabelButton_o *)0x0) {
        pUVar4 = (UnityEngine_Events_UnityEvent_o *)(pLVar3->fields).super.super.super.m_OnClick;
        pUVar2 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar2,(MethodInfo *)0x0);
          pLVar3 = (__this->fields).super.super.super._btnOK;
          if (pLVar3 != (LabelButton_o *)0x0) {
            pUVar4 = (UnityEngine_Events_UnityEvent_o *)(pLVar3->fields).super.super.super.m_OnClick
            ;
            pUVar2 = (UnityEngine_Events_UnityAction_o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              method_00 = (MethodInfo *)0x0;
              UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar2,(MethodInfo *)0x0);
              __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *)
                          (*(__this->klass->vtable)._40_PADBDIONJAJ.methodPtr)
                                    (__this,(__this->klass->vtable)._40_PADBDIONJAJ.method);
              if (((ulong)__this_00 & 1) != 0) {
                Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__FPCFNCJADKF
                          (__this_00,(__this->fields).super.super.super._btnOK,method_00);
                return;
              }
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

