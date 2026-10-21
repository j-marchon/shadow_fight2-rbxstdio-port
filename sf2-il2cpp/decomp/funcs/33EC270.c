// FCJBEKHDLAF$$LJBEJNMMIGF @ RVA 0x33EC270

void FCJBEKHDLAF__LJBEJNMMIGF(FCJBEKHDLAF_o *__this,bool AGANAGOBNFO,MethodInfo *method)

{
  int index;
  int32_t iVar1;
  bool bVar2;
  PJKHAJKEHEL_o *pPVar3;
  System_Collections_Generic_List_PJKHAJKEHEL__o *__this_00;
  KAHMAJKJMBK_o *__this_01;
  MMDDDDFHOLG_o *__this_02;
  IPPEHAJADOO_o *__this_03;
  GOJLGHMMDBO_o *NOKHDHCKCPH;
  GOJLGHMMDBO_o *MDIINGJCKNH;
  FCJBEKHDLAF_o *__this_04;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *pMVar4;
  OLKKAIFGGAK_o *pOVar5;
  NHBBOEHHEKG_o *pNVar6;
  OLKKAIFGGAK_o **ppOVar7;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar8;
  PJKHAJKEHEL_o **ppPVar9;
  
  pMVar4 = (MethodInfo *)(ulong)AGANAGOBNFO;
  if ((DAT_04567f06 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567f06 = 1;
    pMVar4 = extraout_x1;
  }
                    /* try { // try from 034ec2b4 to 035ec2f3 has its CatchHandler @ 034ec47c */
  FCJBEKHDLAF__EJPACOMGKAD(__this,pMVar4);
  ppOVar7 = &(__this->fields).CLEKIBBCAOJ;
  FCJBEKHDLAF__PJGJIAGADOM(__this,*ppOVar7,method);
  ppPVar9 = &(__this->fields).JEDELFOBLEN;
  pPVar3 = *ppPVar9;
  if (pPVar3 == (PJKHAJKEHEL_o *)0x0) goto LAB_034ec4cc;
  if (AGANAGOBNFO) {
    pOVar5 = (__this->fields).CLEKIBBCAOJ;
    if (pOVar5 == (OLKKAIFGGAK_o *)0x0) goto LAB_034ec4cc;
    iVar1 = (pPVar3->fields).GPLLAHCFFIH;
    pMVar4 = (MethodInfo *)0x0;
    OLKKAIFGGAK__CIBLINMCKDK(pOVar5,(__this->fields).JJDMOAJJGFG,(MethodInfo *)0x0);
    FCJBEKHDLAF__CABNLDNOLDM(__this,(__this->fields).CLEKIBBCAOJ,pMVar4);
    __this_00 = (__this->fields).DFGLEOANOFI;
    index = (__this->fields).CLFDJLLDNGD + 1;
    (__this->fields).CLFDJLLDNGD = index;
    if (__this_00 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) goto LAB_034ec4cc;
                    /* try { // try from 034ec318 to 035ec357 has its CatchHandler @ 034ec480 */
    pPVar3 = (PJKHAJKEHEL_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,index,
                        Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
    (__this->fields).JEDELFOBLEN = pPVar3;
    thunk_FUN_01c20e04(ppPVar9,pPVar3);
    pNVar6 = (__this->fields).CNHHLPPHNCO;
    if ((pNVar6 == (NHBBOEHHEKG_o *)0x0) ||
       (pPVar3 = (__this->fields).JEDELFOBLEN, pPVar3 == (PJKHAJKEHEL_o *)0x0)) goto LAB_034ec4cc;
    (pPVar3->fields).NMFDFHKAIHG = (pNVar6->fields).OGNCBOHIMFJ;
    thunk_FUN_01c20e04();
    pPVar3 = *ppPVar9;
    if (pPVar3 == (PJKHAJKEHEL_o *)0x0) goto LAB_034ec4cc;
                    /* try { // try from 034ec35c to 035ec36b has its CatchHandler @ 034ec45c */
    (pPVar3->fields).GPLLAHCFFIH = iVar1;
    (__this->fields).JJDMOAJJGFG = (pPVar3->fields).DNAFFNAIDLB;
    thunk_FUN_01c20e04(&(__this->fields).JJDMOAJJGFG);
    __this_01 = (__this->fields).AMJGAIMHDLO;
                    /* try { // try from 034ec370 to 035ec37b has its CatchHandler @ 034ec454 */
    if (__this_01 == (KAHMAJKJMBK_o *)0x0) goto LAB_034ec4cc;
    pMVar4 = (MethodInfo *)(__this_01->fields).OHDBJEGKGLL;
                    /* try { // try from 034ec37c to 035ec407 has its CatchHandler @ 034ebe58 */
    KAHMAJKJMBK__NBAKIBEGKDJ
              (__this_01,(__this->fields).JEDELFOBLEN,
               (System_Collections_Generic_List_CCAEOJMALLA__o *)pMVar4,(MethodInfo *)0x0);
    pOVar5 = FCJBEKHDLAF__OCJCMHLABBF(__this,(__this->fields).JEDELFOBLEN,pMVar4);
    (__this->fields).CLEKIBBCAOJ = pOVar5;
    thunk_FUN_01c20e04(ppOVar7,pOVar5);
    (__this->fields).HDKGGAKCPAM = true;
    FCJBEKHDLAF__GMLKPOHJCHH(__this,method_00);
    FCJBEKHDLAF__HDHNCDJLPMF(__this,(__this->fields).CLEKIBBCAOJ,pMVar4);
    pPVar3 = (__this->fields).JEDELFOBLEN;
    if (pPVar3 == (PJKHAJKEHEL_o *)0x0) goto LAB_034ec4cc;
  }
  (*(pPVar3->klass->vtable)._8_KMKKECDCBEF.methodPtr)
            (pPVar3,(__this->fields).BIGOLGNHMEH,(pPVar3->klass->vtable)._8_KMKKECDCBEF.method);
  __this_02 = (__this->fields).POEGCOJFMDB;
  if (__this_02 != (MMDDDDFHOLG_o *)0x0) {
    MMDDDDFHOLG__BMJDNNBOAFL(__this_02,(__this->fields).IILLHHPGGKA,(MethodInfo *)0x0);
    __this_03 = (__this->fields).JJPMCDACBFG;
    if (__this_03 != (IPPEHAJADOO_o *)0x0) {
      IPPEHAJADOO__DBGHGKLANPG(__this_03,(__this->fields).IILLHHPGGKA,(MethodInfo *)0x0);
      (__this->fields).KPNMLAECCEE = false;
      (__this->fields).DFMCHFJOPIP = false;
                    /* try { // try from 034ec408 to 035ec40b has its CatchHandler @ 034ec474 */
                    /* try { // try from 034ec40c to 035ec40f has its CatchHandler @ 034ec470 */
      pNVar8 = (__this->fields).HIBPKNAIPLH;
                    /* try { // try from 034ec410 to 035ec413 has its CatchHandler @ 034ec460 */
                    /* try { // try from 034ec414 to 035ec41b has its CatchHandler @ 034ec488 */
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 034ec41c to 035ec41f has its CatchHandler @ 034ec46c */
                    /* try { // try from 034ec420 to 035ec423 has its CatchHandler @ 034ec458 */
                    /* try { // try from 034ec424 to 035ec42f has its CatchHandler @ 034ec488 */
      pMVar4 = (MethodInfo *)0x0;
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar2) {
LAB_034ec4ac:
                    /* try { // try from 034ec4ac to 035ec4d3 has its CatchHandler @ 034ebe58 */
        FCJBEKHDLAF__KENPEBLGMIN(__this,0,pMVar4);
        FCJBEKHDLAF__DKNNDNIGMIM(__this,method_02);
        return;
      }
                    /* try { // try from 034ec430 to 035ec43b has its CatchHandler @ 034ec474 */
      pNVar8 = (__this->fields).HIBPKNAIPLH;
      if (pNVar8 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
                    /* try { // try from 034ec43c to 035ec447 has its CatchHandler @ 034ec46c */
        NOKHDHCKCPH = Nekki_SF2_GUI_Fight_PreFight__GetStatistic(pNVar8,0,(MethodInfo *)0x0);
        pNVar8 = (__this->fields).HIBPKNAIPLH;
                    /* try { // try from 034ec448 to 035ec453 has its CatchHandler @ 034ec470 */
        if (pNVar8 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
                    /* catch() { ... } // from try @ 034ec370 with catch @ 034ec454
                       try { // try from 034ec454 to 035ec4a7 has its CatchHandler @ 034ebe58 */
                    /* catch() { ... } // from try @ 034ec420 with catch @ 034ec458 */
                    /* catch() { ... } // from try @ 034ec35c with catch @ 034ec45c */
          MDIINGJCKNH = Nekki_SF2_GUI_Fight_PreFight__GetStatistic(pNVar8,1,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034ec410 with catch @ 034ec460 */
          pNVar8 = (__this->fields).HIBPKNAIPLH;
                    /* catch() { ... } // from try @ 034ec218 with catch @ 034ec464 */
          if (pNVar8 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
                    /* catch() { ... } // from try @ 034ec204 with catch @ 034ec468 */
                    /* catch() { ... } // from try @ 034ec41c with catch @ 034ec46c
                       catch() { ... } // from try @ 034ec43c with catch @ 034ec46c */
                    /* catch() { ... } // from try @ 034ec40c with catch @ 034ec470
                       catch() { ... } // from try @ 034ec448 with catch @ 034ec470 */
                    /* catch() { ... } // from try @ 034ec408 with catch @ 034ec474
                       catch() { ... } // from try @ 034ec430 with catch @ 034ec474 */
            Nekki_SF2_GUI_Fight_PreFight__Reset(pNVar8,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034ec234 with catch @ 034ec478 */
            pNVar8 = (__this->fields).HIBPKNAIPLH;
                    /* catch() { ... } // from try @ 034ec2b4 with catch @ 034ec47c */
            if (pNVar8 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
                    /* catch() { ... } // from try @ 034ec318 with catch @ 034ec480 */
                    /* catch() { ... } // from try @ 034ec268 with catch @ 034ec484 */
                    /* catch() { ... } // from try @ 034ec414 with catch @ 034ec488
                       catch() { ... } // from try @ 034ec424 with catch @ 034ec488 */
              Nekki_SF2_GUI_Fight_PreFight__InitPreFight
                        (pNVar8,NOKHDHCKCPH,MDIINGJCKNH,(MethodInfo *)0x0);
              pNVar8 = (__this->fields).HIBPKNAIPLH;
              bVar2 = FCJBEKHDLAF__PCBHNKCHOCN(__this_04,method_01);
              if (pNVar8 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
                pMVar4 = (MethodInfo *)0x0;
                    /* try { // try from 034ec4a8 to 035ec4ab has its CatchHandler @ 034ec4cc */
                Nekki_SF2_GUI_Fight_PreFight__ViewerPauseVisible(pNVar8,bVar2,(MethodInfo *)0x0);
                goto LAB_034ec4ac;
              }
            }
          }
        }
      }
    }
  }
LAB_034ec4cc:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 034ec4a8 with catch @ 034ec4cc */
  FUN_01bab8c8();
}

