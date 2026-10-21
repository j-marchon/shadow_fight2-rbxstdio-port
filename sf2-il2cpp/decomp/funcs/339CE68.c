// Nekki.SF2.GUI.Map.BattlePrizeElement$$ODOKFKCAILG @ RVA 0x339CE68

void Nekki_SF2_GUI_Map_BattlePrizeElement__ODOKFKCAILG
               (Nekki_SF2_GUI_Map_BattlePrizeElement_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_RectTransform_o *pUVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  float fVar6;
  float fVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Rect_o UVar13;
  UnityEngine_Rect_o UVar14;
  
  pNVar1 = (__this->fields)._value;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    fVar7 = (pNVar1->fields).super._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields.y;
    fVar9 = (pNVar1->fields).super._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields.z;
    pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                       ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      fVar7 = fVar7 + fVar7;
      fVar9 = fVar9 + fVar9;
      if (fVar7 <= 20.0) {
        fVar7 = 20.0;
      }
      if (fVar9 <= 40.0) {
        fVar9 = 40.0;
      }
      value.fields.y = fVar9;
      value.fields.x = fVar7;
      UnityEngine_RectTransform__set_sizeDelta(pUVar2,value,(MethodInfo *)0x0);
      fVar6 = (__this->fields)._maxTextHeight;
      pNVar3 = (__this->fields)._icon;
      if (fVar9 <= fVar6) {
        fVar6 = fVar9;
      }
      if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
        UVar13 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._icon;
        if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                               ((UnityEngine_UI_Graphic_o *)pNVar3,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar11 = UnityEngine_Transform__get_localScale
                             ((UnityEngine_Transform_o *)pUVar2,(MethodInfo *)0x0);
          pNVar3 = (__this->fields)._icon;
          if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
             (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                                 ((UnityEngine_UI_Graphic_o *)pNVar3,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
            UVar14 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
            pNVar3 = (__this->fields)._icon;
            if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
               (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                                   ((UnityEngine_UI_Graphic_o *)pNVar3,(MethodInfo *)0x0),
               pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
              UVar12 = UnityEngine_Transform__get_localScale
                                 ((UnityEngine_Transform_o *)pUVar2,(MethodInfo *)0x0);
              pNVar3 = (__this->fields)._icon;
              if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                pUVar4 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
                UnityEngine_TransformExtensions__SetLocalPositionX
                          (pUVar4,fVar7 * -0.5 + (__this->fields)._offsetX * -0.5,(MethodInfo *)0x0)
                ;
                pNVar1 = (__this->fields)._value;
                if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                  fVar10 = UVar13.fields.m_Width * UVar11.fields.x;
                  pUVar4 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
                    /* try { // try from 0349cfa4 to 0359d06b has its CatchHandler @ 0349cfa4
                       catch() { ... } // from try @ 0349cfa4 with catch @ 0349cfa4
                       catch() { ... } // from try @ 0349d11c with catch @ 0349cfa4
                       catch() { ... } // from try @ 0349d1a0 with catch @ 0349cfa4
                       catch() { ... } // from try @ 0349d1a8 with catch @ 0349cfa4
                       catch() { ... } // from try @ 0349d254 with catch @ 0349cfa4 */
                  UnityEngine_TransformExtensions__SetLocalPositionX
                            (pUVar4,fVar10 * 0.5 + (__this->fields)._offsetX * 0.5,(MethodInfo *)0x0
                            );
                  pUVar5 = (__this->fields).KDONJHIKBON;
                  fVar9 = UVar14.fields.m_Height * UVar12.fields.y;
                  if (fVar9 <= fVar6) {
                    fVar9 = fVar6;
                  }
                  if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    uVar8 = (ulong)(uint)(fVar7 + fVar10 + (__this->fields)._offsetX);
                    (*(pUVar5->klass->vtable)._32_set_minWidth.methodPtr)
                              (uVar8,pUVar5,(pUVar5->klass->vtable)._32_set_minWidth.method);
                    pUVar5 = (__this->fields).KDONJHIKBON;
                    if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                      (*(pUVar5->klass->vtable)._36_set_preferredWidth.methodPtr)
                                (uVar8,pUVar5,(pUVar5->klass->vtable)._36_set_preferredWidth.method)
                      ;
                      pUVar5 = (__this->fields).KDONJHIKBON;
                      if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                        (*(pUVar5->klass->vtable)._34_set_minHeight.methodPtr)
                                  ((ulong)(uint)fVar9,pUVar5,
                                   (pUVar5->klass->vtable)._34_set_minHeight.method);
                        pUVar5 = (__this->fields).KDONJHIKBON;
                        if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0349d040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*(pUVar5->klass->vtable)._38_set_preferredHeight.methodPtr)
                                    ((ulong)(uint)fVar9,pUVar5,
                                     (pUVar5->klass->vtable)._38_set_preferredHeight.method);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

