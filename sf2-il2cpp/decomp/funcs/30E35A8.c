// LEKPMNDHDNH$$DGCODECJJCC @ RVA 0x30E35A8

bool LEKPMNDHDNH__DGCODECJJCC(LEKPMNDHDNH_o *__this,MethodInfo *method)

{
  int32_t OINGNJDJJKN;
  bool bVar1;
  OLKKAIFGGAK_o *pOVar2;
  GBJGJEGPHKD_o *pGVar3;
  IEFEBEDLHNN_o *pIVar4;
  CNDPAJOLKFN_o *pCVar5;
  CNDPAJOLKFN_o *pCVar6;
  IEFEBEDLHNN_o **ppIVar7;
  IEFEBEDLHNN_o **ppIVar8;
  float fVar9;
  float KHCEOFBMAPN;
  float fVar10;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_50;
  
  ppIVar7 = &(__this->fields).KFEFNEOIOID;
  if (*ppIVar7 == (IEFEBEDLHNN_o *)0x0) {
    pOVar2 = (__this->fields).super.HMMEFNNMBJK;
    if (pOVar2 == (OLKKAIFGGAK_o *)0x0) goto LAB_031e36d4;
    pOVar2 = OLKKAIFGGAK__GMBBOANEBJJ(pOVar2,(__this->fields).EOPBEKGNABN,(MethodInfo *)0x0);
    if (pOVar2 == (OLKKAIFGGAK_o *)0x0) {
      pIVar4 = (IEFEBEDLHNN_o *)0x0;
    }
    else {
      pGVar3 = (pOVar2->fields).HMIAFJALFCJ;
      if (pGVar3 == (GBJGJEGPHKD_o *)0x0) goto LAB_031e36d4;
      pIVar4 = GBJGJEGPHKD__ILECMJOENMK(pGVar3,(MethodInfo *)0x0);
    }
    *ppIVar7 = pIVar4;
    thunk_FUN_01c20e04(ppIVar7);
  }
  ppIVar8 = &(__this->fields).LLCJHOLBCOB;
  if (*ppIVar8 == (IEFEBEDLHNN_o *)0x0) {
    pOVar2 = (__this->fields).super.HMMEFNNMBJK;
    if (pOVar2 == (OLKKAIFGGAK_o *)0x0) goto LAB_031e36d4;
                    /* try { // try from 031e3624 to 032e362b has its CatchHandler @ 031e3f54 */
    pOVar2 = OLKKAIFGGAK__GMBBOANEBJJ(pOVar2,(__this->fields).NKDEEKELFLN,(MethodInfo *)0x0);
    if (pOVar2 == (OLKKAIFGGAK_o *)0x0) {
      pIVar4 = (IEFEBEDLHNN_o *)0x0;
    }
    else {
      pGVar3 = (pOVar2->fields).HMIAFJALFCJ;
      if (pGVar3 == (GBJGJEGPHKD_o *)0x0) goto LAB_031e36d4;
      pIVar4 = GBJGJEGPHKD__ILECMJOENMK(pGVar3,(MethodInfo *)0x0);
    }
    *ppIVar8 = pIVar4;
    thunk_FUN_01c20e04(ppIVar8);
  }
  if ((*ppIVar7 == (IEFEBEDLHNN_o *)0x0) || (*ppIVar8 == (IEFEBEDLHNN_o *)0x0)) {
    bVar1 = false;
  }
  else {
    pCVar5 = ((*ppIVar7)->fields).CNMHHKAMGPI;
                    /* try { // try from 031e3668 to 032e3693 has its CatchHandler @ 031e3f58 */
    if ((pCVar5 == (CNDPAJOLKFN_o *)0x0) ||
       (pCVar6 = ((*ppIVar8)->fields).CNMHHKAMGPI, pCVar6 == (CNDPAJOLKFN_o *)0x0)) {
LAB_031e36d4:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031e36d4 to 032e36ff has its CatchHandler @ 031e3f48 */
      FUN_01bab8c8();
    }
    fVar9 = (pCVar5->fields).super.OHHDBINAJCB;
    fVar10 = (pCVar6->fields).super.OHHDBINAJCB;
    local_50.fakeValueActive = (__this->fields).LFEPLFBMMDG.fields.fakeValueActive;
    local_50.inited = (__this->fields).LFEPLFBMMDG.fields.inited;
    local_50._18_2_ = *(undefined2 *)&(__this->fields).LFEPLFBMMDG.fields.field_0x12;
    local_50.hiddenValueOldByte4.fields =
         (__this->fields).LFEPLFBMMDG.fields.hiddenValueOldByte4.fields;
    local_50.fakeValue = (__this->fields).LFEPLFBMMDG.fields.fakeValue;
    local_50.currentCryptoKey = (__this->fields).LFEPLFBMMDG.fields.currentCryptoKey;
    local_50.hiddenValue = (__this->fields).LFEPLFBMMDG.fields.hiddenValue;
    OINGNJDJJKN = (__this->fields).super.GCOAKFIEAAL;
                    /* try { // try from 031e3698 to 032e369f has its CatchHandler @ 031e3f50 */
    KHCEOFBMAPN = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_50,
                             (MethodInfo *)0x0);
    bVar1 = EAAHMDAMHNI__OKACBKHDEIO(OINGNJDJJKN,ABS(fVar9 - fVar10),KHCEOFBMAPN,(MethodInfo *)0x0);
  }
  return bVar1;
}

