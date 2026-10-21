// Nekki.SF2.GUI.Dialogs.StrangerDialog$$GBHBDMMKPLO @ RVA 0x317A3F0

void Nekki_SF2_GUI_Dialogs_StrangerDialog__GBHBDMMKPLO
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,System_String_o *NONPLOOOOAG,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  ProgressBar_o *pPVar6;
  UnityEngine_GameObject_o *__this_00;
  float fVar7;
  float fVar8;
  UnityEngine_Vector2_o UVar9;
  UnityEngine_Rect_o UVar10;
  UnityEngine_Vector3_o UVar11;
  
  pNVar2 = (__this->fields).super._text;
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,NONPLOOOOAG,(MethodInfo *)0x0);
    pNVar2 = (__this->fields).super._text;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
      if ((__this->fields).super.ACPDELFFFHF == false) {
        fVar7 = 0.0;
      }
      else {
        pUVar4 = Nekki_SF2_GUI_Dialogs_StoryDialog__HJHNCCJBIIP
                           ((Nekki_SF2_GUI_Dialogs_StoryDialog_o *)__this,(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_0327a6cc;
        UVar11 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
        pNVar2 = (__this->fields).super._text;
        if (pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0327a6cc;
        fVar8 = (__this->fields).super.BNJJNFFCCCA;
        fVar7 = (__this->fields).super.OAMNJIMNBAC;
        pUVar5 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0);
        if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0327a6cc;
        UVar10 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
        fVar7 = (UVar11.fields.x - fVar8) + 40.0 + fVar7 * 0.9 * 0.5 + UVar10.fields.m_Width * 0.5;
      }
      UnityEngine_TransformExtensions__SetLocalPositionX(pUVar3,fVar7,(MethodInfo *)0x0);
      pNVar2 = (__this->fields).super._text;
      if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__SetLocalPositionY(pUVar3,0.0,(MethodInfo *)0x0);
        pPVar6 = (__this->fields)._difficult;
        if ((pPVar6 != (ProgressBar_o *)0x0) &&
           (__this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pPVar6,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_GameObject_o *)0x0)) {
          bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
          if (!bVar1) {
LAB_0327a66c:
            (*(__this->klass->vtable)._34_DCGKJKKNCEP.methodPtr)
                      (__this,(__this->klass->vtable)._34_DCGKJKKNCEP.method);
            (*(__this->klass->vtable)._17_GLJGIJNALCA.methodPtr)
                      (__this,(__this->klass->vtable)._17_GLJGIJNALCA.method);
            (*(__this->klass->vtable)._14_KHKLLNFCMME.methodPtr)
                      (__this,(__this->klass->vtable)._14_KHKLLNFCMME.method);
                    /* WARNING: Could not recover jumptable at 0x0327a6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(__this->klass->vtable)._42_PMLICAPHBJD.methodPtr)
                      (__this,(__this->klass->vtable)._42_PMLICAPHBJD.method);
            return;
          }
          pPVar6 = (__this->fields)._difficult;
          if (pPVar6 != (ProgressBar_o *)0x0) {
            pUVar3 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pPVar6,(MethodInfo *)0x0);
            UnityEngine_TransformExtensions__SetLocalPositionX(pUVar3,280.0,(MethodInfo *)0x0);
            pNVar2 = (__this->fields)._difficultLabel;
            if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              pUVar3 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
              UnityEngine_TransformExtensions__SetLocalPositionX(pUVar3,280.0,(MethodInfo *)0x0);
              pNVar2 = (__this->fields).super._text;
              if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                pUVar3 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
                pNVar2 = (__this->fields)._difficultLabel;
                if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                  fVar7 = (float)(*(pNVar2->klass->vtable)._82_get_preferredHeight.methodPtr)
                                           (pNVar2,(pNVar2->klass->vtable)._82_get_preferredHeight.
                                                   method);
                  UnityEngine_TransformExtensions__SetLocalPositionY
                            (pUVar3,fVar7 * 0.25 + 70.0,(MethodInfo *)0x0);
                  pPVar6 = (__this->fields)._difficult;
                  if (pPVar6 != (ProgressBar_o *)0x0) {
                    pUVar3 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)pPVar6,(MethodInfo *)0x0);
                    pNVar2 = (__this->fields).super._text;
                    if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                       (pUVar4 = UnityEngine_Component__get_transform
                                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
                       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                      UVar11 = UnityEngine_Transform__get_localPosition(pUVar4,(MethodInfo *)0x0);
                      pNVar2 = (__this->fields).super._text;
                      if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                         (pUVar5 = UnityEngine_UI_Graphic__get_rectTransform
                                             ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0),
                         pUVar5 != (UnityEngine_RectTransform_o *)0x0)) {
                        UVar9 = UnityEngine_RectTransform__get_sizeDelta(pUVar5,(MethodInfo *)0x0);
                        UnityEngine_TransformExtensions__SetLocalPositionY
                                  (pUVar3,UVar11.fields.y + -80.0 + UVar9.fields.y * -0.5,
                                   (MethodInfo *)0x0);
                        pNVar2 = (__this->fields)._difficultLabel;
                        if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                          pUVar3 = UnityEngine_Component__get_transform
                                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
                          pPVar6 = (__this->fields)._difficult;
                          if ((pPVar6 != (ProgressBar_o *)0x0) &&
                             (pUVar4 = UnityEngine_Component__get_transform
                                                 ((UnityEngine_Component_o *)pPVar6,
                                                  (MethodInfo *)0x0),
                             pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                            UVar11 = UnityEngine_Transform__get_localPosition
                                               (pUVar4,(MethodInfo *)0x0);
                            pNVar2 = (__this->fields)._difficultLabel;
                            if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                              fVar7 = (float)(*(pNVar2->klass->vtable)._82_get_preferredHeight.
                                               methodPtr)(UVar11.fields.x,UVar11.fields.y,
                                                          UVar11.fields.z,pNVar2,
                                                          (pNVar2->klass->vtable).
                                                          _82_get_preferredHeight.method);
                              UnityEngine_TransformExtensions__SetLocalPositionY
                                        (pUVar3,UVar11.fields.y + -60.0 + fVar7 * -0.25,
                                         (MethodInfo *)0x0);
                              goto LAB_0327a66c;
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
LAB_0327a6cc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

