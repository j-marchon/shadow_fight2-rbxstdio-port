// Nekki.SF2.GUI.SFScrollRect$$OnBeginDrag @ RVA 0x323E294

void Nekki_SF2_GUI_SFScrollRect__OnBeginDrag
               (Nekki_SF2_GUI_SFScrollRect_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_Vector2_Fields screenPoint;
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Camera_o *cam;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  UnityEngine_Vector2_o *localPoint;
  undefined1 auVar2 [16];
  UnityEngine_Vector2_o UVar3;
  
  if ((DAT_04567071 & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransformUtility_TypeInfo);
    DAT_04567071 = 1;
  }
  if (OHNNFPGGEFK != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    if ((OHNNFPGGEFK->fields)._button_k__BackingField == 0) {
      auVar2 = (*(__this->klass->vtable)._9_IsActive.methodPtr)
                         (__this,(__this->klass->vtable)._9_IsActive.method);
      if (((auVar2._0_8_ & 1) != 0) && ((__this->fields).field_0x111 != '\0')) {
        Nekki_SF2_GUI_SFScrollRect__PGMHINIGNID(__this,auVar2._8_8_);
        method_00 = extraout_x1;
        if (DAT_0455fa75 == '\0') {
          FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
          DAT_0455fa75 = '\x01';
          method_00 = extraout_x1_00;
        }
        localPoint = &(__this->fields).HCOHGDCJGIM;
        localPoint->fields = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
        pUVar1 = Nekki_SF2_GUI_SFScrollRect__DEICOOLNJLP(__this,method_00);
        screenPoint = (OHNNFPGGEFK->fields)._position_k__BackingField.fields;
        cam = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera
                        (OHNNFPGGEFK,(MethodInfo *)0x0);
        if ((UnityEngine_RectTransformUtility_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_RectTransformUtility_TypeInfo);
        }
        UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                  (pUVar1,(UnityEngine_Vector2_o)screenPoint,cam,localPoint,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).m_Content;
        if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0333e3c4;
        UVar3 = UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
        (__this->fields).MLDBMFNGFNM.fields.x = UVar3.fields.x;
        (__this->fields).MLDBMFNGFNM.fields.y = UVar3.fields.y;
        (__this->fields).EKGCFOHOBKN = true;
      }
    }
    return;
  }
LAB_0333e3c4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

