// InControl.UnityInputDeviceProfile$$get_IsJoystick @ RVA 0x355CC20

bool InControl_UnityInputDeviceProfile__get_IsJoystick
               (InControl_UnityInputDeviceProfile_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (((__this->fields).LastResortRegex == (System_String_o *)0x0) &&
     ((pSVar1 = (__this->fields).JoystickNames, pSVar1 == (System_String_array *)0x0 ||
      (pSVar1->max_length == 0)))) {
    pSVar1 = (__this->fields).JoystickRegex;
    if (pSVar1 != (System_String_array *)0x0) {
      return (int)pSVar1->max_length != 0;
    }
    return false;
  }
  return true;
}

