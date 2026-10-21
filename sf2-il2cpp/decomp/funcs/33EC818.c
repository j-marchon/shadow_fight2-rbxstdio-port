// FCJBEKHDLAF$$HHCILLPHIIG @ RVA 0x33EC818

void FCJBEKHDLAF__HHCILLPHIIG(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  uint uVar3;
  int32_t KIKPFKAPKNC;
  GOJLGHMMDBO_o *DBINKMKPPIE;
  GOJLGHMMDBO_o *OCGELBGOCID;
  FCJBEKHDLAF_IKCEFLGIDHF_Fields *pFVar4;
  PJKHAJKEHEL_o **ppPVar5;
  MethodInfo *in_x2;
  MethodInfo *pMVar6;
  OLKKAIFGGAK_o *JALKELIHLPC;
  int32_t ECLENFDGNKL;
  OLKKAIFGGAK_o *pOVar7;
  AFFHKININGD_o *pAVar8;
  FCJBEKHDLAF_IKCEFLGIDHF_o *pFVar9;
  JIMKCICMMIL_o *pJVar10;
  BKHDDKOEEKP_o *pBVar11;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar12;
  PJKHAJKEHEL_o *pPVar13;
  PJKHAJKEHEL_o *pPVar14;
  PJKHAJKEHEL_o *FIJLCCEJANF;
  
  if ((DAT_04567f2c & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567f2c = 1;
  }
  pOVar7 = (__this->fields).LAMENNMGPBN;
  if (pOVar7 == (OLKKAIFGGAK_o *)0x0) goto LAB_034ecab4;
  pBVar11 = (pOVar7->fields).NLMAHDLOKAJ;
  iVar2 = FCJBEKHDLAF__FOOECKGMFAD(__this,0,in_x2);
  if (pBVar11 == (BKHDDKOEEKP_o *)0x0) goto LAB_034ecab4;
  pMVar6 = (MethodInfo *)0x0;
  BKHDDKOEEKP__KIAGFPAFOAG(pBVar11,iVar2,(MethodInfo *)0x0);
  pOVar7 = (__this->fields).CLEKIBBCAOJ;
  if (pOVar7 == (OLKKAIFGGAK_o *)0x0) goto LAB_034ecab4;
  pBVar11 = (pOVar7->fields).NLMAHDLOKAJ;
  iVar2 = FCJBEKHDLAF__FOOECKGMFAD(__this,1,pMVar6);
  if (pBVar11 == (BKHDDKOEEKP_o *)0x0) goto LAB_034ecab4;
  BKHDDKOEEKP__KIAGFPAFOAG(pBVar11,iVar2,(MethodInfo *)0x0);
  pNVar12 = (__this->fields).HIBPKNAIPLH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar12 = (__this->fields).HIBPKNAIPLH;
    if (pNVar12 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) goto LAB_034ecab4;
    uVar3 = Nekki_SF2_GUI_Fight_PreFight__get_TimeLeft(pNVar12,(MethodInfo *)0x0);
    pNVar12 = (__this->fields).HIBPKNAIPLH;
    if (pNVar12 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) goto LAB_034ecab4;
    pMVar6 = (MethodInfo *)(ulong)uVar3;
    DBINKMKPPIE = Nekki_SF2_GUI_Fight_PreFight__GetStatistic(pNVar12,0,(MethodInfo *)0x0);
    pNVar12 = (__this->fields).HIBPKNAIPLH;
    if (pNVar12 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) goto LAB_034ecab4;
    OCGELBGOCID = Nekki_SF2_GUI_Fight_PreFight__GetStatistic(pNVar12,1,(MethodInfo *)0x0);
  }
  else {
    OCGELBGOCID = (GOJLGHMMDBO_o *)0x0;
    DBINKMKPPIE = (GOJLGHMMDBO_o *)0x0;
    pMVar6 = (MethodInfo *)0x0;
  }
  pJVar10 = (__this->fields).ODIAFMNGOLA;
  if ((pJVar10 == (JIMKCICMMIL_o *)0x0) ||
     (pAVar8 = (__this->fields).FBFPLEFCDOK, pAVar8 == (AFFHKININGD_o *)0x0)) goto LAB_034ecab4;
  iVar2 = (pJVar10->fields).ODIAFMNGOLA;
  pOVar7 = (__this->fields).LAMENNMGPBN;
  JALKELIHLPC = (__this->fields).CLEKIBBCAOJ;
  KIKPFKAPKNC = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (pAVar8->fields).NHNNEADDBDB.fields,(MethodInfo *)0x0);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
  }
  ECLENFDGNKL = (int32_t)pMVar6;
  MGNPHCAAEIO__GINHBJKCDCJ
            (iVar2,pOVar7,JALKELIHLPC,ECLENFDGNKL,KIKPFKAPKNC,DBINKMKPPIE,OCGELBGOCID,
             (MethodInfo *)0x0);
  pPVar13 = (__this->fields).KCHOEJOHIMM;
  if (pPVar13 == (PJKHAJKEHEL_o *)0x0) goto LAB_034ecab4;
  if ((pPVar13->fields).DONKDCJLBPN == false) {
    FIJLCCEJANF = (__this->fields).JEDELFOBLEN;
    (__this->fields).HMFDJCBMCCL = false;
    if (FIJLCCEJANF == (PJKHAJKEHEL_o *)0x0) goto LAB_034ecab4;
    if ((FIJLCCEJANF->fields).BOJAPMNFCGF != false) {
      pOVar7 = (__this->fields).CLEKIBBCAOJ;
      if ((pOVar7 == (OLKKAIFGGAK_o *)0x0) ||
         (pBVar11 = (pOVar7->fields).NLMAHDLOKAJ, pBVar11 == (BKHDDKOEEKP_o *)0x0))
      goto LAB_034ecab4;
      BKHDDKOEEKP__KOKMNPGLOPL(pBVar11,(MethodInfo *)0x0);
    }
    if (ECLENFDGNKL < 1) {
      pAVar8 = (__this->fields).FBFPLEFCDOK;
      if (pAVar8 == (AFFHKININGD_o *)0x0) goto LAB_034ecab4;
      if ((pAVar8->fields).JDNKKGPNHPB == 0x14) {
        pFVar9 = (__this->fields).PHGOIJGLONP;
        if (pFVar9 == (FCJBEKHDLAF_IKCEFLGIDHF_o *)0x0) goto LAB_034ecab4;
        iVar2 = 3;
        goto LAB_034eca5c;
      }
    }
    pFVar9 = (__this->fields).PHGOIJGLONP;
    if (pFVar9 == (FCJBEKHDLAF_IKCEFLGIDHF_o *)0x0) goto LAB_034ecab4;
    iVar2 = 0;
  }
  else {
    pPVar14 = (__this->fields).JEDELFOBLEN;
    if ((pPVar13->fields).BOJAPMNFCGF != false) {
      pOVar7 = (__this->fields).LAMENNMGPBN;
      if ((pOVar7 == (OLKKAIFGGAK_o *)0x0) ||
         (pBVar11 = (pOVar7->fields).NLMAHDLOKAJ, pBVar11 == (BKHDDKOEEKP_o *)0x0))
      goto LAB_034ecab4;
      BKHDDKOEEKP__KOKMNPGLOPL(pBVar11,(MethodInfo *)0x0);
    }
    pFVar9 = (__this->fields).PHGOIJGLONP;
    if (pFVar9 == (FCJBEKHDLAF_IKCEFLGIDHF_o *)0x0) goto LAB_034ecab4;
    iVar2 = 1;
    FIJLCCEJANF = pPVar13;
    pPVar13 = pPVar14;
  }
LAB_034eca5c:
  (pFVar9->fields).BLKENLJGDIE = iVar2;
  FCJBEKHDLAF__APPJEJCGIOF(__this,FIJLCCEJANF,(PJKHAJKEHEL_o *)JALKELIHLPC,pMVar6);
  pFVar9 = (__this->fields).PHGOIJGLONP;
  (__this->fields).IOGBJMGAFEB = false;
  (__this->fields).ABCJKJKLFII = true;
  if (pFVar9 != (FCJBEKHDLAF_IKCEFLGIDHF_o *)0x0) {
    pFVar4 = &pFVar9->fields;
    pFVar4->FIJLCCEJANF = FIJLCCEJANF;
    thunk_FUN_01c20e04(pFVar4,FIJLCCEJANF);
    pFVar9 = (__this->fields).PHGOIJGLONP;
    if (pFVar9 != (FCJBEKHDLAF_IKCEFLGIDHF_o *)0x0) {
      ppPVar5 = &(pFVar9->fields).DIJDCNOLDOK;
      *ppPVar5 = pPVar13;
      thunk_FUN_01c20e04(ppPVar5,pPVar13);
      return;
    }
  }
LAB_034ecab4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

