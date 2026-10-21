// InControl.UnityInputDeviceProfile$$KeyCodeAxis @ RVA 0x355D19C

InControl_InputControlSource_o *
InControl_UnityInputDeviceProfile__KeyCodeAxis
          (int32_t negativeKeyCode,int32_t positiveKeyCode,MethodInfo *method)

{
  InControl_UnityKeyCodeAxisSource_o *__this;
  
  if ((DAT_04568b94 & 1) == 0) {
    FUN_01bab630(&InControl_UnityKeyCodeAxisSource_TypeInfo);
    DAT_04568b94 = 1;
  }
  __this = (InControl_UnityKeyCodeAxisSource_o *)
           thunk_FUN_01bda818(InControl_UnityKeyCodeAxisSource_TypeInfo);
  InControl_UnityKeyCodeAxisSource___ctor(__this,negativeKeyCode,positiveKeyCode,(MethodInfo *)0x0);
  return (InControl_InputControlSource_o *)__this;
}

