// InControl.InputManager$$DetachDevice @ RVA 0x3217088

void InControl_InputManager__DetachDevice(InControl_InputDevice_o *inputDevice,MethodInfo *method)

{
  InControl_InputManager_c *pIVar1;
  System_Collections_Generic_List_InputDevice__o *pSVar2;
  System_Comparison_InputDevice__o **ppSVar3;
  InControl_InputDevice_o *pIVar4;
  System_String_o *str1;
  System_String_o *pSVar5;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  System_Action_InputDevice__o *pSVar6;
  System_Comparison_InputDevice__o *comparison;
  
  if ((DAT_04566ed5 & 1) == 0) {
    FUN_01bab630(&System_Comparison<InputDevice>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&InControl_InputDevice_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_Sort__);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<DetachDevice>b__70_0__);
    FUN_01bab630(&InControl_InputManager_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_1100);
    FUN_01bab630(&StringLiteral_15494);
    DAT_04566ed5 = 1;
    method = extraout_x1;
  }
  pIVar1 = InControl_InputManager_TypeInfo;
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    pIVar1 = (InControl_InputManager_c *)thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  InControl_InputManager__AssertIsSetup((MethodInfo *)pIVar1);
  pSVar2 = InControl_InputManager_TypeInfo->static_fields->devices;
  if (pSVar2 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)pSVar2,(Il2CppObject *)inputDevice,
               Method_System_Collections_Generic_List<InputDevice>_Remove__);
    pSVar2 = InControl_InputManager_TypeInfo->static_fields->devices;
    if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    comparison = InControl_InputManager_<>c_TypeInfo->static_fields->__9__70_0;
    if (comparison == (System_Comparison_InputDevice__o *)0x0) {
      if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      comparison = (System_Comparison_InputDevice__o *)
                   thunk_FUN_01bda818(System_Comparison<InputDevice>_TypeInfo);
      System_Comparison<object>___ctor();
      ppSVar3 = &InControl_InputManager_<>c_TypeInfo->static_fields->__9__70_0;
      *ppSVar3 = comparison;
      thunk_FUN_01c20e04(ppSVar3,comparison);
    }
    if (pSVar2 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
      System_Collections_Generic_List<object>__Sort
                ((System_Collections_Generic_List_object__o *)pSVar2,
                 (System_Comparison_T__o *)comparison,
                 Method_System_Collections_Generic_List<InputDevice>_Sort__);
      pIVar1 = InControl_InputManager_TypeInfo;
      if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
        pIVar1 = (InControl_InputManager_c *)thunk_FUN_01ba7564();
      }
      pIVar4 = InControl_InputManager__get_ActiveDevice((MethodInfo *)pIVar1);
      if (pIVar4 == inputDevice) {
        method_00 = extraout_x1_00;
        if ((InControl_InputDevice_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method_00 = extraout_x1_01;
        }
        pIVar4 = InControl_InputDevice_TypeInfo->static_fields->Null;
        if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(InControl_InputManager_TypeInfo);
          method_00 = extraout_x1_02;
        }
        InControl_InputManager__set_ActiveDevice(pIVar4,method_00);
      }
      if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar6 = InControl_InputManager_TypeInfo->static_fields->OnDeviceDetached;
      if (pSVar6 != (System_Action_InputDevice__o *)0x0) {
                    /* try { // try from 033172b0 to 034173c3 has its CatchHandler @ 033172b0
                       catch() { ... } // from try @ 033172b0 with catch @ 033172b0
                       catch() { ... } // from try @ 033174e8 with catch @ 033172b0
                       catch() { ... } // from try @ 03317580 with catch @ 033172b0
                       catch() { ... } // from try @ 03317588 with catch @ 033172b0
                       catch() { ... } // from try @ 0331763c with catch @ 033172b0 */
        (*(code *)(pSVar6->fields).super.super.invoke_impl)
                  ((pSVar6->fields).super.super.method_code,inputDevice,
                   (pSVar6->fields).super.super.method);
        pSVar5 = StringLiteral_15494;
        if (inputDevice == (InControl_InputDevice_o *)0x0) {
          str1 = (System_String_o *)0x0;
        }
        else {
          str1 = (System_String_o *)
                 (*(inputDevice->klass->vtable)._3_ToString.methodPtr)
                           (inputDevice,(inputDevice->klass->vtable)._3_ToString.method);
        }
        pSVar5 = System_String__Concat(pSVar5,str1,StringLiteral_1100,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__Log((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

