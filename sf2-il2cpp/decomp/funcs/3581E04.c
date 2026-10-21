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

