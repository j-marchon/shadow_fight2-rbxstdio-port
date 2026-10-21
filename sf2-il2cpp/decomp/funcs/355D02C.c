// InControl.UnityInputDeviceProfile$$Button @ RVA 0x355D02C

InControl_InputControlSource_o *
InControl_UnityInputDeviceProfile__Button(int32_t index,MethodInfo *method)

{
  InControl_UnityButtonSource_o *__this;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568b90 & 1) == 0) {
    FUN_01bab630(&InControl_UnityButtonSource_TypeInfo);
    DAT_04568b90 = 1;
    method = extraout_x1;
  }
  __this = (InControl_UnityButtonSource_o *)
           thunk_FUN_01bda818(InControl_UnityButtonSource_TypeInfo,method);
  InControl_UnityButtonSource___ctor(__this,index,(MethodInfo *)0x0);
  return (InControl_InputControlSource_o *)__this;
}

