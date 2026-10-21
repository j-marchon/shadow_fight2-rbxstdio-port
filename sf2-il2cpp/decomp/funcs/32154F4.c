// InControl.InputManager$$Setup @ RVA 0x32154F4

void InControl_InputManager__Setup(MethodInfo *method)

{
  InControl_InputManager_c *method_00;
  
  if ((DAT_04566ec1 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566ec1 = 1;
  }
  method_00 = InControl_InputManager_TypeInfo;
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (InControl_InputManager_c *)thunk_FUN_01ba7564();
  }
  InControl_InputManager__SetupInternal((MethodInfo *)method_00);
  return;
}

