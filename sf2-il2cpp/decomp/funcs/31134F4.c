// InControl.UnityGyroAxisSource$$ApplyDeadZone @ RVA 0x31134F4

/* WARNING: Removing unreachable block (ram,0x03213514) */

float InControl_UnityGyroAxisSource__ApplyDeadZone(float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (ABS(value) + -0.05) / 0.95;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  if (value < 0.0) {
    fVar1 = -fVar1;
  }
  return fVar1;
}

