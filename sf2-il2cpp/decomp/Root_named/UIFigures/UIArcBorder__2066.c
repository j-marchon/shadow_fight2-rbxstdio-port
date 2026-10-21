// TypeDefIndex 2066
// Namespace: UIFigures
// public class UIArcBorder : UIFigure
// Fields:
//   private bool _UseEndColor; // 0xF0
//   private Color _EndColor; // 0xF4
//   private float _Width; // 0x104
//   private int _Segments; // 0x108
//   private float _From; // 0x10C
//   private float _To; // 0x110

// ===== public float get_Width()  [RVA 0x32B95C4]
// UIFigures.UIArcBorder$$get_Width @ RVA 0x32B95C4

float UIFigures_UIArcBorder__get_Width(UIFigures_UIArcBorder_o *__this,MethodInfo *method)

{
  return (__this->fields)._EndColor.fields.b;
}


// ===== public void set_Width(float CJNHFNHJHPE)  [RVA 0x32B95CC]
// UIFigures.UIArcBorder$$set_Width @ RVA 0x32B95CC

void UIFigures_UIArcBorder__set_Width
               (UIFigures_UIArcBorder_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._EndColor.fields.b = CJNHFNHJHPE;
  return;
}


// ===== public void set_Segments(int CJNHFNHJHPE)  [RVA 0x32B95D4]
// UIFigures.UIArcBorder$$set_Segments @ RVA 0x32B95D4

void UIFigures_UIArcBorder__set_Segments
               (UIFigures_UIArcBorder_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._EndColor.fields.a = (float)CJNHFNHJHPE;
  return;
}


// ===== public void set_From(float CJNHFNHJHPE)  [RVA 0x32B95DC]
// UIFigures.UIArcBorder$$set_From @ RVA 0x32B95DC

void UIFigures_UIArcBorder__set_From
               (UIFigures_UIArcBorder_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._Width = CJNHFNHJHPE;
  return;
}


// ===== public float get_From()  [RVA 0x32B95E4]
// UIFigures.UIArcBorder$$get_From @ RVA 0x32B95E4

float UIFigures_UIArcBorder__get_From(UIFigures_UIArcBorder_o *__this,MethodInfo *method)

{
  return (__this->fields)._Width;
}


// ===== public void set_To(float CJNHFNHJHPE)  [RVA 0x32B95EC]
// UIFigures.UIArcBorder$$set_To @ RVA 0x32B95EC

void UIFigures_UIArcBorder__set_To
               (UIFigures_UIArcBorder_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._Segments = (int32_t)CJNHFNHJHPE;
  return;
}


// ===== public float get_To()  [RVA 0x32B95F4]
// UIFigures.UIArcBorder$$get_To @ RVA 0x32B95F4

float UIFigures_UIArcBorder__get_To(UIFigures_UIArcBorder_o *__this,MethodInfo *method)

{
  return (float)(__this->fields)._Segments;
}


// ===== public void set_SetAllColor(Color CJNHFNHJHPE)  [RVA 0x32B95FC]
// UIFigures.UIArcBorder$$set_SetAllColor @ RVA 0x32B95FC

void UIFigures_UIArcBorder__set_SetAllColor
               (UIFigures_UIArcBorder_o *__this,UnityEngine_Color_o CJNHFNHJHPE,MethodInfo *method)

{
  (*(__this->klass->vtable)._23_set_color.methodPtr)
            (__this,(__this->klass->vtable)._23_set_color.method);
  (__this->fields).super.INCPCFENLPJ.fields.y = CJNHFNHJHPE.fields.r;
  *(float *)&(__this->fields)._UseEndColor = CJNHFNHJHPE.fields.g;
  (__this->fields)._EndColor.fields.r = CJNHFNHJHPE.fields.b;
  (__this->fields)._EndColor.fields.g = CJNHFNHJHPE.fields.a;
  return;
}


// ===== protected override void OnPopulateMesh(VertexHelper BALEEENOIJA)  [RVA 0x32B9644]
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


// ===== public void .ctor()  [RVA 0x32B9790]
// UIFigures.UIArcBorder$$.ctor @ RVA 0x32B9790

void UIFigures_UIArcBorder___ctor(UIFigures_UIArcBorder_o *__this,MethodInfo *method)

{
  (__this->fields)._EndColor.fields.b = 10.0;
  (__this->fields)._EndColor.fields.a = 1.4013e-44;
  (__this->fields)._Segments = 0x3fc90fdb;
  UIFigures_UIFigure___ctor((UIFigures_UIFigure_o *)__this,(MethodInfo *)0x0);
  return;
}

