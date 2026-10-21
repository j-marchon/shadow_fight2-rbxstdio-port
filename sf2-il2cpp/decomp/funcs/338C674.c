// Nekki.SF2.GUI.Menu.MenuScroll$$OnDrag @ RVA 0x338C674

void Nekki_SF2_GUI_Menu_MenuScroll__OnDrag
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_Vector2_Fields screenPoint;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_Camera_o *cam;
  UnityEngine_EventSystems_PointerEventData_o *extraout_x1;
  UnityEngine_EventSystems_PointerEventData_o *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Vector2_Fields local_28;
  
  method_00 = OHNNFPGGEFK;
  if ((DAT_04567bea & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransformUtility_TypeInfo);
    DAT_04567bea = 1;
    method_00 = extraout_x1;
  }
  local_28.x = 0.0;
  local_28.y = 0.0;
  rect = Nekki_SF2_GUI_Menu_MenuScroll__get_RectTransform(__this,(MethodInfo *)method_00);
  if (OHNNFPGGEFK != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    screenPoint = (OHNNFPGGEFK->fields)._position_k__BackingField.fields;
    cam = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera
                    (OHNNFPGGEFK,(MethodInfo *)0x0);
    if ((UnityEngine_RectTransformUtility_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_RectTransformUtility_TypeInfo);
    }
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (rect,(UnityEngine_Vector2_o)screenPoint,cam,(UnityEngine_Vector2_o *)&local_28,
               (MethodInfo *)0x0);
    if ((__this->fields).BDFGFOCANII != false) {
      fVar3 = (__this->fields).NLAOCJOCKHI.fields.x - local_28.x;
      fVar4 = (__this->fields).NLAOCJOCKHI.fields.y - local_28.y;
      fVar1 = Nekki_SF2_GUI_Menu_MenuScroll__GetCurrentLength(__this,method_01);
      fVar2 = (__this->fields).FDFCNIMNHFK;
      if ((__this->fields).JDNKKGPNHPB != 1) {
        fVar4 = fVar3;
      }
      fVar3 = fVar1 + fVar4;
      if (fVar2 <= fVar1 + fVar4) {
        fVar3 = fVar2;
      }
      Nekki_SF2_GUI_Menu_MenuScroll__KBAFINNJPGC(__this,fVar3,method_02);
      (__this->fields).NLAOCJOCKHI.fields = local_28;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

