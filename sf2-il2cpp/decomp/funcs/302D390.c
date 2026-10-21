// Nekki.SF2.GUI.SimpleScroll$$OLABKBMECLF @ RVA 0x302D390

void Nekki_SF2_GUI_SimpleScroll__OLABKBMECLF
               (Nekki_SF2_GUI_SimpleScroll_o *__this,UnityEngine_Vector2_o *JGMCOMCBLPG,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  UnityEngine_Vector2_Fields UVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o UVar8;
  UnityEngine_Vector2_o UVar9;
  
  if (((__this->fields).super.m_Vertical != false) &&
     (*(char *)((long)&(__this->fields)._visibilityChecker + 1) == '\0')) {
    pUVar2 = (__this->fields).super.m_Viewport;
    if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312d4fc;
    fVar5 = *(float *)&(__this->fields).field_0x1a4;
    UVar8 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
    fVar4 = 0.0;
    if (fVar5 <= UVar8.fields.m_Height) {
      fVar6 = 0.0;
    }
    else {
      pUVar2 = (__this->fields).super.m_Viewport;
      if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312d4fc;
      UVar8 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
      fVar7 = fVar5 - UVar8.fields.m_Height;
      bVar1 = Nekki_SF2_GUI_SimpleScroll__get_IsYUp(__this,method_00);
      if (bVar1) {
        UVar3 = (__this->fields).GNMNFMOHDMG.fields;
        fVar4 = 0.0;
        fVar6 = fVar7;
        if (UVar3 != (UnityEngine_Vector2_Fields)0x0) {
          if (*(int *)((long)UVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          if (*(UnityEngine_RectTransform_o **)((long)UVar3 + 0x20) ==
              (UnityEngine_RectTransform_o *)0x0) {
LAB_0312d4fc:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UVar9 = UnityEngine_RectTransform__get_sizeDelta
                            (*(UnityEngine_RectTransform_o **)((long)UVar3 + 0x20),(MethodInfo *)0x0
                            );
          fVar4 = UVar9.fields.y;
          pUVar2 = Nekki_SF2_GUI_SimpleScroll__CDDJEKNJPEN(__this,method_02);
          if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312d4fc;
          UVar8 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
          fVar6 = (fVar5 + fVar4) - UVar8.fields.m_Height;
        }
      }
      else {
        bVar1 = Nekki_SF2_GUI_SimpleScroll__get_IsYcenter(__this,method_01);
        fVar6 = 0.0;
        if (bVar1) {
          if ((__this->fields).GNMNFMOHDMG.fields == (UnityEngine_Vector2_Fields)0x0) {
            fVar6 = fVar7 * 0.5;
            fVar4 = fVar7 * -0.5;
          }
          else {
            pUVar2 = Nekki_SF2_GUI_SimpleScroll__FNJPFFGAMPF(__this,method_03);
            if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312d4fc;
            UVar8 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
            pUVar2 = Nekki_SF2_GUI_SimpleScroll__CDDJEKNJPEN(__this,method_04);
            if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312d4fc;
            fVar6 = fVar5 * 0.5 - UVar8.fields.m_Height * 0.5;
            UVar8 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
            fVar4 = UVar8.fields.m_Height * 0.5 - fVar5 * 0.5;
          }
        }
      }
    }
    fVar7 = (JGMCOMCBLPG->fields).y;
    fVar5 = fVar6 + -0.001;
    if (fVar7 <= fVar6 + -0.001) {
      fVar5 = fVar7;
    }
    if (fVar7 < fVar4 + 0.001) {
      fVar5 = fVar4 + 0.001;
    }
    (JGMCOMCBLPG->fields).y = fVar5;
  }
  return;
}

