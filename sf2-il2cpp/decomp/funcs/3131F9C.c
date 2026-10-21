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

