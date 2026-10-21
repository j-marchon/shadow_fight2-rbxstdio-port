// InControl.UnityMouseButtonSource$$GetValue @ RVA 0x30B43E8

float InControl_UnityMouseButtonSource__GetValue
                (InControl_UnityMouseButtonSource_o *__this,InControl_InputDevice_o *inputDevice,
                MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  
  bVar1 = UnityEngine_Input__GetMouseButton((__this->fields).buttonId,(MethodInfo *)0x0);
  fVar2 = 1.0;
  if (!bVar1) {
    fVar2 = 0.0;
  }
  return fVar2;
}

