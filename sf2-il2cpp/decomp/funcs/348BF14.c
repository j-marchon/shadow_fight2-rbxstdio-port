// InControl.InputDevice$$ApplySmoothing @ RVA 0x348BF14

float InControl_InputDevice__ApplySmoothing
                (InControl_InputDevice_o *__this,float thisValue,float lastValue,float deltaTime,
                float sensitivity,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (DAT_045602fa == '\0') {
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
    DAT_045602fa = '\x01';
  }
  fVar2 = ABS(sensitivity);
  fVar1 = 1.0;
  fVar4 = 1.0;
  if (fVar2 <= 1.0) {
    fVar2 = 1.0;
  }
  fVar3 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
  fVar5 = fVar2 * 1e-06;
  if (fVar2 * 1e-06 <= fVar3) {
    fVar5 = fVar3;
  }
  fVar2 = thisValue;
  if (fVar5 <= ABS(1.0 - sensitivity)) {
    fVar5 = deltaTime * sensitivity * 100.0;
    if (lastValue < 0.0) {
      fVar4 = -1.0;
    }
    if (thisValue < 0.0) {
      fVar1 = -1.0;
    }
    if (fVar4 != fVar1) {
      lastValue = 0.0;
    }
    fVar4 = fVar5;
    if (thisValue - lastValue < 0.0) {
      fVar4 = -(deltaTime * sensitivity * 100.0);
    }
    fVar2 = lastValue + fVar4;
    if (ABS(thisValue - lastValue) <= fVar5) {
      fVar2 = thisValue;
    }
  }
  return fVar2;
}

