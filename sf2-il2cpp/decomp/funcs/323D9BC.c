// Nekki.SF2.GUI.SFScrollRect$$OnScroll @ RVA 0x323D9BC

void Nekki_SF2_GUI_SFScrollRect__OnScroll
               (Nekki_SF2_GUI_SFScrollRect_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *IMMNELPBGIF,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Vector2_o GBLKICMLIHH;
  
  auVar6 = (*(__this->klass->vtable)._9_IsActive.methodPtr)
                     (__this,(__this->klass->vtable)._9_IsActive.method);
  if ((auVar6._0_8_ & 1) == 0) {
    return;
  }
  Nekki_SF2_GUI_SFScrollRect__BPCAFFKDJJI(__this,auVar6._8_8_);
  Nekki_SF2_GUI_SFScrollRect__PGMHINIGNID(__this,method_00);
  if (IMMNELPBGIF == (UnityEngine_EventSystems_PointerEventData_o *)0x0) goto LAB_0333daf4;
  fVar4 = (IMMNELPBGIF->fields)._scrollDelta_k__BackingField.fields.x;
  bVar1 = (__this->fields).m_Horizontal;
  fVar3 = -(IMMNELPBGIF->fields)._scrollDelta_k__BackingField.fields.y;
  fVar5 = fVar4;
  if ((__this->fields).m_Vertical == false) {
    if (bVar1 == false) goto LAB_0333da5c;
    if (ABS(fVar4) < ABS(fVar3)) {
      fVar5 = fVar3;
    }
    fVar4 = 0.0;
  }
  else if ((bVar1 != false) || (fVar5 = 0.0, ABS(fVar4) <= ABS(fVar3))) {
LAB_0333da5c:
    fVar4 = fVar3;
  }
  pUVar2 = (__this->fields).m_Content;
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    UVar7 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
    fVar3 = (__this->fields).m_ScrollSensitivity;
    fVar5 = UVar7.fields.x + fVar5 * fVar3;
    fVar4 = UVar7.fields.y + fVar4 * fVar3;
    if ((__this->fields).m_MovementType == 2) {
      pUVar2 = (__this->fields).m_Content;
      if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333daf4;
      UVar7 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
      GBLKICMLIHH.fields.x = fVar5 - UVar7.fields.x;
      GBLKICMLIHH.fields.y = fVar4 - UVar7.fields.y;
      UVar7 = Nekki_SF2_GUI_SFScrollRect__DCGOIAMJDEE(__this,GBLKICMLIHH,method_01);
      fVar5 = fVar5 + UVar7.fields.x;
      fVar4 = fVar4 + UVar7.fields.y;
    }
    (*(__this->klass->vtable)._48_DJJKCEKMACC.methodPtr)
              ((ulong)(uint)fVar5,(ulong)(uint)fVar4,__this,
               (__this->klass->vtable)._48_DJJKCEKMACC.method);
    Nekki_SF2_GUI_SFScrollRect__PGMHINIGNID(__this,method_02);
    return;
  }
LAB_0333daf4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

