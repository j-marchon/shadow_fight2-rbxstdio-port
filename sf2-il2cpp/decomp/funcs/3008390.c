// Nekki.SF2.GUI.Shop.InfoPanelContent$$SetDefaultDescription @ RVA 0x3008390

void Nekki_SF2_GUI_Shop_InfoPanelContent__SetDefaultDescription
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  UnityEngine_GameObject_o *__this_00;
  DDMHMABAHHD_o *pDVar4;
  JMDPBFOCHHP_o *pJVar5;
  JMDPBFOCHHP_NOPCEDPNNKO_o *pJVar6;
  JMDPBFOCHHP_HJLEKMDIDPO_o *pJVar7;
  JMDPBFOCHHP_EFAJBOEHPLJ_o *pJVar8;
  Il2CppObject *pIVar9;
  Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this_01;
  PALKNJHHCLJ_o *pPVar10;
  MethodInfo *pMVar11;
  HOOAAGABMBL_o *pHVar12;
  undefined8 *puVar13;
  ACHLOMELAJE_o *pAVar14;
  IGFGDDANEPE_o *pIVar15;
  System_String_o *str0;
  System_String_o *pSVar16;
  int32_t local_3c;
  int32_t local_38;
  int32_t local_34;
  
                    /* try { // try from 03108398 to 03208417 has its CatchHandler @ 03108398
                       catch() { ... } // from try @ 03108398 with catch @ 03108398
                       catch() { ... } // from try @ 03108560 with catch @ 03108398
                       catch() { ... } // from try @ 031085b8 with catch @ 03108398
                       catch() { ... } // from try @ 03108618 with catch @ 03108398
                       catch() { ... } // from try @ 03108638 with catch @ 03108398
                       catch() { ... } // from try @ 0310867c with catch @ 03108398 */
  if ((DAT_04565b55 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_22230);
    FUN_01bab630(&StringLiteral_20999);
    FUN_01bab630(&StringLiteral_20995);
    FUN_01bab630(&StringLiteral_22500);
                    /* try { // try from 03108418 to 03208427 has its CatchHandler @ 031085c0 */
    FUN_01bab630(&StringLiteral_21000);
    FUN_01bab630(&StringLiteral_20994);
                    /* try { // try from 03108428 to 03208447 has its CatchHandler @ 031085d0 */
    FUN_01bab630(&StringLiteral_10876);
    FUN_01bab630(&StringLiteral_8722);
                    /* try { // try from 03108448 to 03208453 has its CatchHandler @ 031085bc */
    FUN_01bab630(&StringLiteral_17691);
    FUN_01bab630(&StringLiteral_10823);
    FUN_01bab630(&StringLiteral_1);
                    /* try { // try from 03108464 to 0320846b has its CatchHandler @ 031085b8 */
    FUN_01bab630(&StringLiteral_22458);
    DAT_04565b55 = 1;
  }
  pNVar3 = (__this->fields)._description;
  if ((pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
     __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03108868;
                    /* try { // try from 0310848c to 0320849b has its CatchHandler @ 031085dc */
  UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
  pHVar12 = (__this->fields).BBODGCMLKFP;
  if (pHVar12 == (HOOAAGABMBL_o *)0x0) {
LAB_03108510:
    if ((__this->fields).AMLKHDGJPGJ != false) {
      pNVar3 = (__this->fields)._description;
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        puVar13 = &StringLiteral_20994;
LAB_03108544:
                    /* try { // try from 03108554 to 0320855f has its CatchHandler @ 031085c4 */
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,(System_String_o *)*puVar13,(MethodInfo *)0x0);
        return;
      }
      goto LAB_03108868;
    }
    if ((__this->fields).BFBFNFNPJKB != false) {
      pNVar3 = (__this->fields)._description;
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        puVar13 = &StringLiteral_20995;
        goto LAB_03108544;
      }
      goto LAB_03108868;
    }
    if ((__this->fields).GBHMJHPFMAM != false) {
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
      pAVar14 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar14 == (ACHLOMELAJE_o *)0x0) goto LAB_03108868;
      if ((pAVar14->fields).CDAFCFNLDND != false) {
        pIVar15 = (__this->fields).AAIHPGBKKNM;
        if (pIVar15 == (IGFGDDANEPE_o *)0x0) {
          return;
        }
        pHVar12 = (pIVar15->fields).LFPOIAJDMBK;
        if (pHVar12 == (HOOAAGABMBL_o *)0x0) {
          return;
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
        pAVar14 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar14 == (ACHLOMELAJE_o *)0x0) goto LAB_03108868;
        iVar2 = ACHLOMELAJE__EOEAKGGDBFH(pAVar14,(MethodInfo *)0x0);
        pPVar10 = HOOAAGABMBL__HNFABLLAKOP
                            (pHVar12,iVar2,(pHVar12->fields)._HCHGENFJLHA_k__BackingField,
                             (MethodInfo *)0x0);
        if (pPVar10 == (PALKNJHHCLJ_o *)0x0) goto LAB_03108868;
        iVar2 = (pPVar10->fields).HLFBMBHOPMI;
        pNVar3 = (__this->fields)._description;
        if ((pPVar10->fields).BGHFADDGPAD == 1) {
          local_38 = iVar2;
          pIVar9 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_38);
          puVar13 = &StringLiteral_20999;
        }
        else {
          local_3c = iVar2;
          pIVar9 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_3c);
          puVar13 = &StringLiteral_21000;
        }
        str0 = System_String__Format((System_String_o *)*puVar13,pIVar9,(MethodInfo *)0x0);
        goto joined_r0x031086b8;
      }
    }
    pNVar3 = (__this->fields)._description;
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03108820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                (pNVar3,StringLiteral_1,(pNVar3->klass->vtable)._75_set_text.method);
      return;
    }
  }
  else {
                    /* try { // try from 031084a0 to 0320853f has its CatchHandler @ 031085e0 */
    pMVar11 = (MethodInfo *)0x0;
    bVar1 = System_String__op_Equality
                      ((pHVar12->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      pHVar12 = (__this->fields).BBODGCMLKFP;
      if (pHVar12 == (HOOAAGABMBL_o *)0x0) goto LAB_03108868;
      pMVar11 = (MethodInfo *)0x0;
      bVar1 = System_String__op_Equality
                        ((pHVar12->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10823,
                         (MethodInfo *)0x0);
      if (!bVar1) goto LAB_03108510;
    }
    pSVar16 = StringLiteral_1;
    pHVar12 = (__this->fields).BBODGCMLKFP;
    if (pHVar12 == (HOOAAGABMBL_o *)0x0) goto LAB_03108868;
    str0 = (pHVar12->fields)._OICGFKLBNPE_k__BackingField;
    pDVar4 = HCAICJLDDJO__PEENAMDLAKO(pHVar12,(MethodInfo *)0x0);
    if (pDVar4 == (DDMHMABAHHD_o *)0x0) {
                    /* try { // try from 03108560 to 0320858b has its CatchHandler @ 03108398 */
      iVar2 = 0;
    }
    else {
      pSVar16 = (pDVar4->fields)._COIPKAKHDFP_k__BackingField;
      iVar2 = (pDVar4->fields)._HFPMLGFDOKC_k__BackingField;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pJVar5 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if (pJVar5 == (JMDPBFOCHHP_o *)0x0) goto LAB_03108868;
    pJVar6 = (pJVar5->fields).OFMMMBIIDAE;
                    /* try { // try from 0310858c to 032085af has its CatchHandler @ 031085e4 */
    if ((pJVar6 != (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0) &&
       (pJVar7 = JMDPBFOCHHP_NOPCEDPNNKO__FPPDGOEOJCH(pJVar6,pSVar16,pMVar11),
       pJVar7 != (JMDPBFOCHHP_HJLEKMDIDPO_o *)0x0)) {
      pMVar11 = (MethodInfo *)0x0;
                    /* try { // try from 031085b0 to 032085b7 has its CatchHandler @ 031085c4 */
      bVar1 = System_String__op_Equality
                        ((pJVar7->fields).BGHFADDGPAD,StringLiteral_8722,(MethodInfo *)0x0);
      if (bVar1) {
                    /* catch() { ... } // from try @ 03108464 with catch @ 031085b8
                       try { // try from 031085b8 to 032085f7 has its CatchHandler @ 03108398 */
                    /* catch() { ... } // from try @ 03108448 with catch @ 031085bc */
                    /* catch() { ... } // from try @ 03108418 with catch @ 031085c0 */
                    /* catch() { ... } // from try @ 03108554 with catch @ 031085c4
                       catch() { ... } // from try @ 031085b0 with catch @ 031085c4 */
        if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* catch() { ... } // from try @ 03108428 with catch @ 031085d0 */
        pMVar11 = (MethodInfo *)LPGPNBGHDBD__DMBEBNELNNC(pSVar16,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0310848c with catch @ 031085dc */
                    /* catch() { ... } // from try @ 031084a0 with catch @ 031085e0 */
                    /* catch() { ... } // from try @ 0310858c with catch @ 031085e4 */
                    /* try { // try from 031085f8 to 032085fb has its CatchHandler @ 03108660 */
        str0 = System_String__Concat
                         (str0,StringLiteral_22230,(System_String_o *)pMVar11,StringLiteral_22500,
                          (MethodInfo *)0x0);
      }
    }
                    /* try { // try from 0310860c to 03208617 has its CatchHandler @ 03108690 */
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03108618 to 03208633 has its CatchHandler @ 03108398 */
    pJVar5 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if (pJVar5 == (JMDPBFOCHHP_o *)0x0) goto LAB_03108868;
    pJVar6 = (pJVar5->fields).OFMMMBIIDAE;
                    /* try { // try from 03108634 to 03208637 has its CatchHandler @ 0310866c */
    if ((pJVar6 != (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0) &&
       (pJVar8 = JMDPBFOCHHP_NOPCEDPNNKO__BHJOLIJDBLO(pJVar6,pSVar16,pMVar11),
       pJVar8 != (JMDPBFOCHHP_EFAJBOEHPLJ_o *)0x0)) {
                    /* try { // try from 03108638 to 03208657 has its CatchHandler @ 03108398 */
      pHVar12 = (__this->fields).BBODGCMLKFP;
      if (pHVar12 == (HOOAAGABMBL_o *)0x0) goto LAB_03108868;
      pSVar16 = (pHVar12->fields)._OICGFKLBNPE_k__BackingField;
      local_34 = iVar2;
                    /* try { // try from 03108658 to 0320867b has its CatchHandler @ 03108690 */
      pIVar9 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
                    /* catch() { ... } // from try @ 031085f8 with catch @ 03108660 */
                    /* catch() { ... } // from try @ 03108634 with catch @ 0310866c */
      str0 = System_String__Format
                       (StringLiteral_22458,(Il2CppObject *)pSVar16,pIVar9,(MethodInfo *)0x0);
                    /* try { // try from 0310867c to 03208687 has its CatchHandler @ 03108398 */
    }
    if (str0 == (System_String_o *)0x0) goto LAB_03108868;
                    /* try { // try from 03108688 to 0320868f has its CatchHandler @ 03108690 */
                    /* catch() { ... } // from try @ 0310860c with catch @ 03108690
                       catch() { ... } // from try @ 03108658 with catch @ 03108690
                       catch() { ... } // from try @ 03108688 with catch @ 03108690 */
    pMVar11 = (MethodInfo *)0x0;
    bVar1 = System_String__StartsWith(str0,StringLiteral_17691,(MethodInfo *)0x0);
    if (bVar1) {
      __this_01 = (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)
                  Nekki_SF2_GUI_Shop_InfoPanelContent__KGEIJMKKPNG
                            ((Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x1,str0,pMVar11);
      str0 = Nekki_SF2_GUI_Shop_InfoPanelContent__GHEBFAHKFBG
                       (__this_01,(System_String_o *)__this_01,pMVar11);
    }
    pNVar3 = (__this->fields)._description;
joined_r0x031086b8:
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,str0,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03108868:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

