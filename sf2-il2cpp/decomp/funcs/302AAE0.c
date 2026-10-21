// Nekki.SF2.GUI.SimpleScroll$$NEMAMJHLMKI @ RVA 0x302AAE0

UnityEngine_Vector2_o
Nekki_SF2_GUI_SimpleScroll__NEMAMJHLMKI
          (Nekki_SF2_GUI_SimpleScroll_o *__this,UnityEngine_RectTransform_o *IKKAMAMLIKA,
          MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  MethodInfo *method_00;
  float fVar2;
  float fVar3;
  UnityEngine_Rect_o UVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector2_o UVar6;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Vector2_o UVar8;
  UnityEngine_Vector2_o UVar9;
  UnityEngine_Vector2_o UVar10;
  UnityEngine_Vector2_o FGKNNDKHOGB;
  UnityEngine_Vector2_Fields UVar11;
  
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
  if (IKKAMAMLIKA != (UnityEngine_RectTransform_o *)0x0) {
    fVar2 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.x;
    fVar3 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.y;
    UVar5 = UnityEngine_RectTransform__get_anchoredPosition(IKKAMAMLIKA,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).super.m_Content;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar4 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      UVar6 = UnityEngine_RectTransform__get_anchorMin(IKKAMAMLIKA,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).super.m_Viewport;
      if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
        UVar7 = UnityEngine_RectTransform__get_pivot(pUVar1,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).super.m_Content;
        if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
          UVar8 = UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
          UVar9 = UnityEngine_RectTransform__get_sizeDelta(IKKAMAMLIKA,(MethodInfo *)0x0);
          UVar10 = UnityEngine_RectTransform__get_pivot(IKKAMAMLIKA,(MethodInfo *)0x0);
          FGKNNDKHOGB.fields.y =
               fVar3 + UVar5.fields.y + UVar4.fields.m_Height * (UVar6.fields.y - UVar7.fields.y) +
               UVar8.fields.y;
          FGKNNDKHOGB.fields.x =
               fVar2 + UVar5.fields.x + UVar4.fields.m_Width * (UVar6.fields.x - UVar7.fields.x) +
               UVar8.fields.x;
          UVar5.fields.x = UVar10.fields.x;
          UVar5.fields.y = (float)((ulong)UVar10.fields >> 0x20);
          UVar6.fields.x = UVar9.fields.x;
          UVar6.fields.y = (float)((ulong)UVar9.fields >> 0x20);
          UVar11 = (UnityEngine_Vector2_Fields)
                   Nekki_SF2_GUI_SimpleScroll__OGKNNMEDGGO(__this,FGKNNDKHOGB,UVar6,UVar5,method_00)
          ;
          return (UnityEngine_Vector2_o)UVar11;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

