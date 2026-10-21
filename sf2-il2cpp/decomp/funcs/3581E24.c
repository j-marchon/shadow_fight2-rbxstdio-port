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

