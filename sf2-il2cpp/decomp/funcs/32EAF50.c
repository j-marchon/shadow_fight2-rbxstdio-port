// LJLLAKHOFFF$$PNJDKJLPKHF @ RVA 0x32EAF50

void LJLLAKHOFFF__PNJDKJLPKHF
               (UnityEngine_Bounds_o *JDNBFMCGGEG,float OKKPDDLFLJE,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = (JDNBFMCGGEG->fields).m_Center.fields.x;
  fVar2 = (JDNBFMCGGEG->fields).m_Center.fields.y;
  fVar5 = (JDNBFMCGGEG->fields).m_Extents.fields.y;
  fVar6 = (JDNBFMCGGEG->fields).m_Extents.fields.z;
  fVar3 = (JDNBFMCGGEG->fields).m_Center.fields.z;
  fVar4 = (JDNBFMCGGEG->fields).m_Extents.fields.x;
  fVar8 = fVar2 - fVar5;
  fVar2 = fVar2 + fVar5;
  if (OKKPDDLFLJE <= fVar8) {
    fVar8 = OKKPDDLFLJE;
  }
  fVar7 = fVar1 - fVar4;
  fVar5 = fVar3 - fVar6;
  if (fVar2 <= OKKPDDLFLJE) {
    fVar2 = OKKPDDLFLJE;
  }
                    /* try { // try from 033eaf88 to 034eafaf has its CatchHandler @ 033eae9c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033eaf24 with catch @ 033eaf94
                        */
  fVar1 = ((fVar1 + fVar4) - fVar7) * 0.5;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033eaf3c with catch @ 033eaf98
                        */
  fVar3 = ((fVar3 + fVar6) - fVar5) * 0.5;
  fVar2 = (fVar2 - fVar8) * 0.5;
  (JDNBFMCGGEG->fields).m_Extents.fields.y = fVar2;
  (JDNBFMCGGEG->fields).m_Extents.fields.z = fVar3;
                    /* try { // try from 033eafb0 to 034eafc7 has its CatchHandler @ 033eb020 */
  (JDNBFMCGGEG->fields).m_Center.fields.x = fVar7 + fVar1;
  (JDNBFMCGGEG->fields).m_Center.fields.y = fVar8 + fVar2;
  (JDNBFMCGGEG->fields).m_Center.fields.z = fVar5 + fVar3;
  (JDNBFMCGGEG->fields).m_Extents.fields.x = fVar1;
  return;
}

