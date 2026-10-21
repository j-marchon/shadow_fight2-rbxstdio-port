// EGMONPGHHDP$$OGPINCKBAKE @ RVA 0x304AFC0

void EGMONPGHHDP__OGPINCKBAKE(EGMONPGHHDP_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  EGMONPGHHDP_o *pEVar3;
  KEGDLHPEJBG_o *pKVar4;
  System_Byte_array *bytes;
  System_Collections_BitArray_o *__this_00;
  System_Collections_BitArray_o **ppSVar5;
  long lVar6;
  Nekki_SF2_GUI_Profile_ProfileScene_o *__this_01;
  ACHLOMELAJE_o *pAVar7;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar8;
  KKLJIDJBFEI_o *pKVar9;
  System_String_o *pSVar10;
  Il2CppObject *pIVar11;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_x1;
  undefined8 extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *pMVar12;
  System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *__this_02;
  System_Action_o *pSVar13;
  JMDPBFOCHHP_CKEMIAEPGKD_o *pJVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int64_t local_38;
  
  auVar15._8_8_ = method;
  auVar15._0_8_ = __this;
  if ((DAT_04565e03 & 1) == 0) {
    FUN_01bab630(&System_Collections_BitArray_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    FUN_01bab630(&StringLiteral_3321);
    FUN_01bab630(&StringLiteral_15928);
    FUN_01bab630(&StringLiteral_3320);
    auVar15 = FUN_01bab630(&StringLiteral_15927);
    DAT_04565e03 = 1;
  }
  local_38 = 0;
  pEVar3 = (EGMONPGHHDP_o *)EGMONPGHHDP__NJNOLNHFOPK(auVar15._0_8_,auVar15._8_8_);
  pMVar12 = method_00;
  if (pEVar3 != (EGMONPGHHDP_o *)0x0) {
    pJVar14 = (JMDPBFOCHHP_CKEMIAEPGKD_o *)(__this->fields).ILFGJMNODKJ;
    pEVar3 = (EGMONPGHHDP_o *)EGMONPGHHDP__NJNOLNHFOPK(pEVar3,method_00);
    if (pEVar3 == (EGMONPGHHDP_o *)0x0) goto LAB_0314b478;
    pMVar12 = method_01;
    if (pJVar14 != (pEVar3->fields).CPHIBOEEEFM) {
      pEVar3 = (EGMONPGHHDP_o *)EGMONPGHHDP__NJNOLNHFOPK(pEVar3,method_01);
      if (pEVar3 == (EGMONPGHHDP_o *)0x0) goto LAB_0314b478;
      (__this->fields).ILFGJMNODKJ = (int64_t)(pEVar3->fields).CPHIBOEEEFM;
      pKVar4 = EGMONPGHHDP__NJNOLNHFOPK(pEVar3,method_02);
      if (pKVar4 == (KEGDLHPEJBG_o *)0x0) goto LAB_0314b478;
      bytes = System_BitConverter__GetBytes((pKVar4->fields).HFHGCALGKHH,(MethodInfo *)0x0);
      __this_00 = (System_Collections_BitArray_o *)
                  thunk_FUN_01bda818(System_Collections_BitArray_TypeInfo);
      System_Collections_BitArray___ctor(__this_00,bytes,(MethodInfo *)0x0);
      ppSVar5 = &(__this->fields)._MLMHDKDJJFK_k__BackingField;
                    /* try { // try from 0314b0c8 to 0324b22f has its CatchHandler @ 0314b0c8
                       catch() { ... } // from try @ 0314b0c8 with catch @ 0314b0c8
                       catch() { ... } // from try @ 0314b2cc with catch @ 0314b0c8
                       catch() { ... } // from try @ 0314b3e0 with catch @ 0314b0c8
                       catch() { ... } // from try @ 0314b418 with catch @ 0314b0c8
                       catch() { ... } // from try @ 0314b524 with catch @ 0314b0c8 */
      *ppSVar5 = __this_00;
      thunk_FUN_01c20e04(ppSVar5,__this_00);
      pMVar12 = extraout_x1;
    }
  }
  iVar2 = EGMONPGHHDP__CJINGJONNEI(__this,pMVar12);
  if ((__this->fields).KDCFELHDMKO != iVar2) {
    (__this->fields).KDCFELHDMKO = iVar2;
    auVar16._8_8_ = extraout_x1_00;
    auVar16._0_8_ = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
    if ((*(byte *)(*(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20) + 0x135)
        & 1) == 0) {
      auVar16 = FUN_01b81620();
    }
    lVar6 = *(long *)(*(long *)(auVar16._0_8_ + 0xc0) + 0x10);
    auVar17._8_8_ = auVar16._8_8_;
    auVar17._0_8_ = lVar6;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      auVar17 = FUN_01b81620();
    }
    pMVar12 = auVar17._8_8_;
    __this_01 = (Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(auVar17._0_8_ + 0xb8);
    if (__this_01 != (Nekki_SF2_GUI_Profile_ProfileScene_o *)0x0) {
      Nekki_SF2_GUI_Profile_ProfileScene__UpdateBottomIndicators(__this_01,(MethodInfo *)0x0);
      pMVar12 = extraout_x1_01;
    }
    pJVar14 = EGMONPGHHDP__OKBKFJKEAAG(__this,pMVar12);
    if (pJVar14 != (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar7 == (ACHLOMELAJE_o *)0x0) goto LAB_0314b478;
      pMVar8 = ACHLOMELAJE__HKIEGNBOFCD(pAVar7,StringLiteral_15928,0,(MethodInfo *)0x0);
      if ((0 < iVar2) &&
         ((pMVar8 == (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0 ||
          (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pMVar8->fields).JAICMIMBIOA,(MethodInfo *)0x0), bVar1))
         )) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        pKVar9 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        if (pKVar9 == (KKLJIDJBFEI_o *)0x0) goto LAB_0314b478;
        local_38 = KKLJIDJBFEI__HEDLNKCNMCI(pKVar9,(MethodInfo *)0x0);
                    /* try { // try from 0314b230 to 0324b257 has its CatchHandler @ 0314b498 */
        pSVar10 = System_Int64__ToString((int64_t)&local_38,(MethodInfo *)0x0);
        if (pAVar7 == (ACHLOMELAJE_o *)0x0) goto LAB_0314b478;
        ACHLOMELAJE__LMJFPPDAPBF(pAVar7,StringLiteral_3321,pSVar10,0,(MethodInfo *)0x0);
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
                    /* try { // try from 0314b28c to 0324b2b7 has its CatchHandler @ 0314b494 */
        }
        pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar7 == (ACHLOMELAJE_o *)0x0) goto LAB_0314b478;
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar7,false,(MethodInfo *)0x0);
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
                    /* try { // try from 0314b2c4 to 0324b2cb has its CatchHandler @ 0314b490 */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0314b2cc to 0324b37b has its CatchHandler @ 0314b0c8 */
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar7 == (ACHLOMELAJE_o *)0x0) goto LAB_0314b478;
      pMVar8 = ACHLOMELAJE__HKIEGNBOFCD(pAVar7,StringLiteral_15927,0,(MethodInfo *)0x0);
      __this_02 = (pJVar14->fields).GPNNHMIJLGL;
      if ((__this_02 == (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0) ||
         (pIVar11 = System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_02,
                               (__this_02->fields)._size + -1,
                               Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__
                              ), pIVar11 == (Il2CppObject *)0x0)) goto LAB_0314b478;
      if (((long)(ulong)*(uint *)((long)&pIVar11[1].klass + 4) <= (long)iVar2) &&
         ((pMVar8 == (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0 ||
          (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pMVar8->fields).JAICMIMBIOA,(MethodInfo *)0x0), bVar1))
         )) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
                    /* try { // try from 0314b37c to 0324b3db has its CatchHandler @ 0314b488 */
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        pKVar9 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        if (pKVar9 == (KKLJIDJBFEI_o *)0x0) goto LAB_0314b478;
        local_38 = KKLJIDJBFEI__HEDLNKCNMCI(pKVar9,(MethodInfo *)0x0);
        pSVar10 = System_Int64__ToString((int64_t)&local_38,(MethodInfo *)0x0);
        if (pAVar7 == (ACHLOMELAJE_o *)0x0) goto LAB_0314b478;
                    /* try { // try from 0314b3dc to 0324b3df has its CatchHandler @ 0314b484 */
                    /* try { // try from 0314b3e0 to 0324b413 has its CatchHandler @ 0314b0c8 */
        ACHLOMELAJE__LMJFPPDAPBF(pAVar7,StringLiteral_3320,pSVar10,0,(MethodInfo *)0x0);
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0314b414 to 0324b417 has its CatchHandler @ 0314b480 */
          thunk_FUN_01ba7564();
                    /* try { // try from 0314b418 to 0324b4a7 has its CatchHandler @ 0314b0c8 */
        }
        pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar7 == (ACHLOMELAJE_o *)0x0) goto LAB_0314b478;
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar7,false,(MethodInfo *)0x0);
      }
    }
    pSVar13 = (__this->fields).DOHDFNOOGAH;
    if (pSVar13 == (System_Action_o *)0x0) {
LAB_0314b478:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (*(code *)(pSVar13->fields).super.super.invoke_impl)
              ((pSVar13->fields).super.super.method_code,(pSVar13->fields).super.super.method);
  }
  pSVar13 = (__this->fields)._MJGJOMCLIPN_k__BackingField;
  if (pSVar13 != (System_Action_o *)0x0) {
    (*(code *)(pSVar13->fields).super.super.invoke_impl)
              ((pSVar13->fields).super.super.method_code,(pSVar13->fields).super.super.method);
  }
  return;
}

