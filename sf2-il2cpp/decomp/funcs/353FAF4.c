// Nekki.SF2.GUI.Dialogs.Raids.InputDialog$$GKPJMHOFIOO @ RVA 0x353FAF4

void Nekki_SF2_GUI_Dialogs_Raids_InputDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_T0__o *pUVar1;
  System_Action_EditBox__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Scripts_EditBox_o *pNVar2;
  UnityEngine_UI_InputField_OnChangeEvent_o *__this_00;
  UnityEngine_UI_InputField_EndEditEvent_o *__this_01;
  
  if ((DAT_04568aec & 1) == 0) {
    FUN_01bab630(&System_Action<EditBox>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_InputDialog_GONKPCHJKMM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_InputDialog_HHHKCKLPENH__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<string>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<string>_AddListener__);
    DAT_04568aec = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._editBox;
  if (pNVar2 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
    __this_00 = (pNVar2->fields).super.m_OnValueChanged;
    pUVar1 = (UnityEngine_Events_UnityAction_T0__o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction<string>_TypeInfo,method);
    UnityEngine_Events_UnityAction<object>___ctor();
    if (__this_00 != (UnityEngine_UI_InputField_OnChangeEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent<object>__AddListener
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,pUVar1,
                 Method_UnityEngine_Events_UnityEvent<string>_AddListener__);
      pNVar2 = (__this->fields)._editBox;
      CJNHFNHJHPE = (System_Action_EditBox__o *)thunk_FUN_01bda818(System_Action<EditBox>_TypeInfo);
      System_Action<object>___ctor();
      if (pNVar2 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
        Nekki_SF2_GUI_Scripts_EditBox__add_OnShowKeyboard(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._editBox;
        if (pNVar2 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
          __this_01 = (pNVar2->fields).super.m_OnDidEndEdit;
          pUVar1 = (UnityEngine_Events_UnityAction_T0__o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction<string>_TypeInfo);
          UnityEngine_Events_UnityAction<object>___ctor();
          if (__this_01 != (UnityEngine_UI_InputField_EndEditEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent<object>__AddListener
                      ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,pUVar1,
                       Method_UnityEngine_Events_UnityEvent<string>_AddListener__);
            pNVar2 = (__this->fields)._editBox;
            if (pNVar2 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
              Nekki_SF2_GUI_Scripts_EditBox__set_BGColor
                        (pNVar2,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),
                         (MethodInfo *)0x0);
              pNVar2 = (__this->fields)._editBox;
              if (pNVar2 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
                Nekki_SF2_GUI_Scripts_EditBox__set_FontColor
                          (pNVar2,(UnityEngine_Color_o)(__this->fields)._textColor.fields,
                           (MethodInfo *)0x0);
                pNVar2 = (__this->fields)._editBox;
                if (pNVar2 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
                  UnityEngine_UI_InputField__set_caretColor
                            ((UnityEngine_UI_InputField_o *)pNVar2,
                             (UnityEngine_Color_o)(__this->fields)._textColor.fields,
                             (MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

