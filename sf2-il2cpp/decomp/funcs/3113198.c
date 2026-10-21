// InControl.UnityGyroAxisSource$$Calibrate @ RVA 0x3113198

void InControl_UnityGyroAxisSource__Calibrate(MethodInfo *method)

{
  UnityEngine_Gyroscope_o *__this;
  InControl_UnityGyroAxisSource_StaticFields *pIVar1;
  UnityEngine_Quaternion_o UVar2;
  
  if ((DAT_04566597 & 1) == 0) {
    FUN_01bab630(&InControl_UnityGyroAxisSource_TypeInfo);
    DAT_04566597 = 1;
  }
  __this = UnityEngine_Input__get_gyro((MethodInfo *)0x0);
  if (__this != (UnityEngine_Gyroscope_o *)0x0) {
    UVar2 = UnityEngine_Gyroscope__get_attitude(__this,(MethodInfo *)0x0);
    pIVar1 = InControl_UnityGyroAxisSource_TypeInfo->static_fields;
    (pIVar1->zeroAttitude).fields.x = UVar2.fields.x;
    (pIVar1->zeroAttitude).fields.y = UVar2.fields.y;
    (pIVar1->zeroAttitude).fields.z = UVar2.fields.z;
    (pIVar1->zeroAttitude).fields.w = UVar2.fields.w;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

