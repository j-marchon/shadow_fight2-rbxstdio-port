// UIFigures.UIArc$$OnPopulateMesh @ RVA 0x358F52C

void UIFigures_UIArc__OnPopulateMesh
               (UIFigures_UIArc_o *__this,UnityEngine_UI_VertexHelper_o *BALEEENOIJA,
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
  float CIBIKDNNBAM;
  UnityEngine_Sprite_o *pUVar6;
  float IGCGOHHCMHD;
  UnityEngine_Vector2_Fields UVar7;
  float fVar8;
  UnityEngine_Rect_o UVar9;
  UnityEngine_Rect_o UVar10;
  UnityEngine_Vector2_o KGAENKKEEPK;
  
  UIFigures_UIFigure__OnPopulateMesh((UIFigures_UIFigure_o *)__this,BALEEENOIJA,(MethodInfo *)0x0);
  pUVar6 = (__this->fields).super._Sprite;
  UVar7 = (__this->fields).super.CKIBKNMJGAJ.fields;
  pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                     ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UVar9 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                       ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      EEGKJKNENDE.fields.x = (SUB84(pUVar6,0) + UVar7.x) * 0.5;
      EEGKJKNENDE.fields.y = ((float)((ulong)pUVar6 >> 0x20) + UVar7.y) * 0.5;
      UVar10 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      fVar5 = UVar10.fields.m_Height;
      fVar4 = UVar10.fields.m_Width;
      fVar3 = UVar10.fields.m_YMin;
      IGCGOHHCMHD = (__this->fields).super.INCPCFENLPJ.fields.y;
      CIBIKDNNBAM = (float)(__this->fields)._Segments;
      KBDPEGCICFC = (__this->fields).super.INCPCFENLPJ.fields.x;
      fVar8 = fVar5 * 0.5;
      uVar2 = (*(__this->klass->vtable)._22_get_color.methodPtr)
                        (__this,(__this->klass->vtable)._22_get_color.method);
      GKBNFBINIIP.fields.g = fVar3;
      GKBNFBINIIP.fields.r = (float)uVar2;
      GKBNFBINIIP.fields.b = fVar4;
      GKBNFBINIIP.fields.a = fVar5;
      KGAENKKEEPK.fields.y = fVar8;
      KGAENKKEEPK.fields.x = UVar9.fields.m_Width * 0.5;
      DDFDPLHKGKB__MENPNKHNDCN
                (BALEEENOIJA,EEGKJKNENDE,KGAENKKEEPK,CIBIKDNNBAM,IGCGOHHCMHD,(int32_t)KBDPEGCICFC,
                 GKBNFBINIIP,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

