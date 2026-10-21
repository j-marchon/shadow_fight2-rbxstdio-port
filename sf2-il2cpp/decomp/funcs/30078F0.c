// Nekki.SF2.GUI.Shop.InfoPanelContent$$Refresh @ RVA 0x30078F0

void Nekki_SF2_GUI_Shop_InfoPanelContent__Refresh
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_InfoPanelContent_o *pNVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  bool bVar7;
  bool bVar8;
  int32_t iVar9;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *pIVar10;
  HOOAAGABMBL_o *pHVar11;
  DOPEEDABNEK_o *__this_01;
  Il2CppObject *pIVar12;
  DDMHMABAHHD_o *pDVar13;
  JMDPBFOCHHP_o *pJVar14;
  JMDPBFOCHHP_NOPCEDPNNKO_o *__this_02;
  JMDPBFOCHHP_HJLEKMDIDPO_o *pJVar15;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar16;
  VirtualInvokeData *pVVar17;
  Nekki_SF2_GUI_Shop_ParametersPanel_o *pNVar18;
  UnityEngine_GameObject_o *__this_03;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  System_String_o *pSVar19;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_03;
  Nekki_SF2_GUI_Shop_InfoPanelContent_o *pNVar20;
  MethodInfo *pMVar21;
  ACHLOMELAJE_o *pAVar22;
  IGFGDDANEPE_Fields *pIVar23;
  Il2CppClass *pIVar24;
  HOOAAGABMBL_o *pHVar25;
  ulong uVar26;
  int32_t *piVar27;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar28;
  IGFGDDANEPE_o **ppIVar29;
  HOOAAGABMBL_o **ppHVar30;
  System_String_o *pSVar31;
  Nekki_SF2_GUI_LabelAlias_o *pNVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int32_t local_64;
  
  if ((DAT_04565b62 & 1) == 0) {
    FUN_01bab630(&DFLJPJMIMHI_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15964);
    FUN_01bab630(&StringLiteral_9307);
    FUN_01bab630(&StringLiteral_3535);
    FUN_01bab630(&StringLiteral_11073);
    FUN_01bab630(&StringLiteral_22482);
    FUN_01bab630(&StringLiteral_10876);
                    /* try { // try from 031079c8 to 03207a47 has its CatchHandler @ 031079c8
                       catch() { ... } // from try @ 031079c8 with catch @ 031079c8
                       catch() { ... } // from try @ 03107b90 with catch @ 031079c8
                       catch() { ... } // from try @ 03107be8 with catch @ 031079c8
                       catch() { ... } // from try @ 03107c48 with catch @ 031079c8
                       catch() { ... } // from try @ 03107c68 with catch @ 031079c8
                       catch() { ... } // from try @ 03107cac with catch @ 031079c8 */
    FUN_01bab630(&StringLiteral_8722);
    FUN_01bab630(&StringLiteral_10823);
    FUN_01bab630(&StringLiteral_7510);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_1606);
    DAT_04565b62 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
                    /* try { // try from 03107a48 to 03207a57 has its CatchHandler @ 03107bf0 */
  pAVar22 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* try { // try from 03107a58 to 03207a77 has its CatchHandler @ 03107c00 */
  if ((pAVar22 == (ACHLOMELAJE_o *)0x0) ||
     (__this_00 = (pAVar22->fields).OIDPLCLELEN, __this_00 == (GGHCLMEFIGO_o *)0x0))
  goto LAB_03108384;
  pIVar10 = GGHCLMEFIGO__JNFIBDBHNOA(__this_00,(__this->fields).BBODGCMLKFP,(MethodInfo *)0x0);
  ppIVar29 = &(__this->fields).AAIHPGBKKNM;
  *ppIVar29 = pIVar10;
                    /* try { // try from 03107a78 to 03207a83 has its CatchHandler @ 03107bec */
  thunk_FUN_01c20e04(ppIVar29,pIVar10);
  bVar7 = HCAICJLDDJO__AEFGCHDNCDG(*ppIVar29,(MethodInfo *)0x0);
  pNVar1 = __this;
                    /* try { // try from 03107a94 to 03207a9b has its CatchHandler @ 03107be8 */
  if (!bVar7) {
    pNVar1 = (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0;
  }
  (__this->fields).LLJHPAIHMEO = bVar7;
  pNVar20 = __this;
  if (bVar7) {
    if (*ppIVar29 == (IGFGDDANEPE_o *)0x0) goto LAB_03108384;
    pHVar11 = IGFGDDANEPE__JGBDIHJDIHD(*ppIVar29,(MethodInfo *)0x0);
    if (pHVar11 == (HOOAAGABMBL_o *)0x0) goto LAB_03107af4;
                    /* try { // try from 03107abc to 03207acb has its CatchHandler @ 03107c0c */
    pHVar11 = (__this->fields).BBODGCMLKFP;
    if (pHVar11 == (HOOAAGABMBL_o *)0x0) goto LAB_03108384;
                    /* try { // try from 03107ad0 to 03207b6f has its CatchHandler @ 03107c10 */
    bVar7 = System_String__op_Inequality
                      ((pHVar11->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876,
                       (MethodInfo *)0x0);
    pNVar20 = pNVar1;
    if (!bVar7) goto LAB_03107af4;
    if (*ppIVar29 == (IGFGDDANEPE_o *)0x0) goto LAB_03108384;
    pHVar11 = IGFGDDANEPE__JGBDIHJDIHD(*ppIVar29,(MethodInfo *)0x0);
  }
  else {
LAB_03107af4:
    pHVar11 = (__this->fields).BBODGCMLKFP;
  }
  if (pNVar20 == (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0) goto LAB_03108384;
  ppHVar30 = &(pNVar20->fields).BBODGCMLKFP;
  *ppHVar30 = pHVar11;
  thunk_FUN_01c20e04(ppHVar30);
  bVar7 = HCAICJLDDJO__INONOLJEDEA
                    ((__this->fields).BBODGCMLKFP,(__this->fields).AAIHPGBKKNM,(MethodInfo *)0x0);
  (__this->fields).BFBFNFNPJKB = bVar7;
  bVar7 = HCAICJLDDJO__LKBMNAHLCEK((__this->fields).AAIHPGBKKNM,(MethodInfo *)0x0);
  (__this->fields).AMLKHDGJPGJ = bVar7;
  bVar7 = HCAICJLDDJO__OLKMIPIPMIG((__this->fields).AAIHPGBKKNM,(MethodInfo *)0x0);
  pHVar11 = (__this->fields).BBODGCMLKFP;
  (__this->fields).GBHMJHPFMAM = bVar7;
  if (pHVar11 == (HOOAAGABMBL_o *)0x0) {
    if (*ppIVar29 == (IGFGDDANEPE_o *)0x0) {
      pSVar31 = (System_String_o *)0x0;
                    /* catch() { ... } // from try @ 03107a58 with catch @ 03107c00 */
    }
    else {
                    /* try { // try from 03107b84 to 03207b8f has its CatchHandler @ 03107bf4 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03107b90 to 03207bbb has its CatchHandler @ 031079c8 */
        thunk_FUN_01ba7564();
      }
      if (DAT_04563eaa == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04563eaa = '\x01';
      }
                    /* try { // try from 03107bbc to 03207bdf has its CatchHandler @ 03107c14 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if ((*ppIVar29 == (IGFGDDANEPE_o *)0x0) ||
         (__this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField,
         __this_01 == (DOPEEDABNEK_o *)0x0)) goto LAB_03108384;
                    /* try { // try from 03107be0 to 03207be7 has its CatchHandler @ 03107bf4 */
      pHVar11 = DOPEEDABNEK__CKKIPBAIEMN
                          (__this_01,((*ppIVar29)->fields).NPFMOEOIEKM,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03107a94 with catch @ 03107be8
                       try { // try from 03107be8 to 03207c27 has its CatchHandler @ 031079c8 */
      if (pHVar11 == (HOOAAGABMBL_o *)0x0) {
        pSVar31 = (System_String_o *)0x0;
      }
      else {
                    /* catch() { ... } // from try @ 03107a78 with catch @ 03107bec */
        pSVar31 = (pHVar11->fields)._HONAAKEIHJI_k__BackingField;
                    /* catch() { ... } // from try @ 03107a48 with catch @ 03107bf0 */
      }
                    /* catch() { ... } // from try @ 03107abc with catch @ 03107c0c */
                    /* catch() { ... } // from try @ 03107ad0 with catch @ 03107c10 */
      bVar7 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar31,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03107bbc with catch @ 03107c14 */
      if (bVar7) {
        if (*ppIVar29 == (IGFGDDANEPE_o *)0x0) goto LAB_03108384;
        pSVar31 = ((*ppIVar29)->fields).NPFMOEOIEKM;
      }
    }
  }
  else {
    bVar7 = PCOEHCPGBBG__BDLEIEHBFAD
                      ((pHVar11->fields)._HONAAKEIHJI_k__BackingField,(MethodInfo *)0x0);
    pHVar11 = (__this->fields).BBODGCMLKFP;
    if (pHVar11 == (HOOAAGABMBL_o *)0x0) goto LAB_03108384;
    if (bVar7) {
      pSVar31 = (pHVar11->fields)._COIPKAKHDFP_k__BackingField;
    }
    else {
                    /* catch() { ... } // from try @ 03107b84 with catch @ 03107bf4
                       catch() { ... } // from try @ 03107be0 with catch @ 03107bf4 */
      pSVar31 = (pHVar11->fields)._HONAAKEIHJI_k__BackingField;
    }
  }
                    /* try { // try from 03107c28 to 03207c2b has its CatchHandler @ 03107c90 */
  pIVar12 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                      (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
                    /* try { // try from 03107c3c to 03207c47 has its CatchHandler @ 03107cc0 */
  pSVar31 = FEEEICKDOFK__PEKFIKKFOEP((BLEFOFGCKEF_o *)pIVar12,pSVar31,(MethodInfo *)0x0);
                    /* try { // try from 03107c48 to 03207c63 has its CatchHandler @ 031079c8 */
  bVar7 = System_String__op_Equality(pSVar31,StringLiteral_9307,(MethodInfo *)0x0);
  if (bVar7) {
    pHVar11 = (__this->fields).BBODGCMLKFP;
                    /* try { // try from 03107c64 to 03207c67 has its CatchHandler @ 03107c9c */
                    /* try { // try from 03107c68 to 03207c87 has its CatchHandler @ 031079c8 */
    if (pHVar11 == (HOOAAGABMBL_o *)0x0) {
      if (*ppIVar29 != (IGFGDDANEPE_o *)0x0) {
        pIVar23 = &(*ppIVar29)->fields;
        goto LAB_03107c84;
      }
      pSVar19 = (System_String_o *)0x0;
    }
    else {
      pIVar23 = (IGFGDDANEPE_Fields *)&(pHVar11->fields)._COIPKAKHDFP_k__BackingField;
LAB_03107c84:
      pSVar19 = pIVar23->NPFMOEOIEKM;
    }
                    /* try { // try from 03107c88 to 03207cab has its CatchHandler @ 03107cc0 */
    pSVar19 = System_String__Concat(StringLiteral_7510,pSVar19,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03107c28 with catch @ 03107c90 */
                    /* catch() { ... } // from try @ 03107c64 with catch @ 03107c9c */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03107cac to 03207cb7 has its CatchHandler @ 031079c8 */
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
                    /* try { // try from 03107cb8 to 03207cbf has its CatchHandler @ 03107cc0 */
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar19,(MethodInfo *)0x0);
  }
  pHVar11 = (__this->fields).BBODGCMLKFP;
                    /* catch() { ... } // from try @ 03107c3c with catch @ 03107cc0
                       catch() { ... } // from try @ 03107c88 with catch @ 03107cc0
                       catch() { ... } // from try @ 03107cb8 with catch @ 03107cc0 */
  if (pHVar11 == (HOOAAGABMBL_o *)0x0) {
    pNVar32 = (__this->fields)._timerAlias;
LAB_03107e04:
    iVar9 = 1;
  }
  else {
    pMVar21 = (MethodInfo *)0x0;
    bVar7 = System_String__op_Equality
                      ((pHVar11->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876,
                       (MethodInfo *)0x0);
    pSVar19 = StringLiteral_1;
    if (bVar7) {
      pDVar13 = HCAICJLDDJO__PEENAMDLAKO((__this->fields).BBODGCMLKFP,(MethodInfo *)0x0);
      if (pDVar13 == (DDMHMABAHHD_o *)0x0) {
        iVar9 = 0;
      }
      else {
        pSVar19 = (pDVar13->fields)._COIPKAKHDFP_k__BackingField;
        iVar9 = (pDVar13->fields)._HFPMLGFDOKC_k__BackingField;
      }
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pJVar14 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (pJVar14 == (JMDPBFOCHHP_o *)0x0) goto LAB_03108384;
      __this_02 = (pJVar14->fields).OFMMMBIIDAE;
      if (((__this_02 != (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0) &&
          (pJVar15 = JMDPBFOCHHP_NOPCEDPNNKO__FPPDGOEOJCH(__this_02,pSVar19,pMVar21),
          pJVar15 != (JMDPBFOCHHP_HJLEKMDIDPO_o *)0x0)) &&
         (bVar7 = System_String__op_Equality
                            ((pJVar15->fields).BGHFADDGPAD,StringLiteral_8722,(MethodInfo *)0x0),
         bVar7)) {
        local_64 = iVar9;
        pIVar12 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_64);
        pSVar19 = System_String__Format(StringLiteral_22482,pIVar12,(MethodInfo *)0x0);
        pSVar31 = System_String__Concat(pSVar31,pSVar19,(MethodInfo *)0x0);
      }
    }
    pHVar11 = (__this->fields).BBODGCMLKFP;
    pNVar32 = (__this->fields)._timerAlias;
    if (pHVar11 == (HOOAAGABMBL_o *)0x0) goto LAB_03107e04;
    bVar7 = System_String__op_Equality
                      ((pHVar11->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876,
                       (MethodInfo *)0x0);
    if (bVar7) {
LAB_03107df8:
      iVar9 = 4;
    }
    else {
      pHVar11 = (__this->fields).BBODGCMLKFP;
      if (pHVar11 == (HOOAAGABMBL_o *)0x0) goto LAB_03108384;
      bVar7 = System_String__op_Equality
                        ((pHVar11->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10823,
                         (MethodInfo *)0x0);
      if (bVar7) goto LAB_03107df8;
      iVar9 = 1;
    }
  }
  if (pNVar32 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03108384;
  UnityEngine_UI_Text__set_alignment((UnityEngine_UI_Text_o *)pNVar32,iVar9,(MethodInfo *)0x0);
  pNVar32 = (__this->fields)._header;
  if (pNVar32 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03108384;
  Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar32,pSVar31,(MethodInfo *)0x0);
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
  pAVar22 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar22 == (ACHLOMELAJE_o *)0x0) goto LAB_03108384;
  pMVar16 = ACHLOMELAJE__HKIEGNBOFCD(pAVar22,StringLiteral_15964,0,(MethodInfo *)0x0);
  if (((pMVar16 == (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) ||
      (bVar7 = System_String__op_Equality
                         ((pMVar16->fields).JAICMIMBIOA,StringLiteral_1606,(MethodInfo *)0x0),
      !bVar7)) ||
     ((pHVar11 = (__this->fields).BBODGCMLKFP, pHVar11 == (HOOAAGABMBL_o *)0x0 ||
      (bVar7 = System_String__op_Equality
                         ((pHVar11->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_11073,
                          (MethodInfo *)0x0), !bVar7)))) {
LAB_03107f68:
    pNVar32 = (__this->fields)._descriptionDonate;
    if (pNVar32 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03108384;
    Nekki_SF2_GUI_LabelAlias__set_UseLabelLineSpacing(pNVar32,false,(MethodInfo *)0x0);
    pNVar32 = (__this->fields)._descriptionDonate;
    pIVar12 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if (pIVar12 == (Il2CppObject *)0x0) goto LAB_03108384;
    pIVar24 = pIVar12->klass;
    uVar4._0_1_ = (pIVar24->_2).rank;
    uVar4._1_1_ = (pIVar24->_2).minimumAlignment;
    uVar26 = (ulong)uVar4;
    if (uVar26 != 0) {
      piVar27 = &((pIVar24->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar27 + -2))->interfaceType ==
            (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
          pVVar17 = pIVar24->vtable + (*piVar27 + 8);
          goto LAB_03107fe0;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
                    /* try { // try from 03107fc8 to 03207fd3 has its CatchHandler @ 03108120 */
    pVVar17 = (VirtualInvokeData *)FUN_01b81914(pIVar12,DFLJPJMIMHI_TypeInfo,8);
LAB_03107fe0:
                    /* try { // try from 03107fe4 to 03207feb has its CatchHandler @ 0310811c */
    fVar35 = (float)(*pVVar17->methodPtr)(pIVar12,pVVar17->method);
    if (pNVar32 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03108384;
  }
  else {
    pHVar11 = (__this->fields).BBODGCMLKFP;
    if (pHVar11 == (HOOAAGABMBL_o *)0x0) goto LAB_03108384;
    bVar7 = System_String__op_Equality
                      ((pHVar11->fields)._DKODBGOHKGH_k__BackingField,StringLiteral_3535,
                       (MethodInfo *)0x0);
    if (!bVar7) goto LAB_03107f68;
    pNVar32 = (__this->fields)._descriptionDonate;
    if (pNVar32 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03108384;
    Nekki_SF2_GUI_LabelAlias__set_UseLabelLineSpacing(pNVar32,true,(MethodInfo *)0x0);
    pNVar32 = (__this->fields)._descriptionDonate;
    pIVar12 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if (pIVar12 == (Il2CppObject *)0x0) goto LAB_03108384;
    pIVar24 = pIVar12->klass;
    uVar3._0_1_ = (pIVar24->_2).rank;
    uVar3._1_1_ = (pIVar24->_2).minimumAlignment;
    uVar26 = (ulong)uVar3;
    if (uVar26 != 0) {
      piVar27 = &((pIVar24->_1).interfaceOffsets)->offset;
      do {
                    /* try { // try from 03107f48 to 03207fc7 has its CatchHandler @ 03107f48
                       catch() { ... } // from try @ 03107f48 with catch @ 03107f48
                       catch() { ... } // from try @ 031080c0 with catch @ 03107f48
                       catch() { ... } // from try @ 0310811c with catch @ 03107f48
                       catch() { ... } // from try @ 03108148 with catch @ 03107f48
                       catch() { ... } // from try @ 0310817c with catch @ 03107f48 */
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar27 + -2))->interfaceType ==
            (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
          pVVar17 = pIVar24->vtable + (*piVar27 + 8);
          goto LAB_0310827c;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    pVVar17 = (VirtualInvokeData *)FUN_01b81914(pIVar12,DFLJPJMIMHI_TypeInfo,8);
LAB_0310827c:
    fVar33 = (float)(*pVVar17->methodPtr)(pIVar12,pVVar17->method);
    pIVar12 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if (pIVar12 == (Il2CppObject *)0x0) goto LAB_03108384;
    pIVar24 = pIVar12->klass;
    uVar5._0_1_ = (pIVar24->_2).rank;
    uVar5._1_1_ = (pIVar24->_2).minimumAlignment;
    uVar26 = (ulong)uVar5;
    if (uVar26 != 0) {
      piVar27 = &((pIVar24->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar27 + -2))->interfaceType ==
            (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
          pVVar17 = pIVar24->vtable + (*piVar27 + 9);
          goto LAB_031082ec;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    pVVar17 = (VirtualInvokeData *)FUN_01b81914(pIVar12,DFLJPJMIMHI_TypeInfo,9);
LAB_031082ec:
    fVar34 = (float)(*pVVar17->methodPtr)(pIVar12,pVVar17->method);
    pIVar12 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if (pIVar12 == (Il2CppObject *)0x0) goto LAB_03108384;
    pIVar24 = pIVar12->klass;
    uVar6._0_1_ = (pIVar24->_2).rank;
    uVar6._1_1_ = (pIVar24->_2).minimumAlignment;
    uVar26 = (ulong)uVar6;
    if (uVar26 != 0) {
      piVar27 = &((pIVar24->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar27 + -2))->interfaceType ==
            (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
          pVVar17 = pIVar24->vtable + (*piVar27 + 5);
          goto LAB_0310835c;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    pVVar17 = (VirtualInvokeData *)FUN_01b81914(pIVar12,DFLJPJMIMHI_TypeInfo,5);
LAB_0310835c:
    fVar35 = (float)(*pVVar17->methodPtr)(pIVar12,pVVar17->method);
    if (pNVar32 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03108384;
    fVar35 = (fVar33 + 0.24 / fVar34) / fVar35;
  }
  Nekki_SF2_GUI_LabelAlias__set_LabelLineSpacing(pNVar32,fVar35,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Shop_InfoPanelContent__PJNIDLOFIML(__this,method_00);
  Nekki_SF2_GUI_Shop_InfoPanelContent__LFLGIOKBFCG(__this,method_01);
                    /* try { // try from 0310800c to 0320801b has its CatchHandler @ 03108124 */
  Nekki_SF2_GUI_Shop_InfoPanelContent__ShowButton(__this,method_02);
  pHVar11 = (__this->fields).BBODGCMLKFP;
  pMVar21 = extraout_x1_02;
  if (pHVar11 == (HOOAAGABMBL_o *)0x0) {
LAB_0310807c:
    Nekki_SF2_GUI_Shop_InfoPanelContent__LockButton(__this,pMVar21);
  }
  else {
                    /* try { // try from 03108020 to 032080bf has its CatchHandler @ 03108128 */
    iVar2 = (pHVar11->fields)._JDEHPJEIOCI_k__BackingField;
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
    pAVar22 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar22 == (ACHLOMELAJE_o *)0x0) goto LAB_03108384;
    iVar9 = ACHLOMELAJE__EOEAKGGDBFH(pAVar22,(MethodInfo *)0x0);
    pMVar21 = method_03;
    if (iVar9 < iVar2) goto LAB_0310807c;
    Nekki_SF2_GUI_Shop_InfoPanelContent__OOCCHCBLHBE(__this,method_03);
  }
  if (*ppIVar29 == (IGFGDDANEPE_o *)0x0) {
    pHVar11 = (HOOAAGABMBL_o *)0x0;
  }
  else {
    pHVar11 = ((*ppIVar29)->fields).LFPOIAJDMBK;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
                    /* try { // try from 031080c0 to 032080f7 has its CatchHandler @ 03107f48 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar22 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar22 != (ACHLOMELAJE_o *)0x0) {
    if ((pAVar22->fields).CDAFCFNLDND == false) {
      bVar7 = false;
    }
    else {
                    /* try { // try from 031080f8 to 0320811b has its CatchHandler @ 0310812c */
      bVar7 = pHVar11 != (HOOAAGABMBL_o *)0x0 && (__this->fields).LLJHPAIHMEO != false;
    }
    pHVar25 = (__this->fields).BBODGCMLKFP;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03107fe4 with catch @ 0310811c
                       try { // try from 0310811c to 03208143 has its CatchHandler @ 03107f48 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03107fc8 with catch @ 03108120
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0310800c with catch @ 03108124
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03108020 with catch @ 03108128
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031080f8 with catch @ 0310812c
                        */
    if ((pHVar25 == (HOOAAGABMBL_o *)0x0) ||
       (bVar8 = System_String__op_Inequality
                          ((pHVar25->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876,
                           (MethodInfo *)0x0), !bVar8)) {
      bVar8 = false;
    }
    else {
      pHVar25 = (__this->fields).BBODGCMLKFP;
      if (pHVar25 == (HOOAAGABMBL_o *)0x0) goto LAB_03108384;
                    /* try { // try from 03108144 to 03208147 has its CatchHandler @ 0310816c */
                    /* try { // try from 03108148 to 0320816f has its CatchHandler @ 03107f48 */
      bVar8 = System_String__op_Inequality
                        ((pHVar25->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10823,
                         (MethodInfo *)0x0);
    }
    pNVar18 = (__this->fields)._parametersPanel;
                    /* catch() { ... } // from try @ 03108144 with catch @ 0310816c */
                    /* try { // try from 03108170 to 0320817b has its CatchHandler @ 03108190 */
    if ((pNVar18 != (Nekki_SF2_GUI_Shop_ParametersPanel_o *)0x0) &&
       (__this_03 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar18,(MethodInfo *)0x0),
       __this_03 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 0310817c to 03208187 has its CatchHandler @ 03107f48 */
      UnityEngine_GameObject__SetActive(__this_03,bVar8,(MethodInfo *)0x0);
      if (bVar8 != false) {
        pNVar18 = (__this->fields)._parametersPanel;
                    /* try { // try from 03108188 to 0320818f has its CatchHandler @ 03108190 */
        if (pNVar18 == (Nekki_SF2_GUI_Shop_ParametersPanel_o *)0x0) goto LAB_03108384;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03108170 with catch @ 03108190
                       catch(type#2 @ 00000000) { ... } // from try @ 03108188 with catch @ 03108190
                        */
        Nekki_SF2_GUI_Shop_ParametersPanel__Refresh
                  (pNVar18,(__this->fields).BBODGCMLKFP,pHVar11,bVar7,(MethodInfo *)0x0);
      }
      if (DAT_04565b84 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
        DAT_04565b84 = '\x01';
      }
      pNVar28 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar28,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar7) {
        if (DAT_04565b84 == '\0') {
          FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
          DAT_04565b84 = '\x01';
        }
        pNVar28 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
        if (pNVar28 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_03108384;
        Nekki_SF2_GUI_Menu_MainMenu__UpdateMaterials(pNVar28,(MethodInfo *)0x0);
      }
      return;
    }
  }
LAB_03108384:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

