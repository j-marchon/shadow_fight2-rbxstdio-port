// Nekki.SF2.GUI.Fight.ResistanceContent$$OnDestroy @ RVA 0x2FEF034

void Nekki_SF2_GUI_Fight_ResistanceContent__OnDestroy
               (Nekki_SF2_GUI_Fight_ResistanceContent_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  LabelButton_o *pLVar1;
  
  pLVar1 = (__this->fields)._buttonOk;
  if ((pLVar1 != (LabelButton_o *)0x0) &&
     (__this_00 = (pLVar1->fields).super.super.super.m_OnClick,
     __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

