// InControl.UnityKeyCodeAxisSource$$GetValue @ RVA 0x347AE5C

float InControl_UnityKeyCodeAxisSource__GetValue
                (InControl_UnityKeyCodeAxisSource_o *__this,InControl_InputDevice_o *inputDevice,
                MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = UnityEngine_Input__GetKey((__this->fields).negativeKeyCode,(MethodInfo *)0x0);
  bVar3 = UnityEngine_Input__GetKey((__this->fields).positiveKeyCode,(MethodInfo *)0x0);
  uVar1 = ~(uint)bVar2 & 1;
  if (!bVar3) {
    uVar1 = -(uint)bVar2;
  }
  return (float)(int)uVar1;
}

