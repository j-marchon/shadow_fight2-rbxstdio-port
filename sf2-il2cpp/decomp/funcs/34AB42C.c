// InControl.UnityInputDeviceManager$$AttachKeyboardDeviceWithConfig @ RVA 0x34AB42C

void InControl_UnityInputDeviceManager__AttachKeyboardDeviceWithConfig
               (InControl_UnityInputDeviceManager_o *__this,
               InControl_UnityInputDeviceProfile_o *config,MethodInfo *method)

{
  InControl_UnityInputDevice_o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_0456852e & 1) == 0) {
    FUN_01bab630(&InControl_UnityInputDevice_TypeInfo);
    DAT_0456852e = 1;
  }
  if ((__this->fields).keyboardDevicesAttached == false) {
    __this_00 = (InControl_UnityInputDevice_o *)
                thunk_FUN_01bda818(InControl_UnityInputDevice_TypeInfo);
    method_00 = (MethodInfo *)0x0;
    InControl_UnityInputDevice___ctor(__this_00,config,(MethodInfo *)0x0);
    InControl_UnityInputDeviceManager__AttachDevice(__this,__this_00,method_00);
    (__this->fields).keyboardDevicesAttached = true;
  }
  return;
}

