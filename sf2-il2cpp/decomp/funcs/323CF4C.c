// Nekki.SF2.GUI.SFScrollRect$$OnDisable @ RVA 0x323CF4C

void Nekki_SF2_GUI_SFScrollRect__OnDisable(Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityAction_T0__o *pUVar2;
  UnityEngine_RectTransform_o *rect;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  UnityEngine_UI_Scrollbar_o *pUVar3;
  UnityEngine_Events_UnityEvent_float__o *pUVar4;
  
  if ((DAT_04567065 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_CanvasUpdateRegistry_TypeInfo);
    FUN_01bab630(&UnityEngine_UI_LayoutRebuilder_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFScrollRect_JIKDDHFNLDE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFScrollRect_LCIOHKDCJPH__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<float>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__);
    DAT_04567065 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_UI_CanvasUpdateRegistry_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_UI_CanvasUpdateRegistry_TypeInfo,method);
  }
  UnityEngine_UI_CanvasUpdateRegistry__UnRegisterCanvasElementForRebuild
            ((UnityEngine_UI_ICanvasElement_o *)__this,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).m_HorizontalScrollbar;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (__this->fields).m_HorizontalScrollbar;
    if (pUVar3 == (UnityEngine_UI_Scrollbar_o *)0x0) goto LAB_0333d174;
    pUVar4 = (UnityEngine_Events_UnityEvent_float__o *)(pUVar3->fields).m_OnValueChanged;
    pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction<float>_TypeInfo);
    UnityEngine_Events_UnityAction<float>___ctor();
    if (pUVar4 == (UnityEngine_Events_UnityEvent_float__o *)0x0) goto LAB_0333d174;
    UnityEngine_Events_UnityEvent<float>__RemoveListener
              (pUVar4,pUVar2,Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__);
  }
  pUVar3 = (__this->fields).m_VerticalScrollbar;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (__this->fields).m_VerticalScrollbar;
    if (pUVar3 != (UnityEngine_UI_Scrollbar_o *)0x0) {
      pUVar4 = (UnityEngine_Events_UnityEvent_float__o *)(pUVar3->fields).m_OnValueChanged;
      pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<float>_TypeInfo);
      UnityEngine_Events_UnityAction<float>___ctor();
      if (pUVar4 != (UnityEngine_Events_UnityEvent_float__o *)0x0) {
        UnityEngine_Events_UnityEvent<float>__RemoveListener
                  (pUVar4,pUVar2,Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__);
        goto LAB_0333d0e0;
      }
    }
LAB_0333d174:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_0333d0e0:
  (__this->fields).OPLFKCHEAIN = false;
  UnityEngine_DrivenRectTransformTracker__Clear(&(__this->fields).DBKFPHHNDNP,0);
  method_00 = extraout_x1_00;
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
    method_00 = extraout_x1_01;
  }
  (__this->fields).CDHNBOKGCCN.fields =
       (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
  rect = Nekki_SF2_GUI_SFScrollRect__INLENKAOOPD(__this,method_00);
  if ((UnityEngine_UI_LayoutRebuilder_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_UI_LayoutRebuilder_TypeInfo);
  }
  UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild(rect,(MethodInfo *)0x0);
  UnityEngine_EventSystems_UIBehaviour__OnDisable
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

