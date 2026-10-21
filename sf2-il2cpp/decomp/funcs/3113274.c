// InControl.UnityGyroAxisSource$$GetAxis @ RVA 0x3113274

/* WARNING: Removing unreachable block (ram,0x03213348) */

UnityEngine_Vector3_o InControl_UnityGyroAxisSource__GetAxis(MethodInfo *method)

{
  bool bVar1;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Quaternion_o rotation;
  float fVar2;
  
  rotation = InControl_UnityGyroAxisSource__GetAttitude(method);
  if (DAT_0455fb9d == '\0') {
    FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
    DAT_0455fb9d = '\x01';
  }
  UVar6 = UnityEngine_Quaternion__op_Multiply
                    (rotation,(UnityEngine_Vector3_TypeInfo->static_fields->forwardVector).fields,
                     (MethodInfo *)0x0);
  fVar2 = UVar6.fields.y;
  fVar4 = UVar6.fields.x;
  fVar3 = fVar4;
  if (1.0 < fVar4) {
    fVar3 = 1.0;
  }
  if (fVar4 < -1.0) {
    fVar3 = -1.0;
  }
  fVar4 = (ABS(fVar3) + -0.05) / 0.95;
  bVar1 = fVar4 < 0.0;
  if (1.0 < fVar4) {
    fVar4 = 1.0;
  }
  if (bVar1) {
    fVar4 = 0.0;
  }
  fVar5 = fVar2;
  if (1.0 < fVar2) {
    fVar5 = 1.0;
  }
  if (fVar3 < 0.0) {
    fVar4 = -fVar4;
  }
  if (fVar2 < -1.0) {
    fVar5 = -1.0;
  }
  fVar3 = (ABS(fVar5) + -0.05) / 0.95;
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  if (fVar5 < 0.0) {
    fVar3 = -fVar3;
  }
  UVar6.fields.y = fVar3;
  UVar6.fields.x = fVar4;
  UVar6.fields.z = 0.0;
  return (UnityEngine_Vector3_o)UVar6.fields;
}

