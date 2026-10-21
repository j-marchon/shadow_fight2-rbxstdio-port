// InControl.InputManager$$set_EnableXInput @ RVA 0x3217920

void InControl_InputManager__set_EnableXInput(bool value,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04566edf & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566edf = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  InControl_InputManager_TypeInfo->static_fields->enableXInput = value;
  return;
}

