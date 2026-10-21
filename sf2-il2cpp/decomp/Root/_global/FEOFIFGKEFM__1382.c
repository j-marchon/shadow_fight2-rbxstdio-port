// TypeDefIndex 1382
// Namespace: 
// [Extension]
// public static class FEOFIFGKEFM
// Fields:

// ===== public static OJJLPLHNGBP.BELGMANHGIJ BALPBNPDFNK(OJJLPLHNGBP OKBIKHHKOEN)  [RVA 0x3171A2C]
// FEOFIFGKEFM$$BALPBNPDFNK @ RVA 0x3171A2C

OJJLPLHNGBP_BELGMANHGIJ_o * FEOFIFGKEFM__BALPBNPDFNK(OJJLPLHNGBP_o *OKBIKHHKOEN,MethodInfo *method)

{
  uint uVar1;
  OJJLPLHNGBP_BELGMANHGIJ_o *pOVar2;
  PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *pPVar3;
  System_Action_NIEPOJOIFNE__o *BLMFLPJJMPF;
  System_Action_GPBHNPOEFDO__o *BLMFLPJJMPF_00;
  ulong uVar4;
  System_ValueTuple_string__string__array *pSVar5;
  ulong uVar6;
  System_String_o **ppSVar7;
  
  if ((DAT_0456692b & 1) == 0) {
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>_BHOHLODBJPE__);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>_DAEOHFJJKLG__);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>_IDIJAFLLLJG__);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>_NJNJLKHHOAA__);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>_NOJMLBEPFDB__);
    DAT_0456692b = 1;
  }
  pOVar2 = OJJLPLHNGBP_BELGMANHGIJ__EOHMFJFFFIN((MethodInfo *)0x0);
  if ((((OKBIKHHKOEN != (OJJLPLHNGBP_o *)0x0) && (pOVar2 != (OJJLPLHNGBP_BELGMANHGIJ_o *)0x0)) &&
      (pPVar3 = (PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)
                PDBDELCMKJG_DGCHKODLPJG<object>__BHOHLODBJPE
                          ((PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)pOVar2,
                           (OKBIKHHKOEN->fields).super.PHONOLEMBHN,
                           Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>_BHOHLODBJPE__),
      pPVar3 != (PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)0x0)) &&
     ((pPVar3 = (PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)
                PDBDELCMKJG_DGCHKODLPJG<object>__IDIJAFLLLJG
                          (pPVar3,(System_TimeSpan_o)
                                  (OKBIKHHKOEN->fields).super.KBFOKFPKAKN.fields._ticks,
                           Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>_IDIJAFLLLJG__),
      pPVar3 != (PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)0x0 &&
      (pPVar3 = (PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)
                PDBDELCMKJG_DGCHKODLPJG<object>__DAEOHFJJKLG
                          (pPVar3,(OKBIKHHKOEN->fields).super.OGFMJIABHHI,
                           Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>_DAEOHFJJKLG__),
      pPVar3 != (PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)0x0)))) {
    pOVar2 = (OJJLPLHNGBP_BELGMANHGIJ_o *)
             PDBDELCMKJG_DGCHKODLPJG<object>__NOJMLBEPFDB
                       (pPVar3,(System_Threading_CancellationToken_o)
                               (OKBIKHHKOEN->fields).super.DKICFPOCAFF.fields._source,
                        Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>_NOJMLBEPFDB__);
    pSVar5 = (OKBIKHHKOEN->fields).super.EBIPCCLLMCP;
    if (pSVar5 != (System_ValueTuple_string__string__array *)0x0) {
      if (0 < (int)pSVar5->max_length) {
        uVar6 = 0;
        uVar4 = pSVar5->max_length & 0xffffffff;
        ppSVar7 = &pSVar5->m_Items[0].fields.Item2;
        do {
          if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          if (pOVar2 == (OJJLPLHNGBP_BELGMANHGIJ_o *)0x0) goto LAB_03271bac;
          PDBDELCMKJG_DGCHKODLPJG<object>__NJNJLKHHOAA
                    ((PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)pOVar2,
                     ((System_ValueTuple_string__string__Fields *)(ppSVar7 + -1))->Item1,*ppSVar7,
                     Method_PDBDELCMKJG_DGCHKODLPJG<OJJLPLHNGBP_BELGMANHGIJ>_NJNJLKHHOAA__);
          uVar1 = (uint)pSVar5->max_length;
          uVar4 = (ulong)uVar1;
          uVar6 = uVar6 + 1;
          ppSVar7 = ppSVar7 + 2;
        } while ((long)uVar6 < (long)(int)uVar1);
      }
      BLMFLPJJMPF = (OKBIKHHKOEN->fields).JDOEIKJBBON;
      if (BLMFLPJJMPF == (System_Action_NIEPOJOIFNE__o *)0x0) {
        BLMFLPJJMPF_00 = (OKBIKHHKOEN->fields).COLCEFFJGCH;
        if (BLMFLPJJMPF_00 == (System_Action_GPBHNPOEFDO__o *)0x0) {
          return pOVar2;
        }
        if (pOVar2 == (OJJLPLHNGBP_BELGMANHGIJ_o *)0x0) goto LAB_03271bac;
      }
      else {
        if (pOVar2 == (OJJLPLHNGBP_BELGMANHGIJ_o *)0x0) goto LAB_03271bac;
        OJJLPLHNGBP_BELGMANHGIJ__JLDAALDPGIE(pOVar2,BLMFLPJJMPF,(MethodInfo *)0x0);
        BLMFLPJJMPF_00 = (OKBIKHHKOEN->fields).COLCEFFJGCH;
        if (BLMFLPJJMPF_00 == (System_Action_GPBHNPOEFDO__o *)0x0) {
          return pOVar2;
        }
      }
      OJJLPLHNGBP_BELGMANHGIJ__JLDAALDPGIE(pOVar2,BLMFLPJJMPF_00,(MethodInfo *)0x0);
      return pOVar2;
    }
  }
