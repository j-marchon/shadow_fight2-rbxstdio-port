// InControl.Utility$$ApplyDeadZone @ RVA 0x3132018

float InControl_Utility__ApplyDeadZone
                (float value,float lowerDeadZone,float upperDeadZone,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if (((lowerDeadZone != upperDeadZone) &&
      (fVar1 = (ABS(value) - lowerDeadZone) / (upperDeadZone - lowerDeadZone), 0.0 <= fVar1)) &&
     (fVar2 = fVar1, 1.0 < fVar1)) {
    fVar2 = 1.0;
  }
  if (value < 0.0) {
    fVar2 = -fVar2;
  }
  return fVar2;
}

