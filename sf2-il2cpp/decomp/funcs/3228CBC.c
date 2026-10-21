// UIFigures.UICircle$$OnPopulateMesh @ RVA 0x3228CBC

void UIFigures_UICircle__OnPopulateMesh
               (UIFigures_UICircle_o *__this,UnityEngine_UI_VertexHelper_o *BALEEENOIJA,
               MethodInfo *method)

{
  float KBDPEGCICFC;
  UnityEngine_Color_o GKBNFBINIIP;
  UnityEngine_RectTransform_o *pUVar1;
  undefined4 uVar2;
  UnityEngine_Vector2_o EEGKJKNENDE;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Sprite_o *pUVar7;
  UnityEngine_Vector2_Fields UVar8;
  UnityEngine_Rect_o UVar9;
  UnityEngine_Rect_o UVar10;
  UnityEngine_Vector2_o KGAENKKEEPK;
  
  UIFigures_UIFigure__OnPopulateMesh((UIFigures_UIFigure_o *)__this,BALEEENOIJA,(MethodInfo *)0x0);
  pUVar7 = (__this->fields).super._Sprite;
  UVar8 = (__this->fields).super.CKIBKNMJGAJ.fields;
  pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                     ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UVar9 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                       ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      EEGKJKNENDE.fields.x = (SUB84(pUVar7,0) + UVar8.x) * 0.5;
      EEGKJKNENDE.fields.y = ((float)((ulong)pUVar7 >> 0x20) + UVar8.y) * 0.5;
      UVar10 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      fVar5 = UVar10.fields.m_Height;
      fVar4 = UVar10.fields.m_Width;
      fVar3 = UVar10.fields.m_YMin;
      KBDPEGCICFC = (__this->fields).super.INCPCFENLPJ.fields.x;
      fVar6 = fVar5 * 0.5;
      uVar2 = (*(__this->klass->vtable)._22_get_color.methodPtr)
                        (__this,(__this->klass->vtable)._22_get_color.method);
      GKBNFBINIIP.fields.g = fVar3;
      GKBNFBINIIP.fields.r = (float)uVar2;
      GKBNFBINIIP.fields.b = fVar4;
      GKBNFBINIIP.fields.a = fVar5;
      KGAENKKEEPK.fields.y = fVar6;
      KGAENKKEEPK.fields.x = UVar9.fields.m_Width * 0.5;
      DDFDPLHKGKB__MENPNKHNDCN
                (BALEEENOIJA,EEGKJKNENDE,KGAENKKEEPK,0.0,6.2831855,(int32_t)KBDPEGCICFC,GKBNFBINIIP,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

