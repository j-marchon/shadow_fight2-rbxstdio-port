// InControl.Utility$$DrawRectGizmo @ RVA 0x3131DE4

void InControl_Utility__DrawRectGizmo
               (UnityEngine_Vector2_o center,UnityEngine_Vector2_o size,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Vector3_o from;
  UnityEngine_Vector3_o from_00;
  UnityEngine_Vector3_o from_01;
  UnityEngine_Vector3_o from_02;
  UnityEngine_Vector3_o to;
  UnityEngine_Vector3_o to_00;
  UnityEngine_Vector3_o to_01;
  UnityEngine_Vector3_o to_02;
  
  fVar1 = size.fields.x * 0.5;
  fVar2 = size.fields.y * 0.5;
  fVar3 = center.fields.x - fVar1;
  fVar4 = center.fields.y - fVar2;
  fVar1 = center.fields.x + fVar1;
  fVar2 = center.fields.y + fVar2;
  from.fields.y = fVar4;
  from.fields.x = fVar3;
  from.fields.z = 0.0;
  to.fields.y = fVar4;
  to.fields.x = fVar1;
  to.fields.z = 0.0;
  UnityEngine_Gizmos__DrawLine(from,to,(MethodInfo *)0x0);
  from_00.fields.y = fVar4;
  from_00.fields.x = fVar1;
  from_00.fields.z = 0.0;
  to_00.fields.y = fVar2;
  to_00.fields.x = fVar1;
  to_00.fields.z = 0.0;
  UnityEngine_Gizmos__DrawLine(from_00,to_00,(MethodInfo *)0x0);
  from_01.fields.y = fVar2;
  from_01.fields.x = fVar1;
  from_01.fields.z = 0.0;
  to_01.fields.y = fVar2;
  to_01.fields.x = fVar3;
  to_01.fields.z = 0.0;
  UnityEngine_Gizmos__DrawLine(from_01,to_01,(MethodInfo *)0x0);
  from_02.fields.y = fVar2;
  from_02.fields.x = fVar3;
  from_02.fields.z = 0.0;
  to_02.fields.y = fVar4;
  to_02.fields.x = fVar3;
  to_02.fields.z = 0.0;
  UnityEngine_Gizmos__DrawLine(from_02,to_02,(MethodInfo *)0x0);
  return;
}

