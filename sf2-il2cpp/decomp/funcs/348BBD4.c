// InControl.InputDevice$$get_LeftStickX @ RVA 0x348BBD4

InControl_InputControl_o *
InControl_InputDevice__get_LeftStickX(InControl_InputDevice_o *__this,MethodInfo *method)

{
  InControl_InputControl_o *pIVar1;
  MethodInfo *in_x2;
  
  pIVar1 = InControl_InputDevice__GetControl(__this,1,in_x2);
  return pIVar1;
}

