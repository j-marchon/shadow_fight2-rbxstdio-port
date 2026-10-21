// Nekki.SF2.GUI.SimpleScroll$$HGDFKDAJKOB @ RVA 0x302AD74

void Nekki_SF2_GUI_SimpleScroll__HGDFKDAJKOB
               (Nekki_SF2_GUI_SimpleScroll_o *__this,UnityEngine_Vector2_o *JGMCOMCBLPG,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Rect_o UVar7;
  
  if (((__this->fields).super.m_Horizontal != false) &&
     (*(char *)((long)&(__this->fields)._visibilityChecker + 1) == '\0')) {
    pUVar2 = (__this->fields).super.m_Viewport;
    if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312ae90;
    fVar5 = *(float *)&(__this->fields).GCNFFAAPOKE;
    UVar7 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
    fVar6 = 0.0;
    if (fVar5 <= UVar7.fields.m_Width) {
      fVar3 = 0.0;
    }
    else {
      pUVar2 = (__this->fields).super.m_Viewport;
      if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312ae90;
      UVar7 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
      bVar1 = Nekki_SF2_GUI_SimpleScroll__get_IsXcenter(__this,method_00);
      fVar3 = 0.0;
      fVar6 = 0.0;
      if (bVar1) {
        if ((__this->fields).GNMNFMOHDMG.fields == (UnityEngine_Vector2_Fields)0x0) {
          fVar5 = fVar5 - UVar7.fields.m_Width;
          fVar6 = fVar5 * 0.5;
          fVar3 = fVar5 * -0.5;
        }
        else {
          pUVar2 = Nekki_SF2_GUI_SimpleScroll__FNJPFFGAMPF(__this,method_01);
          if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) {
LAB_0312ae90:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UVar7 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
          pUVar2 = Nekki_SF2_GUI_SimpleScroll__CDDJEKNJPEN(__this,method_02);
          if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312ae90;
          fVar6 = fVar5 * 0.5 - UVar7.fields.m_Height * 0.5;
          UVar7 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
          fVar3 = UVar7.fields.m_Height * 0.5 - fVar5 * 0.5;
        }
      }
    }
    fVar4 = (JGMCOMCBLPG->fields).x;
    fVar5 = fVar6 + -0.001;
    if (fVar4 <= fVar6 + -0.001) {
      fVar5 = fVar4;
    }
    if (fVar4 < fVar3 + 0.001) {
      fVar5 = fVar3 + 0.001;
    }
    (JGMCOMCBLPG->fields).x = fVar5;
  }
  return;
}

