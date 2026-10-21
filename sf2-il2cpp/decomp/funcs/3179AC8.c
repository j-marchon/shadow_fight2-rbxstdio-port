// Nekki.SF2.GUI.Dialogs.StrangerDialog$$PMLICAPHBJD @ RVA 0x3179AC8

void Nekki_SF2_GUI_Dialogs_StrangerDialog__PMLICAPHBJD
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  UnityEngine_Transform_o *pUVar4;
  ButtonWithIcon_o *pBVar5;
  LabelButton_o *pLVar6;
  UnityEngine_GameObject_o *pUVar7;
  SFToggle_o *pSVar8;
  Nekki_SF2_GUI_LabelAlias_o *pNVar9;
  UnityEngine_RectTransform_o *pUVar10;
  MethodInfo *method_00;
  undefined4 extraout_var;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Rect_o UVar13;
  
  if ((DAT_04566981 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566981 = 1;
  }
  Nekki_SF2_GUI_Dialogs_StoryDialog__PMLICAPHBJD
            ((Nekki_SF2_GUI_Dialogs_StoryDialog_o *)__this,(MethodInfo *)0x0);
  iVar2 = Nekki_SF2_GUI_Dialogs_StrangerDialog__OALFHNKDIHC(__this,method_00);
  if (iVar2 == 3) {
    pNVar3 = (__this->fields).super.super._bottomStripe;
    if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_03279e58;
    UVar12 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
    pBVar5 = (__this->fields)._storeButton;
    fVar11 = UVar12.fields.y + 130.0;
    if ((__this->fields).KGEDEAGBKGB != false) {
      fVar11 = fVar11 + 130.0;
    }
    if (pBVar5 == (ButtonWithIcon_o *)0x0) goto LAB_03279e58;
    pUVar4 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pBVar5,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalPositionY(pUVar4,fVar11,(MethodInfo *)0x0);
    pBVar5 = (__this->fields)._acceptButton;
    if (pBVar5 == (ButtonWithIcon_o *)0x0) goto LAB_03279e58;
    pUVar4 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pBVar5,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalPositionY(pUVar4,fVar11,(MethodInfo *)0x0);
    pBVar5 = (__this->fields)._rejectButton;
    if (pBVar5 == (ButtonWithIcon_o *)0x0) goto LAB_03279e58;
    pUVar4 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pBVar5,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalPositionY(pUVar4,fVar11,(MethodInfo *)0x0);
  }
  if ((__this->fields).KGEDEAGBKGB == false) {
    return;
  }
  pLVar6 = (__this->fields).super.super._btnOK;
  if ((pLVar6 == (LabelButton_o *)0x0) ||
     (pUVar7 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0),
     pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03279e58;
                    /* try { // try from 03279bc8 to 03379e13 has its CatchHandler @ 03279bc8
                       catch() { ... } // from try @ 03279bc8 with catch @ 03279bc8
                       catch() { ... } // from try @ 0327a06c with catch @ 03279bc8
                       catch() { ... } // from try @ 0327a16c with catch @ 03279bc8
                       catch() { ... } // from try @ 0327a174 with catch @ 03279bc8
                       catch() { ... } // from try @ 0327a23c with catch @ 03279bc8 */
  bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar7,(MethodInfo *)0x0);
  if (bVar1) {
    pLVar6 = (__this->fields).super.super._btnOK;
    if ((pLVar6 == (LabelButton_o *)0x0) ||
       (pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_03279e58;
    UVar12 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
    pLVar6 = (__this->fields).super.super._btnOK;
    if (pLVar6 == (LabelButton_o *)0x0) goto LAB_03279e58;
    pUVar4 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalPositionY
              (pUVar4,UVar12.fields.y + 100.0 + 30.0,(MethodInfo *)0x0);
  }
  pLVar6 = (__this->fields).super.super._btnCancel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pLVar6 = (__this->fields).super.super._btnCancel;
    if ((pLVar6 == (LabelButton_o *)0x0) ||
       (pUVar7 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0),
       pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03279e58;
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar7,(MethodInfo *)0x0);
    if (bVar1) {
      pLVar6 = (__this->fields).super.super._btnCancel;
      if ((pLVar6 == (LabelButton_o *)0x0) ||
         (pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_03279e58;
      UVar12 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
      pLVar6 = (__this->fields).super.super._btnCancel;
      if (pLVar6 == (LabelButton_o *)0x0) goto LAB_03279e58;
      pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionY
                (pUVar4,UVar12.fields.y + 100.0 + 30.0,(MethodInfo *)0x0);
    }
  }
  pSVar8 = (__this->fields)._checkBox;
  if ((pSVar8 != (SFToggle_o *)0x0) &&
     (pUVar7 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pSVar8,(MethodInfo *)0x0),
     pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar7,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pNVar3 = (__this->fields).super.super._bottomStripe;
    if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
      UVar12 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
      pSVar8 = (__this->fields)._checkBox;
      if (pSVar8 != (SFToggle_o *)0x0) {
        fVar11 = UVar12.fields.y + 90.0;
        pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pSVar8,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalPositionY(pUVar4,fVar11,(MethodInfo *)0x0);
        pNVar9 = (__this->fields)._checkBoxLabel;
        if (pNVar9 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          pUVar4 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionY(pUVar4,fVar11,(MethodInfo *)0x0);
          pSVar8 = (__this->fields)._checkBox;
          if ((pSVar8 != (SFToggle_o *)0x0) &&
             (pUVar10 = (UnityEngine_RectTransform_o *)
                        UnityEngine_Component__GetComponent<object>
                                  ((UnityEngine_Component_o *)pSVar8,
                                   Method_UnityEngine_Component_GetComponent<RectTransform>__),
             pUVar10 != (UnityEngine_RectTransform_o *)0x0)) {
            UVar13 = UnityEngine_RectTransform__get_rect(pUVar10,(MethodInfo *)0x0);
            pNVar9 = (__this->fields)._checkBoxLabel;
            if (pNVar9 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              fVar11 = (float)(*(pNVar9->klass->vtable)._79_get_preferredWidth.methodPtr)
                                        (CONCAT44(extraout_var,UVar13.fields.m_XMin),
                                         UVar13.fields.m_YMin,UVar13.fields.m_Width,
                                         UVar13.fields.m_Height,pNVar9,
                                         (pNVar9->klass->vtable)._79_get_preferredWidth.method);
              pSVar8 = (__this->fields)._checkBox;
              if (pSVar8 != (SFToggle_o *)0x0) {
                pUVar4 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pSVar8,(MethodInfo *)0x0);
                UnityEngine_TransformExtensions__SetLocalPositionX
                          (pUVar4,(UVar13.fields.m_Width * 0.5 + fVar11) * -0.5,(MethodInfo *)0x0);
                pSVar8 = (__this->fields)._checkBox;
                if ((pSVar8 != (SFToggle_o *)0x0) &&
                   (pUVar4 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)pSVar8,(MethodInfo *)0x0),
                   pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                  UVar12 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
                  pSVar8 = (__this->fields)._checkBox;
                  if ((pSVar8 != (SFToggle_o *)0x0) &&
                     (pUVar10 = (UnityEngine_RectTransform_o *)
                                UnityEngine_Component__GetComponent<object>
                                          ((UnityEngine_Component_o *)pSVar8,
                                           Method_UnityEngine_Component_GetComponent<RectTransform>__
                                          ), pUVar10 != (UnityEngine_RectTransform_o *)0x0)) {
                    UVar13 = UnityEngine_RectTransform__get_rect(pUVar10,(MethodInfo *)0x0);
                    pNVar9 = (__this->fields)._checkBoxLabel;
                    if (pNVar9 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                      pUVar4 = UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0);
                      pNVar9 = (__this->fields)._checkBoxLabel;
                      if (pNVar9 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 03279e14 to 03379e3b has its CatchHandler @ 0327a198 */
                        fVar11 = (float)(*(pNVar9->klass->vtable)._79_get_preferredWidth.methodPtr)
                                                  (pNVar9,(pNVar9->klass->vtable).
                                                          _79_get_preferredWidth.method);
                        UnityEngine_TransformExtensions__SetLocalPositionX
                                  (pUVar4,UVar12.fields.x + UVar13.fields.m_Width * 0.5 +
                                          fVar11 * 0.5,(MethodInfo *)0x0);
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
LAB_03279e58:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

