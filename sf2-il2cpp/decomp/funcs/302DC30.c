// Nekki.SF2.GUI.SimpleScroll$$JJOCMJBGOKG @ RVA 0x302DC30

UnityEngine_Vector2_o
Nekki_SF2_GUI_SimpleScroll__JJOCMJBGOKG
          (Nekki_SF2_GUI_SimpleScroll_o *__this,UnityEngine_RectTransform_o *IKKAMAMLIKA,
          MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  bool bVar2;
  UnityEngine_RectTransform_o *pUVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *pMVar4;
  UnityEngine_Vector2_Fields UVar5;
  UnityEngine_Vector2_o UVar6;
  UnityEngine_Vector2_o UVar7;
  
  pMVar4 = (MethodInfo *)IKKAMAMLIKA;
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
    pMVar4 = extraout_x1;
  }
  UVar5 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
  if ((__this->fields).super.m_Vertical != false) {
    bVar2 = Nekki_SF2_GUI_SimpleScroll__get_IsYUp(__this,pMVar4);
    pMVar4 = extraout_x1_00;
    if (bVar2) {
      if (IKKAMAMLIKA == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312dd54;
      UVar5 = (UnityEngine_Vector2_Fields)
              UnityEngine_RectTransform__get_anchoredPosition(IKKAMAMLIKA,(MethodInfo *)0x0);
      pMVar4 = extraout_x1_01;
    }
    bVar2 = Nekki_SF2_GUI_SimpleScroll__get_IsYcenter(__this,pMVar4);
    pMVar4 = extraout_x1_02;
    if (bVar2) {
      if (IKKAMAMLIKA == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312dd54;
      UVar6 = UnityEngine_RectTransform__get_anchoredPosition(IKKAMAMLIKA,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).super.m_Content;
      if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312dd54;
      UVar7 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
      UVar5.y = UVar6.fields.y + UVar7.fields.y * 0.5;
      UVar5.x = UVar6.fields.x + UVar7.fields.x * 0.5;
      pMVar4 = extraout_x1_03;
    }
  }
  if (((__this->fields).super.m_Horizontal == false) ||
     (bVar2 = Nekki_SF2_GUI_SimpleScroll__get_IsXcenter(__this,pMVar4), !bVar2)) {
    return (UnityEngine_Vector2_o)UVar5;
  }
  if (IKKAMAMLIKA != (UnityEngine_RectTransform_o *)0x0) {
    UVar6 = UnityEngine_RectTransform__get_anchoredPosition(IKKAMAMLIKA,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).super.m_Content;
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      UVar7 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
      UVar1.y = UVar6.fields.y - UVar7.fields.y * 0.5;
      UVar1.x = UVar6.fields.x - UVar7.fields.x * 0.5;
      return (UnityEngine_Vector2_o)UVar1;
    }
  }
LAB_0312dd54:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

