// FCJBEKHDLAF$$CELIPPIDMCP @ RVA 0x33E5670

void FCJBEKHDLAF__CELIPPIDMCP(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int32_t HDLMCNFOMEE;
  bool bVar4;
  OLKKAIFGGAK_o *pOVar5;
  MNLIBPAOCLG_o *pMVar6;
  int32_t iVar7;
  OPNFCOGALLI_o *pOVar8;
  BEPJMNAHCAD_o *pBVar9;
  OLKKAIFGGAK_o *pOVar10;
  OPNFCOGALLI_o *pOVar11;
  AFFHKININGD_o *pAVar12;
  int32_t iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  pOVar5 = (__this->fields).LAMENNMGPBN;
  if ((((pOVar5 != (OLKKAIFGGAK_o *)0x0) &&
       (pOVar8 = (pOVar5->fields).OAKOFJJIOFF, pOVar8 != (OPNFCOGALLI_o *)0x0)) &&
      (pOVar10 = (__this->fields).CLEKIBBCAOJ, pOVar10 != (OLKKAIFGGAK_o *)0x0)) &&
     ((pOVar11 = (pOVar10->fields).OAKOFJJIOFF, pOVar11 != (OPNFCOGALLI_o *)0x0 &&
      (pAVar12 = (__this->fields).FBFPLEFCDOK, pAVar12 != (AFFHKININGD_o *)0x0)))) {
    iVar1 = (pOVar8->fields).DMJAJGGGHPF;
    iVar2 = (pOVar11->fields).DMJAJGGGHPF;
    if ((pAVar12->fields).JDNKKGPNHPB == 0x11) {
      pBVar9 = (__this->fields).FAJCMHDLBEJ;
      if ((pBVar9 != (BEPJMNAHCAD_o *)0x0) &&
         (pMVar6 = (pBVar9->fields).LIICCFBEOLC, pMVar6 != (MNLIBPAOCLG_o *)0x0)) {
        fVar18 = (pMVar6->fields).CPMMFFBNDHP;
        fVar17 = (pMVar6->fields).PFPLKPNJDHD;
        fVar14 = MNLIBPAOCLG__AIFBMGIKJDH(pMVar6,(MethodInfo *)0x0);
        pBVar9 = (__this->fields).FAJCMHDLBEJ;
        if ((pBVar9 != (BEPJMNAHCAD_o *)0x0) &&
           (pMVar6 = (pBVar9->fields).LIICCFBEOLC, pMVar6 != (MNLIBPAOCLG_o *)0x0)) {
          fVar20 = (pMVar6->fields).PFPLKPNJDHD;
          fVar18 = fVar18 * 0.85;
          fVar15 = MNLIBPAOCLG__AIFBMGIKJDH(pMVar6,(MethodInfo *)0x0);
          fVar16 = 30.0;
          if (iVar1 < 1) {
            fVar16 = 100.0;
          }
          fVar19 = fVar18 + fVar18;
          fVar17 = -(fVar17 - fVar14 * 0.5 * 0.85) - fVar18 * 0.5;
          fVar14 = fVar19;
          if (fVar17 <= fVar19) {
            fVar14 = fVar17;
          }
          fVar3 = fVar14;
          if (fVar17 < fVar16) {
            fVar3 = fVar16;
          }
          if (DAT_0456033b == '\0') {
            FUN_01bab630(&System_Math_TypeInfo);
            DAT_0456033b = '\x01';
          }
          if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            bVar4 = DAT_0456033b == '\0';
          }
          else {
            bVar4 = false;
          }
          fVar16 = 100.0;
          fVar18 = (fVar20 + fVar15 * 0.5 * 0.85) - fVar18 * 0.5;
          iVar7 = -0x80000000;
          if ((float)(int)fVar3 != INFINITY) {
            iVar7 = (int)fVar3;
          }
          if (iVar1 < 1) {
            fVar16 = 30.0;
          }
          if (fVar18 <= fVar19) {
            fVar19 = fVar18;
          }
          fVar15 = fVar19;
          if (fVar18 < fVar16) {
            fVar15 = fVar16;
          }
          if (bVar4) {
            FUN_01bab630(&System_Math_TypeInfo);
            DAT_0456033b = '\x01';
          }
          if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pOVar5 = (__this->fields).LAMENNMGPBN;
          if (pOVar5 != (OLKKAIFGGAK_o *)0x0) {
            iVar13 = -0x80000000;
            if ((float)(int)fVar15 != INFINITY) {
              iVar13 = (int)(float)(int)fVar15;
            }
            OLKKAIFGGAK__ODMLIMJCOAO(pOVar5,iVar7,iVar13,(MethodInfo *)0x0);
            fVar16 = 30.0;
            if (iVar2 < 1) {
              fVar16 = 100.0;
            }
            if (fVar17 < fVar16) {
              fVar14 = fVar16;
            }
            if (DAT_0456033b == '\0') {
              FUN_01bab630(&System_Math_TypeInfo);
              DAT_0456033b = '\x01';
            }
            if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
                    /* try { // try from 034e58d8 to 035e59d3 has its CatchHandler @ 034e58d8
                       catch() { ... } // from try @ 034e58d8 with catch @ 034e58d8
                       catch() { ... } // from try @ 034e5a9c with catch @ 034e58d8
                       catch() { ... } // from try @ 034e5ac8 with catch @ 034e58d8
                       catch() { ... } // from try @ 034e5b3c with catch @ 034e58d8
                       catch() { ... } // from try @ 034e5b70 with catch @ 034e58d8
                       catch() { ... } // from try @ 034e5bac with catch @ 034e58d8 */
              bVar4 = DAT_0456033b == '\0';
            }
            else {
              bVar4 = false;
            }
            fVar17 = 100.0;
            iVar13 = -0x80000000;
            if ((float)(int)fVar14 != INFINITY) {
              iVar13 = (int)fVar14;
            }
            if (iVar2 < 1) {
              fVar17 = 30.0;
            }
            if (fVar18 < fVar17) {
              fVar19 = fVar17;
            }
            if (bVar4) {
              FUN_01bab630(&System_Math_TypeInfo);
              DAT_0456033b = '\x01';
            }
            if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pOVar5 = (__this->fields).CLEKIBBCAOJ;
            if (pOVar5 != (OLKKAIFGGAK_o *)0x0) {
              iVar7 = -0x80000000;
              if ((float)(int)fVar19 != INFINITY) {
                iVar7 = (int)(float)(int)fVar19;
              }
              goto LAB_034e596c;
            }
          }
        }
      }
    }
    else {
      iVar13 = 0x1e;
      iVar7 = iVar13;
      HDLMCNFOMEE = 100;
      if (iVar1 < 1) {
        iVar7 = 100;
        HDLMCNFOMEE = iVar13;
      }
      OLKKAIFGGAK__ODMLIMJCOAO(pOVar5,iVar7,HDLMCNFOMEE,(MethodInfo *)0x0);
      pOVar5 = (__this->fields).CLEKIBBCAOJ;
      if (pOVar5 != (OLKKAIFGGAK_o *)0x0) {
        iVar7 = 100;
        if (iVar2 < 1) {
          iVar13 = 100;
          iVar7 = 0x1e;
        }
LAB_034e596c:
        OLKKAIFGGAK__ODMLIMJCOAO(pOVar5,iVar13,iVar7,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

