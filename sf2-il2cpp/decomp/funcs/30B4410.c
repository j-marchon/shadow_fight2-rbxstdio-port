// InControl.UnityMouseButtonSource$$GetState @ RVA 0x30B4410

bool InControl_UnityMouseButtonSource__GetState
               (InControl_UnityMouseButtonSource_o *__this,InControl_InputDevice_o *inputDevice,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = UnityEngine_Input__GetMouseButton((__this->fields).buttonId,(MethodInfo *)0x0);
  return bVar1;
}

