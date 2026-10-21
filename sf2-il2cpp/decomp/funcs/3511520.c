// AMIINPEKKFB$$BDMNJJAAHAJ @ RVA 0x3511520

bool AMIINPEKKFB__BDMNJJAAHAJ(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  DEKKGJNMFEB_o *pDVar3;
  AMJMGFCCAKN_o *pAVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *CJNHFNHJHPE;
  int64_t IDPMJOKDHNP;
  System_String_array *pSVar5;
  MethodInfo *extraout_x1;
  BFBONKPKBNL_o *pBVar6;
  ACHLOMELAJE_o *__this;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_40;
  
  CJNHFNHJHPE = &local_60;
  if ((DAT_045688f2 & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045688f2 = 1;
    method = extraout_x1;
  }
  if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DEKKGJNMFEB_TypeInfo,method);
  }
  pDVar3 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pDVar3 == (DEKKGJNMFEB_o *)0x0) goto LAB_03611724;
  pAVar4 = DEKKGJNMFEB__BEENALLFOCN(pDVar3,KGLJICLJHEL,(MethodInfo *)0x0);
  if (pAVar4 == (AMJMGFCCAKN_o *)0x0) {
    return false;
  }
  if ((pAVar4->fields).MHJAFBPAKEG == (BFBONKPKBNL_o *)0x0) {
                    /* try { // try from 03611638 to 0371163f has its CatchHandler @ 036116c4 */
    if ((KGLJICLJHEL == (System_String_o *)0x0) ||
       (pSVar5 = System_String__Split(KGLJICLJHEL,0x7c,0,(MethodInfo *)0x0),
       pSVar5 == (System_String_array *)0x0)) goto LAB_03611724;
                    /* try { // try from 03611654 to 0371165f has its CatchHandler @ 036116c0 */
    if ((int)pSVar5->max_length < 2) {
                    /* try { // try from 03611710 to 0371171b has its CatchHandler @ 03611510 */
                    /* try { // try from 0361171c to 03711723 has its CatchHandler @ 03611724 */
      return false;
    }
    if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0361166c to 0371167b has its CatchHandler @ 036116b8 */
    pDVar3 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
    iVar1 = (int)pSVar5->max_length;
                    /* try { // try from 0361167c to 037116a7 has its CatchHandler @ 03611510 */
    if ((iVar1 == 0) || (iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    if (pDVar3 == (DEKKGJNMFEB_o *)0x0) goto LAB_03611724;
    pBVar6 = DEKKGJNMFEB__NCFEMNMDBMJ
                       (pDVar3,pSVar5->m_Items[0],pSVar5->m_Items[1],(MethodInfo *)0x0);
    if (pBVar6 == (BFBONKPKBNL_o *)0x0) {
      return false;
    }
    if ((pAVar4->fields).CJKLJJIMECK < 1) {
      return false;
    }
                    /* try { // try from 036116a8 to 037116ab has its CatchHandler @ 036116bc */
                    /* try { // try from 036116ac to 037116af has its CatchHandler @ 036116b4 */
                    /* try { // try from 036116b0 to 037116db has its CatchHandler @ 03611510 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036116ac with catch @ 036116b4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361166c with catch @ 036116b8
                        */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036116a8 with catch @ 036116bc
                        */
      thunk_FUN_01ba7564();
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03611654 with catch @ 036116c0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03611638 with catch @ 036116c4
                        */
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 036116dc to 037116df has its CatchHandler @ 03611700 */
      DAT_04565b7d = '\x01';
    }
                    /* try { // try from 036116e0 to 03711707 has its CatchHandler @ 03611510 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_60.fields.hiddenValue = (pBVar6->fields)._BGAELGPOEHE_k__BackingField.fields.hiddenValue;
    local_60.fields.currentCryptoKey =
         (pBVar6->fields)._BGAELGPOEHE_k__BackingField.fields.currentCryptoKey;
    local_60.fields.fakeValueActive =
         (pBVar6->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValueActive;
    local_60.fields.inited = (pBVar6->fields)._BGAELGPOEHE_k__BackingField.fields.inited;
    local_60.fields._26_6_ =
         *(undefined6 *)&(pBVar6->fields)._BGAELGPOEHE_k__BackingField.fields.field_0x1a;
    local_60.fields.fakeValue = (pBVar6->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValue;
                    /* catch() { ... } // from try @ 036116dc with catch @ 03611700 */
    __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* try { // try from 03611708 to 0371170f has its CatchHandler @ 03611724 */
  }
  else {
    if ((pAVar4->fields).CJKLJJIMECK < 1) {
      return false;
    }
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
    pBVar6 = (pAVar4->fields).MHJAFBPAKEG;
    if (pBVar6 == (BFBONKPKBNL_o *)0x0) goto LAB_03611724;
    local_40.fields.hiddenValue = (pBVar6->fields)._BGAELGPOEHE_k__BackingField.fields.hiddenValue;
    local_40.fields.currentCryptoKey =
         (pBVar6->fields)._BGAELGPOEHE_k__BackingField.fields.currentCryptoKey;
    local_40.fields.fakeValueActive =
         (pBVar6->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValueActive;
    local_40.fields.inited = (pBVar6->fields)._BGAELGPOEHE_k__BackingField.fields.inited;
    local_40.fields._26_6_ =
         *(undefined6 *)&(pBVar6->fields)._BGAELGPOEHE_k__BackingField.fields.field_0x1a;
    local_40.fields.fakeValue = (pBVar6->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValue;
    CJNHFNHJHPE = &local_40;
    __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  }
  IDPMJOKDHNP = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                          (CJNHFNHJHPE,(MethodInfo *)0x0);
  if (__this != (ACHLOMELAJE_o *)0x0) {
    bVar2 = ACHLOMELAJE__MIFEPGNGDON(__this,IDPMJOKDHNP,(MethodInfo *)0x0);
    return bVar2;
  }
LAB_03611724:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03611708 with catch @ 03611724
                       catch(type#2 @ 00000000) { ... } // from try @ 0361171c with catch @ 03611724
                        */
  FUN_01bab8c8();
}

