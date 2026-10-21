// OMANDMDCGMF$$AJMLPDCFOEK @ RVA 0x3299F0C

void OMANDMDCGMF__AJMLPDCFOEK
               (UnityEngine_Color_o CJDCMKEBBNK,UnityEngine_Vector3_o FMPJLBLNHMC,
               UnityEngine_Vector3_o IHEPHBIPLPM,float BMIPOAFLAPO,
               UnityEngine_UI_VertexHelper_o *NLKOFFFAFHM,MethodInfo *method)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  UnityEngine_UIVertex_array *verts;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_100 [112];
  
  fVar10 = FMPJLBLNHMC.fields.z;
  fVar9 = FMPJLBLNHMC.fields.y;
  fVar11 = FMPJLBLNHMC.fields.x;
  if ((DAT_04567383 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UIVertex___TypeInfo);
    FUN_01bab630(&UnityEngine_UIVertex_TypeInfo);
    FUN_01bab630(&UnityEngine_Vector3___TypeInfo);
    DAT_04567383 = 1;
  }
  lVar3 = FUN_01bab718(UnityEngine_Vector3___TypeInfo,4);
  fVar8 = BMIPOAFLAPO * 0.5;
  if (ABS(fVar11 - IHEPHBIPLPM.fields.x) <= ABS(fVar9 - IHEPHBIPLPM.fields.y)) {
    if (lVar3 == 0) goto LAB_0339a1c0;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 == 0) goto LAB_0339a1bc;
    *(float *)(lVar3 + 0x20) = fVar11 - fVar8;
    *(float *)(lVar3 + 0x24) = fVar9;
    *(float *)(lVar3 + 0x28) = fVar10;
    if (uVar1 == 1) goto LAB_0339a1bc;
    *(float *)(lVar3 + 0x2c) = fVar11 + fVar8;
    *(float *)(lVar3 + 0x30) = fVar9 + 0.0;
    *(float *)(lVar3 + 0x34) = fVar10 + 0.0;
    if (uVar1 < 3) goto LAB_0339a1bc;
    *(float *)(lVar3 + 0x38) = IHEPHBIPLPM.fields.x + fVar8;
    *(float *)(lVar3 + 0x3c) = IHEPHBIPLPM.fields.y + 0.0;
    *(float *)(lVar3 + 0x40) = IHEPHBIPLPM.fields.z + 0.0;
    if (uVar1 == 3) goto LAB_0339a1bc;
    fVar11 = IHEPHBIPLPM.fields.x - fVar8;
  }
  else {
    if (lVar3 == 0) goto LAB_0339a1c0;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 == 0) {
LAB_0339a1bc:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    *(float *)(lVar3 + 0x20) = fVar11 + 0.0;
    *(float *)(lVar3 + 0x24) = fVar9 + fVar8;
    *(float *)(lVar3 + 0x28) = fVar10 + 0.0;
    if (uVar1 == 1) goto LAB_0339a1bc;
    *(float *)(lVar3 + 0x2c) = IHEPHBIPLPM.fields.x + 0.0;
    *(float *)(lVar3 + 0x30) = IHEPHBIPLPM.fields.y + fVar8;
    *(float *)(lVar3 + 0x34) = IHEPHBIPLPM.fields.z + 0.0;
    if (uVar1 < 3) goto LAB_0339a1bc;
    *(float *)(lVar3 + 0x38) = IHEPHBIPLPM.fields.x;
    *(float *)(lVar3 + 0x3c) = IHEPHBIPLPM.fields.y - fVar8;
    *(float *)(lVar3 + 0x40) = IHEPHBIPLPM.fields.z;
    if (uVar1 == 3) goto LAB_0339a1bc;
    IHEPHBIPLPM.fields.y = fVar9 - fVar8;
    IHEPHBIPLPM.fields.z = fVar10;
  }
  *(float *)(lVar3 + 0x44) = fVar11;
  *(float *)(lVar3 + 0x48) = IHEPHBIPLPM.fields.y;
  *(float *)(lVar3 + 0x4c) = IHEPHBIPLPM.fields.z;
  verts = (UnityEngine_UIVertex_array *)FUN_01bab718(UnityEngine_UIVertex___TypeInfo,4);
  if (verts != (UnityEngine_UIVertex_array *)0x0) {
    if (0 < (int)verts->max_length) {
      uVar4 = 0;
      uVar7 = verts->max_length & 0xffffffff;
      pfVar5 = &verts->m_Items[0].fields.position.fields.z;
      pfVar6 = (float *)(lVar3 + 0x28);
      do {
        if ((UnityEngine_UIVertex_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          uVar7 = (ulong)(uint)verts->max_length;
        }
        memcpy(auStack_100,
               &(UnityEngine_UIVertex_TypeInfo->static_fields->s_DefaultTangent).fields.w,0x6c);
        if (uVar7 <= uVar4) goto LAB_0339a1bc;
        memcpy((UnityEngine_Vector3_Fields *)(pfVar5 + -2),auStack_100,0x6c);
        uVar2 = FUN_01ca4568(CJDCMKEBBNK.fields.r,CJDCMKEBBNK.fields.g,CJDCMKEBBNK.fields.b,
                             CJDCMKEBBNK.fields.a,0);
        uVar1 = (uint)verts->max_length;
        uVar7 = (ulong)uVar1;
        if ((uVar7 <= uVar4) || (pfVar5[8] = (float)uVar2, *(uint *)(lVar3 + 0x18) <= uVar4))
        goto LAB_0339a1bc;
        fVar11 = pfVar6[-1];
        fVar9 = *pfVar6;
        uVar4 = uVar4 + 1;
        ((UnityEngine_Vector3_Fields *)(pfVar5 + -2))->x = pfVar6[-2];
        ((UnityEngine_Vector3_Fields *)(pfVar5 + -2))->y = fVar11;
        *pfVar5 = fVar9;
        pfVar5 = pfVar5 + 0x1b;
        pfVar6 = pfVar6 + 3;
      } while ((long)uVar4 < (long)(int)uVar1);
    }
    if (NLKOFFFAFHM != (UnityEngine_UI_VertexHelper_o *)0x0) {
      UnityEngine_UI_VertexHelper__AddUIVertexQuad(NLKOFFFAFHM,verts,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0339a1c0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

