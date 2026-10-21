// Nekki.SF2.GUI.Dialogs.StrangerDialog$$CGDLJPELGIJ @ RVA 0x317A8F0

void Nekki_SF2_GUI_Dialogs_StrangerDialog__CGDLJPELGIJ
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this_00;
  Nekki_SF2_GUI_Dialogs_StrangerDialog_o *extraout_x0;
  System_Action_object__o *pSVar3;
  Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this_01;
  Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this_02;
  Nekki_SF2_GUI_ResolutionImage_o *__this_03;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  SFToggle_o *pSVar6;
  UnityEngine_Events_UnityAction_T0__o *call;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  MethodInfo *extraout_x1;
  MethodInfo *in_x5;
  int32_t CJNHFNHJHPE;
  BHEDGAKGKPO_StaticFields *pBVar8;
  LabelButton_o *pLVar9;
  ButtonWithIcon_o *pBVar10;
  ButtonWithIcon_o *__this_04;
  UnityEngine_Events_UnityEvent_bool__o *__this_05;
  float value;
  UnityEngine_Rect_o UVar11;
  UnityEngine_Rect_o UVar12;
  UnityEngine_Vector3_o UVar13;
  
  if ((DAT_04566988 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_StrangerDialog_HFGKEOFLLPC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_StrangerDialog_LIPPGIALIMA__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<bool>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<bool>_AddListener__);
    DAT_04566988 = 1;
    method = extraout_x1;
  }
  pLVar9 = (__this->fields).super.super._btnCancel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pLVar9 = (__this->fields).super.super._btnCancel;
    if ((pLVar9 == (LabelButton_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar9,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0327afdc;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pLVar9 = (__this->fields).super.super._btnOK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  __this_00 = (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *)(ulong)bVar1;
  if (bVar1) {
    pLVar9 = (__this->fields).super.super._btnOK;
    if ((pLVar9 == (LabelButton_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar9,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0327afdc;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    __this_00 = extraout_x0;
  }
  Nekki_SF2_GUI_Dialogs_StrangerDialog__ACICKHKFILK
            (__this_00,(LabelButton_o *)(__this->fields)._rejectButton,(__this->fields).AKEBMCCPPPA,
             (__this->fields).DHJBABHLNFP,0,in_x5);
  pBVar10 = (__this->fields)._rejectButton;
  pSVar3 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
  System_Action<object>___ctor();
  if (pBVar10 != (ButtonWithIcon_o *)0x0) {
    SFButton__RemoveEventListener((SFButton_o *)pBVar10,2,pSVar3,(MethodInfo *)0x0);
    pBVar10 = (__this->fields)._rejectButton;
    pSVar3 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    if (pBVar10 != (ButtonWithIcon_o *)0x0) {
      SFButton__AddEventListener((SFButton_o *)pBVar10,2,pSVar3,(MethodInfo *)0x0);
      pBVar10 = (__this->fields)._rejectButton;
      if (pBVar10 != (ButtonWithIcon_o *)0x0) {
        pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pBVar10,(MethodInfo *)0x0);
        bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).DHJBABHLNFP,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar2,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
          pBVar10 = (__this->fields)._rejectButton;
          if (pBVar10 != (ButtonWithIcon_o *)0x0) {
            ButtonWithIcon__SetIcon(pBVar10,(__this->fields).EMHKJPJIHBK,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Dialogs_StrangerDialog__ACICKHKFILK
                      (__this_01,(LabelButton_o *)(__this->fields)._acceptButton,
                       (__this->fields).KLFHDAPPGGD,(__this->fields).FAAJIPNANGB,2,in_x5);
            pBVar10 = (__this->fields)._acceptButton;
            pSVar3 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
            System_Action<object>___ctor();
            if (pBVar10 != (ButtonWithIcon_o *)0x0) {
              SFButton__RemoveEventListener((SFButton_o *)pBVar10,2,pSVar3,(MethodInfo *)0x0);
              pBVar10 = (__this->fields)._acceptButton;
              pSVar3 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo)
              ;
              System_Action<object>___ctor();
              if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                SFButton__AddEventListener((SFButton_o *)pBVar10,2,pSVar3,(MethodInfo *)0x0);
                pBVar10 = (__this->fields)._acceptButton;
                if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                  pUVar2 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pBVar10,(MethodInfo *)0x0);
                  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).FAAJIPNANGB,(MethodInfo *)0x0);
                  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__SetActive(pUVar2,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
                    pBVar10 = (__this->fields)._acceptButton;
                    if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                      ButtonWithIcon__SetIcon
                                (pBVar10,(__this->fields).FGGKLAINKKA,(MethodInfo *)0x0);
                      Nekki_SF2_GUI_Dialogs_StrangerDialog__ACICKHKFILK
                                (__this_02,(LabelButton_o *)(__this->fields)._storeButton,
                                 (__this->fields).BIOGAAPDOHK,(__this->fields).IIGDDBBHJEN,1,in_x5);
                      pBVar10 = (__this->fields)._storeButton;
                      pSVar3 = (System_Action_object__o *)
                               thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                      System_Action<object>___ctor();
                      if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                        SFButton__RemoveEventListener
                                  ((SFButton_o *)pBVar10,2,pSVar3,(MethodInfo *)0x0);
                        pBVar10 = (__this->fields)._storeButton;
                        pSVar3 = (System_Action_object__o *)
                                 thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                        System_Action<object>___ctor();
                        if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                          SFButton__AddEventListener
                                    ((SFButton_o *)pBVar10,2,pSVar3,(MethodInfo *)0x0);
                          pBVar10 = (__this->fields)._storeButton;
                          if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                            pUVar2 = UnityEngine_Component__get_gameObject
                                               ((UnityEngine_Component_o *)pBVar10,(MethodInfo *)0x0
                                               );
                            bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                                              ((__this->fields).IIGDDBBHJEN,(MethodInfo *)0x0);
                            if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                              UnityEngine_GameObject__SetActive
                                        (pUVar2,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
                              pBVar10 = (__this->fields)._storeButton;
                              if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                                ButtonWithIcon__SetIcon
                                          (pBVar10,(__this->fields).CKOILAHDKCN,(MethodInfo *)0x0);
                                pBVar10 = (__this->fields)._acceptButton;
                                if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                                  __this_04 = (__this->fields)._storeButton;
                                  pUVar2 = UnityEngine_Component__get_gameObject
                                                     ((UnityEngine_Component_o *)pBVar10,
                                                      (MethodInfo *)0x0);
                                  if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
                                     (bVar1 = UnityEngine_GameObject__get_activeSelf
                                                        (pUVar2,(MethodInfo *)0x0),
                                     __this_04 != (ButtonWithIcon_o *)0x0)) {
                                    CJNHFNHJHPE = 2;
                                    if (!bVar1) {
                                      CJNHFNHJHPE = 0;
                                    }
                                    LabelButton__set_Control
                                              ((LabelButton_o *)__this_04,CJNHFNHJHPE,
                                               (MethodInfo *)0x0);
                                    __this_03 = (__this->fields).super.super._bottomStripe;
                                    if ((__this_03 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
                                       (pUVar4 = UnityEngine_Component__get_transform
                                                           ((UnityEngine_Component_o *)__this_03,
                                                            (MethodInfo *)0x0),
                                       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                                      UVar13 = UnityEngine_Transform__get_localPosition
                                                         (pUVar4,(MethodInfo *)0x0);
                                      pBVar10 = (__this->fields)._acceptButton;
                                      if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                                        pUVar5 = (UnityEngine_RectTransform_o *)
                                                 UnityEngine_Component__GetComponent<object>
                                                           ((UnityEngine_Component_o *)pBVar10,
                                                                                                                        
                                                  Method_UnityEngine_Component_GetComponent<RectTransform>__
                                                  );
                                        if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                                          UVar11 = UnityEngine_RectTransform__get_rect
                                                             (pUVar5,(MethodInfo *)0x0);
                                          pBVar10 = (__this->fields)._rejectButton;
                                          if ((pBVar10 != (ButtonWithIcon_o *)0x0) &&
                                             (pUVar5 = (UnityEngine_RectTransform_o *)
                                                       UnityEngine_Component__GetComponent<object>
                                                                 ((UnityEngine_Component_o *)pBVar10
                                                                  ,
                                                  Method_UnityEngine_Component_GetComponent<RectTransform>__
                                                  ), pUVar5 != (UnityEngine_RectTransform_o *)0x0))
                                          {
                                            UVar12 = UnityEngine_RectTransform__get_rect
                                                               (pUVar5,(MethodInfo *)0x0);
                                            pBVar10 = (__this->fields)._rejectButton;
                                            if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                                              pUVar4 = UnityEngine_Component__get_transform
                                                                 ((UnityEngine_Component_o *)pBVar10
                                                                  ,(MethodInfo *)0x0);
                                              UnityEngine_TransformExtensions__SetLocalPositionX
                                                        (pUVar4,(-40.0 - UVar11.fields.m_Width * 0.5
                                                                ) - UVar12.fields.m_Width * 0.5,
                                                         (MethodInfo *)0x0);
                                              pBVar10 = (__this->fields)._rejectButton;
                                              if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                                                value = UVar13.fields.y + 130.0;
                                                pUVar4 = UnityEngine_Component__get_transform
                                                                   ((UnityEngine_Component_o *)
                                                                    pBVar10,(MethodInfo *)0x0);
                                                UnityEngine_TransformExtensions__SetLocalPositionY
                                                          (pUVar4,value,(MethodInfo *)0x0);
                                                pBVar10 = (__this->fields)._acceptButton;
                                                if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                                                  pUVar4 = UnityEngine_Component__get_transform
                                                                     ((UnityEngine_Component_o *)
                                                                      pBVar10,(MethodInfo *)0x0);
                                                  UnityEngine_TransformExtensions__SetLocalPositionX
                                                            (pUVar4,0.0,(MethodInfo *)0x0);
                                                  pBVar10 = (__this->fields)._acceptButton;
                                                  if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                                                    pUVar4 = UnityEngine_Component__get_transform
                                                                       ((UnityEngine_Component_o *)
                                                                        pBVar10,(MethodInfo *)0x0);
                                                                                                        
                                                  UnityEngine_TransformExtensions__SetLocalPositionY
                                                            (pUVar4,value,(MethodInfo *)0x0);
                                                  pBVar10 = (__this->fields)._acceptButton;
                                                  if ((pBVar10 != (ButtonWithIcon_o *)0x0) &&
                                                     (pUVar5 = (UnityEngine_RectTransform_o *)
                                                                                                                              
                                                  UnityEngine_Component__GetComponent<object>
                                                            ((UnityEngine_Component_o *)pBVar10,
                                                                                                                          
                                                  Method_UnityEngine_Component_GetComponent<RectTransform>__
                                                  ), pUVar5 != (UnityEngine_RectTransform_o *)0x0))
                                                  {
                                                    UVar11 = UnityEngine_RectTransform__get_rect
                                                                       (pUVar5,(MethodInfo *)0x0);
                                                    pBVar10 = (__this->fields)._storeButton;
                                                    if ((pBVar10 != (ButtonWithIcon_o *)0x0) &&
                                                       (pUVar5 = (UnityEngine_RectTransform_o *)
                                                                                                                                  
                                                  UnityEngine_Component__GetComponent<object>
                                                            ((UnityEngine_Component_o *)pBVar10,
                                                                                                                          
                                                  Method_UnityEngine_Component_GetComponent<RectTransform>__
                                                  ), pUVar5 != (UnityEngine_RectTransform_o *)0x0))
                                                  {
                                                    UVar12 = UnityEngine_RectTransform__get_rect
                                                                       (pUVar5,(MethodInfo *)0x0);
                                                    pBVar10 = (__this->fields)._storeButton;
                                                    if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                                                      pUVar4 = UnityEngine_Component__get_transform
                                                                         ((UnityEngine_Component_o *
                                                                          )pBVar10,(MethodInfo *)0x0
                                                                         );
                                                                                                            
                                                  UnityEngine_TransformExtensions__SetLocalPositionX
                                                            (pUVar4,UVar11.fields.m_Width * 0.5 +
                                                                    40.0 + UVar12.fields.m_Width *
                                                                           0.5,(MethodInfo *)0x0);
                                                  pBVar10 = (__this->fields)._storeButton;
                                                  if (pBVar10 != (ButtonWithIcon_o *)0x0) {
                                                    pUVar4 = UnityEngine_Component__get_transform
                                                                       ((UnityEngine_Component_o *)
                                                                        pBVar10,(MethodInfo *)0x0);
                                                                                                        
                                                  UnityEngine_TransformExtensions__SetLocalPositionY
                                                            (pUVar4,value,(MethodInfo *)0x0);
                                                  if ((__this->fields).KGEDEAGBKGB == false) {
                                                    return;
                                                  }
                                                  pSVar6 = (__this->fields)._checkBox;
                                                  if ((pSVar6 != (SFToggle_o *)0x0) &&
                                                     (pUVar2 = UnityEngine_Component__get_gameObject
                                                                         ((UnityEngine_Component_o *
                                                                          )pSVar6,(MethodInfo *)0x0)
                                                     , pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                                                    UnityEngine_GameObject__SetActive
                                                              (pUVar2,true,(MethodInfo *)0x0);
                                                    pSVar6 = (__this->fields)._checkBox;
                                                    if (pSVar6 != (SFToggle_o *)0x0) {
                                                      UnityEngine_UI_Toggle__set_isOn
                                                                ((UnityEngine_UI_Toggle_o *)pSVar6,
                                                                 (__this->fields).PKGLLMLHGPC,
                                                                 (MethodInfo *)0x0);
                                                      pSVar6 = (__this->fields)._checkBox;
                                                      if (pSVar6 != (SFToggle_o *)0x0) {
                                                        __this_05 = (
                                                  UnityEngine_Events_UnityEvent_bool__o *)
                                                  (pSVar6->fields).super.onValueChanged;
                                                  call = (UnityEngine_Events_UnityAction_T0__o *)
                                                         thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction<bool>_TypeInfo);
                                                  UnityEngine_Events_UnityAction<bool>___ctor();
                                                  if (__this_05 !=
                                                      (UnityEngine_Events_UnityEvent_bool__o *)0x0)
                                                  {
                                                    UnityEngine_Events_UnityEvent<bool>__AddListener
                                                              (__this_05,call,
                                                                                                                              
                                                  Method_UnityEngine_Events_UnityEvent<bool>_AddListener__
                                                  );
                                                  pSVar6 = (__this->fields)._checkBox;
                                                  if (pSVar6 != (SFToggle_o *)0x0) {
                                                    pUVar4 = UnityEngine_Component__get_transform
                                                                       ((UnityEngine_Component_o *)
                                                                        pSVar6,(MethodInfo *)0x0);
                                                                                                        
                                                  UnityEngine_TransformExtensions__SetLocalPositionY
                                                            (pUVar4,value,(MethodInfo *)0x0);
                                                  pNVar7 = (__this->fields)._checkBoxLabel;
                                                  if ((pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)
                                                     && (pUVar2 = 
                                                  UnityEngine_Component__get_gameObject
                                                            ((UnityEngine_Component_o *)pNVar7,
                                                             (MethodInfo *)0x0),
                                                  pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                                                    UnityEngine_GameObject__SetActive
                                                              (pUVar2,true,(MethodInfo *)0x0);
                                                    pNVar7 = (__this->fields)._checkBoxLabel;
                                                    if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)
                                                    {
                                                      Nekki_SF2_GUI_LabelAlias__set_LabelFontSize
                                                                (pNVar7,0x67,(MethodInfo *)0x0);
                                                      pNVar7 = (__this->fields)._checkBoxLabel;
                                                      if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished
                                                          == 0) {
                                                        thunk_FUN_01ba7564();
                                                      }
                                                      if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)
                                                                    0x0) {
                                                        pBVar8 = BHEDGAKGKPO_TypeInfo->static_fields
                                                        ;
                                                        (*(pNVar7->klass->vtable)._23_set_color.
                                                          methodPtr)((ulong)(uint)(pBVar8->
                                                  FHIAKPJBBCB).fields.r,
                                                  (pBVar8->FHIAKPJBBCB).fields.g,
                                                  (pBVar8->FHIAKPJBBCB).fields.b,
                                                  (pBVar8->FHIAKPJBBCB).fields.a,pNVar7,
                                                  (pNVar7->klass->vtable)._23_set_color.method);
                                                  pNVar7 = (__this->fields)._checkBoxLabel;
                                                  if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                                                    Nekki_SF2_GUI_LabelAlias__set_Alias
                                                              (pNVar7,(__this->fields).JKBAACEKGJF,
                                                               (MethodInfo *)0x0);
                                                    pNVar7 = (__this->fields)._checkBoxLabel;
                                                    if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)
                                                    {
                                                      pUVar4 = UnityEngine_Component__get_transform
                                                                         ((UnityEngine_Component_o *
                                                                          )pNVar7,(MethodInfo *)0x0)
                                                      ;
                                                                                                            
                                                  UnityEngine_TransformExtensions__SetLocalPositionY
                                                            (pUVar4,value,(MethodInfo *)0x0);
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
          }
        }
      }
    }
  }
LAB_0327afdc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

