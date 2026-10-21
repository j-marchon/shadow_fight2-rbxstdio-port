// InControl.UnityInputDeviceManager.<>c__DisplayClass12_0$$<DetectAttachedJoystickDevice>b__1 @ RVA 0x34ABE08

bool InControl_UnityInputDeviceManager_<>c__DisplayClass12_0__<DetectAttachedJoystickDevice>b__1
               (InControl_UnityInputDeviceManager___c__DisplayClass12_0_o *__this,
               InControl_UnityInputDeviceProfile_o *config,MethodInfo *method)

{
  bool bVar1;
  
  if (config != (InControl_UnityInputDeviceProfile_o *)0x0) {
    bVar1 = InControl_UnityInputDeviceProfile__HasLastResortRegex
                      (config,(__this->fields).unityJoystickName,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

