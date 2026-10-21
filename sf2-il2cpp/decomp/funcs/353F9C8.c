// Nekki.SF2.GUI.Dialogs.Raids.InputDialog$$FIOGPFLBLIF @ RVA 0x353F9C8

void Nekki_SF2_GUI_Dialogs_Raids_InputDialog__FIOGPFLBLIF
               (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *__this,MethodInfo *method)

{
  UnityEngine_UI_InputField_OnChangeEvent_o *__this_00;
  System_Action_EditBox__o *CJNHFNHJHPE;
  UnityEngine_Events_UnityAction_T0__o *call;
  Nekki_SF2_GUI_Scripts_EditBox_o *pNVar1;
  UnityEngine_UI_InputField_EndEditEvent_o *__this_01;
  
  if ((DAT_04568aea & 1) == 0) {
    FUN_01bab630(&System_Action<EditBox>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_InputDialog_GONKPCHJKMM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_InputDialog_HHHKCKLPENH__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<string>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<string>_RemoveListener__);
    DAT_04568aea = 1;
  }
  pNVar1 = (__this->fields)._editBox;
  if ((pNVar1 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) &&
     (__this_00 = (pNVar1->fields).super.m_OnValueChanged,
     __this_00 != (UnityEngine_UI_InputField_OnChangeEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._editBox;
    CJNHFNHJHPE = (System_Action_EditBox__o *)thunk_FUN_01bda818(System_Action<EditBox>_TypeInfo);
    System_Action<object>___ctor();
    if (pNVar1 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
      Nekki_SF2_GUI_Scripts_EditBox__remove_OnShowKeyboard(pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._editBox;
      if (pNVar1 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
        __this_01 = (pNVar1->fields).super.m_OnDidEndEdit;
        call = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<string>_TypeInfo);
        UnityEngine_Events_UnityAction<object>___ctor();
        if (__this_01 != (UnityEngine_UI_InputField_EndEditEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent<object>__RemoveListener
                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,call,
                     Method_UnityEngine_Events_UnityEvent<string>_RemoveListener__);
          (__this->fields).LNIKACBHFOE = 1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

