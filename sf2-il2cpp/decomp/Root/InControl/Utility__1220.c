// TypeDefIndex 1220
// Namespace: InControl
// public static class Utility
// Fields:
//   private static Vector2[] circleVertexList; // 0x0

// ===== public static void DrawCircleGizmo(Vector2 center, float radius)  [RVA 0x3131888]
// InControl.Utility$$DrawCircleGizmo @ RVA 0x3131888

void InControl_Utility__DrawCircleGizmo
               (UnityEngine_Vector2_o center,float radius,MethodInfo *method)

{
  float *pfVar1;
  UnityEngine_Vector2_array *pUVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_o from;
  UnityEngine_Vector3_o to;
  
  if ((DAT_045666cd & 1) == 0) {
    FUN_01bab630(&InControl_Utility_TypeInfo);
    DAT_045666cd = 1;
  }
  if ((InControl_Utility_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar2 = InControl_Utility_TypeInfo->static_fields->circleVertexList;
  if (pUVar2 != (UnityEngine_Vector2_array *)0x0) {
    uVar4 = pUVar2->max_length;
    iVar3 = (int)uVar4;
    if (iVar3 == 0) {
LAB_032319d0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    if (1 < iVar3) {
      lVar5 = 0x28;
      uVar6 = 2;
      fVar8 = center.fields.y + pUVar2->m_Items[0].fields.y * radius;
      fVar7 = center.fields.x + pUVar2->m_Items[0].fields.x * radius;
      while( true ) {
        if ((InControl_Utility_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pUVar2 = InControl_Utility_TypeInfo->static_fields->circleVertexList;
        if (pUVar2 == (UnityEngine_Vector2_array *)0x0) goto LAB_032319cc;
        if ((ulong)(uint)pUVar2->max_length <= uVar6 - 1) goto LAB_032319d0;
        pfVar1 = (float *)((long)&(((UnityEngine_Vector2_array *)(pUVar2->m_Items + -4))->obj).klass
                          + lVar5);
        fVar9 = center.fields.x + *pfVar1 * radius;
        fVar10 = center.fields.y + pfVar1[1] * radius;
        from.fields.y = fVar8;
        from.fields.x = fVar7;
        from.fields.z = 0.0;
        to.fields.y = fVar10;
        to.fields.x = fVar9;
        to.fields.z = 0.0;
        UnityEngine_Gizmos__DrawLine(from,to,(MethodInfo *)0x0);
        if ((uVar4 & 0xffffffff) == uVar6) break;
        lVar5 = lVar5 + 8;
        uVar6 = uVar6 + 1;
        fVar8 = fVar10;
        fVar7 = fVar9;
      }
    }
    return;
  }
LAB_032319cc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void DrawCircleGizmo(Vector2 center, float radius, Color color)  [RVA 0x31319D4]
// InControl.Utility$$DrawCircleGizmo @ RVA 0x31319D4

void InControl_Utility__DrawCircleGizmo
               (UnityEngine_Vector2_o center,float radius,UnityEngine_Color_o color,
               MethodInfo *method)

{
  InControl_Utility_c *method_00;
  
  if ((DAT_045666ce & 1) == 0) {
    FUN_01bab630(&InControl_Utility_TypeInfo);
    DAT_045666ce = 1;
  }
  UnityEngine_Gizmos__set_color(color,(MethodInfo *)0x0);
  method_00 = InControl_Utility_TypeInfo;
  if ((InControl_Utility_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (InControl_Utility_c *)thunk_FUN_01ba7564();
  }
  InControl_Utility__DrawCircleGizmo(center,radius,(MethodInfo *)method_00);
  return;
}


// ===== public static void DrawOvalGizmo(Vector2 center, Vector2 size)  [RVA 0x3131A80]
// InControl.Utility$$DrawOvalGizmo @ RVA 0x3131A80

void InControl_Utility__DrawOvalGizmo
               (UnityEngine_Vector2_o center,UnityEngine_Vector2_o size,MethodInfo *method)

{
  float *pfVar1;
  UnityEngine_Vector2_array *pUVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_o from;
  UnityEngine_Vector3_o to;
  
  if ((DAT_045666cf & 1) == 0) {
    FUN_01bab630(&InControl_Utility_TypeInfo);
    DAT_045666cf = 1;
  }
  if ((InControl_Utility_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar2 = InControl_Utility_TypeInfo->static_fields->circleVertexList;
  if (pUVar2 != (UnityEngine_Vector2_array *)0x0) {
    uVar4 = pUVar2->max_length;
    iVar3 = (int)uVar4;
    if (iVar3 == 0) {
LAB_03231bd8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    if (1 < iVar3) {
      fVar11 = size.fields.x * 0.5;
      fVar12 = size.fields.y * 0.5;
      lVar5 = 0x28;
      uVar6 = 2;
      fVar8 = center.fields.y + fVar12 * pUVar2->m_Items[0].fields.y;
      fVar7 = center.fields.x + fVar11 * pUVar2->m_Items[0].fields.x;
      while( true ) {
        if ((InControl_Utility_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pUVar2 = InControl_Utility_TypeInfo->static_fields->circleVertexList;
        if (pUVar2 == (UnityEngine_Vector2_array *)0x0) goto LAB_03231bd4;
        if ((ulong)(uint)pUVar2->max_length <= uVar6 - 1) goto LAB_03231bd8;
        pfVar1 = (float *)((long)&(((UnityEngine_Vector2_array *)(pUVar2->m_Items + -4))->obj).klass
                          + lVar5);
        fVar9 = center.fields.x + fVar11 * *pfVar1;
        fVar10 = center.fields.y + fVar12 * pfVar1[1];
        from.fields.y = fVar8;
        from.fields.x = fVar7;
        from.fields.z = 0.0;
        to.fields.y = fVar10;
        to.fields.x = fVar9;
        to.fields.z = 0.0;
        UnityEngine_Gizmos__DrawLine(from,to,(MethodInfo *)0x0);
        if ((uVar4 & 0xffffffff) == uVar6) break;
        lVar5 = lVar5 + 8;
        uVar6 = uVar6 + 1;
        fVar8 = fVar10;
        fVar7 = fVar9;
      }
    }
    return;
  }
LAB_03231bd4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void DrawOvalGizmo(Vector2 center, Vector2 size, Color color)  [RVA 0x3131BDC]
// InControl.Utility$$DrawOvalGizmo @ RVA 0x3131BDC

void InControl_Utility__DrawOvalGizmo
               (UnityEngine_Vector2_o center,UnityEngine_Vector2_o size,UnityEngine_Color_o color,
               MethodInfo *method)

{
  InControl_Utility_c *method_00;
  
  if ((DAT_045666d0 & 1) == 0) {
    FUN_01bab630(&InControl_Utility_TypeInfo);
    DAT_045666d0 = 1;
  }
  UnityEngine_Gizmos__set_color(color,(MethodInfo *)0x0);
  method_00 = InControl_Utility_TypeInfo;
  if ((InControl_Utility_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (InControl_Utility_c *)thunk_FUN_01ba7564();
  }
  InControl_Utility__DrawOvalGizmo(center,size,(MethodInfo *)method_00);
  return;
}


// ===== public static void DrawRectGizmo(Rect rect)  [RVA 0x3131C90]
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


// ===== public static void DrawRectGizmo(Rect rect, Color color)  [RVA 0x3131D30]
// InControl.Utility$$DrawRectGizmo @ RVA 0x3131D30

void InControl_Utility__DrawRectGizmo
               (UnityEngine_Rect_o rect,UnityEngine_Color_o color,MethodInfo *method)

{
  InControl_Utility_c *method_00;
  
  if ((DAT_045666d1 & 1) == 0) {
    FUN_01bab630(&InControl_Utility_TypeInfo);
    DAT_045666d1 = 1;
  }
  UnityEngine_Gizmos__set_color(color,(MethodInfo *)0x0);
  method_00 = InControl_Utility_TypeInfo;
  if ((InControl_Utility_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (InControl_Utility_c *)thunk_FUN_01ba7564();
  }
  InControl_Utility__DrawRectGizmo(rect,(MethodInfo *)method_00);
  return;
}


// ===== public static void DrawRectGizmo(Vector2 center, Vector2 size)  [RVA 0x3131DE4]
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


// ===== public static void DrawRectGizmo(Vector2 center, Vector2 size, Color color)  [RVA 0x3131E98]
// InControl.Utility$$DrawRectGizmo @ RVA 0x3131E98

void InControl_Utility__DrawRectGizmo
               (UnityEngine_Vector2_o center,UnityEngine_Vector2_o size,UnityEngine_Color_o color,
               MethodInfo *method)

{
  InControl_Utility_c *method_00;
  
  if ((DAT_045666d2 & 1) == 0) {
    FUN_01bab630(&InControl_Utility_TypeInfo);
    DAT_045666d2 = 1;
  }
  UnityEngine_Gizmos__set_color(color,(MethodInfo *)0x0);
  method_00 = InControl_Utility_TypeInfo;
  if ((InControl_Utility_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (InControl_Utility_c *)thunk_FUN_01ba7564();
  }
  InControl_Utility__DrawRectGizmo(center,size,(MethodInfo *)method_00);
  return;
}


// ===== public static bool GameObjectIsCulledOnCurrentCamera(GameObject gameObject)  [RVA 0x3131F4C]
// InControl.Utility$$GameObjectIsCulledOnCurrentCamera @ RVA 0x3131F4C

bool InControl_Utility__GameObjectIsCulledOnCurrentCamera
               (UnityEngine_GameObject_o *gameObject,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  UnityEngine_Camera_o *__this;
  
  __this = UnityEngine_Camera__get_current((MethodInfo *)0x0);
  if (__this != (UnityEngine_Camera_o *)0x0) {
    uVar1 = UnityEngine_Camera__get_cullingMask(__this,(MethodInfo *)0x0);
    if (gameObject != (UnityEngine_GameObject_o *)0x0) {
      uVar2 = UnityEngine_GameObject__get_layer(gameObject,(MethodInfo *)0x0);
      return (uVar1 >> (ulong)(uVar2 & 0x1f) & 1) == 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static Color MoveColorTowards(Color color0, Color color1, float maxDelta)  [RVA 0x3131F9C]
// InControl.Utility$$MoveColorTowards @ RVA 0x3131F9C

UnityEngine_Color_o
InControl_Utility__MoveColorTowards
          (UnityEngine_Color_o color0,UnityEngine_Color_o color1,float maxDelta,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Color_o UVar11;
  
  fVar9 = color1.fields.a;
  fVar8 = color1.fields.b;
  fVar7 = color1.fields.g;
  fVar6 = color1.fields.r;
  fVar5 = color0.fields.a;
  fVar4 = color0.fields.b;
  fVar3 = color0.fields.g;
  fVar1 = color0.fields.r;
  fVar10 = -maxDelta;
  fVar2 = maxDelta;
  if (fVar6 - fVar1 < 0.0) {
    fVar2 = fVar10;
  }
  fVar2 = fVar1 + fVar2;
  if (ABS(fVar6 - fVar1) <= maxDelta) {
    fVar2 = fVar6;
  }
  fVar1 = maxDelta;
  if (fVar7 - fVar3 < 0.0) {
    fVar1 = fVar10;
  }
  fVar1 = fVar3 + fVar1;
  if (ABS(fVar7 - fVar3) <= maxDelta) {
    fVar1 = fVar7;
  }
  fVar3 = maxDelta;
  if (fVar8 - fVar4 < 0.0) {
    fVar3 = fVar10;
  }
  fVar3 = fVar4 + fVar3;
  if (ABS(fVar8 - fVar4) <= maxDelta) {
    fVar3 = fVar8;
  }
  fVar4 = maxDelta;
  if (fVar9 - fVar5 < 0.0) {
    fVar4 = fVar10;
  }
  fVar4 = fVar5 + fVar4;
  if (ABS(fVar9 - fVar5) <= maxDelta) {
    fVar4 = fVar9;
  }
  UVar11.fields.g = fVar1;
  UVar11.fields.r = fVar2;
  UVar11.fields.a = fVar4;
  UVar11.fields.b = fVar3;
  return (UnityEngine_Color_o)UVar11.fields;
}


// ===== public static float ApplyDeadZone(float value, float lowerDeadZone, float upperDeadZone)  [RVA 0x3132018]
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


// ===== public static Vector2 ApplyCircularDeadZone(Vector2 axisVector, float lowerDeadZone, float upperDeadZone)  [RVA 0x3132054]
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


// ===== public static Vector2 ApplyCircularDeadZone(float axisX, float axisY, float lowerDeadZone, float upperDeadZone)  [RVA 0x3132184]
// InControl.Utility$$ApplyCircularDeadZone @ RVA 0x3132184

UnityEngine_Vector2_o
InControl_Utility__ApplyCircularDeadZone
          (float axisX,float axisY,float lowerDeadZone,float upperDeadZone,MethodInfo *method)

{
  InControl_Utility_c *method_00;
  UnityEngine_Vector2_o axisVector;
  UnityEngine_Vector2_Fields UVar1;
  
  if ((DAT_045666d3 & 1) == 0) {
    FUN_01bab630(&InControl_Utility_TypeInfo);
    DAT_045666d3 = 1;
  }
  method_00 = InControl_Utility_TypeInfo;
  if ((InControl_Utility_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (InControl_Utility_c *)thunk_FUN_01ba7564();
  }
  axisVector.fields.y = axisY;
  axisVector.fields.x = axisX;
  UVar1 = (UnityEngine_Vector2_Fields)
          InControl_Utility__ApplyCircularDeadZone
                    (axisVector,lowerDeadZone,upperDeadZone,(MethodInfo *)method_00);
  return (UnityEngine_Vector2_o)UVar1;
}


// ===== private static void .cctor()  [RVA 0x3132200]
// InControl.Utility$$.cctor @ RVA 0x3132200

void InControl_Utility___cctor(MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Vector2_array *pUVar2;
  
  if ((DAT_045666d4 & 1) == 0) {
    FUN_01bab630(&InControl_Utility_TypeInfo);
    FUN_01bab630(&UnityEngine_Vector2___TypeInfo);
    DAT_045666d4 = 1;
  }
  pUVar2 = (UnityEngine_Vector2_array *)FUN_01bab718(UnityEngine_Vector2___TypeInfo,0x19);
  if (pUVar2 != (UnityEngine_Vector2_array *)0x0) {
    uVar1 = (uint)pUVar2->max_length;
    if (uVar1 != 0) {
      pUVar2->m_Items[0].fields = (UnityEngine_Vector2_Fields)0x3f80000000000000;
                    /* try { // try from 03232268 to 0333226f has its CatchHandler @ 03232398 */
                    /* try { // try from 03232284 to 03332287 has its CatchHandler @ 03232384 */
                    /* try { // try from 03232288 to 03332297 has its CatchHandler @ 03232394 */
                    /* try { // try from 032322a0 to 033322bb has its CatchHandler @ 03232390 */
                    /* try { // try from 032322bc to 03332377 has its CatchHandler @ 0323213c */
                    /* try { // try from 03232378 to 0333237b has its CatchHandler @ 0323238c */
                    /* try { // try from 0323237c to 0333237f has its CatchHandler @ 03232388 */
                    /* try { // try from 03232380 to 033323af has its CatchHandler @ 0323213c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03232284 with catch @ 03232384
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0323237c with catch @ 03232388
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03232378 with catch @ 0323238c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032322a0 with catch @ 03232390
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03232288 with catch @ 03232394
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03232268 with catch @ 03232398
                        */
                    /* try { // try from 032323b0 to 033323b3 has its CatchHandler @ 032323dc */
                    /* try { // try from 032323b4 to 033323eb has its CatchHandler @ 0323213c */
                    /* catch() { ... } // from try @ 032323b0 with catch @ 032323dc */
                    /* try { // try from 032323ec to 033323f3 has its CatchHandler @ 03232408 */
                    /* try { // try from 032323f4 to 033323ff has its CatchHandler @ 0323213c */
                    /* try { // try from 03232400 to 03332407 has its CatchHandler @ 03232408 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032323ec with catch @ 03232408
                       catch(type#2 @ 00000000) { ... } // from try @ 03232400 with catch @ 03232408
                        */
      if ((((((uVar1 != 1) &&
             (pUVar2->m_Items[1].fields.x = 0.2588, pUVar2->m_Items[1].fields.y = 0.9659, 2 < uVar1)
             ) && (pUVar2->m_Items[2].fields.x = 0.5, pUVar2->m_Items[2].fields.y = 0.866,
                  uVar1 != 3)) &&
           (((pUVar2->m_Items[3].fields.x = 0.7071, pUVar2->m_Items[3].fields.y = 0.7071, 4 < uVar1
             && (pUVar2->m_Items[4].fields.x = 0.866, pUVar2->m_Items[4].fields.y = 0.5, uVar1 != 5)
             ) && ((pUVar2->m_Items[5].fields.x = 0.9659, pUVar2->m_Items[5].fields.y = 0.2588,
                   6 < uVar1 &&
                   ((pUVar2->m_Items[6].fields.x = 1.0, pUVar2->m_Items[6].fields.y = 0.0,
                    uVar1 != 7 &&
                    (pUVar2->m_Items[7].fields.x = 0.9659, pUVar2->m_Items[7].fields.y = -0.2588,
                    8 < uVar1)))))))) &&
          ((pUVar2->m_Items[8].fields.x = 0.866, pUVar2->m_Items[8].fields.y = -0.5, uVar1 != 9 &&
           ((((((pUVar2->m_Items[9].fields.x = 0.7071, pUVar2->m_Items[9].fields.y = -0.7071,
                10 < uVar1 &&
                (pUVar2->m_Items[10].fields.x = 0.5, pUVar2->m_Items[10].fields.y = -0.866,
                uVar1 != 0xb)) &&
               (pUVar2->m_Items[0xb].fields.x = 0.2588, pUVar2->m_Items[0xb].fields.y = -0.9659,
               0xc < uVar1)) &&
              ((pUVar2->m_Items[0xc].fields.x = 0.0, pUVar2->m_Items[0xc].fields.y = -1.0,
               uVar1 != 0xd &&
               (pUVar2->m_Items[0xd].fields.x = -0.2588, pUVar2->m_Items[0xd].fields.y = -0.9659,
               0xe < uVar1)))) &&
             ((pUVar2->m_Items[0xe].fields.x = -0.5, pUVar2->m_Items[0xe].fields.y = -0.866,
              uVar1 != 0xf &&
              ((pUVar2->m_Items[0xf].fields.x = -0.7071, pUVar2->m_Items[0xf].fields.y = -0.7071,
               0x10 < uVar1 &&
               (pUVar2->m_Items[0x10].fields.x = -0.866, pUVar2->m_Items[0x10].fields.y = -0.5,
               uVar1 != 0x11)))))) &&
            (pUVar2->m_Items[0x11].fields.x = -0.9659, pUVar2->m_Items[0x11].fields.y = -0.2588,
            0x12 < uVar1)))))) &&
         ((((pUVar2->m_Items[0x12].fields.x = -1.0, pUVar2->m_Items[0x12].fields.y = -0.0,
            uVar1 != 0x13 &&
            (pUVar2->m_Items[0x13].fields.x = -0.9659, pUVar2->m_Items[0x13].fields.y = 0.2588,
            0x14 < uVar1)) &&
           (pUVar2->m_Items[0x14].fields.x = -0.866, pUVar2->m_Items[0x14].fields.y = 0.5,
           uVar1 != 0x15)) &&
          ((pUVar2->m_Items[0x15].fields.x = -0.7071, pUVar2->m_Items[0x15].fields.y = 0.7071,
           0x16 < uVar1 &&
           (pUVar2->m_Items[0x16].fields.x = -0.5, pUVar2->m_Items[0x16].fields.y = 0.866,
           uVar1 != 0x17)))))) {
        pUVar2->m_Items[0x17].fields.x = -0.2588;
        pUVar2->m_Items[0x17].fields.y = 0.9659;
        if (0x18 < uVar1) {
          pUVar2->m_Items[0x18].fields.x = 0.0;
          pUVar2->m_Items[0x18].fields.y = 1.0;
          InControl_Utility_TypeInfo->static_fields->circleVertexList = pUVar2;
          thunk_FUN_01c20e04(InControl_Utility_TypeInfo->static_fields);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

