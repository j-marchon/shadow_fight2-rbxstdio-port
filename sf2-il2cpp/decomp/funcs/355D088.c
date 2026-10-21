// InControl.UnityInputDeviceProfile$$Analog @ RVA 0x355D088

InControl_InputControlSource_o *
InControl_UnityInputDeviceProfile__Analog(int32_t index,MethodInfo *method)

{
  InControl_UnityAnalogSource_o *__this;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568b91 & 1) == 0) {
    FUN_01bab630(&InControl_UnityAnalogSource_TypeInfo);
    DAT_04568b91 = 1;
    method = extraout_x1;
  }
  __this = (InControl_UnityAnalogSource_o *)
           thunk_FUN_01bda818(InControl_UnityAnalogSource_TypeInfo,method);
  InControl_UnityAnalogSource___ctor(__this,index,(MethodInfo *)0x0);
  return (InControl_InputControlSource_o *)__this;
}

