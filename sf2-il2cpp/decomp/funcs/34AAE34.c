// InControl.UnityInputDeviceManager$$Update @ RVA 0x34AAE34

void InControl_UnityInputDeviceManager__Update
               (InControl_UnityInputDeviceManager_o *__this,uint64_t updateTick,float deltaTime,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *b;
  MethodInfo *method_00;
  System_String_o *a;
  
  if ((DAT_0456852b & 1) == 0) {
    FUN_01bab630(&StringLiteral_4250);
    DAT_0456852b = 1;
  }
  (__this->fields).deviceRefreshTimer = (__this->fields).deviceRefreshTimer + deltaTime;
  bVar1 = System_String__IsNullOrEmpty((__this->fields).joystickHash,(MethodInfo *)0x0);
  if ((bVar1) || (1.0 <= (__this->fields).deviceRefreshTimer)) {
    a = (__this->fields).joystickHash;
    (__this->fields).deviceRefreshTimer = 0.0;
    b = InControl_UnityInputDeviceManager__get_JoystickHash((MethodInfo *)(ulong)bVar1);
    bVar1 = System_String__op_Inequality(a,b,(MethodInfo *)0x0);
    if (bVar1) {
      InControl_Logger__LogInfo(StringLiteral_4250,(MethodInfo *)0x0);
      InControl_UnityInputDeviceManager__RefreshDevices(__this,method_00);
      return;
    }
  }
  return;
}

