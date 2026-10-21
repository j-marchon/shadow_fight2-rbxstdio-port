// InControl.InputDevice$$ApplyCircularDeadZone @ RVA 0x348BDB0

float InControl_InputDevice__ApplyCircularDeadZone
                (InControl_InputDevice_o *__this,float axisValue1,float axisValue2,
                float lowerDeadZone,float upperDeadZone,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (DAT_045602fb == '\0') {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_045602fb = '\x01';
    method = extraout_x1;
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Math_TypeInfo,method);
    method = extraout_x1_00;
  }
  fVar3 = SQRT(axisValue1 * axisValue1 + axisValue2 * axisValue2);
  fVar2 = 0.0;
  if (((lowerDeadZone != upperDeadZone) &&
      (fVar1 = (fVar3 - lowerDeadZone) / (upperDeadZone - lowerDeadZone), fVar2 = 0.0, 0.0 <= fVar1)
      ) && (fVar2 = fVar1, 1.0 < fVar1)) {
    fVar2 = 1.0;
  }
  if (DAT_045602fb == '\0') {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_045602fb = '\x01';
    method = extraout_x1_01;
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Math_TypeInfo,method);
  }
  if (fVar3 <= 1e-05) {
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
    }
    fVar3 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.x;
  }
  else {
    fVar3 = axisValue1 / fVar3;
  }
  return fVar2 * fVar3;
}

