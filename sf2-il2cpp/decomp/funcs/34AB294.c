// InControl.UnityInputDeviceManager$$AttachDevice @ RVA 0x34AB294

void InControl_UnityInputDeviceManager__AttachDevice
               (InControl_UnityInputDeviceManager_o *__this,InControl_UnityInputDevice_o *device,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_InputDevice__o *__this_00;
  InControl_InputDevice_array *pIVar3;
  
  if ((DAT_0456852c & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_Add__);
    DAT_0456852c = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<InputDevice>_Add__;
  __this_00 = (__this->fields).super.devices;
  if (__this_00 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
    pIVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pIVar3 != (InControl_InputDevice_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pIVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pIVar3->m_Items[(int)uVar1] = (InControl_InputDevice_o *)device;
        thunk_FUN_01c20e04(pIVar3->m_Items + (int)uVar1,device);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)device,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      InControl_InputManager__AttachDevice((InControl_InputDevice_o *)device,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

