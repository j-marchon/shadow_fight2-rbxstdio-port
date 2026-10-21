// InControl.UnityKeyCodeComboSource$$GetValue @ RVA 0x32A9590

float InControl_UnityKeyCodeComboSource__GetValue
                (InControl_UnityKeyCodeComboSource_o *__this,InControl_InputDevice_o *inputDevice,
                MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  
  bVar1 = InControl_UnityKeyCodeComboSource__GetState(__this,inputDevice,method);
  fVar2 = 1.0;
  if (!bVar1) {
    fVar2 = 0.0;
  }
  return fVar2;
}

