// TypeDefIndex 760
// Namespace: UIFigures
// public class UICircleBorder : UIFigure
// Fields:
//   private int _Segments; // 0xF0
//   private float _Width; // 0xF4

// ===== protected override void OnPopulateMesh(VertexHelper BALEEENOIJA)  [RVA 0x304FCBC]
// UIFigures.UICircleBorder$$OnPopulateMesh @ RVA 0x304FCBC

void UIFigures_UICircleBorder__OnPopulateMesh
               (UIFigures_UICircleBorder_o *__this,UnityEngine_UI_VertexHelper_o *BALEEENOIJA,
               MethodInfo *method)

{
  float KBDPEGCICFC;
  UnityEngine_Color_o GKBNFBINIIP;
  UnityEngine_Color_o CJAPKHIHMEJ;
  UnityEngine_RectTransform_o *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  UnityEngine_Vector2_o EEGKJKNENDE;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float PCBIKNDPPAD;
  UnityEngine_Sprite_o *pUVar10;
  float fVar11;
  UnityEngine_Vector2_Fields UVar12;
  UnityEngine_Rect_o UVar13;
  UnityEngine_Rect_o UVar14;
  UnityEngine_Vector2_o KGAENKKEEPK;
  
  UIFigures_UIFigure__OnPopulateMesh((UIFigures_UIFigure_o *)__this,BALEEENOIJA,(MethodInfo *)0x0);
  pUVar10 = (__this->fields).super._Sprite;
  UVar12 = (__this->fields).super.CKIBKNMJGAJ.fields;
  pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                     ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UVar13 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                       ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      EEGKJKNENDE.fields.x = (SUB84(pUVar10,0) + UVar12.x) * 0.5;
      EEGKJKNENDE.fields.y = ((float)((ulong)pUVar10 >> 0x20) + UVar12.y) * 0.5;
      UVar14 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      fVar8 = UVar14.fields.m_Height;
      fVar6 = UVar14.fields.m_Width;
      fVar4 = UVar14.fields.m_YMin;
      PCBIKNDPPAD = (__this->fields).super.INCPCFENLPJ.fields.y;
      KBDPEGCICFC = (__this->fields).super.INCPCFENLPJ.fields.x;
      fVar11 = fVar8 * 0.5;
      uVar2 = (*(__this->klass->vtable)._22_get_color.methodPtr)
                        (__this,(__this->klass->vtable)._22_get_color.method);
      fVar7 = fVar6;
      fVar9 = fVar8;
      fVar5 = fVar4;
      uVar3 = (*(__this->klass->vtable)._22_get_color.methodPtr)
                        (__this,(__this->klass->vtable)._22_get_color.method);
      GKBNFBINIIP.fields.g = fVar4;
      GKBNFBINIIP.fields.r = (float)uVar2;
      GKBNFBINIIP.fields.b = fVar6;
      GKBNFBINIIP.fields.a = fVar8;
      CJAPKHIHMEJ.fields.g = fVar5;
      CJAPKHIHMEJ.fields.r = (float)uVar3;
      CJAPKHIHMEJ.fields.b = fVar7;
      CJAPKHIHMEJ.fields.a = fVar9;
      KGAENKKEEPK.fields.y = fVar11;
      KGAENKKEEPK.fields.x = UVar13.fields.m_Width * 0.5;
      DDFDPLHKGKB__GMAHCDEMNOG
                (BALEEENOIJA,EEGKJKNENDE,KGAENKKEEPK,PCBIKNDPPAD,0.0,6.2831855,(int32_t)KBDPEGCICFC,
                 GKBNFBINIIP,CJAPKHIHMEJ,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x304FDE8]
// UIFigures.UICircleBorder$$.ctor @ RVA 0x304FDE8

void UIFigures_UICircleBorder___ctor(UIFigures_UICircleBorder_o *__this,MethodInfo *method)

{
  (__this->fields).super.INCPCFENLPJ.fields = (UnityEngine_Vector2_Fields)0x412000000000000a;
  UIFigures_UIFigure___ctor((UIFigures_UIFigure_o *)__this,(MethodInfo *)0x0);
  return;
}

