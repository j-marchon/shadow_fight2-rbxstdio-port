// Nekki.SF2.GUI.Dialogs.StrangerDialog$$EGHBJLDNOMA @ RVA 0x317B908

void Nekki_SF2_GUI_Dialogs_StrangerDialog__EGHBJLDNOMA
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  ButtonWithIcon_o *pBVar1;
  UnityEngine_GameObject_o *pUVar2;
  LabelButton_o *pLVar3;
  UnityEngine_RectTransform_o *pUVar4;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_Transform_o *pUVar5;
  Nekki_SF2_GUI_LabelAlias_o *pNVar6;
  System_Action_object__o *pSVar7;
  float value;
  UnityEngine_Rect_o UVar8;
  UnityEngine_Vector3_o UVar9;
  
  if ((DAT_04566989 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_StrangerDialog_HFGKEOFLLPC__);
    FUN_01bab630(&StringLiteral_17765);
    DAT_04566989 = 1;
  }
  (__this->fields).super.super.NIEHEOKFPAN = StringLiteral_17765;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_Dialogs_StoryDialog__LCGFJKFJKJK
            ((Nekki_SF2_GUI_Dialogs_StoryDialog_o *)__this,3,(MethodInfo *)0x0);
  pBVar1 = (__this->fields)._acceptButton;
  if ((pBVar1 != (ButtonWithIcon_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pBVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    pBVar1 = (__this->fields)._rejectButton;
    if ((pBVar1 != (ButtonWithIcon_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pBVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      pBVar1 = (__this->fields)._storeButton;
      if ((pBVar1 != (ButtonWithIcon_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pBVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        pLVar3 = (__this->fields).super.super._btnOK;
        if (pLVar3 != (LabelButton_o *)0x0) {
          pUVar4 = (UnityEngine_RectTransform_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pLVar3,
                              Method_UnityEngine_Component_GetComponent<RectTransform>__);
          if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
            UVar8 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
            __this_00 = (__this->fields).super.super._bottomStripe;
            if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
               (pUVar5 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
               pUVar5 != (UnityEngine_Transform_o *)0x0)) {
              UVar9 = UnityEngine_Transform__get_localPosition(pUVar5,(MethodInfo *)0x0);
              pLVar3 = (__this->fields).super.super._btnOK;
              if (pLVar3 != (LabelButton_o *)0x0) {
                pUVar5 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pLVar3,(MethodInfo *)0x0);
                UnityEngine_TransformExtensions__SetLocalPositionX
                          (pUVar5,UVar8.fields.m_Width * 0.5 + 20.0,(MethodInfo *)0x0);
                pLVar3 = (__this->fields).super.super._btnOK;
                if (pLVar3 != (LabelButton_o *)0x0) {
                  value = UVar9.fields.y + 130.0;
                  pUVar5 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pLVar3,(MethodInfo *)0x0);
                  UnityEngine_TransformExtensions__SetLocalPositionY(pUVar5,value,(MethodInfo *)0x0)
                  ;
                  pLVar3 = (__this->fields).super.super._btnOK;
                  if ((pLVar3 != (LabelButton_o *)0x0) &&
                     (pNVar6 = (pLVar3->fields).Label, pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0))
                  {
                    Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar6,0x57,(MethodInfo *)0x0);
                    pLVar3 = (__this->fields).super.super._btnOK;
                    if (pLVar3 != (LabelButton_o *)0x0) {
                      (pLVar3->fields).super.super.ButtonId = 0xd;
                      pSVar7 = (System_Action_object__o *)
                               thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                      System_Action<object>___ctor();
                      SFButton__RemoveEventListener((SFButton_o *)pLVar3,2,pSVar7,(MethodInfo *)0x0)
                      ;
                      pLVar3 = (__this->fields).super.super._btnOK;
                      pSVar7 = (System_Action_object__o *)
                               thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                      System_Action<object>___ctor();
                      if (pLVar3 != (LabelButton_o *)0x0) {
                        SFButton__AddEventListener((SFButton_o *)pLVar3,2,pSVar7,(MethodInfo *)0x0);
                        pLVar3 = (__this->fields).super.super._btnCancel;
                        if ((pLVar3 != (LabelButton_o *)0x0) &&
                           (pUVar4 = (UnityEngine_RectTransform_o *)
                                     UnityEngine_Component__GetComponent<object>
                                               ((UnityEngine_Component_o *)pLVar3,
                                                Method_UnityEngine_Component_GetComponent<RectTransform>__
                                               ), pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
                          UVar8 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
                          pLVar3 = (__this->fields).super.super._btnCancel;
                          if (pLVar3 != (LabelButton_o *)0x0) {
                            pUVar5 = UnityEngine_Component__get_transform
                                               ((UnityEngine_Component_o *)pLVar3,(MethodInfo *)0x0)
                            ;
                            UnityEngine_TransformExtensions__SetLocalPositionX
                                      (pUVar5,UVar8.fields.m_Width * -0.5 + -20.0,(MethodInfo *)0x0)
                            ;
                            pLVar3 = (__this->fields).super.super._btnCancel;
                            if (pLVar3 != (LabelButton_o *)0x0) {
                              pUVar5 = UnityEngine_Component__get_transform
                                                 ((UnityEngine_Component_o *)pLVar3,
                                                  (MethodInfo *)0x0);
                              UnityEngine_TransformExtensions__SetLocalPositionY
                                        (pUVar5,value,(MethodInfo *)0x0);
                              pLVar3 = (__this->fields).super.super._btnCancel;
                              if ((pLVar3 != (LabelButton_o *)0x0) &&
                                 (pNVar6 = (pLVar3->fields).Label,
                                 pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
                                Nekki_SF2_GUI_LabelAlias__set_LabelFontSize
                                          (pNVar6,0x57,(MethodInfo *)0x0);
                                pLVar3 = (__this->fields).super.super._btnCancel;
                                if (pLVar3 != (LabelButton_o *)0x0) {
                                  (pLVar3->fields).super.super.ButtonId = 1;
                                  pSVar7 = (System_Action_object__o *)
                                           thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                                  System_Action<object>___ctor();
                                  SFButton__RemoveEventListener
                                            ((SFButton_o *)pLVar3,2,pSVar7,(MethodInfo *)0x0);
                                  pLVar3 = (__this->fields).super.super._btnCancel;
                                  pSVar7 = (System_Action_object__o *)
                                           thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                                  System_Action<object>___ctor();
                                  if (pLVar3 != (LabelButton_o *)0x0) {
                                    SFButton__AddEventListener
                                              ((SFButton_o *)pLVar3,2,pSVar7,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0327bc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                    (*(__this->klass->vtable)._42_PMLICAPHBJD.methodPtr)
                                              (__this,(__this->klass->vtable)._42_PMLICAPHBJD.method
                                              );
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

