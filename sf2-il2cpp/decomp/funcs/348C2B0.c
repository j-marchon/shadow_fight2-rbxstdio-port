// InControl.InputDevice$$.cctor @ RVA 0x348C2B0

void InControl_InputDevice___cctor(MethodInfo *method)

{
  InControl_InputDevice_o *__this;
  MethodInfo *in_x2;
  
  if ((DAT_045683e4 & 1) == 0) {
    FUN_01bab630(&InControl_InputDevice_TypeInfo);
    FUN_01bab630(&StringLiteral_9649);
    DAT_045683e4 = 1;
  }
  __this = (InControl_InputDevice_o *)thunk_FUN_01bda818(InControl_InputDevice_TypeInfo);
  InControl_InputDevice___ctor(__this,StringLiteral_9649,in_x2);
  InControl_InputDevice_TypeInfo->static_fields->Null = __this;
  thunk_FUN_01c20e04(InControl_InputDevice_TypeInfo->static_fields,__this);
  return;
}

