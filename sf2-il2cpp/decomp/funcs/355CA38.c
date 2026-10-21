// InControl.UnityInputDeviceProfile$$set_Sensitivity @ RVA 0x355CA38

void InControl_UnityInputDeviceProfile__set_Sensitivity
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
  (__this->fields).sensitivity = value;
  return;
}

