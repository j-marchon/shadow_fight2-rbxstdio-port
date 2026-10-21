// InControl.InputManager$$AddDeviceManager @ RVA 0x3216C7C

void InControl_InputManager__AddDeviceManager
               (InControl_InputDeviceManager_o *inputDeviceManager,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  InControl_InputManager_c *method_00;
  System_Collections_Generic_List_InputDeviceManager__o *__this;
  MethodInfo *extraout_x1;
  InControl_InputDeviceManager_array *pIVar3;
  InControl_InputManager_StaticFields *pIVar4;
  
  if ((DAT_04566ecc & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDeviceManager>_Add__);
    DAT_04566ecc = 1;
    method = extraout_x1;
  }
  method_00 = InControl_InputManager_TypeInfo;
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (InControl_InputManager_c *)
                thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  InControl_InputManager__AssertIsSetup((MethodInfo *)method_00);
  lVar2 = Method_System_Collections_Generic_List<InputDeviceManager>_Add__;
  __this = InControl_InputManager_TypeInfo->static_fields->inputDeviceManagers;
  if (__this != (System_Collections_Generic_List_InputDeviceManager__o *)0x0) {
    pIVar3 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pIVar3 != (InControl_InputDeviceManager_array *)0x0) {
      uVar1 = (__this->fields)._size;
      if (uVar1 < (uint)pIVar3->max_length) {
        (__this->fields)._size = uVar1 + 1;
        pIVar3->m_Items[(int)uVar1] = inputDeviceManager;
        thunk_FUN_01c20e04(pIVar3->m_Items + (int)uVar1,inputDeviceManager);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,
                   (Il2CppObject *)inputDeviceManager,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      if (inputDeviceManager != (InControl_InputDeviceManager_o *)0x0) {
        pIVar4 = InControl_InputManager_TypeInfo->static_fields;
                    /* WARNING: Could not recover jumptable at 0x03316d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(inputDeviceManager->klass->vtable)._8_Update.methodPtr)
                  (pIVar4->currentTime - pIVar4->lastUpdateTime,inputDeviceManager,
                   pIVar4->currentTick,(inputDeviceManager->klass->vtable)._8_Update.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

