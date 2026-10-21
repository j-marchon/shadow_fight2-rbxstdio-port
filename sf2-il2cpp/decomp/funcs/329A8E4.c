// OMANDMDCGMF$$OIMANFCDDIJ @ RVA 0x329A8E4

UnityEngine_Vector3_o
OMANDMDCGMF__OIMANFCDDIJ(int32_t NJLNDHBHPMK,UnityEngine_Bounds_o *JDNBFMCGGEG,MethodInfo *method)

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar7;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar8;
  ulong uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar14;
  UnityEngine_Vector3_o UVar17;
  
  if (8 < (uint)NJLNDHBHPMK) {
    if (DAT_0455fa77 == '\0') {
      FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
      DAT_0455fa77 = '\x01';
    }
    pUVar1 = UnityEngine_Vector3_TypeInfo->static_fields;
    uVar5._0_4_ = (pUVar1->zeroVector).fields.x;
    uVar5._4_4_ = (pUVar1->zeroVector).fields.y;
    fVar12 = (pUVar1->zeroVector).fields.z;
    goto LAB_0339aa24;
  }
  uVar9._0_4_ = (JDNBFMCGGEG->fields).m_Extents.fields.x;
  uVar9._4_4_ = (JDNBFMCGGEG->fields).m_Extents.fields.y;
  switch(NJLNDHBHPMK) {
  case 0:
    uVar11 = (JDNBFMCGGEG->fields).m_Center.fields.x;
    uVar15 = (JDNBFMCGGEG->fields).m_Center.fields.y;
    fVar12 = (JDNBFMCGGEG->fields).m_Center.fields.z;
    fVar4 = (float)uVar11 - (float)(undefined4)uVar9;
    fVar10 = (float)uVar15 + (float)uVar9._4_4_;
    goto LAB_0339aa1c;
  case 1:
    uVar2 = (JDNBFMCGGEG->fields).m_Center.fields.x;
    uVar7 = (JDNBFMCGGEG->fields).m_Center.fields.y;
    fVar12 = (JDNBFMCGGEG->fields).m_Center.fields.z;
    uVar5 = CONCAT44((float)uVar7 + (float)uVar9._4_4_,(float)uVar2 + 0.0);
    break;
  case 2:
    uVar6._0_4_ = (JDNBFMCGGEG->fields).m_Center.fields.x;
    uVar6._4_4_ = (JDNBFMCGGEG->fields).m_Center.fields.y;
    fVar12 = (JDNBFMCGGEG->fields).m_Center.fields.z;
    goto LAB_0339a9c8;
  case 3:
    uVar13 = (JDNBFMCGGEG->fields).m_Center.fields.x;
    uVar16 = (JDNBFMCGGEG->fields).m_Center.fields.y;
    uVar5 = CONCAT44((float)uVar16 + 0.0,(float)uVar13 - (float)(undefined4)uVar9);
    fVar12 = (JDNBFMCGGEG->fields).m_Center.fields.z + 0.0;
    goto LAB_0339aa24;
  case 4:
    uVar5._0_4_ = (JDNBFMCGGEG->fields).m_Center.fields.x;
    uVar5._4_4_ = (JDNBFMCGGEG->fields).m_Center.fields.y;
    fVar12 = (JDNBFMCGGEG->fields).m_Center.fields.z;
    goto LAB_0339aa24;
  case 5:
    uVar6._0_4_ = (JDNBFMCGGEG->fields).m_Center.fields.x;
    uVar6._4_4_ = (JDNBFMCGGEG->fields).m_Center.fields.y;
    fVar12 = (JDNBFMCGGEG->fields).m_Center.fields.z;
    uVar9 = uVar9 & 0xffffffff;
LAB_0339a9c8:
    uVar5 = CONCAT44((float)(uVar9 >> 0x20) + (float)((ulong)uVar6 >> 0x20),
                     (float)uVar9 + (float)uVar6);
    break;
  case 6:
    uVar3 = (JDNBFMCGGEG->fields).m_Center.fields.x;
    uVar8 = (JDNBFMCGGEG->fields).m_Center.fields.y;
    fVar12 = (JDNBFMCGGEG->fields).m_Center.fields.z;
    uVar5 = CONCAT44((float)uVar8 - (float)uVar9._4_4_,(float)uVar3 - (float)(undefined4)uVar9);
    break;
  case 7:
    uVar14._0_4_ = (JDNBFMCGGEG->fields).m_Center.fields.x;
    uVar14._4_4_ = (JDNBFMCGGEG->fields).m_Center.fields.y;
    fVar12 = (JDNBFMCGGEG->fields).m_Center.fields.z;
    fVar4 = (float)(undefined4)uVar14 + 0.0;
    goto LAB_0339aa18;
  case 8:
    uVar14._0_4_ = (JDNBFMCGGEG->fields).m_Center.fields.x;
    uVar14._4_4_ = (JDNBFMCGGEG->fields).m_Center.fields.y;
    fVar12 = (JDNBFMCGGEG->fields).m_Center.fields.z;
    fVar4 = (float)(undefined4)uVar14 + (float)(undefined4)uVar9;
LAB_0339aa18:
    fVar10 = (float)((ulong)uVar14 >> 0x20) - (float)uVar9._4_4_;
LAB_0339aa1c:
    uVar5 = CONCAT44(fVar10,fVar4);
    fVar12 = fVar12 + 0.0;
    goto LAB_0339aa24;
  }
  fVar12 = fVar12 + 0.0;
LAB_0339aa24:
  UVar17.fields.z = fVar12;
  UVar17.fields.x = (float)(int)uVar5;
  UVar17.fields.y = (float)(int)((ulong)uVar5 >> 0x20);
  return (UnityEngine_Vector3_o)UVar17.fields;
}

