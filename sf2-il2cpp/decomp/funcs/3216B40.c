// InControl.InputManager$$get_ActiveDevice @ RVA 0x3216B40

InControl_InputDevice_o * InControl_InputManager__get_ActiveDevice(MethodInfo *method)

{
  InControl_InputManager_StaticFields *pIVar1;
  InControl_InputDevice_o **ppIVar2;
  
  if ((DAT_04566edc & 1) == 0) {
    FUN_01bab630(&InControl_InputDevice_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566edc = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar1 = InControl_InputManager_TypeInfo->static_fields;
  if (pIVar1->activeDevice == (InControl_InputDevice_o *)0x0) {
    if ((InControl_InputDevice_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppIVar2 = &InControl_InputDevice_TypeInfo->static_fields->Null;
  }
  else {
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pIVar1 = InControl_InputManager_TypeInfo->static_fields;
    }
    ppIVar2 = &pIVar1->activeDevice;
  }
  return *ppIVar2;
}

