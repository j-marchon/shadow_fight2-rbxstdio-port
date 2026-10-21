// Nekki.SF2.GUI.Shop.InfoPanelContent$$PaymentOrFreeDoubleClickBuy @ RVA 0x300C31C

void Nekki_SF2_GUI_Shop_InfoPanelContent__PaymentOrFreeDoubleClickBuy
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this_00;
  IconLabelButton_o *x;
  UnityEngine_EventSystems_EventSystem_o *eventSystem;
  UnityEngine_EventSystems_PointerEventData_o *__this_01;
  UnityEngine_GameObject_o *target;
  MethodInfo *in_x2;
  
  __this_00 = __this;
  if ((DAT_04565b70 & 1) == 0) {
    FUN_01bab630(&UnityEngine_EventSystems_EventSystem_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IPointerClickHandler>__);
    FUN_01bab630(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    __this_00 = (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)
                FUN_01bab630(&UnityEngine_EventSystems_PointerEventData_TypeInfo);
    DAT_04565b70 = 1;
  }
  x = Nekki_SF2_GUI_Shop_InfoPanelContent__CNLCOHAHEPN(__this_00,(__this->fields).BDGGFDABEAO,in_x2)
  ;
  if (((((x == (IconLabelButton_o *)0x0) &&
        (x = Nekki_SF2_GUI_Shop_InfoPanelContent__CNLCOHAHEPN
                       ((Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0,(__this->fields).BMHDNILOKHO,
                        in_x2), x == (IconLabelButton_o *)0x0)) &&
       (x = Nekki_SF2_GUI_Shop_InfoPanelContent__CNLCOHAHEPN
                      ((Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0,(__this->fields).CAMONFIFEEA,
                       in_x2), x == (IconLabelButton_o *)0x0)) &&
      ((x = Nekki_SF2_GUI_Shop_InfoPanelContent__CNLCOHAHEPN
                      ((Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0,(__this->fields).HMANCFHBJIN,
                       in_x2), x == (IconLabelButton_o *)0x0 &&
       (x = Nekki_SF2_GUI_Shop_InfoPanelContent__CNLCOHAHEPN
                      ((Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0,(__this->fields).FELGNBGPJFO,
                       in_x2), x == (IconLabelButton_o *)0x0)))) &&
     ((x = Nekki_SF2_GUI_Shop_InfoPanelContent__CNLCOHAHEPN
                     ((Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0,(__this->fields).KCFECNOELAA,
                      in_x2), x == (IconLabelButton_o *)0x0 &&
      ((x = Nekki_SF2_GUI_Shop_InfoPanelContent__CNLCOHAHEPN
                      ((Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0,(__this->fields).HACELDGGHLJ,
                       in_x2), x == (IconLabelButton_o *)0x0 &&
       (x = Nekki_SF2_GUI_Shop_InfoPanelContent__CNLCOHAHEPN
                      ((Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0,(__this->fields).MDKMGENBAOJ,
                       in_x2), x == (IconLabelButton_o *)0x0)))))) {
    x = Nekki_SF2_GUI_Shop_InfoPanelContent__CNLCOHAHEPN
                  ((Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0,(__this->fields).HNNIFDIPKBJ,in_x2);
  }
                    /* try { // try from 0310c418 to 0320c8bb has its CatchHandler @ 0310c418
                       catch() { ... } // from try @ 0310c418 with catch @ 0310c418
                       catch() { ... } // from try @ 0310c974 with catch @ 0310c418
                       catch() { ... } // from try @ 0310d0a0 with catch @ 0310c418
                       catch() { ... } // from try @ 0310d254 with catch @ 0310c418
                       catch() { ... } // from try @ 0310d34c with catch @ 0310c418
                       catch() { ... } // from try @ 0310d4a4 with catch @ 0310c418
                       catch() { ... } // from try @ 0310d4e4 with catch @ 0310c418
                       catch() { ... } // from try @ 0310d528 with catch @ 0310c418
                       catch() { ... } // from try @ 0310d5a8 with catch @ 0310c418 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((UnityEngine_EventSystems_EventSystem_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  eventSystem = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  __this_01 = (UnityEngine_EventSystems_PointerEventData_o *)
              thunk_FUN_01bda818(UnityEngine_EventSystems_PointerEventData_TypeInfo);
  UnityEngine_EventSystems_PointerEventData___ctor(__this_01,eventSystem,(MethodInfo *)0x0);
  if (x != (IconLabelButton_o *)0x0) {
    target = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
    if ((UnityEngine_EventSystems_ExecuteEvents_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
    }
    if (DAT_04565b85 == '\0') {
      FUN_01bab630(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
      DAT_04565b85 = '\x01';
    }
    if ((UnityEngine_EventSystems_ExecuteEvents_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_EventSystems_ExecuteEvents__Execute<object>
              (target,(UnityEngine_EventSystems_BaseEventData_o *)__this_01,
               (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T__o *)
               UnityEngine_EventSystems_ExecuteEvents_TypeInfo->static_fields->s_PointerClickHandler
               ,Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IPointerClickHandler>__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

