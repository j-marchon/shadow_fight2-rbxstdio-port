// InControl.UnityMouseAxisSource$$GetState @ RVA 0x34878F8

bool InControl_UnityMouseAxisSource__GetState
               (InControl_UnityMouseAxisSource_o *__this,InControl_InputDevice_o *inputDevice,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = UnityEngine_Input__GetAxisRaw((__this->fields).mouseAxisQuery,(MethodInfo *)0x0);
  if (DAT_045602fa == '\0') {
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
    DAT_045602fa = '\x01';
  }
  fVar3 = ABS(fVar1);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar4 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
  fVar2 = fVar3 * 1e-06;
  if (fVar3 * 1e-06 <= fVar4) {
    fVar2 = fVar4;
  }
  return fVar2 <= ABS(0.0 - fVar1);
}

