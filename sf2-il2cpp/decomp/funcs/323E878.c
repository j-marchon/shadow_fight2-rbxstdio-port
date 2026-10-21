// Nekki.SF2.GUI.SFScrollRect$$OnDrag @ RVA 0x323E878

void Nekki_SF2_GUI_SFScrollRect__OnDrag
               (Nekki_SF2_GUI_SFScrollRect_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Camera_o *cam;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar3;
  float fVar5;
  ulong uVar4;
  UnityEngine_Vector2_Fields UVar7;
  ulong uVar8;
  float fVar9;
  UnityEngine_Vector2_Fields UVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  UnityEngine_Vector2_o UVar15;
  UnityEngine_Vector2_o GBLKICMLIHH;
  UnityEngine_Vector2_Fields local_38;
  float fVar6;
  
  if ((DAT_04567075 & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransformUtility_TypeInfo);
    DAT_04567075 = 1;
  }
  local_38.x = 0.0;
  local_38.y = 0.0;
  if (OHNNFPGGEFK != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    if ((OHNNFPGGEFK->fields)._button_k__BackingField == 0) {
      auVar14 = (*(__this->klass->vtable)._9_IsActive.methodPtr)
                          (__this,(__this->klass->vtable)._9_IsActive.method);
      if (((auVar14._0_8_ & 1) != 0) && ((__this->fields).field_0x111 != '\0')) {
        pUVar2 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,auVar14._8_8_);
        UVar7 = (OHNNFPGGEFK->fields)._position_k__BackingField.fields;
        cam = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera
                        (OHNNFPGGEFK,(MethodInfo *)0x0);
        if ((UnityEngine_RectTransformUtility_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_RectTransformUtility_TypeInfo);
        }
        bVar1 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                          (pUVar2,(UnityEngine_Vector2_o)UVar7,cam,
                           (UnityEngine_Vector2_o *)&local_38,(MethodInfo *)0x0);
        if (bVar1) {
          Nekki_SF2_GUI_SFScrollRect__PGMHINIGNID(__this,method_00);
          pUVar2 = (__this->fields).m_Content;
          if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333ea64;
          UVar7 = (__this->fields).HCOHGDCJGIM.fields;
          UVar10 = (__this->fields).MLDBMFNGFNM.fields;
          fVar9 = (__this->fields).m_ScrollFactor;
          fVar3 = UVar10.x + (local_38.x - UVar7.x) * fVar9;
          fVar5 = UVar10.y + (local_38.y - UVar7.y) * fVar9;
          UVar15 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
          GBLKICMLIHH.fields.x = fVar3 - UVar15.fields.x;
          GBLKICMLIHH.fields.y = fVar5 - UVar15.fields.y;
          UVar15 = Nekki_SF2_GUI_SFScrollRect__DCGOIAMJDEE(__this,GBLKICMLIHH,method_01);
          fVar6 = UVar15.fields.y;
          fVar9 = UVar15.fields.x;
          fVar3 = fVar3 + fVar9;
          uVar4 = (ulong)(uint)fVar3;
          fVar5 = fVar5 + fVar6;
          uVar8 = (ulong)(uint)fVar5;
          if ((__this->fields).m_MovementType == 1) {
            if (fVar9 != 0.0) {
              fVar13 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.x;
              fVar13 = fVar13 + fVar13;
              fVar11 = 1.0 - 1.0 / ((ABS(fVar9) * 0.55) / fVar13 + 1.0);
              fVar12 = fVar13 * fVar11;
              if (fVar9 < 0.0) {
                fVar12 = -(fVar13 * fVar11);
              }
              uVar4 = (ulong)(uint)(fVar3 - fVar12);
            }
            if (fVar6 != 0.0) {
              fVar12 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.y;
              fVar12 = fVar12 + fVar12;
              fVar3 = 1.0 - 1.0 / ((ABS(fVar6) * 0.55) / fVar12 + 1.0);
              fVar9 = fVar12 * fVar3;
              if (fVar6 < 0.0) {
                fVar9 = -(fVar12 * fVar3);
              }
              uVar8 = (ulong)(uint)(fVar5 - fVar9);
            }
          }
          (*(__this->klass->vtable)._48_DJJKCEKMACC.methodPtr)
                    (uVar4,uVar8,__this,(__this->klass->vtable)._48_DJJKCEKMACC.method);
        }
      }
    }
    return;
  }
LAB_0333ea64:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

