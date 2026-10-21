// Nekki.SF2.GUI.SimpleScroll$$ODIEMJGFIFB @ RVA 0x3029F04

UnityEngine_Vector2_o
Nekki_SF2_GUI_SimpleScroll__ODIEMJGFIFB(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_BaseScrollItem_o *__this_00;
  UnityEngine_RectTransform_o *pUVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  float fVar3;
  float fVar4;
  UnityEngine_Rect_o UVar5;
  UnityEngine_Vector2_o UVar6;
  UnityEngine_Vector2_o UVar7;
  
  if ((DAT_04565cda & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565cda = 1;
    method = extraout_x1;
  }
  __this_00 = Nekki_SF2_GUI_SimpleScroll__MOKNJIIEIMG(__this,method);
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
  fVar3 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.x;
  fVar4 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.y;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (!bVar1) {
    if ((__this->fields).super.m_Vertical != false) {
      if ((__this_00 == (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) ||
         (pUVar2 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform(__this_00,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0312a090;
      UVar6 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).super.m_Content;
      if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312a090;
      UVar7 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
      fVar4 = UVar6.fields.y + UVar7.fields.y;
      bVar1 = Nekki_SF2_GUI_SimpleScroll__get_IsYcenter(__this,method_00);
      if (bVar1) {
        pUVar2 = (__this->fields).super.m_Content;
        if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312a090;
        UVar5 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
        fVar4 = fVar4 + UVar5.fields.m_Height * 0.5;
      }
      fVar4 = -fVar4;
    }
    if ((__this->fields).super.m_Horizontal != false) {
      if ((__this_00 != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) &&
         (pUVar2 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform(__this_00,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
        UVar6 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
        pUVar2 = (__this->fields).super.m_Content;
        if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
          UVar5 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
          pUVar2 = (__this->fields).super.m_Content;
          if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
            UVar7 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
            fVar3 = -(UVar6.fields.x + UVar5.fields.m_Width * -0.5 + UVar7.fields.x);
            goto LAB_0312a070;
          }
        }
      }
LAB_0312a090:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
LAB_0312a070:
  UVar6.fields.y = fVar4;
  UVar6.fields.x = fVar3;
  return (UnityEngine_Vector2_o)UVar6.fields;
}

