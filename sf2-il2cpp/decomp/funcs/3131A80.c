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

