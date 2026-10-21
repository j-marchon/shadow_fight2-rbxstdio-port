// TypeDefIndex 183
// Namespace: InControl
// public class UnityGyroAxisSource : InputControlSource
// Fields:
//   private int axis; // 0x10
//   private static Quaternion zeroAttitude; // 0x0

// ===== public void .ctor(UnityGyroAxisSource.GyroAxis axis)  [RVA 0x3113170]
// InControl.UnityGyroAxisSource$$.ctor @ RVA 0x3113170

void InControl_UnityGyroAxisSource___ctor
               (InControl_UnityGyroAxisSource_o *__this,int32_t axis,MethodInfo *method)

{
  MethodInfo *method_00;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).axis = axis;
  InControl_UnityGyroAxisSource__Calibrate(method_00);
  return;
}


// ===== public float GetValue(InputDevice inputDevice)  [RVA 0x31131F4]
// InControl.UnityGyroAxisSource$$GetValue @ RVA 0x31131F4

float InControl_UnityGyroAxisSource__GetValue
                (InControl_UnityGyroAxisSource_o *__this,InControl_InputDevice_o *inputDevice,
                MethodInfo *method)

{
  int iVar1;
  System_IndexOutOfRangeException_o *__this_00;
  System_String_o *message;
  undefined8 uVar2;
  float fVar3;
  UnityEngine_Vector3_o UVar4;
  
  UVar4 = InControl_UnityGyroAxisSource__GetAxis((MethodInfo *)__this);
  iVar1 = (__this->fields).axis;
  fVar3 = UVar4.fields.x;
  if (((iVar1 != 0) && (fVar3 = UVar4.fields.z, iVar1 != 2)) && (fVar3 = UVar4.fields.y, iVar1 != 1)
     ) {
    thunk_FUN_01bb9178(&System_IndexOutOfRangeException_TypeInfo);
    __this_00 = (System_IndexOutOfRangeException_o *)thunk_FUN_01bda818();
    message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7707/*"Invalid Vector3 index!"*/);
    System_IndexOutOfRangeException___ctor(__this_00,message,(MethodInfo *)0x0);
    uVar2 = thunk_FUN_01bb9178(&Method_UnityEngine_Vector3_get_Item__);
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(__this_00,uVar2);
  }
  return fVar3;
}


// ===== public bool GetState(InputDevice inputDevice)  [RVA 0x3113374]
// InControl.UnityGyroAxisSource$$GetState @ RVA 0x3113374

bool InControl_UnityGyroAxisSource__GetState
               (InControl_UnityGyroAxisSource_o *__this,InControl_InputDevice_o *inputDevice,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = InControl_UnityGyroAxisSource__GetValue(__this,inputDevice,method);
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


// ===== private static Quaternion GetAttitude()  [RVA 0x31133F8]
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


// ===== private static Vector3 GetAxis()  [RVA 0x3113274]
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


// ===== private static float ApplyDeadZone(float value)  [RVA 0x31134F4]
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


// ===== public static void Calibrate()  [RVA 0x3113198]
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

