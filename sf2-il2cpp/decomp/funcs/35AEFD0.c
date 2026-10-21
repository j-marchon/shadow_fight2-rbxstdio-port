// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$AFODJIOPDLD @ RVA 0x35AEFD0

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__AFODJIOPDLD
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,System_String_o *KGLJICLJHEL,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  SFButton_o *pSVar2;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  if ((DAT_04568e7b & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_NHNIKKNAAPF__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568e7b = 1;
  }
  pNVar1 = (__this->fields)._name;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
              (pNVar1,KGLJICLJHEL,(pNVar1->klass->vtable)._75_set_text.method);
    pSVar2 = (__this->fields)._nameButton;
    if ((pSVar2 != (SFButton_o *)0x0) &&
       (__this_00 = (pSVar2->fields).super.m_OnClick,
       __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._nameButton;
      if (pSVar2 != (SFButton_o *)0x0) {
        __this_01 = (UnityEngine_Events_UnityEvent_o *)(pSVar2->fields).super.m_OnClick;
        call = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

