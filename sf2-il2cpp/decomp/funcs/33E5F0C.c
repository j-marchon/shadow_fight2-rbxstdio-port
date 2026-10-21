// FCJBEKHDLAF$$FDDKGLOPBEG @ RVA 0x33E5F0C

void FCJBEKHDLAF__FDDKGLOPBEG(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  int32_t FPDJMIBLBAH;
  int32_t AIHGKMMPALK;
  bool bVar1;
  int32_t iVar2;
  OLKKAIFGGAK_o *pOVar3;
  System_Collections_Generic_List_PJKHAJKEHEL__o *pSVar4;
  Il2CppObject *pIVar5;
  MNLIBPAOCLG_o *__this_00;
  FCJBEKHDLAF_c *method_00;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_01;
  MMDDDDFHOLG_o *__this_02;
  Nekki_Utils_DetailedLog_o *pNVar6;
  FPNPHJJPLKB_o *__this_03;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *pMVar7;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *method_02;
  MethodInfo *in_x3;
  PJKHAJKEHEL_o *pPVar8;
  BEPJMNAHCAD_o *pBVar9;
  JIMKCICMMIL_o *pJVar10;
  AFFHKININGD_o *pAVar11;
  Nekki_SF2_Core_Fights_Controls_Stick_o *pNVar12;
  FCJBEKHDLAF_KAJEHLGBIIB_o *pFVar13;
  CNIGOFCKBGI_o **ppCVar14;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar15;
  float fVar16;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  void *local_a0;
  Il2CppClass *pIStack_98;
  undefined4 local_90;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_80;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
                    /* try { // try from 034e5f20 to 035e5f23 has its CatchHandler @ 034e63fc */
                    /* try { // try from 034e5f2c to 035e5f33 has its CatchHandler @ 034e63f8 */
  if ((DAT_04567ef9 & 1) == 0) {
                    /* try { // try from 034e5f38 to 035e5f9b has its CatchHandler @ 034e64e0 */
    FUN_01bab630(&DKEOKAONIIB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_get_Current__);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&System_GC_TypeInfo);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
                    /* try { // try from 034e5f9c to 035e60bf has its CatchHandler @ 034e5ca0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&StringLiteral_6319);
    DAT_04567ef9 = 1;
    method = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((System_GC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_GC_TypeInfo,method);
  }
  System_GC__Collect((MethodInfo *)0x0);
  if (DAT_04567f8a == '\0') {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo);
    DAT_04567f8a = '\x01';
  }
  pNVar12 = Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (DAT_04567f8a == '\0') {
      FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo);
      DAT_04567f8a = '\x01';
    }
    pNVar12 = Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->CBDMFFMCJBK;
    if (pNVar12 == (Nekki_SF2_Core_Fights_Controls_Stick_o *)0x0) goto LAB_034e6564;
    Nekki_SF2_Core_Fights_Controls_Stick__ReleaseInput(pNVar12,(MethodInfo *)0x0);
  }
  pPVar8 = (__this->fields).KCHOEJOHIMM;
  if (pPVar8 == (PJKHAJKEHEL_o *)0x0) goto LAB_034e6564;
  local_80.fakeValueActive = (pPVar8->fields).JNFNFEJAGGN.fields.fakeValueActive;
  local_80.inited = (pPVar8->fields).JNFNFEJAGGN.fields.inited;
  local_80._18_2_ = *(undefined2 *)&(pPVar8->fields).JNFNFEJAGGN.fields.field_0x12;
  local_80.hiddenValueOldByte4.fields =
       (pPVar8->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4.fields;
  local_80.fakeValue = (pPVar8->fields).JNFNFEJAGGN.fields.fakeValue;
  local_80.currentCryptoKey = (pPVar8->fields).JNFNFEJAGGN.fields.currentCryptoKey;
  local_80.hiddenValue = (pPVar8->fields).JNFNFEJAGGN.fields.hiddenValue;
  pFVar13 = (__this->fields).PJKHKNKFPAA;
  fVar16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                     ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_80,
                      (MethodInfo *)0x0);
  if (pFVar13 == (FCJBEKHDLAF_KAJEHLGBIIB_o *)0x0) goto LAB_034e6564;
  (pFVar13->fields).DICNLOPDAAC = fVar16;
  pOVar3 = (__this->fields).LAMENNMGPBN;
  if (pOVar3 == (OLKKAIFGGAK_o *)0x0) goto LAB_034e6564;
                    /* try { // try from 034e60c0 to 035e60e7 has its CatchHandler @ 034e6414 */
  pFVar13 = (__this->fields).PJKHKNKFPAA;
  fVar16 = OLKKAIFGGAK__HCLKOCBDKEJ(pOVar3,(MethodInfo *)0x0);
  if (pFVar13 == (FCJBEKHDLAF_KAJEHLGBIIB_o *)0x0) goto LAB_034e6564;
  (pFVar13->fields).CGKADLMPODA = fVar16;
  pOVar3 = (__this->fields).LAMENNMGPBN;
  if (pOVar3 == (OLKKAIFGGAK_o *)0x0) goto LAB_034e6564;
  pFVar13 = (__this->fields).PJKHKNKFPAA;
  iVar2 = OLKKAIFGGAK__BAJGPELJMFG(pOVar3,(MethodInfo *)0x0);
  if (pFVar13 == (FCJBEKHDLAF_KAJEHLGBIIB_o *)0x0) goto LAB_034e6564;
  (pFVar13->fields).EOGMGDGBOOD = iVar2;
  pOVar3 = (__this->fields).LAMENNMGPBN;
  if (pOVar3 == (OLKKAIFGGAK_o *)0x0) goto LAB_034e6564;
  pFVar13 = (__this->fields).PJKHKNKFPAA;
  iVar2 = OLKKAIFGGAK__POIDJCKLINH(pOVar3,(MethodInfo *)0x0);
  if (pFVar13 == (FCJBEKHDLAF_KAJEHLGBIIB_o *)0x0) goto LAB_034e6564;
  (pFVar13->fields).BNJNOLMJGFJ = iVar2;
  pOVar3 = (__this->fields).LAMENNMGPBN;
  if (pOVar3 == (OLKKAIFGGAK_o *)0x0) goto LAB_034e6564;
  pFVar13 = (__this->fields).PJKHKNKFPAA;
                    /* try { // try from 034e611c to 035e6147 has its CatchHandler @ 034e640c */
  fVar16 = OLKKAIFGGAK__GPDGKMBNKJE(pOVar3,(MethodInfo *)0x0);
  if (pFVar13 == (FCJBEKHDLAF_KAJEHLGBIIB_o *)0x0) goto LAB_034e6564;
  (pFVar13->fields).PMMICNDMMNH = fVar16;
  pOVar3 = (__this->fields).LAMENNMGPBN;
  if (pOVar3 == (OLKKAIFGGAK_o *)0x0) goto LAB_034e6564;
  pFVar13 = (__this->fields).PJKHKNKFPAA;
  fVar16 = OLKKAIFGGAK__AEAAHPJAEAF(pOVar3,(MethodInfo *)0x0);
  if (pFVar13 == (FCJBEKHDLAF_KAJEHLGBIIB_o *)0x0) goto LAB_034e6564;
  (pFVar13->fields).CJFAJJLJKLB = fVar16;
  pPVar8 = (__this->fields).KCHOEJOHIMM;
  if ((pPVar8 == (PJKHAJKEHEL_o *)0x0) ||
     (pFVar13 = (__this->fields).PJKHKNKFPAA, pFVar13 == (FCJBEKHDLAF_KAJEHLGBIIB_o *)0x0))
  goto LAB_034e6564;
  (pFVar13->fields).FLBLBILEGCK = (pPVar8->fields).GPLLAHCFFIH;
  pSVar4 = (__this->fields).DFGLEOANOFI;
  if (pSVar4 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) goto LAB_034e6564;
  pFVar13 = (__this->fields).MMEGFCLFALC;
  pIVar5 = System_Collections_Generic_List<object>__get_Item
                     ((System_Collections_Generic_List_object__o *)pSVar4,
                      (__this->fields).CLFDJLLDNGD,
                      Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
  if (pIVar5 == (Il2CppObject *)0x0) goto LAB_034e6564;
                    /* try { // try from 034e6180 to 035e618f has its CatchHandler @ 034e6424 */
  local_90 = *(undefined4 *)&pIVar5[0x21].monitor;
  pIStack_98 = pIVar5[0x21].klass;
  local_a0 = pIVar5[0x20].monitor;
  fVar16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                     ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_a0,
                      (MethodInfo *)0x0);
                    /* try { // try from 034e61a0 to 035e61a7 has its CatchHandler @ 034e63f0 */
  if (pFVar13 == (FCJBEKHDLAF_KAJEHLGBIIB_o *)0x0) goto LAB_034e6564;
  (pFVar13->fields).DICNLOPDAAC = fVar16;
  pOVar3 = (__this->fields).CLEKIBBCAOJ;
  if (pOVar3 == (OLKKAIFGGAK_o *)0x0) goto LAB_034e6564;
                    /* try { // try from 034e61b0 to 035e61b7 has its CatchHandler @ 034e63d8 */
  pFVar13 = (__this->fields).MMEGFCLFALC;
  fVar16 = OLKKAIFGGAK__HCLKOCBDKEJ(pOVar3,(MethodInfo *)0x0);
                    /* try { // try from 034e61bc to 035e61d7 has its CatchHandler @ 034e6420 */
  if (pFVar13 == (FCJBEKHDLAF_KAJEHLGBIIB_o *)0x0) goto LAB_034e6564;
  (pFVar13->fields).CGKADLMPODA = fVar16;
  pOVar3 = (__this->fields).CLEKIBBCAOJ;
  if (pOVar3 == (OLKKAIFGGAK_o *)0x0) goto LAB_034e6564;
  pFVar13 = (__this->fields).MMEGFCLFALC;
  iVar2 = OLKKAIFGGAK__BAJGPELJMFG(pOVar3,(MethodInfo *)0x0);
                    /* try { // try from 034e61d8 to 035e61eb has its CatchHandler @ 034e63f4 */
  if (pFVar13 == (FCJBEKHDLAF_KAJEHLGBIIB_o *)0x0) goto LAB_034e6564;
  (pFVar13->fields).EOGMGDGBOOD = iVar2;
  pOVar3 = (__this->fields).CLEKIBBCAOJ;
  if (pOVar3 == (OLKKAIFGGAK_o *)0x0) goto LAB_034e6564;
  pFVar13 = (__this->fields).MMEGFCLFALC;
  iVar2 = OLKKAIFGGAK__POIDJCKLINH(pOVar3,(MethodInfo *)0x0);
  if (pFVar13 == (FCJBEKHDLAF_KAJEHLGBIIB_o *)0x0) goto LAB_034e6564;
                    /* try { // try from 034e61f8 to 035e61ff has its CatchHandler @ 034e63ec */
  (pFVar13->fields).BNJNOLMJGFJ = iVar2;
  pOVar3 = (__this->fields).CLEKIBBCAOJ;
  if (pOVar3 == (OLKKAIFGGAK_o *)0x0) goto LAB_034e6564;
  pFVar13 = (__this->fields).MMEGFCLFALC;
                    /* try { // try from 034e6208 to 035e620f has its CatchHandler @ 034e63d4 */
  fVar16 = OLKKAIFGGAK__GPDGKMBNKJE(pOVar3,(MethodInfo *)0x0);
  if (pFVar13 == (FCJBEKHDLAF_KAJEHLGBIIB_o *)0x0) goto LAB_034e6564;
  (pFVar13->fields).PMMICNDMMNH = fVar16;
  pOVar3 = (__this->fields).CLEKIBBCAOJ;
  if (pOVar3 == (OLKKAIFGGAK_o *)0x0) goto LAB_034e6564;
  pFVar13 = (__this->fields).MMEGFCLFALC;
  fVar16 = OLKKAIFGGAK__AEAAHPJAEAF(pOVar3,(MethodInfo *)0x0);
  if (pFVar13 == (FCJBEKHDLAF_KAJEHLGBIIB_o *)0x0) goto LAB_034e6564;
  (pFVar13->fields).CJFAJJLJKLB = fVar16;
  pSVar4 = (__this->fields).DFGLEOANOFI;
  if (pSVar4 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) goto LAB_034e6564;
  pFVar13 = (__this->fields).MMEGFCLFALC;
  pIVar5 = System_Collections_Generic_List<object>__get_Item
                     ((System_Collections_Generic_List_object__o *)pSVar4,
                      (__this->fields).CLFDJLLDNGD,
                      Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
  if ((pIVar5 == (Il2CppObject *)0x0) || (pFVar13 == (FCJBEKHDLAF_KAJEHLGBIIB_o *)0x0))
  goto LAB_034e6564;
                    /* try { // try from 034e6254 to 035e6277 has its CatchHandler @ 034e63d0 */
  (pFVar13->fields).FLBLBILEGCK = *(int32_t *)&pIVar5[0x11].monitor;
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034e6278 to 035e637f has its CatchHandler @ 034e5ca0 */
  PNLFHHJGDLI__KHLBONNDFGB((MethodInfo *)0x0);
  pBVar9 = (__this->fields).FAJCMHDLBEJ;
  if ((pBVar9 == (BEPJMNAHCAD_o *)0x0) ||
     (__this_00 = (pBVar9->fields).LIICCFBEOLC, __this_00 == (MNLIBPAOCLG_o *)0x0))
  goto LAB_034e6564;
  MNLIBPAOCLG__AAMNFFKFNBA(__this_00,(MethodInfo *)0x0);
  FCJBEKHDLAF__PIJBDADCNOO(__this,method_01);
  ppCVar14 = &(__this->fields).KKJBIHIFJOE;
  *ppCVar14 = (CNIGOFCKBGI_o *)0x0;
  (__this->fields).DFMCHFJOPIP = false;
  (__this->fields).JHMMNIMBIKL = false;
  (__this->fields).EKHKFLJLLHB = false;
  (__this->fields).EPKNDHOGELF = false;
  (__this->fields).FPILBILDOPJ = 0;
  thunk_FUN_01c20e04(ppCVar14,0);
  pJVar10 = (__this->fields).ODIAFMNGOLA;
  (__this->fields).AJLCPFKPBLI = false;
  if (pJVar10 == (JIMKCICMMIL_o *)0x0) goto LAB_034e6564;
  (pJVar10->fields).ODIAFMNGOLA = (pJVar10->fields).ODIAFMNGOLA + 1;
  pNVar15 = (__this->fields).HIBPKNAIPLH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar7 = extraout_x1_00;
  if (bVar1) {
    pNVar15 = (__this->fields).HIBPKNAIPLH;
    if (pNVar15 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) goto LAB_034e6564;
    Nekki_SF2_GUI_Fight_PreFight__ClearInscription(pNVar15,(MethodInfo *)0x0);
    pAVar11 = (__this->fields).FBFPLEFCDOK;
    if (pAVar11 == (AFFHKININGD_o *)0x0) goto LAB_034e6564;
    pNVar15 = (__this->fields).HIBPKNAIPLH;
    if ((pAVar11->fields).JDNKKGPNHPB == 0x14) {
      if (pNVar15 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) goto LAB_034e6564;
      Nekki_SF2_GUI_Fight_PreFight__CreateSkipRound(pNVar15,(MethodInfo *)0x0);
      pMVar7 = extraout_x1_01;
    }
    else {
      pJVar10 = (__this->fields).ODIAFMNGOLA;
      if ((pJVar10 == (JIMKCICMMIL_o *)0x0) || (pNVar15 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0))
      goto LAB_034e6564;
      Nekki_SF2_GUI_Fight_PreFight__CreateRound
                (pNVar15,(pJVar10->fields).ODIAFMNGOLA,false,(MethodInfo *)0x0);
      pJVar10 = (__this->fields).ODIAFMNGOLA;
      if ((pJVar10 == (JIMKCICMMIL_o *)0x0) ||
         ((pPVar8 = (__this->fields).KCHOEJOHIMM, pPVar8 == (PJKHAJKEHEL_o *)0x0 ||
          (pSVar4 = (__this->fields).DFGLEOANOFI,
          pSVar4 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0)))) goto LAB_034e6564;
      iVar2 = (pJVar10->fields).ODIAFMNGOLA;
      FPDJMIBLBAH = (pPVar8->fields).GPLLAHCFFIH;
                    /* try { // try from 034e6380 to 035e6383 has its CatchHandler @ 034e64e4 */
      pIVar5 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar4,
                          (__this->fields).CLFDJLLDNGD,
                          Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
                    /* try { // try from 034e6384 to 035e638b has its CatchHandler @ 034e6408 */
      if (pIVar5 == (Il2CppObject *)0x0) goto LAB_034e6564;
                    /* try { // try from 034e638c to 035e638f has its CatchHandler @ 034e64e8 */
                    /* try { // try from 034e6390 to 035e6393 has its CatchHandler @ 034e6404 */
      AIHGKMMPALK = *(int32_t *)&pIVar5[0x11].monitor;
                    /* try { // try from 034e6394 to 035e6397 has its CatchHandler @ 034e6400 */
                    /* try { // try from 034e6398 to 035e639b has its CatchHandler @ 034e64e8 */
                    /* try { // try from 034e639c to 035e639f has its CatchHandler @ 034e63e8 */
      if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034e63a0 to 035e63a3 has its CatchHandler @ 034e63e4 */
                    /* try { // try from 034e63a4 to 035e63a7 has its CatchHandler @ 034e63e0 */
        thunk_FUN_01ba7564(DKEOKAONIIB_TypeInfo);
      }
                    /* try { // try from 034e63a8 to 035e63ab has its CatchHandler @ 034e63dc */
                    /* try { // try from 034e63ac to 035e63b3 has its CatchHandler @ 034e641c */
                    /* try { // try from 034e63b4 to 035e63bf has its CatchHandler @ 034e5ca0 */
      in_x3 = (MethodInfo *)0x0;
      DKEOKAONIIB__FDDKGLOPBEG(iVar2,FPDJMIBLBAH,AIHGKMMPALK,(MethodInfo *)0x0);
      pMVar7 = extraout_x1_02;
    }
  }
                    /* try { // try from 034e63c0 to 035e63c3 has its CatchHandler @ 034e63cc */
  FCJBEKHDLAF__PPGPKHDJILJ(__this,pMVar7);
                    /* try { // try from 034e63c4 to 035e63c7 has its CatchHandler @ 034e63c8 */
                    /* catch() { ... } // from try @ 034e63c4 with catch @ 034e63c8
                       try { // try from 034e63c8 to 035e643b has its CatchHandler @ 034e5ca0 */
  if ((__this->fields).HDKGGAKCPAM != false) {
                    /* catch() { ... } // from try @ 034e63c0 with catch @ 034e63cc */
    pAVar11 = (__this->fields).FBFPLEFCDOK;
                    /* catch() { ... } // from try @ 034e6254 with catch @ 034e63d0 */
    if (pAVar11 == (AFFHKININGD_o *)0x0) goto LAB_034e6564;
                    /* catch() { ... } // from try @ 034e6208 with catch @ 034e63d4 */
                    /* catch() { ... } // from try @ 034e61b0 with catch @ 034e63d8 */
    pMVar7 = extraout_x1_03;
                    /* catch() { ... } // from try @ 034e63a8 with catch @ 034e63dc */
    if ((pAVar11->fields).JDNKKGPNHPB == 5) {
                    /* catch() { ... } // from try @ 034e63a4 with catch @ 034e63e0 */
                    /* catch() { ... } // from try @ 034e63a0 with catch @ 034e63e4 */
                    /* catch() { ... } // from try @ 034e639c with catch @ 034e63e8 */
                    /* catch() { ... } // from try @ 034e61f8 with catch @ 034e63ec */
                    /* catch() { ... } // from try @ 034e61a0 with catch @ 034e63f0 */
      method_00 = FCJBEKHDLAF_TypeInfo;
      if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 034e61d8 with catch @ 034e63f4 */
        method_00 = (FCJBEKHDLAF_c *)thunk_FUN_01ba7564();
      }
                    /* catch() { ... } // from try @ 034e5f2c with catch @ 034e63f8 */
      bVar1 = FCJBEKHDLAF__BIFOAELOCOF((MethodInfo *)method_00);
                    /* catch() { ... } // from try @ 034e5f20 with catch @ 034e63fc */
      pMVar7 = extraout_x1_04;
      if (!bVar1) goto LAB_034e644c;
                    /* catch() { ... } // from try @ 034e6394 with catch @ 034e6400 */
                    /* catch() { ... } // from try @ 034e6390 with catch @ 034e6404 */
                    /* catch() { ... } // from try @ 034e6384 with catch @ 034e6408 */
                    /* catch() { ... } // from try @ 034e611c with catch @ 034e640c */
                    /* catch() { ... } // from try @ 034e5eb4 with catch @ 034e6410 */
      BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                    FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
                    /* catch() { ... } // from try @ 034e60c0 with catch @ 034e6414 */
      if (BBBLOLJAMJP == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) goto LAB_034e6564;
                    /* catch() { ... } // from try @ 034e5e58 with catch @ 034e6418 */
                    /* catch() { ... } // from try @ 034e63ac with catch @ 034e641c */
                    /* catch() { ... } // from try @ 034e61bc with catch @ 034e6420 */
      if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
                    /* catch() { ... } // from try @ 034e6180 with catch @ 034e6424 */
      BBBLOLJAMJP->m_Items[0] = 2;
                    /* try { // try from 034e643c to 035e643f has its CatchHandler @ 034e6454 */
      Nekki_Utils_DetailedLog__Log(StringLiteral_6319,BBBLOLJAMJP,(MethodInfo *)0x0);
      FCJBEKHDLAF__EOBCLPDGJPO(__this,method_02);
    }
    else {
LAB_034e644c:
      FCJBEKHDLAF__AIFOMGABBBA(__this,pMVar7);
    }
                    /* catch() { ... } // from try @ 034e643c with catch @ 034e6454 */
    (__this->fields).HDKGGAKCPAM = false;
  }
  pPVar8 = (__this->fields).KCHOEJOHIMM;
  if (pPVar8 != (PJKHAJKEHEL_o *)0x0) {
                    /* try { // try from 034e6464 to 035e64df has its CatchHandler @ 034e65a8 */
    PJKHAJKEHEL__IIKBGIKJNBH(pPVar8,(MethodInfo *)0x0);
    __this_01 = (__this->fields).IILLHHPGGKA;
    if (__this_01 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_b8,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
      local_60.fields._index = local_b8.fields._index;
      local_60.fields._version = local_b8.fields._version;
      local_60.fields._list = local_b8.fields._list;
      local_60.fields._current = local_b8.fields._current;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__
                          );
        pIVar5 = local_60.fields._current;
        if (!bVar1) break;
        pJVar10 = (__this->fields).ODIAFMNGOLA;
        if (pJVar10 == (JIMKCICMMIL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if ((OLKKAIFGGAK_o *)local_60.fields._current == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        OLKKAIFGGAK__FDDKGLOPBEG
                  ((OLKKAIFGGAK_o *)local_60.fields._current,(pJVar10->fields).ODIAFMNGOLA,
                   (MethodInfo *)0x0);
        pPVar8 = ((OLKKAIFGGAK_Fields *)((long)pIVar5 + 0x10))->FAPMJJBOFEF;
        if (pPVar8 == (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* catch() { ... } // from try @ 034e5f38 with catch @ 034e64e0
                       try { // try from 034e64e0 to 035e64ff has its CatchHandler @ 034e5ca0 */
        PJKHAJKEHEL__LNJPBAAMPKA(pPVar8,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034e6380 with catch @ 034e64e4 */
      }
                    /* catch() { ... } // from try @ 034e638c with catch @ 034e64e8
                       catch() { ... } // from try @ 034e6398 with catch @ 034e64e8 */
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__)
      ;
      __this_02 = (__this->fields).POEGCOJFMDB;
      if (__this_02 != (MMDDDDFHOLG_o *)0x0) {
                    /* try { // try from 034e6500 to 035e6503 has its CatchHandler @ 034e6514 */
        MMDDDDFHOLG__EHNHAAPBCJG(__this_02,(MethodInfo *)0x0);
        FCJBEKHDLAF__EPLFGHIGEAH(__this,false,false,in_x3);
                    /* catch() { ... } // from try @ 034e6500 with catch @ 034e6514 */
        (__this->fields).HDKGGAKCPAM = false;
        if ((System_GC_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034e6524 to 035e6593 has its CatchHandler @ 034e65a8 */
          thunk_FUN_01ba7564();
        }
        System_GC__Collect((MethodInfo *)0x0);
        pNVar6 = Nekki_Utils_DetailedLog__get_Instance((MethodInfo *)0x0);
        if ((pNVar6 != (Nekki_Utils_DetailedLog_o *)0x0) &&
           (__this_03 = (pNVar6->fields)._OHKFCDKHGJO_k__BackingField,
           __this_03 != (FPNPHJJPLKB_o *)0x0)) {
          FPNPHJJPLKB__FGGDIGJEGDC(__this_03,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_034e6564:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

