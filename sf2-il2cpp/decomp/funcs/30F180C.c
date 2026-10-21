// InControl.UnityKeyCodeSource$$GetValue @ RVA 0x30F180C

float InControl_UnityKeyCodeSource__GetValue
                (InControl_UnityKeyCodeSource_o *__this,InControl_InputDevice_o *inputDevice,
                MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  
  bVar1 = InControl_UnityKeyCodeSource__GetState(__this,inputDevice,method);
  fVar2 = 1.0;
  if (!bVar1) {
    fVar2 = 0.0;
  }
  return fVar2;
}

