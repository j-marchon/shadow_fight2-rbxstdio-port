// InControl.InputDevice$$GetControlByName @ RVA 0x348B658

InControl_InputControl_o *
InControl_InputDevice__GetControlByName
          (InControl_InputDevice_o *__this,System_String_o *inputControlName,MethodInfo *method)

{
  int32_t inputControlType;
  InControl_InputControl_o *pIVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)inputControlName;
  if ((DAT_045683de & 1) == 0) {
    FUN_01bab630(&InControl_InputDevice_TypeInfo);
    DAT_045683de = 1;
    method_00 = extraout_x1;
  }
  if ((InControl_InputDevice_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  inputControlType = InControl_InputDevice__GetInputControlTypeByName(inputControlName,method_00);
  pIVar1 = InControl_InputDevice__GetControl(__this,inputControlType,method);
  return pIVar1;
}

