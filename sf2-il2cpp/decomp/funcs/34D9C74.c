// UIFigures.UIRoundRectBorder$$OnPopulateMesh @ RVA 0x34D9C74

void UIFigures_UIRoundRectBorder__OnPopulateMesh
               (UIFigures_UIRoundRectBorder_o *__this,UnityEngine_UI_VertexHelper_o *BALEEENOIJA,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  MethodInfo *method_00;
  UnityEngine_Vector2_o ONPKLLJPABD;
  UnityEngine_Rect_o UVar2;
  UnityEngine_Rect_o UVar3;
  UnityEngine_Vector2_o DGNJLFEFJFD;
  
  method_00 = (MethodInfo *)0x0;
  UIFigures_UIFigure__OnPopulateMesh((UIFigures_UIFigure_o *)__this,BALEEENOIJA,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                     ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UVar2 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                       ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar3 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      ONPKLLJPABD.fields.y = UVar3.fields.m_YMin;
      DGNJLFEFJFD.fields.x = UVar2.fields.m_Width * 0.5;
      DGNJLFEFJFD.fields.y = UVar3.fields.m_Height * 0.5;
      ONPKLLJPABD.fields.x = 0.5;
      UIFigures_UIRoundRectBorder__Draw(__this,BALEEENOIJA,ONPKLLJPABD,DGNJLFEFJFD,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

