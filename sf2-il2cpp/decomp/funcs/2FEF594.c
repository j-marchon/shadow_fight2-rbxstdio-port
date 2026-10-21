// Nekki.SF2.GUI.Fight.EndFightScreen$$INHOOPJHFPC @ RVA 0x2FEF594

void Nekki_SF2_GUI_Fight_EndFightScreen__INHOOPJHFPC
               (Nekki_SF2_GUI_Fight_EndFightScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityEvent_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ResistanceContent_o **ppNVar4;
  Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o **ppNVar5;
  Nekki_SF2_GUI_Fight_EndFightContent_o **ppNVar6;
  Nekki_SF2_GUI_Fight_ResistanceContent_o *x;
  Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o *x_00;
  Nekki_SF2_GUI_Fight_EndFightContent_o *x_01;
  
  if ((DAT_04565a5d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565a5d = 1;
    method = extraout_x1;
  }
  ppNVar5 = &(__this->fields).HABFEMIFKEL;
  x_00 = *ppNVar5;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((*ppNVar5 == (Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o *)0x0) ||
       (pUVar2 = ((*ppNVar5)->fields).CloseEvent, pUVar2 == (UnityEngine_Events_UnityEvent_o *)0x0))
    goto LAB_030ef77c;
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar2,(MethodInfo *)0x0);
    if (*ppNVar5 == (Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o *)0x0) goto LAB_030ef77c;
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)*ppNVar5,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(pUVar3,false,(MethodInfo *)0x0);
    *ppNVar5 = (Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o *)0x0;
    thunk_FUN_01c20e04(ppNVar5,0);
  }
  ppNVar6 = &(__this->fields).DBOLEPNBFAD;
  x_01 = *ppNVar6;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((*ppNVar6 == (Nekki_SF2_GUI_Fight_EndFightContent_o *)0x0) ||
       (pUVar2 = ((*ppNVar6)->fields).AnimationEndEvent,
       pUVar2 == (UnityEngine_Events_UnityEvent_o *)0x0)) goto LAB_030ef77c;
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar2,(MethodInfo *)0x0);
    if ((*ppNVar6 == (Nekki_SF2_GUI_Fight_EndFightContent_o *)0x0) ||
       (pUVar2 = ((*ppNVar6)->fields).CloseEvent, pUVar2 == (UnityEngine_Events_UnityEvent_o *)0x0))
    goto LAB_030ef77c;
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar2,(MethodInfo *)0x0);
    if ((*ppNVar6 == (Nekki_SF2_GUI_Fight_EndFightContent_o *)0x0) ||
       (pUVar2 = ((*ppNVar6)->fields).RetryFightEvent,
       pUVar2 == (UnityEngine_Events_UnityEvent_o *)0x0)) goto LAB_030ef77c;
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar2,(MethodInfo *)0x0);
    if ((*ppNVar6 == (Nekki_SF2_GUI_Fight_EndFightContent_o *)0x0) ||
       (pUVar2 = ((*ppNVar6)->fields).GoToShopEvent,
       pUVar2 == (UnityEngine_Events_UnityEvent_o *)0x0)) goto LAB_030ef77c;
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar2,(MethodInfo *)0x0);
    if (*ppNVar6 == (Nekki_SF2_GUI_Fight_EndFightContent_o *)0x0) goto LAB_030ef77c;
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)*ppNVar6,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(pUVar3,false,(MethodInfo *)0x0);
    *ppNVar6 = (Nekki_SF2_GUI_Fight_EndFightContent_o *)0x0;
    thunk_FUN_01c20e04(ppNVar6,0);
  }
  ppNVar4 = &(__this->fields).EHKAIEBMIFA;
  x = *ppNVar4;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if ((*ppNVar4 != (Nekki_SF2_GUI_Fight_ResistanceContent_o *)0x0) &&
     (pUVar2 = ((*ppNVar4)->fields).CloseEvent, pUVar2 != (UnityEngine_Events_UnityEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar2,(MethodInfo *)0x0);
    if (*ppNVar4 != (Nekki_SF2_GUI_Fight_ResistanceContent_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)*ppNVar4,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(pUVar3,false,(MethodInfo *)0x0);
      *ppNVar4 = (Nekki_SF2_GUI_Fight_ResistanceContent_o *)0x0;
      thunk_FUN_01c20e04(ppNVar4,0);
      return;
    }
  }
LAB_030ef77c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

