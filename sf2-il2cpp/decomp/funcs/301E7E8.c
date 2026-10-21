// Nekki.SF2.GUI.Dialogs.SimpleDialog$$BAFEFLKGNPG @ RVA 0x301E7E8

void Nekki_SF2_GUI_Dialogs_SimpleDialog__BAFEFLKGNPG
               (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *__this,bool CKHKIMELDAI,
               System_String_o *IDGIFNHOBPI,MethodInfo *method)

{
  UnityEngine_UI_Toggle_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Events_UnityAction_T0__o *pUVar5;
  BHEDGAKGKPO_StaticFields *pBVar6;
  UnityEngine_Events_UnityEvent_bool__o *pUVar7;
  float fVar8;
  undefined4 extraout_var;
  float fVar9;
  UnityEngine_Rect_o UVar10;
  UnityEngine_Vector3_o UVar11;
  
  if ((DAT_04565c34 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<bool>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<bool>_AddListener__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<bool>_RemoveListener__);
    DAT_04565c34 = 1;
  }
  pUVar1 = (__this->fields)._checkBox;
  if (pUVar1 != (UnityEngine_UI_Toggle_o *)0x0) {
    pUVar2 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar1,
                        Method_UnityEngine_Component_GetComponent<RectTransform>__);
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      UVar10 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._label;
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        fVar9 = UVar10.fields.m_Height * 0.25;
        fVar8 = (float)(*(pNVar3->klass->vtable)._82_get_preferredHeight.methodPtr)
                                 (0x3e800000,UVar10.fields.m_YMin,UVar10.fields.m_Width,pNVar3,
                                  (pNVar3->klass->vtable)._82_get_preferredHeight.method);
        fVar8 = fVar8 * -0.5 - (fVar9 + fVar9);
        if ((__this->fields).RepositionCheckbox_Y != false) {
          pUVar1 = (__this->fields)._checkBox;
          if (pUVar1 == (UnityEngine_UI_Toggle_o *)0x0) goto LAB_0311eb40;
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionY(pUVar4,fVar8,(MethodInfo *)0x0);
          pNVar3 = (__this->fields)._label;
          if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0311eb40;
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
          pNVar3 = (__this->fields)._label;
          if ((pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
             (__this_00 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
             __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_0311eb40;
          UVar11 = UnityEngine_Transform__get_localPosition(__this_00,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionY
                    (pUVar4,fVar9 + UVar11.fields.y,(MethodInfo *)0x0);
        }
        pUVar1 = (__this->fields)._checkBox;
        if (pUVar1 != (UnityEngine_UI_Toggle_o *)0x0) {
          UnityEngine_UI_Toggle__set_isOn(pUVar1,CKHKIMELDAI,(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._checkBox;
          if (pUVar1 != (UnityEngine_UI_Toggle_o *)0x0) {
            pUVar7 = (UnityEngine_Events_UnityEvent_bool__o *)(pUVar1->fields).onValueChanged;
            pUVar5 = (UnityEngine_Events_UnityAction_T0__o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction<bool>_TypeInfo);
            UnityEngine_Events_UnityAction<bool>___ctor();
            if (pUVar7 != (UnityEngine_Events_UnityEvent_bool__o *)0x0) {
              UnityEngine_Events_UnityEvent<bool>__RemoveListener
                        (pUVar7,pUVar5,Method_UnityEngine_Events_UnityEvent<bool>_RemoveListener__);
              pUVar1 = (__this->fields)._checkBox;
              if (pUVar1 != (UnityEngine_UI_Toggle_o *)0x0) {
                pUVar7 = (UnityEngine_Events_UnityEvent_bool__o *)(pUVar1->fields).onValueChanged;
                pUVar5 = (UnityEngine_Events_UnityAction_T0__o *)
                         thunk_FUN_01bda818(UnityEngine_Events_UnityAction<bool>_TypeInfo);
                UnityEngine_Events_UnityAction<bool>___ctor();
                if (pUVar7 != (UnityEngine_Events_UnityEvent_bool__o *)0x0) {
                  UnityEngine_Events_UnityEvent<bool>__AddListener
                            (pUVar7,pUVar5,Method_UnityEngine_Events_UnityEvent<bool>_AddListener__)
                  ;
                  pNVar3 = (__this->fields)._checkBoxLabel;
                  if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar3,0x67,(MethodInfo *)0x0);
                    pNVar3 = (__this->fields)._checkBoxLabel;
                    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                      pBVar6 = BHEDGAKGKPO_TypeInfo->static_fields;
                      (*(pNVar3->klass->vtable)._23_set_color.methodPtr)
                                ((ulong)(uint)(pBVar6->FHIAKPJBBCB).fields.r,
                                 (pBVar6->FHIAKPJBBCB).fields.g,(pBVar6->FHIAKPJBBCB).fields.b,
                                 (pBVar6->FHIAKPJBBCB).fields.a,pNVar3,
                                 (pNVar3->klass->vtable)._23_set_color.method);
                      pNVar3 = (__this->fields)._checkBoxLabel;
                      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,IDGIFNHOBPI,(MethodInfo *)0x0);
                        if ((__this->fields).RepositionCheckbox_Y != false) {
                          pNVar3 = (__this->fields)._checkBoxLabel;
                          if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0311eb40;
                          pUVar4 = UnityEngine_Component__get_transform
                                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
                          UnityEngine_TransformExtensions__SetLocalPositionY
                                    (pUVar4,fVar8 + -5.0,(MethodInfo *)0x0);
                        }
                        pUVar1 = (__this->fields)._checkBox;
                        if ((pUVar1 != (UnityEngine_UI_Toggle_o *)0x0) &&
                           (pUVar2 = (UnityEngine_RectTransform_o *)
                                     UnityEngine_Component__GetComponent<object>
                                               ((UnityEngine_Component_o *)pUVar1,
                                                Method_UnityEngine_Component_GetComponent<RectTransform>__
                                               ), pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
                          UVar10 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
                          pNVar3 = (__this->fields)._checkBoxLabel;
                          if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                            (*(pNVar3->klass->vtable)._79_get_preferredWidth.methodPtr)
                                      (CONCAT44(extraout_var,UVar10.fields.m_XMin),
                                       UVar10.fields.m_YMin,UVar10.fields.m_Width,
                                       UVar10.fields.m_Height,pNVar3,
                                       (pNVar3->klass->vtable)._79_get_preferredWidth.method);
                            pNVar3 = (__this->fields)._checkBoxLabel;
                            if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                              fVar8 = (float)(*(pNVar3->klass->vtable)._79_get_preferredWidth.
                                               methodPtr)(pNVar3,(pNVar3->klass->vtable).
                                                                 _79_get_preferredWidth.method);
                              if ((__this->fields).RepositionCheckbox_X == false) {
                                return;
                              }
                              pUVar1 = (__this->fields)._checkBox;
                              if (pUVar1 != (UnityEngine_UI_Toggle_o *)0x0) {
                                pUVar4 = UnityEngine_Component__get_transform
                                                   ((UnityEngine_Component_o *)pUVar1,
                                                    (MethodInfo *)0x0);
                                UnityEngine_TransformExtensions__SetLocalPositionX
                                          (pUVar4,fVar8 * -0.5,(MethodInfo *)0x0);
                                pNVar3 = (__this->fields)._checkBoxLabel;
                                if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                                  pUVar4 = UnityEngine_Component__get_transform
                                                     ((UnityEngine_Component_o *)pNVar3,
                                                      (MethodInfo *)0x0);
                                  pUVar1 = (__this->fields)._checkBox;
                                  if ((pUVar1 != (UnityEngine_UI_Toggle_o *)0x0) &&
                                     (pUVar2 = (UnityEngine_RectTransform_o *)
                                               UnityEngine_Component__GetComponent<object>
                                                         ((UnityEngine_Component_o *)pUVar1,
                                                                                                                    
                                                  Method_UnityEngine_Component_GetComponent<RectTransform>__
                                                  ), pUVar2 != (UnityEngine_RectTransform_o *)0x0))
                                  {
                                    UVar10 = UnityEngine_RectTransform__get_rect
                                                       (pUVar2,(MethodInfo *)0x0);
                                    UnityEngine_TransformExtensions__SetLocalPositionX
                                              (pUVar4,UVar10.fields.m_Width * 0.5,(MethodInfo *)0x0)
                                    ;
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
              }
            }
          }
        }
      }
    }
  }
LAB_0311eb40:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

