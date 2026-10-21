// OMANDMDCGMF$$IMPBHOBAEEI @ RVA 0x329851C

UnityEngine_Vector3_o
OMANDMDCGMF__IMPBHOBAEEI(int32_t NJLNDHBHPMK,UnityEngine_Bounds_o *JDNBFMCGGEG,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  UnityEngine_Vector3_o UVar6;
  
  if ((uint)NJLNDHBHPMK < 9) {
    fVar3 = (JDNBFMCGGEG->fields).m_Extents.fields.x;
    uVar1 = 1 << (ulong)(NJLNDHBHPMK & 0x1f);
    if ((uVar1 & 0x49) == 0) {
      if ((uVar1 & 0x92) != 0) {
        fVar3 = (JDNBFMCGGEG->fields).m_Center.fields.x;
        uVar4._0_4_ = (JDNBFMCGGEG->fields).m_Center.fields.y;
        uVar4._4_4_ = (JDNBFMCGGEG->fields).m_Center.fields.z;
        goto LAB_03398580;
      }
      uVar5._0_4_ = (JDNBFMCGGEG->fields).m_Center.fields.y;
      uVar5._4_4_ = (JDNBFMCGGEG->fields).m_Center.fields.z;
      fVar3 = fVar3 + (JDNBFMCGGEG->fields).m_Center.fields.x;
    }
    else {
      uVar5._0_4_ = (JDNBFMCGGEG->fields).m_Center.fields.y;
      uVar5._4_4_ = (JDNBFMCGGEG->fields).m_Center.fields.z;
      fVar3 = (JDNBFMCGGEG->fields).m_Center.fields.x - fVar3;
    }
    uVar4 = CONCAT44((float)((ulong)uVar5 >> 0x20) + 0.0,(float)uVar5 + 0.0);
  }
  else {
    if (DAT_0455fa77 == '\0') {
      FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
      DAT_0455fa77 = '\x01';
    }
    pUVar2 = UnityEngine_Vector3_TypeInfo->static_fields;
    fVar3 = (pUVar2->zeroVector).fields.x;
    uVar4._0_4_ = (pUVar2->zeroVector).fields.y;
    uVar4._4_4_ = (pUVar2->zeroVector).fields.z;
  }
LAB_03398580:
  UVar6.fields.y = (undefined4)uVar4;
  UVar6.fields.x = fVar3;
  UVar6.fields.z = (float)((ulong)uVar4 >> 0x20);
  return (UnityEngine_Vector3_o)UVar6.fields;
}

