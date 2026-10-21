// InControl.Utility$$ApplyCircularDeadZone @ RVA 0x3132054

UnityEngine_Vector2_o
InControl_Utility__ApplyCircularDeadZone
          (UnityEngine_Vector2_o axisVector,float lowerDeadZone,float upperDeadZone,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector2_o UVar6;
  
  fVar3 = axisVector.fields.y;
  fVar2 = axisVector.fields.x;
  if (DAT_045602fb == '\0') {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_045602fb = '\x01';
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  fVar5 = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
  fVar4 = 0.0;
  if (((lowerDeadZone != upperDeadZone) &&
      (fVar1 = (fVar5 - lowerDeadZone) / (upperDeadZone - lowerDeadZone), fVar4 = 0.0, 0.0 <= fVar1)
      ) && (fVar4 = fVar1, 1.0 < fVar1)) {
    fVar4 = 1.0;
  }
  if (DAT_045602fb == '\0') {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_045602fb = '\x01';
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (fVar5 <= 1e-05) {
    if (DAT_0455fa75 == '\0') {
                    /* try { // try from 0323213c to 03332267 has its CatchHandler @ 0323213c
                       catch() { ... } // from try @ 0323213c with catch @ 0323213c
                       catch() { ... } // from try @ 032322bc with catch @ 0323213c
                       catch() { ... } // from try @ 03232380 with catch @ 0323213c
                       catch() { ... } // from try @ 032323b4 with catch @ 0323213c
                       catch() { ... } // from try @ 032323f4 with catch @ 0323213c */
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
    }
    fVar2 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.x;
    fVar3 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.y;
  }
  else {
    fVar2 = fVar2 / fVar5;
    fVar3 = fVar3 / fVar5;
  }
  UVar6.fields.x = fVar4 * fVar2;
  UVar6.fields.y = fVar4 * fVar3;
  return (UnityEngine_Vector2_o)UVar6.fields;
}

