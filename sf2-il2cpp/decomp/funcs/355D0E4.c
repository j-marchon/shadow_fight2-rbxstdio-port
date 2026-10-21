// InControl.UnityInputDeviceProfile$$KeyCodeButton @ RVA 0x355D0E4

InControl_InputControlSource_o *
InControl_UnityInputDeviceProfile__KeyCodeButton
          (UnityEngine_KeyCode_array *keyCodeList,MethodInfo *method)

{
  InControl_UnityKeyCodeSource_o *__this;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568b92 & 1) == 0) {
    FUN_01bab630(&InControl_UnityKeyCodeSource_TypeInfo);
    DAT_04568b92 = 1;
    method = extraout_x1;
  }
  __this = (InControl_UnityKeyCodeSource_o *)
           thunk_FUN_01bda818(InControl_UnityKeyCodeSource_TypeInfo,method);
  InControl_UnityKeyCodeSource___ctor(__this,keyCodeList,(MethodInfo *)0x0);
  return (InControl_InputControlSource_o *)__this;
}

