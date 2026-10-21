// InControl.UnityInputDeviceProfile$$KeyCodeComboButton @ RVA 0x355D140

InControl_InputControlSource_o *
InControl_UnityInputDeviceProfile__KeyCodeComboButton
          (UnityEngine_KeyCode_array *keyCodeList,MethodInfo *method)

{
  InControl_UnityKeyCodeComboSource_o *__this;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568b93 & 1) == 0) {
    FUN_01bab630(&InControl_UnityKeyCodeComboSource_TypeInfo);
    DAT_04568b93 = 1;
    method = extraout_x1;
  }
  __this = (InControl_UnityKeyCodeComboSource_o *)
           thunk_FUN_01bda818(InControl_UnityKeyCodeComboSource_TypeInfo,method);
  InControl_UnityKeyCodeComboSource___ctor(__this,keyCodeList,(MethodInfo *)0x0);
  return (InControl_InputControlSource_o *)__this;
}

