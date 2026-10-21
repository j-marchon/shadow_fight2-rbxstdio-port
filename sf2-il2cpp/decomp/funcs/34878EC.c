// InControl.UnityMouseAxisSource$$GetValue @ RVA 0x34878EC

float InControl_UnityMouseAxisSource__GetValue
                (InControl_UnityMouseAxisSource_o *__this,InControl_InputDevice_o *inputDevice,
                MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Input__GetAxisRaw((__this->fields).mouseAxisQuery,(MethodInfo *)0x0);
  return fVar1;
}

