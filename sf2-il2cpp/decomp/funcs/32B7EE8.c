// UIFigures.UISkewRect$$OnPopulateMesh @ RVA 0x32B7EE8

void UIFigures_UISkewRect__OnPopulateMesh
               (UIFigures_UISkewRect_o *__this,UnityEngine_UI_VertexHelper_o *BALEEENOIJA,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  MethodInfo *method_00;
  UnityEngine_Rect_o UVar2;
  UnityEngine_Rect_o UVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Vector2_o PGFAIJMMOHJ;
  
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
      pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
        UVar4 = UnityEngine_RectTransform__get_pivot(pUVar1,(MethodInfo *)0x0);
        UVar4.fields.y = (float)((ulong)UVar4.fields >> 0x20);
        PGFAIJMMOHJ.fields.y = UVar3.fields.m_Height;
        PGFAIJMMOHJ.fields.x = UVar2.fields.m_Width;
        UIFigures_UISkewRect__MGEMOHEBNPF(__this,BALEEENOIJA,PGFAIJMMOHJ,UVar4,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

