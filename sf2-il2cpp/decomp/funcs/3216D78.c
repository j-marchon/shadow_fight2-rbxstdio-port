// InControl.InputManager$$AttachDevice @ RVA 0x3216D78

void InControl_InputManager__AttachDevice(InControl_InputDevice_o *inputDevice,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  InControl_InputManager_c *method_00;
  ulong uVar3;
  System_Collections_Generic_List_InputDevice__o *pSVar4;
  System_Comparison_InputDevice__o **ppSVar5;
  MethodInfo *pMVar6;
  InControl_InputDevice_o *pIVar7;
  System_String_o *str1;
  System_String_o *pSVar8;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  InControl_InputDevice_array *pIVar9;
  System_Action_InputDevice__o *pSVar10;
  System_Comparison_InputDevice__o *comparison;
  
  if ((DAT_04566ed4 & 1) == 0) {
    FUN_01bab630(&System_Comparison<InputDevice>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&InControl_InputDevice_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_Sort__);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<AttachDevice>b__69_0__);
    FUN_01bab630(&InControl_InputManager_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_15493);
    FUN_01bab630(&StringLiteral_1100);
    DAT_04566ed4 = 1;
    method = extraout_x1;
  }
  method_00 = InControl_InputManager_TypeInfo;
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (InControl_InputManager_c *)
                thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  InControl_InputManager__AssertIsSetup((MethodInfo *)method_00);
  if (inputDevice != (InControl_InputDevice_o *)0x0) {
    uVar3 = (*(inputDevice->klass->vtable)._6_get_IsSupportedOnThisPlatform.methodPtr)
                      (inputDevice,
                       (inputDevice->klass->vtable)._6_get_IsSupportedOnThisPlatform.method);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    lVar2 = Method_System_Collections_Generic_List<InputDevice>_Add__;
    pSVar4 = InControl_InputManager_TypeInfo->static_fields->devices;
    if (pSVar4 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
      pIVar9 = (pSVar4->fields)._items;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (pIVar9 != (InControl_InputDevice_array *)0x0) {
        uVar1 = (pSVar4->fields)._size;
        if (uVar1 < (uint)pIVar9->max_length) {
          (pSVar4->fields)._size = uVar1 + 1;
          pIVar9->m_Items[(int)uVar1] = inputDevice;
          thunk_FUN_01c20e04(pIVar9->m_Items + (int)uVar1,inputDevice);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)inputDevice
                     ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        pSVar4 = InControl_InputManager_TypeInfo->static_fields->devices;
        if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        comparison = InControl_InputManager_<>c_TypeInfo->static_fields->__9__69_0;
        if (comparison == (System_Comparison_InputDevice__o *)0x0) {
          if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          comparison = (System_Comparison_InputDevice__o *)
                       thunk_FUN_01bda818(System_Comparison<InputDevice>_TypeInfo);
          System_Comparison<object>___ctor();
          ppSVar5 = &InControl_InputManager_<>c_TypeInfo->static_fields->__9__69_0;
          *ppSVar5 = comparison;
          thunk_FUN_01c20e04(ppSVar5,comparison);
        }
        if (pSVar4 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
          System_Collections_Generic_List<object>__Sort
                    ((System_Collections_Generic_List_object__o *)pSVar4,
                     (System_Comparison_T__o *)comparison,
                     Method_System_Collections_Generic_List<InputDevice>_Sort__);
          if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar10 = InControl_InputManager_TypeInfo->static_fields->OnDeviceAttached;
          if (pSVar10 != (System_Action_InputDevice__o *)0x0) {
            pMVar6 = (MethodInfo *)
                     (*(code *)(pSVar10->fields).super.super.invoke_impl)
                               ((pSVar10->fields).super.super.method_code,inputDevice,
                                (pSVar10->fields).super.super.method);
            pIVar7 = InControl_InputManager__get_ActiveDevice(pMVar6);
            pMVar6 = extraout_x1_00;
            if ((InControl_InputDevice_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(InControl_InputDevice_TypeInfo);
              pMVar6 = extraout_x1_01;
            }
            if (pIVar7 == InControl_InputDevice_TypeInfo->static_fields->Null) {
              if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
                pMVar6 = extraout_x1_02;
              }
              InControl_InputManager__set_ActiveDevice(inputDevice,pMVar6);
            }
            pSVar8 = StringLiteral_15493;
            str1 = (System_String_o *)
                   (*(inputDevice->klass->vtable)._3_ToString.methodPtr)
                             (inputDevice,(inputDevice->klass->vtable)._3_ToString.method);
            pSVar8 = System_String__Concat(pSVar8,str1,StringLiteral_1100,(MethodInfo *)0x0);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
            }
            UnityEngine_Debug__Log((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

