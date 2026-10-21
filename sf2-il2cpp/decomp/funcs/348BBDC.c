// InControl.InputDevice$$get_LeftStickY @ RVA 0x348BBDC

InControl_InputControl_o *
InControl_InputDevice__get_LeftStickY(InControl_InputDevice_o *__this,MethodInfo *method)

{
  InControl_InputControl_o *pIVar1;
  MethodInfo *in_x2;
  
  pIVar1 = InControl_InputDevice__GetControl(__this,2,in_x2);
  return pIVar1;
}

