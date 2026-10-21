// TypeDefIndex 477
// Namespace: Nekki.SF2.GUI.Fight
// public class StyleBarStrip : ResolutionImageSkew
// Fields:
//   private float HDDOPIGKLOJ; // 0x130
//   private float AEPIAEMBCJP; // 0x134
//   private int OFMHBJNLFMC; // 0x138

// ===== public void Init(float CJNHFNHJHPE)  [RVA 0x3581DB4]
// Nekki.SF2.GUI.Fight.StyleBarStrip$$Init @ RVA 0x3581DB4

void Nekki_SF2_GUI_Fight_StyleBarStrip__Init
               (Nekki_SF2_GUI_Fight_StyleBarStrip_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_UI_Image__set_type((UnityEngine_UI_Image_o *)__this,3,(MethodInfo *)0x0);
  UnityEngine_UI_Image__set_fillMethod((UnityEngine_UI_Image_o *)__this,0,(MethodInfo *)0x0);
  UnityEngine_UI_Image__set_fillAmount
            ((UnityEngine_UI_Image_o *)__this,CJNHFNHJHPE,(MethodInfo *)0x0);
  (__this->fields).super._SkewAngle = CJNHFNHJHPE;
  *(float *)&(__this->fields).super.field_0x124 = CJNHFNHJHPE;
  return;
}


// ===== public void SetValue(float CJNHFNHJHPE, int ABKNPBMGHKH)  [RVA 0x3581E04]
// Nekki.SF2.GUI.Fight.StyleBarStrip$$SetValue @ RVA 0x3581E04

void Nekki_SF2_GUI_Fight_StyleBarStrip__SetValue
               (Nekki_SF2_GUI_Fight_StyleBarStrip_o *__this,float CJNHFNHJHPE,int32_t ABKNPBMGHKH,
               MethodInfo *method)

{
  *(float *)&(__this->fields).super.field_0x124 = CJNHFNHJHPE;
  *(int32_t *)&(__this->fields).super.MNGNDPJEHBD = ABKNPBMGHKH;
  if (0 < ABKNPBMGHKH) {
    return;
  }
  (__this->fields).super._SkewAngle = CJNHFNHJHPE;
  UnityEngine_UI_Image__set_fillAmount
            ((UnityEngine_UI_Image_o *)__this,CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}


// ===== public void Render()  [RVA 0x3581E24]
// Nekki.SF2.GUI.Fight.StyleBarStrip$$Render @ RVA 0x3581E24

void Nekki_SF2_GUI_Fight_StyleBarStrip__Render
               (Nekki_SF2_GUI_Fight_StyleBarStrip_o *__this,MethodInfo *method)

{
  int iVar1;
  float value;
  float fVar2;
  
  fVar2 = (__this->fields).super._SkewAngle;
  value = *(float *)&(__this->fields).super.field_0x124;
  if (fVar2 != value) {
    iVar1 = *(int *)&(__this->fields).super.MNGNDPJEHBD;
    if (0 < iVar1) {
      value = fVar2 - (fVar2 - value) / (float)iVar1;
    }
    (__this->fields).super._SkewAngle = value;
    UnityEngine_UI_Image__set_fillAmount((UnityEngine_UI_Image_o *)__this,value,(MethodInfo *)0x0);
    *(int *)&(__this->fields).super.MNGNDPJEHBD = *(int *)&(__this->fields).super.MNGNDPJEHBD + -1;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x3581E7C]
// Nekki.SF2.GUI.Fight.StyleBarStrip$$.ctor @ RVA 0x3581E7C

void Nekki_SF2_GUI_Fight_StyleBarStrip___ctor
               (Nekki_SF2_GUI_Fight_StyleBarStrip_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImageSkew___ctor
            ((Nekki_SF2_GUI_ResolutionImageSkew_o *)__this,(MethodInfo *)0x0);
  return;
}

