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

