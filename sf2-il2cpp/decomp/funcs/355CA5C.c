// InControl.UnityInputDeviceProfile$$set_LowerDeadZone @ RVA 0x355CA5C

void InControl_UnityInputDeviceProfile__set_LowerDeadZone
               (InControl_UnityInputDeviceProfile_o *__this,float value,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = value < 0.0;
  if (1.0 < value) {
    value = 1.0;
  }
  if (bVar1) {
    value = 0.0;
  }
  (__this->fields).lowerDeadZone = value;
  return;
}

