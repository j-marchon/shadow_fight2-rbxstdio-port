// AMJMGFCCAKN$$.ctor @ RVA 0x303BE6C

void AMJMGFCCAKN___ctor(AMJMGFCCAKN_o *__this,GGLKHCAIGDI_o *NDLOGJOGFCA,IGFGDDANEPE_o *NKCMBEFHFII,
                       BFBONKPKBNL_o *GMCFOKPADCA,MethodInfo *method)

{
  AMJMGFCCAKN_Fields *pAVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  undefined6 uVar4;
  int32_t iVar5;
  HOOAAGABMBL_o *pHVar6;
  ACHLOMELAJE_o *__this_00;
  System_String_o *pSVar7;
  System_String_o **ppSVar8;
  long lVar9;
  int64_t iVar10;
  int64_t iVar11;
  
  if ((DAT_04565d8a & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0313beb0 to 0323bf33 has its CatchHandler @ 0313beb0
                       catch() { ... } // from try @ 0313beb0 with catch @ 0313beb0
                       catch() { ... } // from try @ 0313bf8c with catch @ 0313beb0
                       catch() { ... } // from try @ 0313c1bc with catch @ 0313beb0
                       catch() { ... } // from try @ 0313c234 with catch @ 0313beb0
                       catch() { ... } // from try @ 0313c258 with catch @ 0313beb0
                       catch() { ... } // from try @ 0313c300 with catch @ 0313beb0
                       catch() { ... } // from try @ 0313c374 with catch @ 0313beb0 */
    FUN_01bab630(&StringLiteral_11106);
    FUN_01bab630(&StringLiteral_22485);
    DAT_04565d8a = 1;
  }
  HOOAAGABMBL___ctor((HOOAAGABMBL_o *)__this,(MethodInfo *)0x0);
  ppSVar8 = &(__this->fields).super._GMPAEDFIIHF_k__BackingField;
  *ppSVar8 = StringLiteral_11106;
  thunk_FUN_01c20e04(ppSVar8);
  (__this->fields).PHAGOJCOMPN = NDLOGJOGFCA;
  thunk_FUN_01c20e04(&(__this->fields).PHAGOJCOMPN,NDLOGJOGFCA);
  (__this->fields).MNELBNHIKGH = NKCMBEFHFII;
  thunk_FUN_01c20e04(&(__this->fields).MNELBNHIKGH,NKCMBEFHFII);
  (__this->fields).MHJAFBPAKEG = GMCFOKPADCA;
  thunk_FUN_01c20e04(&(__this->fields).MHJAFBPAKEG,GMCFOKPADCA);
  if (NKCMBEFHFII != (IGFGDDANEPE_o *)0x0) {
    pHVar6 = IGFGDDANEPE__JPNNODJPOCL(NKCMBEFHFII,false,(MethodInfo *)0x0);
    if (pHVar6 == (HOOAAGABMBL_o *)0x0) goto LAB_0313c068;
                    /* try { // try from 0313bf34 to 0323bf43 has its CatchHandler @ 0313c2a0 */
    (__this->fields).PFNIFGEBIAC = (pHVar6->fields)._JDEHPJEIOCI_k__BackingField;
  }
                    /* try { // try from 0313bf48 to 0323bf4b has its CatchHandler @ 0313c298 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0313bf5c to 0323bf5f has its CatchHandler @ 0313c270 */
  if (DAT_04565b7d == '\0') {
                    /* try { // try from 0313bf64 to 0323bf6b has its CatchHandler @ 0313c28c */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
                    /* try { // try from 0313bf78 to 0323bf7b has its CatchHandler @ 0313c26c */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0313bf80 to 0323bf83 has its CatchHandler @ 0313c268 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0313bf88 to 0323bf8b has its CatchHandler @ 0313c260 */
                    /* try { // try from 0313bf8c to 0323c03f has its CatchHandler @ 0313beb0 */
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    iVar5 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    (__this->fields).BMPFHIJEDOD = iVar5;
    if (GMCFOKPADCA != (BFBONKPKBNL_o *)0x0) {
      iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (GMCFOKPADCA->fields)._LAOFJOMPFDL_k__BackingField.fields,(MethodInfo *)0x0
                        );
      if (0 < iVar5) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b87 == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b87 = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        lVar9 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
        iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (GMCFOKPADCA->fields)._LAOFJOMPFDL_k__BackingField.fields,
                           (MethodInfo *)0x0);
        (__this->fields).CJKLJJIMECK = lVar9 + iVar5;
        iVar10 = (GMCFOKPADCA->fields)._BGAELGPOEHE_k__BackingField.fields.currentCryptoKey;
        bVar2 = (GMCFOKPADCA->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValueActive;
        bVar3 = (GMCFOKPADCA->fields)._BGAELGPOEHE_k__BackingField.fields.inited;
        uVar4 = *(undefined6 *)&(GMCFOKPADCA->fields)._BGAELGPOEHE_k__BackingField.fields.field_0x1a
        ;
        iVar11 = (GMCFOKPADCA->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValue;
        (__this->fields).super._BGAELGPOEHE_k__BackingField.fields.hiddenValue =
             (GMCFOKPADCA->fields)._BGAELGPOEHE_k__BackingField.fields.hiddenValue;
        (__this->fields).super._BGAELGPOEHE_k__BackingField.fields.currentCryptoKey = iVar10;
        pAVar1 = &__this->fields;
        (pAVar1->super)._BGAELGPOEHE_k__BackingField.fields.fakeValueActive = bVar2;
        (pAVar1->super)._BGAELGPOEHE_k__BackingField.fields.inited = bVar3;
        *(undefined6 *)&(pAVar1->super)._BGAELGPOEHE_k__BackingField.fields.field_0x1a = uVar4;
        (__this->fields).super._BGAELGPOEHE_k__BackingField.fields.fakeValue = iVar11;
      }
    }
    if ((NKCMBEFHFII != (IGFGDDANEPE_o *)0x0) && (NDLOGJOGFCA != (GGLKHCAIGDI_o *)0x0)) {
                    /* try { // try from 0313c040 to 0323c04f has its CatchHandler @ 0313c29c */
      pSVar7 = System_String__Concat
                         ((NKCMBEFHFII->fields).NPFMOEOIEKM,StringLiteral_22485,
                          (NDLOGJOGFCA->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
      ppSVar8 = &(__this->fields).super._COIPKAKHDFP_k__BackingField;
      *ppSVar8 = pSVar7;
                    /* try { // try from 0313c054 to 0323c057 has its CatchHandler @ 0313c294 */
                    /* try { // try from 0313c05c to 0323c05f has its CatchHandler @ 0313c290 */
                    /* try { // try from 0313c064 to 0323c067 has its CatchHandler @ 0313c288 */
      thunk_FUN_01c20e04(ppSVar8,pSVar7);
      return;
    }
  }
LAB_0313c068:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

