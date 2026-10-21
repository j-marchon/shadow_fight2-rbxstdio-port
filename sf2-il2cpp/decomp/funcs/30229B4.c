// InControl.UnityButtonSource$$GetValue @ RVA 0x30229B4

float InControl_UnityButtonSource__GetValue
                (InControl_UnityButtonSource_o *__this,InControl_InputDevice_o *inputDevice,
                MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  
  bVar1 = InControl_UnityButtonSource__GetState(__this,inputDevice,method);
  fVar2 = 1.0;
  if (!bVar1) {
    fVar2 = 0.0;
  }
  return fVar2;
}

