// InControl.UnityInputDeviceProfile$$HasJoystickOrRegexName @ RVA 0x355CEA0

bool InControl_UnityInputDeviceProfile__HasJoystickOrRegexName
               (InControl_UnityInputDeviceProfile_o *__this,System_String_o *joystickName,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = InControl_UnityInputDeviceProfile__HasJoystickName(__this,joystickName,method);
  if (bVar1) {
    return true;
  }
  bVar1 = InControl_UnityInputDeviceProfile__HasLastResortRegex(__this,joystickName,method);
  return bVar1;
}

