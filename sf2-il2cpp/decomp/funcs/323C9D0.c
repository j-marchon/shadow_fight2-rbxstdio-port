// Nekki.SF2.GUI.SFScrollRect$$HIFNCLLMJOJ @ RVA 0x323C9D0

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_SFScrollRect__HIFNCLLMJOJ
               (Nekki_SF2_GUI_SFScrollRect_o *__this,UnityEngine_Vector2_o MJBMLNKAPGC,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_UI_Scrollbar_o *pUVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_04567076 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567076 = 1;
    method = extraout_x1;
  }
  pUVar2 = (__this->fields).m_HorizontalScrollbar;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
  if (bVar1) {
    fVar3 = (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.x;
    pUVar2 = (__this->fields).m_HorizontalScrollbar;
    fVar3 = fVar3 + fVar3;
    if (fVar3 <= 0.0) {
      fVar4 = 1.0;
      if (pUVar2 == (UnityEngine_UI_Scrollbar_o *)0x0) goto LAB_0333cb54;
    }
    else {
      if (pUVar2 == (UnityEngine_UI_Scrollbar_o *)0x0) goto LAB_0333cb54;
      fVar4 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.x;
      fVar3 = ((fVar4 + fVar4) - ABS(MJBMLNKAPGC.fields.x)) / fVar3;
      fVar4 = fVar3;
      if (1.0 < fVar3) {
        fVar4 = 1.0;
      }
      if (fVar3 < 0.0) {
        fVar4 = 0.0;
      }
    }
    UnityEngine_UI_Scrollbar__set_size(pUVar2,fVar4,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).m_HorizontalScrollbar;
    fVar3 = Nekki_SF2_GUI_SFScrollRect__get_horizontalNormalizedPosition(__this,method_00);
    if (pUVar2 == (UnityEngine_UI_Scrollbar_o *)0x0) goto LAB_0333cb54;
    UnityEngine_UI_Scrollbar__set_value(pUVar2,fVar3,(MethodInfo *)0x0);
  }
  pUVar2 = (__this->fields).m_VerticalScrollbar;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  fVar3 = (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.y;
  pUVar2 = (__this->fields).m_VerticalScrollbar;
  fVar3 = fVar3 + fVar3;
  if (fVar3 <= 0.0) {
    fVar4 = 1.0;
    if (pUVar2 == (UnityEngine_UI_Scrollbar_o *)0x0) goto LAB_0333cb54;
  }
  else {
    if (pUVar2 == (UnityEngine_UI_Scrollbar_o *)0x0) goto LAB_0333cb54;
    fVar4 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.y;
    fVar3 = ((fVar4 + fVar4) - ABS(MJBMLNKAPGC.fields.y)) / fVar3;
    fVar4 = fVar3;
    if (1.0 < fVar3) {
      fVar4 = 1.0;
    }
    if (fVar3 < 0.0) {
      fVar4 = 0.0;
    }
  }
  UnityEngine_UI_Scrollbar__set_size(pUVar2,fVar4,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).m_VerticalScrollbar;
  fVar3 = Nekki_SF2_GUI_SFScrollRect__get_verticalNormalizedPosition(__this,method_01);
  if (pUVar2 != (UnityEngine_UI_Scrollbar_o *)0x0) {
    UnityEngine_UI_Scrollbar__set_value(pUVar2,fVar3,(MethodInfo *)0x0);
    return;
  }
LAB_0333cb54:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

