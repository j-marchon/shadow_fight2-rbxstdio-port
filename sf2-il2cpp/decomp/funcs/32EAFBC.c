// LJLLAKHOFFF$$GKGMPIGPFPE @ RVA 0x32EAFBC

void LJLLAKHOFFF__GKGMPIGPFPE
               (UnityEngine_Bounds_o *JDNBFMCGGEG,float MLECOAHAPCE,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  
  fVar1 = (JDNBFMCGGEG->fields).m_Center.fields.x;
  fVar2 = (JDNBFMCGGEG->fields).m_Extents.fields.x;
  uVar3 = (JDNBFMCGGEG->fields).m_Center.fields.y;
  uVar4 = (JDNBFMCGGEG->fields).m_Center.fields.z;
                    /* try { // try from 033eafc8 to 034eb00f has its CatchHandler @ 033eae9c */
  uVar6 = (JDNBFMCGGEG->fields).m_Extents.fields.y;
  uVar7 = (JDNBFMCGGEG->fields).m_Extents.fields.z;
  fVar8 = fVar1 - fVar2;
  fVar1 = fVar1 + fVar2;
  if (MLECOAHAPCE <= fVar8) {
    fVar8 = MLECOAHAPCE;
  }
  if (fVar1 <= MLECOAHAPCE) {
    fVar1 = MLECOAHAPCE;
  }
  fVar2 = (((float)uVar3 + (float)uVar6) - ((float)uVar3 - (float)uVar6)) * 0.5;
  fVar5 = (((float)uVar4 + (float)uVar7) - ((float)uVar4 - (float)uVar7)) * 0.5;
  fVar1 = (fVar1 - fVar8) * 0.5;
  (JDNBFMCGGEG->fields).m_Extents.fields.x = fVar1;
                    /* try { // try from 033eb010 to 034eb01f has its CatchHandler @ 033eb020 */
  (JDNBFMCGGEG->fields).m_Extents.fields.y = fVar2;
  (JDNBFMCGGEG->fields).m_Extents.fields.z = fVar5;
  (JDNBFMCGGEG->fields).m_Center.fields.x = fVar8 + fVar1;
  (JDNBFMCGGEG->fields).m_Center.fields.y = ((float)uVar3 - (float)uVar6) + fVar2;
  (JDNBFMCGGEG->fields).m_Center.fields.z = ((float)uVar4 - (float)uVar7) + fVar5;
  return;
}

