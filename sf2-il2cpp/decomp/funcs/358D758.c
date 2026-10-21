// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$NFCDGCGEKCG @ RVA 0x358D758

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__NFCDGCGEKCG
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_UI_Slider_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Slider_SliderEvent_o *__this_01;
  UnityEngine_Events_UnityAction_T0__o *pUVar3;
  UnityEngine_UI_ScrollRect_ScrollRectEvent_o *__this_02;
  UnityEngine_UI_ScrollRect_o *pUVar4;
  int32_t iVar5;
  UnityEngine_Events_UnityEvent_float__o *__this_03;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_04;
  UnityEngine_Rect_o UVar6;
  UnityEngine_Rect_o UVar7;
  
  if ((DAT_04568d55 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_EOMFJAAEFIJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_HFHPEPJPCHL__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<Vector2>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<float>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<Vector2>_AddListener__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<float>_AddListener__);
    DAT_04568d55 = 1;
  }
  UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
  pUVar4 = (__this->fields)._scroll;
  if ((pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
     (pUVar1 = (pUVar4->fields).m_Content, pUVar1 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar6 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._scroll;
    if ((pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
       (pUVar1 = (pUVar4->fields).m_Viewport, pUVar1 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar7 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._scroll;
      if (pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) {
        iVar5 = 2;
        if (UVar7.fields.m_Height < UVar6.fields.m_Height) {
          iVar5 = 1;
        }
        (pUVar4->fields).m_MovementType = iVar5;
        pUVar2 = (__this->fields)._slider;
        if ((pUVar2 != (UnityEngine_UI_Slider_o *)0x0) &&
           (__this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive
                    (__this_00,UVar7.fields.m_Height < UVar6.fields.m_Height,(MethodInfo *)0x0);
          pUVar2 = (__this->fields)._slider;
          if ((pUVar2 != (UnityEngine_UI_Slider_o *)0x0) &&
             (__this_01 = (pUVar2->fields).m_OnValueChanged,
             __this_01 != (UnityEngine_UI_Slider_SliderEvent_o *)0x0)) {
            UnityEngine_Events_UnityEventBase__RemoveAllListeners
                      ((UnityEngine_Events_UnityEventBase_o *)__this_01,(MethodInfo *)0x0);
            pUVar2 = (__this->fields)._slider;
            if (pUVar2 != (UnityEngine_UI_Slider_o *)0x0) {
              __this_03 = (UnityEngine_Events_UnityEvent_float__o *)
                          (pUVar2->fields).m_OnValueChanged;
              pUVar3 = (UnityEngine_Events_UnityAction_T0__o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction<float>_TypeInfo);
              UnityEngine_Events_UnityAction<float>___ctor();
              if (__this_03 != (UnityEngine_Events_UnityEvent_float__o *)0x0) {
                UnityEngine_Events_UnityEvent<float>__AddListener
                          (__this_03,pUVar3,
                           Method_UnityEngine_Events_UnityEvent<float>_AddListener__);
                pUVar4 = (__this->fields)._scroll;
                if ((pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
                   (__this_02 = (pUVar4->fields).m_OnValueChanged,
                   __this_02 != (UnityEngine_UI_ScrollRect_ScrollRectEvent_o *)0x0)) {
                  UnityEngine_Events_UnityEventBase__RemoveAllListeners
                            ((UnityEngine_Events_UnityEventBase_o *)__this_02,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields)._scroll;
                  if (pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                    __this_04 = (UnityEngine_Events_UnityEvent_Vector2__o *)
                                (pUVar4->fields).m_OnValueChanged;
                    pUVar3 = (UnityEngine_Events_UnityAction_T0__o *)
                             thunk_FUN_01bda818(UnityEngine_Events_UnityAction<Vector2>_TypeInfo);
                    UnityEngine_Events_UnityAction<Vector2>___ctor();
                    if (__this_04 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
                      UnityEngine_Events_UnityEvent<Vector2>__AddListener
                                (__this_04,pUVar3,
                                 Method_UnityEngine_Events_UnityEvent<Vector2>_AddListener__);
                      return;
                    }
                  }
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

