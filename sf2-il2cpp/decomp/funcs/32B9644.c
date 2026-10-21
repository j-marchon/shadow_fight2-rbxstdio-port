// UIFigures.UIArcBorder$$OnPopulateMesh @ RVA 0x32B9644

void UIFigures_UIArcBorder__OnPopulateMesh
               (UIFigures_UIArcBorder_o *__this,UnityEngine_UI_VertexHelper_o *BALEEENOIJA,
               MethodInfo *method)

{
  float KBDPEGCICFC;
  UnityEngine_Color_o GKBNFBINIIP;
  UnityEngine_Color_o CJAPKHIHMEJ;
  UnityEngine_RectTransform_o *pUVar1;
  float PCBIKNDPPAD;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Sprite_o *pUVar10;
  UnityEngine_Vector2_Fields UVar11;
  float IGCGOHHCMHD;
  float CIBIKDNNBAM;
  UnityEngine_Vector2_o EEGKJKNENDE;
  UnityEngine_Rect_o UVar12;
  UnityEngine_Rect_o UVar13;
  UnityEngine_Vector2_o KGAENKKEEPK;
  
  UIFigures_UIFigure__OnPopulateMesh((UIFigures_UIFigure_o *)__this,BALEEENOIJA,(MethodInfo *)0x0);
  pUVar10 = (__this->fields).super._Sprite;
  UVar11 = (__this->fields).super.CKIBKNMJGAJ.fields;
  pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                     ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UVar12 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                       ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar13 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      fVar6 = UVar13.fields.m_Width;
      fVar4 = UVar13.fields.m_YMin;
      PCBIKNDPPAD = (__this->fields)._EndColor.fields.b;
      CIBIKDNNBAM = (float)(__this->fields)._Segments;
      IGCGOHHCMHD = (__this->fields)._Width;
      KBDPEGCICFC = (__this->fields)._EndColor.fields.a;
      fVar8 = UVar13.fields.m_Height;
      uVar2 = (*(__this->klass->vtable)._22_get_color.methodPtr)
                        (__this,(__this->klass->vtable)._22_get_color.method);
      if (*(char *)&(__this->fields).super.INCPCFENLPJ.fields.x == '\0') {
                    /* try { // try from 033b9700 to 034b9727 has its CatchHandler @ 033b992c */
        fVar7 = fVar6;
        fVar9 = fVar8;
        fVar5 = fVar4;
        fVar3 = (float)(*(__this->klass->vtable)._22_get_color.methodPtr)
                                 (__this,(__this->klass->vtable)._22_get_color.method);
      }
      else {
        fVar3 = (__this->fields).super.INCPCFENLPJ.fields.y;
        fVar5 = *(float *)&(__this->fields)._UseEndColor;
        fVar7 = (__this->fields)._EndColor.fields.r;
        fVar9 = (__this->fields)._EndColor.fields.g;
      }
      GKBNFBINIIP.fields.g = fVar4;
      GKBNFBINIIP.fields.r = (float)uVar2;
      GKBNFBINIIP.fields.b = fVar6;
      GKBNFBINIIP.fields.a = fVar8;
      CJAPKHIHMEJ.fields.g = fVar5;
      CJAPKHIHMEJ.fields.r = fVar3;
      CJAPKHIHMEJ.fields.b = fVar7;
      CJAPKHIHMEJ.fields.a = fVar9;
      EEGKJKNENDE.fields.y = ((float)((ulong)pUVar10 >> 0x20) + UVar11.y) * 0.5;
      EEGKJKNENDE.fields.x = (SUB84(pUVar10,0) + UVar11.x) * 0.5;
      KGAENKKEEPK.fields.y = UVar13.fields.m_Height * 0.5;
      KGAENKKEEPK.fields.x = UVar12.fields.m_Width * 0.5;
                    /* try { // try from 033b975c to 034b9787 has its CatchHandler @ 033b9928 */
      DDFDPLHKGKB__GMAHCDEMNOG
                (BALEEENOIJA,EEGKJKNENDE,KGAENKKEEPK,PCBIKNDPPAD,CIBIKDNNBAM,IGCGOHHCMHD,
                 (int32_t)KBDPEGCICFC,GKBNFBINIIP,CJAPKHIHMEJ,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

