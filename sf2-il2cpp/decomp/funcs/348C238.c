// InControl.InputDevice$$get_LeftStickButton @ RVA 0x348C238

InControl_InputControl_o *
InControl_InputDevice__get_LeftStickButton(InControl_InputDevice_o *__this,MethodInfo *method)

{
  InControl_InputControl_o *pIVar1;
  MethodInfo *in_x2;
  
  pIVar1 = InControl_InputDevice__GetControl(__this,3,in_x2);
  return pIVar1;
}

