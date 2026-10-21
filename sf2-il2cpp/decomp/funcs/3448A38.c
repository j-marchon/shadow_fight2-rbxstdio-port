// Nekki.SF2.GUI.Tutorial.Controls.TutorialScrollTouch$$IMMFEBFFAEA @ RVA 0x3448A38

void Nekki_SF2_GUI_Tutorial_Controls_TutorialScrollTouch__IMMFEBFFAEA
               (Nekki_SF2_GUI_Tutorial_Controls_TutorialScrollTouch_o *__this,
               UnityEngine_Vector2_o EEGKJKNENDE,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  UnityEngine_EventSystems_EventSystem_o *eventSystem;
  UnityEngine_EventSystems_PointerEventData_o *__this_00;
  Il2CppObject *pIVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *extraout_x1;
  Il2CppClass *pIVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_04568251 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<IBeginDragHandler>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<IInitializePotentialDragHandler>__);
    FUN_01bab630(&UnityEngine_EventSystems_EventSystem_TypeInfo);
    FUN_01bab630(&UnityEngine_EventSystems_IBeginDragHandler_TypeInfo);
    FUN_01bab630(&UnityEngine_EventSystems_IInitializePotentialDragHandler_TypeInfo);
    FUN_01bab630(&UnityEngine_EventSystems_PointerEventData_TypeInfo);
    DAT_04568251 = 1;
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
  (__this_00->fields)._dragging_k__BackingField = true;
  pIVar3 = UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponent<IInitializePotentialDragHandler>__);
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar5 = pIVar3->klass;
    uVar1._0_1_ = (pIVar5->_2).rank;
    uVar1._1_1_ = (pIVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pIVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)UnityEngine_EventSystems_IInitializePotentialDragHandler_TypeInfo) {
          pVVar4 = pIVar5->vtable + *piVar7;
          goto LAB_03548b88;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar4 = (VirtualInvokeData *)
             FUN_01b81914(pIVar3,UnityEngine_EventSystems_IInitializePotentialDragHandler_TypeInfo,0
                         );
LAB_03548b88:
                    /* try { // try from 03548b8c to 03648e37 has its CatchHandler @ 03548b8c
                       catch() { ... } // from try @ 03548b8c with catch @ 03548b8c
                       catch() { ... } // from try @ 03548e80 with catch @ 03548b8c
                       catch() { ... } // from try @ 03548ed8 with catch @ 03548b8c
                       catch() { ... } // from try @ 03548f0c with catch @ 03548b8c
                       catch() { ... } // from try @ 03548f3c with catch @ 03548b8c */
    (*pVVar4->methodPtr)(pIVar3,__this_00,pVVar4->method);
  }
  pIVar3 = UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponent<IBeginDragHandler>__);
  if (pIVar3 == (Il2CppObject *)0x0) {
    return;
  }
  pIVar5 = pIVar3->klass;
  uVar2._0_1_ = (pIVar5->_2).rank;
  uVar2._1_1_ = (pIVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar2;
  if (uVar6 != 0) {
    piVar7 = &((pIVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)UnityEngine_EventSystems_IBeginDragHandler_TypeInfo) {
        pVVar4 = pIVar5->vtable + *piVar7;
        goto LAB_03548c14;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)
           FUN_01b81914(pIVar3,UnityEngine_EventSystems_IBeginDragHandler_TypeInfo,0);
LAB_03548c14:
                    /* WARNING: Could not recover jumptable at 0x03548c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar4->methodPtr)(pIVar3,__this_00,pVVar4->method);
  return;
}

