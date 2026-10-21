// CGBIAHNHDNL$$MAHFCKJGBPP @ RVA 0x30DF928

void CGBIAHNHDNL__MAHFCKJGBPP
               (CGBIAHNHDNL_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  bool bVar1;
  GBJGJEGPHKD_o *pGVar2;
  IEFEBEDLHNN_o *pIVar3;
  OPNFCOGALLI_o *pOVar4;
  CNDPAJOLKFN_o *INOIMHOFGBG;
  NILLKLHKLHG_o *pNVar5;
  MMFIDKMDADC_o *pMVar6;
  CNDPAJOLKFN_o *pCVar7;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *in_x4;
  OLKKAIFGGAK_o *pOVar8;
  OLKKAIFGGAK_o *pOVar9;
  Nekki_SF2_Core_Fights_Renders_Model_MeshRender_o *__this_00;
  OLKKAIFGGAK_o *pOVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((DAT_04566391 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04566391 = 1;
  }
  if (CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) {
    pOVar10 = (CPECAEHDDDB->fields).EMCFCMFGPME;
    pOVar9 = pOVar10;
    if ((__this->fields).MIDPOKIJMKN == 2) {
      if (pOVar10 == (OLKKAIFGGAK_o *)0x0) goto LAB_031dfaf8;
      pOVar9 = (pOVar10->fields).BPJMMBGIMNC;
    }
    pOVar8 = pOVar10;
    if ((__this->fields).AGMAIGDIEDL != 1) {
      if (pOVar10 == (OLKKAIFGGAK_o *)0x0) goto LAB_031dfaf8;
      pOVar8 = (pOVar10->fields).BPJMMBGIMNC;
    }
    if ((((pOVar8 != (OLKKAIFGGAK_o *)0x0) &&
         (pGVar2 = (pOVar8->fields).HMIAFJALFCJ, pGVar2 != (GBJGJEGPHKD_o *)0x0)) &&
        (pIVar3 = GBJGJEGPHKD__ILECMJOENMK(pGVar2,(MethodInfo *)0x0), pIVar3 != (IEFEBEDLHNN_o *)0x0
        )) && (pOVar4 = (pOVar8->fields).OAKOFJJIOFF, pOVar4 != (OPNFCOGALLI_o *)0x0)) {
      INOIMHOFGBG = OPNFCOGALLI__JAONOJLAPOG
                              (pOVar4,2,(pIVar3->fields).FLDBGCIKMKA,(MethodInfo *)0x0);
      bVar1 = CNDPAJOLKFN__LCAEEPKOHMN(INOIMHOFGBG,(CNDPAJOLKFN_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      pNVar5 = (__this->fields).MBFIKHPCODJ;
      fVar12 = 0.0;
      fVar11 = 0.0;
      if (pNVar5 != (NILLKLHKLHG_o *)0x0) {
        pMVar6 = NILLKLHKLHG__CHKGAHCDFJF(pNVar5,false,(MethodInfo *)0x0);
        if (pMVar6 == (MMFIDKMDADC_o *)0x0) goto LAB_031dfaf8;
        fVar11 = MMFIDKMDADC__OFFODGKLGOP(pMVar6,(MethodInfo *)0x0);
      }
      pNVar5 = (__this->fields).GODBNIEDNON;
      if (pNVar5 != (NILLKLHKLHG_o *)0x0) {
        pMVar6 = NILLKLHKLHG__CHKGAHCDFJF(pNVar5,false,(MethodInfo *)0x0);
        if (pMVar6 == (MMFIDKMDADC_o *)0x0) goto LAB_031dfaf8;
        fVar12 = MMFIDKMDADC__OFFODGKLGOP(pMVar6,(MethodInfo *)0x0);
      }
      if (((INOIMHOFGBG != (CNDPAJOLKFN_o *)0x0) && (pOVar9 != (OLKKAIFGGAK_o *)0x0)) &&
         (pOVar4 = (pOVar9->fields).OAKOFJJIOFF, pOVar4 != (OPNFCOGALLI_o *)0x0)) {
        fVar13 = (INOIMHOFGBG->fields).super.JOLEIODMLFL;
        (INOIMHOFGBG->fields).super.OHHDBINAJCB =
             (INOIMHOFGBG->fields).super.OHHDBINAJCB + fVar11 * (float)(pOVar4->fields).DMJAJGGGHPF;
        (INOIMHOFGBG->fields).super.JOLEIODMLFL = fVar12 + fVar13;
        pCVar7 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
        CNDPAJOLKFN___ctor(pCVar7,(MethodInfo *)0x0);
        pGVar2 = (pOVar9->fields).HMIAFJALFCJ;
        if (((pGVar2 != (GBJGJEGPHKD_o *)0x0) &&
            (pIVar3 = GBJGJEGPHKD__ILECMJOENMK(pGVar2,(MethodInfo *)0x0),
            pIVar3 != (IEFEBEDLHNN_o *)0x0)) &&
           ((pOVar4 = (pOVar9->fields).OAKOFJJIOFF, pOVar4 != (OPNFCOGALLI_o *)0x0 &&
            (pCVar7 = OPNFCOGALLI__JAONOJLAPOG
                                (pOVar4,2,(pIVar3->fields).FLDBGCIKMKA,(MethodInfo *)0x0),
            pOVar10 != (OLKKAIFGGAK_o *)0x0)))) {
          __this_00 = (pOVar10->fields).GDGLJMKPFOO;
          routine = CGBIAHNHDNL__JJONOCGMEMK
                              (__this,(pOVar10->fields).OAKOFJJIOFF,pCVar7,INOIMHOFGBG,in_x4);
          if (__this_00 != (Nekki_SF2_Core_Fights_Renders_Model_MeshRender_o *)0x0) {
            UnityEngine_MonoBehaviour__StartCoroutine
                      ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_031dfaf8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

