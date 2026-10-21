// InControl.Utility$$DrawRectGizmo @ RVA 0x3131C90

void InControl_Utility__DrawRectGizmo(UnityEngine_Rect_o rect,MethodInfo *method)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_o from;
  UnityEngine_Vector3_o from_00;
  UnityEngine_Vector3_o from_01;
  UnityEngine_Vector3_o from_02;
  UnityEngine_Vector3_o to;
  UnityEngine_Vector3_o to_00;
  UnityEngine_Vector3_o to_01;
  UnityEngine_Vector3_o to_02;
  
  from_00.fields.y = rect.fields.m_YMin;
  from_02.fields.x = rect.fields.m_XMin;
  fVar2 = rect.fields.m_Width + from_02.fields.x;
  fVar3 = rect.fields.m_Height + from_00.fields.y;
  uVar1 = rect.fields._0_8_;
  from.fields.z = 0.0;
  from.fields.x = (float)(int)uVar1;
  from.fields.y = (float)(int)(uVar1 >> 0x20);
  to.fields.y = from_00.fields.y;
  to.fields.x = fVar2;
  to.fields.z = 0.0;
  UnityEngine_Gizmos__DrawLine(from,to,(MethodInfo *)0x0);
  from_00.fields.x = fVar2;
  from_00.fields.z = 0.0;
  to_00.fields.y = fVar3;
  to_00.fields.x = fVar2;
  to_00.fields.z = 0.0;
  UnityEngine_Gizmos__DrawLine(from_00,to_00,(MethodInfo *)0x0);
  from_01.fields.y = fVar3;
  from_01.fields.x = fVar2;
  from_01.fields.z = 0.0;
  to_01.fields.y = fVar3;
  to_01.fields.x = from_02.fields.x;
  to_01.fields.z = 0.0;
  UnityEngine_Gizmos__DrawLine(from_01,to_01,(MethodInfo *)0x0);
  from_02.fields.y = fVar3;
  from_02.fields.z = 0.0;
  to_02.fields.z = 0.0;
  to_02.fields.x = (float)(int)uVar1;
  to_02.fields.y = (float)(int)(uVar1 >> 0x20);
  UnityEngine_Gizmos__DrawLine(from_02,to_02,(MethodInfo *)0x0);
  return;
}

