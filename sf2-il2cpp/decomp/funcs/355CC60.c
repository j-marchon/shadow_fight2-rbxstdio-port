// InControl.UnityInputDeviceProfile$$get_IsNotJoystick @ RVA 0x355CC60

bool InControl_UnityInputDeviceProfile__get_IsNotJoystick
               (InControl_UnityInputDeviceProfile_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (((__this->fields).LastResortRegex == (System_String_o *)0x0) &&
     ((pSVar1 = (__this->fields).JoystickNames, pSVar1 == (System_String_array *)0x0 ||
      (pSVar1->max_length == 0)))) {
    pSVar1 = (__this->fields).JoystickRegex;
    if (pSVar1 != (System_String_array *)0x0) {
      return (int)pSVar1->max_length == 0;
    }
    return true;
  }
  return false;
}

