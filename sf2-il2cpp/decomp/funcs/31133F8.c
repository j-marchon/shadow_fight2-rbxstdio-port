// InControl.UnityGyroAxisSource$$GetAttitude @ RVA 0x31133F8

UnityEngine_Quaternion_o InControl_UnityGyroAxisSource__GetAttitude(MethodInfo *method)

{
  UnityEngine_Gyroscope_o *__this;
  float fVar1;
  float fVar2;
  float fVar4;
  float fVar6;
  float fVar8;
  UnityEngine_Quaternion_o UVar9;
  float fVar3;
  float fVar5;
  float fVar7;
  
  if ((DAT_04566596 & 1) == 0) {
    FUN_01bab630(&InControl_UnityGyroAxisSource_TypeInfo);
    DAT_04566596 = 1;
  }
  UVar9 = UnityEngine_Quaternion__Inverse
                    (*(UnityEngine_Quaternion_Fields *)
                      InControl_UnityGyroAxisSource_TypeInfo->static_fields,(MethodInfo *)0x0);
  fVar7 = UVar9.fields.w;
  fVar5 = UVar9.fields.z;
  fVar3 = UVar9.fields.y;
  fVar1 = UVar9.fields.x;
  __this = UnityEngine_Input__get_gyro((MethodInfo *)0x0);
  if (__this != (UnityEngine_Gyroscope_o *)0x0) {
    UVar9 = UnityEngine_Gyroscope__get_attitude(__this,(MethodInfo *)0x0);
    fVar8 = UVar9.fields.w;
    fVar6 = UVar9.fields.z;
    fVar4 = UVar9.fields.y;
    fVar2 = UVar9.fields.x;
    UVar9.fields.x = (fVar3 * fVar6 + fVar7 * fVar2 + fVar1 * fVar8) - fVar5 * fVar4;
    UVar9.fields.y = (fVar5 * fVar2 + fVar7 * fVar4 + fVar3 * fVar8) - fVar1 * fVar6;
    UVar9.fields.z = (fVar1 * fVar4 + fVar7 * fVar6 + fVar5 * fVar8) - fVar3 * fVar2;
    UVar9.fields.w = ((fVar7 * fVar8 - fVar1 * fVar2) - fVar3 * fVar4) - fVar5 * fVar6;
    return (UnityEngine_Quaternion_o)UVar9.fields;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