LAB_03271bac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static BKMILGLGFCM.IFBNAEMJLJL BALPBNPDFNK(BKMILGLGFCM OKBIKHHKOEN)  [RVA 0x3171BB4]
// FEOFIFGKEFM$$BALPBNPDFNK @ RVA 0x3171BB4

BKMILGLGFCM_IFBNAEMJLJL_o * FEOFIFGKEFM__BALPBNPDFNK(BKMILGLGFCM_o *OKBIKHHKOEN,MethodInfo *method)

{
  uint uVar1;
  BKMILGLGFCM_IFBNAEMJLJL_o *pBVar2;
  PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *pPVar3;
  UnityEngine_WWWForm_o *OFOIILMAIPG;
  System_Action_DMKKAPNMDKJ__o *BLMFLPJJMPF;
  ulong uVar4;
  System_ValueTuple_string__string__array *pSVar5;
  ulong uVar6;
  System_String_o **ppSVar7;
  
  if ((DAT_0456692c & 1) == 0) {
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_BHOHLODBJPE__);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_DAEOHFJJKLG__);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_IDIJAFLLLJG__);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_NJNJLKHHOAA__);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_NOJMLBEPFDB__);
    DAT_0456692c = 1;
  }
  pBVar2 = BKMILGLGFCM_IFBNAEMJLJL__EOHMFJFFFIN((MethodInfo *)0x0);
  if ((((OKBIKHHKOEN != (BKMILGLGFCM_o *)0x0) && (pBVar2 != (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0)) &&
      (pPVar3 = (PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)
                PDBDELCMKJG_DGCHKODLPJG<object>__BHOHLODBJPE
                          ((PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)pBVar2,
                           (OKBIKHHKOEN->fields).super.PHONOLEMBHN,
                           Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_BHOHLODBJPE__),
      pPVar3 != (PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)0x0)) &&
     ((pPVar3 = (PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)
                PDBDELCMKJG_DGCHKODLPJG<object>__IDIJAFLLLJG
                          (pPVar3,(System_TimeSpan_o)
                                  (OKBIKHHKOEN->fields).super.KBFOKFPKAKN.fields._ticks,
                           Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_IDIJAFLLLJG__),
      pPVar3 != (PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)0x0 &&
      (pPVar3 = (PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)
                PDBDELCMKJG_DGCHKODLPJG<object>__DAEOHFJJKLG
                          (pPVar3,(OKBIKHHKOEN->fields).super.OGFMJIABHHI,
                           Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_DAEOHFJJKLG__),
      pPVar3 != (PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)0x0)))) {
    pBVar2 = (BKMILGLGFCM_IFBNAEMJLJL_o *)
             PDBDELCMKJG_DGCHKODLPJG<object>__NOJMLBEPFDB
                       (pPVar3,(System_Threading_CancellationToken_o)
                               (OKBIKHHKOEN->fields).super.DKICFPOCAFF.fields._source,
                        Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_NOJMLBEPFDB__);
    pSVar5 = (OKBIKHHKOEN->fields).super.EBIPCCLLMCP;
    if (pSVar5 != (System_ValueTuple_string__string__array *)0x0) {
      if (0 < (int)pSVar5->max_length) {
        uVar6 = 0;
        uVar4 = pSVar5->max_length & 0xffffffff;
        ppSVar7 = &pSVar5->m_Items[0].fields.Item2;
        do {
          if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          if (pBVar2 == (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0) goto LAB_03271d34;
          PDBDELCMKJG_DGCHKODLPJG<object>__NJNJLKHHOAA
                    ((PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)pBVar2,
                     ((System_ValueTuple_string__string__Fields *)(ppSVar7 + -1))->Item1,*ppSVar7,
                     Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_NJNJLKHHOAA__);
          uVar1 = (uint)pSVar5->max_length;
          uVar4 = (ulong)uVar1;
          uVar6 = uVar6 + 1;
          ppSVar7 = ppSVar7 + 2;
        } while ((long)uVar6 < (long)(int)uVar1);
      }
      OFOIILMAIPG = (OKBIKHHKOEN->fields).CHMPFPNNPCC;
      if (OFOIILMAIPG == (UnityEngine_WWWForm_o *)0x0) {
        BLMFLPJJMPF = (OKBIKHHKOEN->fields).MIMKJIKCPGP;
        if (BLMFLPJJMPF == (System_Action_DMKKAPNMDKJ__o *)0x0) {
          return pBVar2;
        }
        if (pBVar2 == (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0) goto LAB_03271d34;
      }
      else {
        if (pBVar2 == (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0) goto LAB_03271d34;
        BKMILGLGFCM_IFBNAEMJLJL__EMCCAHPOFDA(pBVar2,OFOIILMAIPG,(MethodInfo *)0x0);
        BLMFLPJJMPF = (OKBIKHHKOEN->fields).MIMKJIKCPGP;
        if (BLMFLPJJMPF == (System_Action_DMKKAPNMDKJ__o *)0x0) {
          return pBVar2;
        }
      }
      BKMILGLGFCM_IFBNAEMJLJL__JLDAALDPGIE(pBVar2,BLMFLPJJMPF,(MethodInfo *)0x0);
      return pBVar2;
    }
  }
LAB_03271d34:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

