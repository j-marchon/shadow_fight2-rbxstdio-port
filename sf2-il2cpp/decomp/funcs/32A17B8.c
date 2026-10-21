// IGJEEGBBNFC$$LCGGMPBIJBE @ RVA 0x32A17B8

void IGJEEGBBNFC__LCGGMPBIJBE
               (IGJEEGBBNFC_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  byte bVar1;
  OLKKAIFGGAK_o *pOVar2;
  OLKKAIFGGAK_o *pOVar3;
  PJKHAJKEHEL_o *pPVar4;
  FCJBEKHDLAF_o *__this_00;
  HJNEOLCKEMD_o *pHVar5;
  OLKKAIFGGAK_OGCKCABMHLC_o *pOVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  HJNEOLCKEMD_c *local_80;
  void *pvStack_78;
  undefined4 local_70;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_60;
  
  if ((DAT_045673c3 & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&GCBHGPMLFBA_TypeInfo);
    DAT_045673c3 = 1;
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_04565b7f = '\x01';
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
  if (__this_00 == (FCJBEKHDLAF_o *)0x0) {
                    /* try { // try from 033a1954 to 034a195b has its CatchHandler @ 033a19cc */
    return;
  }
  if ((((CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
       (pOVar2 = (CPECAEHDDDB->fields).EMCFCMFGPME, pOVar2 != (OLKKAIFGGAK_o *)0x0)) &&
      (pOVar3 = (CPECAEHDDDB->fields).HEMGHNOOJPI, pOVar3 != (OLKKAIFGGAK_o *)0x0)) &&
     (pPVar4 = (pOVar3->fields).FAPMJJBOFEF, pPVar4 != (PJKHAJKEHEL_o *)0x0)) {
    local_60.fakeValueActive = (pPVar4->fields).JNFNFEJAGGN.fields.fakeValueActive;
    local_60.inited = (pPVar4->fields).JNFNFEJAGGN.fields.inited;
    local_60._18_2_ = *(undefined2 *)&(pPVar4->fields).JNFNFEJAGGN.fields.field_0x12;
    local_60.hiddenValueOldByte4.fields =
         (pPVar4->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4.fields;
    local_60.fakeValue = (pPVar4->fields).JNFNFEJAGGN.fields.fakeValue;
    local_60.currentCryptoKey = (pPVar4->fields).JNFNFEJAGGN.fields.currentCryptoKey;
    local_60.hiddenValue = (pPVar4->fields).JNFNFEJAGGN.fields.hiddenValue;
    pHVar5 = (CPECAEHDDDB->fields).EDOEMIDBEGO;
    pOVar6 = (pOVar2->fields).MMIDFMEOACB;
                    /* try { // try from 033a1894 to 034a189b has its CatchHandler @ 033a1be4 */
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_60,(MethodInfo *)0x0);
    if (pHVar5 != (HJNEOLCKEMD_o *)0x0) {
                    /* try { // try from 033a18ac to 034a18b3 has its CatchHandler @ 033a1be0 */
      bVar1 = (GCBHGPMLFBA_TypeInfo->_2).naturalAligment;
                    /* try { // try from 033a18c4 to 034a18cb has its CatchHandler @ 033a1bdc */
      if (((pHVar5->klass->_2).naturalAligment < bVar1) ||
         ((pHVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)GCBHGPMLFBA_TypeInfo
         )) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pHVar5);
      }
                    /* try { // try from 033a18d4 to 034a18df has its CatchHandler @ 033a1bd0 */
      local_70._0_1_ = pHVar5[1].fields.super.GBBHFPBFOPI;
      local_70._1_1_ = (bool_conflict)pHVar5[1].fields.super.field_0x1;
      local_70._2_2_ = *(undefined2 *)&pHVar5[1].fields.super.field_0x2;
      pvStack_78 = pHVar5[1].monitor;
      local_80 = pHVar5[1].klass;
      fVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_80,
                         (MethodInfo *)0x0);
                    /* try { // try from 033a18f8 to 034a1903 has its CatchHandler @ 033a1bc4 */
      if (((pOVar6 != (OLKKAIFGGAK_OGCKCABMHLC_o *)0x0) &&
          (pOVar2 = (CPECAEHDDDB->fields).HEMGHNOOJPI, pOVar2 != (OLKKAIFGGAK_o *)0x0)) &&
         (pOVar2 = (pOVar2->fields).BPJMMBGIMNC, pOVar2 != (OLKKAIFGGAK_o *)0x0)) {
        fVar10 = (pOVar6->fields).CEMEJDHDPLL;
        fVar8 = OLKKAIFGGAK__AEAAHPJAEAF(pOVar2,(MethodInfo *)0x0);
        pOVar2 = (pOVar6->fields).HEMGHNOOJPI;
                    /* try { // try from 033a1918 to 034a191f has its CatchHandler @ 033a1b00 */
        if (pOVar2 != (OLKKAIFGGAK_o *)0x0) {
          fVar9 = OLKKAIFGGAK__AEAAHPJAEAF(pOVar2,(MethodInfo *)0x0);
                    /* try { // try from 033a1934 to 034a193f has its CatchHandler @ 033a1aec */
          FCJBEKHDLAF__IKKHECKCEJC
                    (__this_00,(CPECAEHDDDB->fields).HEMGHNOOJPI,fVar7 * fVar10 * (fVar8 / fVar9),
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

