// Nekki.SF2.GUI.Menu.MenuScroll$$OnBeginDrag @ RVA 0x338BE18

void Nekki_SF2_GUI_Menu_MenuScroll__OnBeginDrag
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_Vector2_Fields screenPoint;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_Camera_o *cam;
  UnityEngine_EventSystems_PointerEventData_o *extraout_x1;
  UnityEngine_EventSystems_PointerEventData_o *method_00;
  MethodInfo *method_01;
  System_Action_o *pSVar1;
  UnityEngine_Vector2_Fields local_28;
  
  method_00 = OHNNFPGGEFK;
  if ((DAT_04567be0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransformUtility_TypeInfo);
    DAT_04567be0 = 1;
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
    (__this->fields).BDFGFOCANII = true;
    (__this->fields).NLAOCJOCKHI.fields = local_28;
    Nekki_SF2_GUI_Menu_MenuScroll__CCPABLFBFFA(__this,method_01);
    pSVar1 = (__this->fields).JIKHJOBDNHA;
    if (pSVar1 != (System_Action_o *)0x0) {
      (*(code *)(pSVar1->fields).super.super.invoke_impl)
                ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

