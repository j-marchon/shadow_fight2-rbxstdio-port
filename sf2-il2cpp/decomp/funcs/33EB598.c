// FCJBEKHDLAF$$GLAFOELPOBC @ RVA 0x33EB598

void FCJBEKHDLAF__GLAFOELPOBC
               (FCJBEKHDLAF_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,float LINBBAKAFCP,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  FPLCEOJCPOD_o *__this_00;
  OLKKAIFGGAK_o *__this_01;
  MethodInfo *method_00;
  MGNPHCAAEIO_GNBEOEJBMKL_o *pMVar3;
  PJKHAJKEHEL_o *pPVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_70;
  int local_44;
  
                    /* try { // try from 034eb5c4 to 035eb5cb has its CatchHandler @ 034eb5fc */
                    /* try { // try from 034eb5cc to 035eb5cf has its CatchHandler @ 034eb5dc */
  if ((DAT_04567f23 & 1) == 0) {
                    /* try { // try from 034eb5d0 to 035eb5d7 has its CatchHandler @ 034eb5f0 */
                    /* catch() { ... } // from try @ 034eb4d4 with catch @ 034eb5d8
                       try { // try from 034eb5d8 to 035eb617 has its CatchHandler @ 034eb3f4 */
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* catch() { ... } // from try @ 034eb5cc with catch @ 034eb5dc */
                    /* catch() { ... } // from try @ 034eb4b8 with catch @ 034eb5e0 */
    DAT_04567f23 = 1;
  }
                    /* catch() { ... } // from try @ 034eb474 with catch @ 034eb5e4 */
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 034eb514 with catch @ 034eb5f0
                       catch() { ... } // from try @ 034eb5d0 with catch @ 034eb5f0 */
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 034eb4a8 with catch @ 034eb5fc
                       catch() { ... } // from try @ 034eb5c4 with catch @ 034eb5fc */
  if (DAT_04567f8b == '\0') {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04567f8b = '\x01';
  }
                    /* try { // try from 034eb618 to 035eb61b has its CatchHandler @ 034eb6bc */
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar3 = MGNPHCAAEIO_TypeInfo->static_fields->DKPDNFKLPIN;
  if (pMVar3 != (MGNPHCAAEIO_GNBEOEJBMKL_o *)0x0) {
    local_44 = 0;
    if (((BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) &&
        (pPVar4 = (BCKBBGCOMJD->fields).FAPMJJBOFEF, pPVar4 != (PJKHAJKEHEL_o *)0x0)) &&
       (__this_00 = (pPVar4->fields).ACHJNNOKEDK, __this_00 != (FPLCEOJCPOD_o *)0x0)) {
      method_00 = (MethodInfo *)&stack0xffffffffffffffbc;
                    /* try { // try from 034eb660 to 035eb687 has its CatchHandler @ 034eb740 */
      bVar2 = FPLCEOJCPOD__KNMENIBLFGF
                        (__this_00,(pMVar3->fields).NHPDFFAIJMF,(int32_t *)method_00,true,false,
                         (MethodInfo *)0x0);
      iVar1 = local_44;
      if (!bVar2) {
                    /* try { // try from 034eb72c to 035eb737 has its CatchHandler @ 034eb3f4 */
                    /* try { // try from 034eb738 to 035eb73f has its CatchHandler @ 034eb740 */
        return;
      }
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04567f8b == '\0') {
                    /* try { // try from 034eb688 to 035eb6a3 has its CatchHandler @ 034eb3f4 */
        FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
        DAT_04567f8b = '\x01';
      }
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034eb6a4 to 035eb6a7 has its CatchHandler @ 034eb6cc */
        thunk_FUN_01ba7564();
      }
      pMVar3 = MGNPHCAAEIO_TypeInfo->static_fields->DKPDNFKLPIN;
                    /* try { // try from 034eb6b4 to 035eb72b has its CatchHandler @ 034eb740 */
      if (pMVar3 != (MGNPHCAAEIO_GNBEOEJBMKL_o *)0x0) {
        local_70.fakeValueActive = (pMVar3->fields).MKANNAKGEEC.fields.fakeValueActive;
        local_70.inited = (pMVar3->fields).MKANNAKGEEC.fields.inited;
        local_70._18_2_ = *(undefined2 *)&(pMVar3->fields).MKANNAKGEEC.fields.field_0x12;
                    /* catch() { ... } // from try @ 034eb618 with catch @ 034eb6bc */
        local_70.hiddenValueOldByte4.fields =
             (pMVar3->fields).MKANNAKGEEC.fields.hiddenValueOldByte4.fields;
        local_70.fakeValue = (pMVar3->fields).MKANNAKGEEC.fields.fakeValue;
        local_70.currentCryptoKey = (pMVar3->fields).MKANNAKGEEC.fields.currentCryptoKey;
        local_70.hiddenValue = (pMVar3->fields).MKANNAKGEEC.fields.hiddenValue;
                    /* catch() { ... } // from try @ 034eb6a4 with catch @ 034eb6cc */
        fVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_70,
                           (MethodInfo *)0x0);
        __this_01 = (BCKBBGCOMJD->fields).BPJMMBGIMNC;
        if (__this_01 != (OLKKAIFGGAK_o *)0x0) {
          fVar6 = OLKKAIFGGAK__AEAAHPJAEAF(__this_01,(MethodInfo *)0x0);
          fVar7 = OLKKAIFGGAK__AEAAHPJAEAF(BCKBBGCOMJD,(MethodInfo *)0x0);
          fVar5 = fVar5 * (float)iVar1 * LINBBAKAFCP * (fVar6 / fVar7);
          if (fVar5 == 0.0) {
            return;
          }
          FCJBEKHDLAF__IKKHECKCEJC(__this,BCKBBGCOMJD,fVar5,method_00);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

