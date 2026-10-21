// InControl.UnityInputDeviceManager$$DetectDetachedJoystickDevices @ RVA 0x34AB0C4

void InControl_UnityInputDeviceManager__DetectDetachedJoystickDevices
               (InControl_UnityInputDeviceManager_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  System_String_array *pSVar6;
  InControl_InputDevice_o *inputDevice;
  System_String_o *text;
  System_Collections_Generic_List_InputDevice__o *pSVar7;
  int index;
  
  if ((DAT_04568530 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Item__);
    FUN_01bab630(&InControl_UnityInputDevice_TypeInfo);
    FUN_01bab630(&StringLiteral_5323);
    DAT_04568530 = 1;
  }
  pSVar6 = UnityEngine_Input__GetJoystickNames((MethodInfo *)0x0);
  pSVar7 = (__this->fields).super.devices;
  if (pSVar7 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
    index = (pSVar7->fields)._size + -1;
    if (index < 0) {
      return;
    }
    do {
      inputDevice = (InControl_InputDevice_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar7,index,
                               Method_System_Collections_Generic_List<InputDevice>_get_Item__);
      if (inputDevice == (InControl_InputDevice_o *)0x0) break;
      bVar3 = (InControl_UnityInputDevice_TypeInfo->_2).naturalAligment;
      if ((((inputDevice->klass->_2).naturalAligment < bVar3) ||
          ((inputDevice->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
           (Il2CppClass *)InControl_UnityInputDevice_TypeInfo)) ||
         (inputDevice[1].klass == (InControl_InputDevice_c *)0x0)) break;
      bVar5 = InControl_UnityInputDeviceProfile__get_IsNotJoystick
                        ((InControl_UnityInputDeviceProfile_o *)inputDevice[1].klass,
                         (MethodInfo *)0x0);
      if (!bVar5) {
        if (pSVar6 == (System_String_array *)0x0) break;
        iVar1 = *(int *)&(inputDevice->fields).field_0x44;
        uVar2 = (uint)pSVar6->max_length;
        if (iVar1 <= (int)uVar2) {
          uVar4 = iVar1 - 1;
          if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          if (inputDevice[1].klass == (InControl_InputDevice_c *)0x0) break;
          bVar5 = InControl_UnityInputDeviceProfile__HasJoystickOrRegexName
                            ((InControl_UnityInputDeviceProfile_o *)inputDevice[1].klass,
                             pSVar6->m_Items[(int)uVar4],(MethodInfo *)0x0);
          if (bVar5) goto LAB_035ab264;
        }
        pSVar7 = (__this->fields).super.devices;
        if (pSVar7 == (System_Collections_Generic_List_InputDevice__o *)0x0) break;
        System_Collections_Generic_List<object>__Remove
                  ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)inputDevice,
                   Method_System_Collections_Generic_List<InputDevice>_Remove__);
        if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        InControl_InputManager__DetachDevice(inputDevice,(MethodInfo *)0x0);
        if (inputDevice[1].klass == (InControl_InputDevice_c *)0x0) break;
        text = System_String__Concat
                         (StringLiteral_5323,(System_String_o *)((inputDevice[1].klass)->_1).name,
                          (MethodInfo *)0x0);
        InControl_Logger__LogInfo(text,(MethodInfo *)0x0);
      }
LAB_035ab264:
      index = index + -1;
      if (index < 0) {
        return;
      }
      pSVar7 = (__this->fields).super.devices;
    } while (pSVar7 != (System_Collections_Generic_List_InputDevice__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

