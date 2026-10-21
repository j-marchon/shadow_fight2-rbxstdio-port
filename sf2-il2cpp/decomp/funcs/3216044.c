// InControl.InputManager$$Update @ RVA 0x3216044

void InControl_InputManager__Update(MethodInfo *method)

{
  InControl_InputManager_c *method_00;
  
  if ((DAT_04566ec8 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566ec8 = 1;
  }
  method_00 = InControl_InputManager_TypeInfo;
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (InControl_InputManager_c *)thunk_FUN_01ba7564();
  }
  InControl_InputManager__UpdateInternal((MethodInfo *)method_00);
  return;
}

