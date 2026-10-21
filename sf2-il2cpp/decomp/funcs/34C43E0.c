// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$NeedToRefreshButtons @ RVA 0x34C43E0

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshButtons
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  long lVar3;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this_00;
  GGLKHCAIGDI_o *__this_01;
  GGHCLMEFIGO_o *__this_02;
  IGFGDDANEPE_o *__this_03;
  LabelButton_o *pLVar4;
  UnityEngine_GameObject_o *pUVar5;
  HOOAAGABMBL_o *pHVar6;
  DEKKGJNMFEB_o *__this_04;
  BFBONKPKBNL_o *pBVar7;
  System_String_o *pSVar8;
  int64_t IDPMJOKDHNP;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ACHLOMELAJE_o *pAVar9;
  IconLabelButton_o *pIVar10;
  Nekki_SF2_GUI_LabelAlias_o *pNVar11;
  Nekki_SF2_GUI_Common_Indicator_o *__this_05;
  float fVar12;
  float fVar14;
  float fVar15;
  UnityEngine_Color_o UVar16;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_80;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  float fVar13;
  
  if ((DAT_04568629 & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
                    /* try { // try from 035c441c to 036c4427 has its CatchHandler @ 035c4078 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 035c4428 to 036c442f has its CatchHandler @ 035c4430 */
                    /* catch() { ... } // from try @ 035c43b4 with catch @ 035c4430
                       catch() { ... } // from try @ 035c4428 with catch @ 035c4430 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_04568629 = 1;
    method = extraout_x1;
  }
  local_60.fields.hiddenValue = 0;
  local_60.fields.currentCryptoKey = 0;
  local_60.fields.fakeValueActive = false;
  local_60.fields.inited = false;
  local_60.fields._26_6_ = 0;
  local_60.fields.fakeValue = 0;
  if ((((__this->fields).GMDIAECHCCO == false) &&
      ((__this->fields).super._DDIEMKPIMAJ_k__BackingField == false)) &&
     ((__this->fields).super._HLLLGIDPLEN_k__BackingField == false)) {
    (__this->fields).BKLPHMPJEFA = true;
    return;
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
  pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar9 == (ACHLOMELAJE_o *)0x0) goto LAB_035c499c;
  if ((pAVar9->fields).EANIPGPKLOA == false) {
    pLVar4 = (__this->fields)._ForgeOpenButton;
    if ((pLVar4 == (LabelButton_o *)0x0) ||
       (pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c499c;
    UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
    pLVar4 = (__this->fields)._EnchantApplyButton;
    if ((pLVar4 == (LabelButton_o *)0x0) ||
       (pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c499c;
    UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
    pLVar4 = (__this->fields)._ForgeCloseButton;
    if ((pLVar4 == (LabelButton_o *)0x0) ||
       (pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c499c;
    UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
  }
  else {
    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    if ((**(long **)(lVar3 + 0xb8) == 0) ||
       (__this_00 = *(Nekki_SF2_GUI_Shop_Forge_ForgePanel_o **)(**(long **)(lVar3 + 0xb8) + 0x110),
       __this_00 == (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0)) goto LAB_035c499c;
    __this_01 = Nekki_SF2_GUI_Shop_Forge_ForgePanel__get_CurrentRecipe(__this_00,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar9 == (ACHLOMELAJE_o *)0x0) ||
       (__this_02 = (pAVar9->fields).OIDPLCLELEN, __this_02 == (GGHCLMEFIGO_o *)0x0))
    goto LAB_035c499c;
    __this_03 = GGHCLMEFIGO__JNFIBDBHNOA(__this_02,(__this->fields).PCBECBEFJOI,(MethodInfo *)0x0);
    if ((__this->fields).HLKBICFHFJM == 0) {
      if ((__this_03 == (IGFGDDANEPE_o *)0x0) ||
         (iVar2 = IGFGDDANEPE__LDJLMEFOMLG(__this_03,(MethodInfo *)0x0), iVar2 < 1)) {
        bVar1 = false;
      }
      else {
        if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_04 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
        pHVar6 = (__this->fields).PCBECBEFJOI;
        if ((pHVar6 == (HOOAAGABMBL_o *)0x0) || (__this_04 == (DEKKGJNMFEB_o *)0x0))
        goto LAB_035c499c;
        bVar1 = DEKKGJNMFEB__IPLAABHAGFM
                          (__this_04,(pHVar6->fields)._GMPAEDFIIHF_k__BackingField,(MethodInfo *)0x0
                          );
      }
      pLVar4 = (__this->fields)._ForgeOpenButton;
      if ((pLVar4 == (LabelButton_o *)0x0) ||
         (pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
         pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c499c;
      UnityEngine_GameObject__SetActive(pUVar5,bVar1,(MethodInfo *)0x0);
      pLVar4 = (__this->fields)._ForgeCloseButton;
      if ((pLVar4 == (LabelButton_o *)0x0) ||
         (pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
         pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c499c;
      UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
      pLVar4 = (__this->fields)._EnchantApplyButton;
      if ((pLVar4 == (LabelButton_o *)0x0) ||
         (pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
         pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c499c;
      UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
      __this_05 = (__this->fields)._EnchantmentsIndicator;
      iVar2 = HCAICJLDDJO__IEALNGPAPAF((__this->fields).PCBECBEFJOI,(MethodInfo *)0x0);
      if (__this_05 == (Nekki_SF2_GUI_Common_Indicator_o *)0x0) goto LAB_035c499c;
      Nekki_SF2_GUI_Common_Indicator__set_State(__this_05,iVar2,(MethodInfo *)0x0);
      if (__this_03 != (IGFGDDANEPE_o *)0x0) goto LAB_035c47b4;
    }
    else {
      pLVar4 = (__this->fields)._ForgeOpenButton;
      if ((pLVar4 == (LabelButton_o *)0x0) ||
         (pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
         pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c499c;
      UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
      pLVar4 = (__this->fields)._ForgeCloseButton;
      if ((pLVar4 == (LabelButton_o *)0x0) ||
         (pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
         pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c499c;
      UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
      pLVar4 = (__this->fields)._EnchantApplyButton;
      if ((__this_01 == (GGLKHCAIGDI_o *)0x0) || (__this_03 == (IGFGDDANEPE_o *)0x0)) {
        if ((pLVar4 == (LabelButton_o *)0x0) ||
           (pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
           pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c499c;
        UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
        if (__this_03 == (IGFGDDANEPE_o *)0x0) goto LAB_035c48cc;
      }
      else {
        bVar1 = GGLKHCAIGDI__DDAKFOBLNJL(__this_01,__this_03,(MethodInfo *)0x0);
        if (bVar1) {
          pHVar6 = IGFGDDANEPE__JPNNODJPOCL(__this_03,false,(MethodInfo *)0x0);
          if (pHVar6 == (HOOAAGABMBL_o *)0x0) goto LAB_035c499c;
          bVar1 = GGLKHCAIGDI__EJOADHBJICP
                            (__this_01,__this_03,(pHVar6->fields)._JDEHPJEIOCI_k__BackingField,
                             (MethodInfo *)0x0);
        }
        else {
          bVar1 = false;
        }
        if (pLVar4 == (LabelButton_o *)0x0) goto LAB_035c499c;
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)pLVar4,bVar1,(MethodInfo *)0x0);
        pLVar4 = (__this->fields)._EnchantApplyButton;
        if ((pLVar4 == (LabelButton_o *)0x0) ||
           (pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
           pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c499c;
        UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
      }
LAB_035c47b4:
      bVar1 = IGFGDDANEPE__ICLJJAMOFPD(__this_03,(MethodInfo *)0x0);
      if ((__this_01 != (GGLKHCAIGDI_o *)0x0) && (bVar1)) {
        pBVar7 = GGLKHCAIGDI__GPGGNMAFOJD(__this_01,__this_03,(MethodInfo *)0x0);
        if (pBVar7 == (BFBONKPKBNL_o *)0x0) {
          return;
        }
        pLVar4 = (__this->fields)._EnchantApplyButton;
        if ((pLVar4 == (LabelButton_o *)0x0) ||
           (pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
           pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c499c;
        UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
        pIVar10 = (__this->fields)._SkipDeliveryButton;
        if (pIVar10 == (IconLabelButton_o *)0x0) goto LAB_035c499c;
        local_60.fields.hiddenValue =
             (pBVar7->fields)._BGAELGPOEHE_k__BackingField.fields.hiddenValue;
        local_60.fields.currentCryptoKey =
             (pBVar7->fields)._BGAELGPOEHE_k__BackingField.fields.currentCryptoKey;
        local_60.fields.fakeValueActive =
             (pBVar7->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValueActive;
        local_60.fields.inited = (pBVar7->fields)._BGAELGPOEHE_k__BackingField.fields.inited;
        local_60.fields._26_6_ =
             *(undefined6 *)&(pBVar7->fields)._BGAELGPOEHE_k__BackingField.fields.field_0x1a;
        local_60.fields.fakeValue = (pBVar7->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValue;
        pNVar11 = (pIVar10->fields).super.Label;
        pSVar8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ToString
                           (&local_60,(MethodInfo *)0x0);
        if (pNVar11 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_035c499c;
        (*(pNVar11->klass->vtable)._75_set_text.methodPtr)
                  (pNVar11,pSVar8,(pNVar11->klass->vtable)._75_set_text.method);
        pIVar10 = (__this->fields)._SkipDeliveryButton;
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
        local_80.fields.hiddenValue =
             (pBVar7->fields)._BGAELGPOEHE_k__BackingField.fields.hiddenValue;
        local_80.fields.currentCryptoKey =
             (pBVar7->fields)._BGAELGPOEHE_k__BackingField.fields.currentCryptoKey;
        local_80.fields.fakeValueActive =
             (pBVar7->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValueActive;
        local_80.fields.inited = (pBVar7->fields)._BGAELGPOEHE_k__BackingField.fields.inited;
        local_80.fields._26_6_ =
             *(undefined6 *)&(pBVar7->fields)._BGAELGPOEHE_k__BackingField.fields.field_0x1a;
        local_80.fields.fakeValue = (pBVar7->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValue;
        pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        IDPMJOKDHNP = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                                (&local_80,(MethodInfo *)0x0);
        if (pAVar9 == (ACHLOMELAJE_o *)0x0) goto LAB_035c499c;
        bVar1 = ACHLOMELAJE__MIFEPGNGDON(pAVar9,IDPMJOKDHNP,(MethodInfo *)0x0);
        if (bVar1) {
          fVar15 = 1.0;
          fVar12 = 0.0;
          fVar13 = 0.0;
          fVar14 = 0.0;
        }
        else {
          if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UVar16 = FGKGKDEJCOG__IALPNFOEEBP((MethodInfo *)0x0);
          fVar15 = UVar16.fields.a;
          fVar14 = UVar16.fields.b;
          fVar13 = UVar16.fields.g;
          fVar12 = UVar16.fields.r;
        }
        if (pIVar10 == (IconLabelButton_o *)0x0) goto LAB_035c499c;
        UVar16.fields.g = fVar13;
        UVar16.fields.r = fVar12;
        UVar16.fields.a = fVar15;
        UVar16.fields.b = fVar14;
        LabelButton__set_Color((LabelButton_o *)pIVar10,UVar16,(MethodInfo *)0x0);
        pIVar10 = (__this->fields)._SkipDeliveryButton;
        if ((pIVar10 == (IconLabelButton_o *)0x0) ||
           (pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pIVar10,(MethodInfo *)0x0),
           pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c499c;
        UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
        pIVar10 = (__this->fields)._SkipDeliveryForADButton;
        if ((pIVar10 == (IconLabelButton_o *)0x0) ||
           (pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pIVar10,(MethodInfo *)0x0),
           pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035c499c;
        bVar1 = true;
        goto LAB_035c4904;
      }
    }
  }
LAB_035c48cc:
  pIVar10 = (__this->fields)._SkipDeliveryButton;
  if ((pIVar10 != (IconLabelButton_o *)0x0) &&
     (pUVar5 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pIVar10,(MethodInfo *)0x0),
     pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
    pIVar10 = (__this->fields)._SkipDeliveryForADButton;
    if ((pIVar10 != (IconLabelButton_o *)0x0) &&
       (pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pIVar10,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = false;
LAB_035c4904:
      UnityEngine_GameObject__SetActive(pUVar5,bVar1,(MethodInfo *)0x0);
      return;
    }
  }
LAB_035c499c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

