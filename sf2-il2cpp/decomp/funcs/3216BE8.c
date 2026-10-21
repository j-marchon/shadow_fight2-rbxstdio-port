// InControl.InputManager$$set_ActiveDevice @ RVA 0x3216BE8

void InControl_InputManager__set_ActiveDevice(InControl_InputDevice_o *value,MethodInfo *method)

{
  InControl_InputDevice_o **ppIVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_04566edd & 1) == 0) {
    FUN_01bab630(&InControl_InputDevice_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566edd = 1;
    method = extraout_x1;
  }
  if (value == (InControl_InputDevice_o *)0x0) {
    if ((InControl_InputDevice_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(InControl_InputDevice_TypeInfo,method);
      method = extraout_x1_00;
    }
    value = InControl_InputDevice_TypeInfo->static_fields->Null;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  ppIVar1 = &InControl_InputManager_TypeInfo->static_fields->activeDevice;
  *ppIVar1 = value;
  thunk_FUN_01c20e04(ppIVar1,value);
  return;
}

