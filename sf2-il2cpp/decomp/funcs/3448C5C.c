// Nekki.SF2.GUI.Tutorial.Controls.TutorialScrollTouch$$NJHDNHBJPDH @ RVA 0x3448C5C

void Nekki_SF2_GUI_Tutorial_Controls_TutorialScrollTouch__NJHDNHBJPDH
               (Nekki_SF2_GUI_Tutorial_Controls_TutorialScrollTouch_o *__this,
               UnityEngine_Vector2_o EEGKJKNENDE,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_EventSystems_EventSystem_o *eventSystem;
  UnityEngine_EventSystems_PointerEventData_o *__this_00;
  Il2CppObject *pIVar2;
  VirtualInvokeData *pVVar3;
  MethodInfo *extraout_x1;
  Il2CppClass *pIVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_04568252 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<IEndDragHandler>__);
    FUN_01bab630(&UnityEngine_EventSystems_EventSystem_TypeInfo);
    FUN_01bab630(&UnityEngine_EventSystems_IEndDragHandler_TypeInfo);
    FUN_01bab630(&UnityEngine_EventSystems_PointerEventData_TypeInfo);
    DAT_04568252 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_EventSystems_EventSystem_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_EventSystems_EventSystem_TypeInfo,method);
  }
  eventSystem = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  __this_00 = (UnityEngine_EventSystems_PointerEventData_o *)
              thunk_FUN_01bda818(UnityEngine_EventSystems_PointerEventData_TypeInfo);
  UnityEngine_EventSystems_PointerEventData___ctor(__this_00,eventSystem,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (__this_00->fields)._button_k__BackingField = 0;
  (__this_00->fields)._position_k__BackingField.fields.x = EEGKJKNENDE.fields.x;
  (__this_00->fields)._position_k__BackingField.fields.y = EEGKJKNENDE.fields.y;
  (__this_00->fields)._dragging_k__BackingField = false;
  pIVar2 = UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponent<IEndDragHandler>__);
  if (pIVar2 == (Il2CppObject *)0x0) {
    return;
  }
  pIVar4 = pIVar2->klass;
  uVar1._0_1_ = (pIVar4->_2).rank;
  uVar1._1_1_ = (pIVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pIVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)UnityEngine_EventSystems_IEndDragHandler_TypeInfo) {
        pVVar3 = pIVar4->vtable + *piVar6;
        goto LAB_03548d94;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)
           FUN_01b81914(pIVar2,UnityEngine_EventSystems_IEndDragHandler_TypeInfo,0);
LAB_03548d94:
                    /* WARNING: Could not recover jumptable at 0x03548dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(pIVar2,__this_00,pVVar3->method);
  return;
}

