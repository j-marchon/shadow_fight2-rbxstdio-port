// TypeDefIndex 2815
// Namespace: UIFigures
// [ExecuteInEditMode]
// public class UIFigure : MaskableGraphic
// Fields:
//   public Sprite _Sprite; // 0xD8
//   protected Vector2 CKIBKNMJGAJ; // 0xE0
//   protected Vector2 INCPCFENLPJ; // 0xE8

// ===== protected override void OnPopulateMesh(VertexHelper BALEEENOIJA)  [RVA 0x3423624]
// UIFigures.UIFigure$$OnPopulateMesh @ RVA 0x3423624

void UIFigures_UIFigure__OnPopulateMesh
               (UIFigures_UIFigure_o *__this,UnityEngine_UI_VertexHelper_o *BALEEENOIJA,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Rect_o UVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector2_o UVar6;
  
  pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                     ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UVar5 = UnityEngine_RectTransform__get_pivot(pUVar1,(MethodInfo *)0x0);
    pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                       ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar6 = UnityEngine_RectTransform__get_pivot(pUVar1,(MethodInfo *)0x0);
      *(float *)&(__this->fields)._Sprite = 0.0 - UVar5.fields.x;
      *(float *)((long)&(__this->fields)._Sprite + 4) = 0.0 - UVar6.fields.y;
      pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
        UVar5 = UnityEngine_RectTransform__get_pivot(pUVar1,(MethodInfo *)0x0);
        pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
          UVar6 = UnityEngine_RectTransform__get_pivot(pUVar1,(MethodInfo *)0x0);
          fVar3 = *(float *)&(__this->fields)._Sprite;
          (__this->fields).CKIBKNMJGAJ.fields.x = 1.0 - UVar5.fields.x;
          (__this->fields).CKIBKNMJGAJ.fields.y = 1.0 - UVar6.fields.y;
          pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
          if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
            UVar4 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
            fVar2 = *(float *)((long)&(__this->fields)._Sprite + 4);
            *(float *)&(__this->fields)._Sprite = fVar3 * UVar4.fields.m_Width;
            pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                               ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
            if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
              UVar4 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
              fVar3 = (__this->fields).CKIBKNMJGAJ.fields.x;
              *(float *)((long)&(__this->fields)._Sprite + 4) = fVar2 * UVar4.fields.m_Height;
              pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                                 ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
              if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                UVar4 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
                fVar2 = (__this->fields).CKIBKNMJGAJ.fields.y;
                (__this->fields).CKIBKNMJGAJ.fields.x = fVar3 * UVar4.fields.m_Width;
                pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                                   ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
                if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                  UVar4 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
                  (__this->fields).CKIBKNMJGAJ.fields.y = fVar2 * UVar4.fields.m_Height;
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


// ===== public override Texture get_mainTexture()  [RVA 0x3423754]
// UIFigures.UIFigure$$get_mainTexture @ RVA 0x3423754

UnityEngine_Texture_o *
UIFigures_UIFigure__get_mainTexture(UIFigures_UIFigure_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Texture_o *pUVar2;
  MethodInfo *extraout_x1;
  UnityEngine_Vector3_array *pUVar3;
  
  if ((DAT_045680f4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_Graphic_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045680f4 = 1;
    method = extraout_x1;
  }
  pUVar3 = (__this->fields).super.m_Corners;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((UnityEngine_UI_Graphic_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    return (UnityEngine_Texture_o *)UnityEngine_UI_Graphic_TypeInfo->static_fields->s_WhiteTexture;
  }
  pUVar3 = (__this->fields).super.m_Corners;
  if (pUVar3 != (UnityEngine_Vector3_array *)0x0) {
    pUVar2 = (UnityEngine_Texture_o *)
             UnityEngine_Sprite__get_texture((UnityEngine_Sprite_o *)pUVar3,(MethodInfo *)0x0);
    return pUVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Refresh()  [RVA 0x3423808]
// UIFigures.UIFigure$$Refresh @ RVA 0x3423808

void UIFigures_UIFigure__Refresh(UIFigures_UIFigure_o *__this,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x03523814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._28_SetVerticesDirty.methodPtr)
            (__this,(__this->klass->vtable)._28_SetVerticesDirty.method);
  return;
}


// ===== public void .ctor()  [RVA 0x3423818]
// UIFigures.UIFigure$$.ctor @ RVA 0x3423818

void UIFigures_UIFigure___ctor(UIFigures_UIFigure_o *__this,MethodInfo *method)

{
  UnityEngine_UI_MaskableGraphic___ctor
            ((UnityEngine_UI_MaskableGraphic_o *)__this,(MethodInfo *)0x0);
  return;
}

