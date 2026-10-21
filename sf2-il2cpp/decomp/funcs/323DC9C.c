// Nekki.SF2.GUI.SFScrollRect$$set_verticalScrollbar @ RVA 0x323DC9C

void Nekki_SF2_GUI_SFScrollRect__set_verticalScrollbar
               (Nekki_SF2_GUI_SFScrollRect_o *__this,UnityEngine_UI_Scrollbar_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityAction_T0__o *pUVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  UnityEngine_UI_Scrollbar_o **ppUVar3;
  UnityEngine_UI_Scrollbar_o *pUVar4;
  UnityEngine_Events_UnityEvent_float__o *pUVar5;
  
  if ((DAT_0456706b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFScrollRect_LCIOHKDCJPH__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<float>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<float>_AddListener__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__);
    DAT_0456706b = 1;
  }
  ppUVar3 = &(__this->fields).m_VerticalScrollbar;
  pUVar4 = *ppUVar3;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
  if (bVar1) {
    if (*ppUVar3 == (UnityEngine_UI_Scrollbar_o *)0x0) goto LAB_0333de28;
    pUVar5 = (UnityEngine_Events_UnityEvent_float__o *)((*ppUVar3)->fields).m_OnValueChanged;
    pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction<float>_TypeInfo);
    UnityEngine_Events_UnityAction<float>___ctor();
    if (pUVar5 == (UnityEngine_Events_UnityEvent_float__o *)0x0) goto LAB_0333de28;
    UnityEngine_Events_UnityEvent<float>__RemoveListener
              (pUVar5,pUVar2,Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__);
  }
  *ppUVar3 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppUVar3,CJNHFNHJHPE);
  pUVar4 = *ppUVar3;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (bVar1) {
    if (*ppUVar3 != (UnityEngine_UI_Scrollbar_o *)0x0) {
      pUVar5 = (UnityEngine_Events_UnityEvent_float__o *)((*ppUVar3)->fields).m_OnValueChanged;
      pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<float>_TypeInfo);
      UnityEngine_Events_UnityAction<float>___ctor();
      if (pUVar5 != (UnityEngine_Events_UnityEvent_float__o *)0x0) {
        UnityEngine_Events_UnityEvent<float>__AddListener
                  (pUVar5,pUVar2,Method_UnityEngine_Events_UnityEvent<float>_AddListener__);
        method_00 = extraout_x1_00;
        goto LAB_0333de10;
      }
    }
LAB_0333de28:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_0333de10:
  Nekki_SF2_GUI_SFScrollRect__CAOCACEJCIP(__this,method_00);
  return;
}

