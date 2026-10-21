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

