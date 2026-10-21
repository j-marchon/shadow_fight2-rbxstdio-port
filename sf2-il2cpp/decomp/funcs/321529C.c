// InControl.InputManager$$set_IsDualMode @ RVA 0x321529C

void InControl_InputManager__set_IsDualMode(bool value,MethodInfo *method)

{
  InControl_InputManager_c *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  InControl_InputManager_StaticFields *pIVar1;
  
  if ((DAT_04566ec0 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566ec0 = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
    method = extraout_x1_00;
  }
  pIVar1 = InControl_InputManager_TypeInfo->static_fields;
  if (pIVar1->isDualMode == value) {
    return;
  }
  method_00 = InControl_InputManager_TypeInfo;
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (InControl_InputManager_c *)
                thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
    pIVar1 = InControl_InputManager_TypeInfo->static_fields;
  }
  pIVar1->isDualMode = value;
  InControl_InputManager__UpdateDeviceManagersDualMode((MethodInfo *)method_00);
  return;
}

