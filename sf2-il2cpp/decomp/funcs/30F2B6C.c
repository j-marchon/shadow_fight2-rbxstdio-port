// Nekki.SF2.GUI.Shop.ShopScrollItem$$SetItemInfo @ RVA 0x30F2B6C

void Nekki_SF2_GUI_Shop_ShopScrollItem__SetItemInfo
               (Nekki_SF2_GUI_Shop_ShopScrollItem_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  HOOAAGABMBL_o **ppHVar1;
  int iVar2;
  bool bVar3;
  int32_t iVar4;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar5;
  GGHCLMEFIGO_o *__this_01;
  IGFGDDANEPE_o *__this_02;
  HOOAAGABMBL_o *pHVar6;
  UnityEngine_GameObject_o *pUVar7;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar8;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  ACHLOMELAJE_o *pAVar9;
  Nekki_SF2_GUI_Shop_PerksPanel_o *pNVar10;
  UnityEngine_UI_Text_o *pUVar11;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar12;
  float fVar13;
  int32_t local_54;
  
  if ((DAT_04566437 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_12046);
                    /* try { // try from 031f2bdc to 032f2be3 has its CatchHandler @ 031f2d28 */
    FUN_01bab630(&StringLiteral_12048);
    FUN_01bab630(&StringLiteral_11751);
                    /* try { // try from 031f2bec to 032f2bf3 has its CatchHandler @ 031f2d1c */
    FUN_01bab630(&StringLiteral_12045);
                    /* try { // try from 031f2bfc to 032f2c07 has its CatchHandler @ 031f2d24 */
    DAT_04566437 = 1;
  }
  local_54 = 0;
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_12048,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 031f2c08 to 032f2c47 has its CatchHandler @ 031f2b40 */
  (__this->fields).super._COIPKAKHDFP_k__BackingField =
       (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
  thunk_FUN_01c20e04(&(__this->fields).super._COIPKAKHDFP_k__BackingField);
  __this_00 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pSVar5 = System_String__Format
                     (StringLiteral_12045,
                      (Il2CppObject *)(__this->fields).super._COIPKAKHDFP_k__BackingField,
                      (MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
                    /* try { // try from 031f2c48 to 032f2c4f has its CatchHandler @ 031f2cb8 */
                    /* try { // try from 031f2c58 to 032f2c5f has its CatchHandler @ 031f2cac */
    UnityEngine_Object__set_name(__this_00,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 031f2c68 to 032f2c73 has its CatchHandler @ 031f2cb0 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 031f2c74 to 032f2c9f has its CatchHandler @ 031f2b40 */
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
                    /* try { // try from 031f2ca0 to 032f2ca3 has its CatchHandler @ 031f2d20 */
    }
                    /* try { // try from 031f2ca4 to 032f2ca7 has its CatchHandler @ 031f2cb4 */
                    /* try { // try from 031f2ca8 to 032f2ccf has its CatchHandler @ 031f2b40 */
    pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* catch() { ... } // from try @ 031f2c58 with catch @ 031f2cac */
                    /* catch() { ... } // from try @ 031f2c68 with catch @ 031f2cb0 */
                    /* catch() { ... } // from try @ 031f2ca4 with catch @ 031f2cb4 */
    if ((pAVar9 != (ACHLOMELAJE_o *)0x0) &&
       (__this_01 = (pAVar9->fields).OIDPLCLELEN, __this_01 != (GGHCLMEFIGO_o *)0x0)) {
                    /* catch() { ... } // from try @ 031f2c48 with catch @ 031f2cb8 */
      __this_02 = GGHCLMEFIGO__JNFIBDBHNOA(__this_01,IKKAMAMLIKA,(MethodInfo *)0x0);
      pHVar6 = IKKAMAMLIKA;
      if (__this_02 != (IGFGDDANEPE_o *)0x0) {
                    /* try { // try from 031f2cd0 to 032f2cd3 has its CatchHandler @ 031f2cf8 */
                    /* try { // try from 031f2cd4 to 032f2d07 has its CatchHandler @ 031f2b40 */
        pHVar6 = IGFGDDANEPE__JGBDIHJDIHD(__this_02,(MethodInfo *)0x0);
      }
      ppHVar1 = &(__this->fields).IHKJJFAEEHM;
      (__this->fields).IHKJJFAEEHM = pHVar6;
      thunk_FUN_01c20e04(ppHVar1);
      iVar2 = (IKKAMAMLIKA->fields)._JDEHPJEIOCI_k__BackingField;
                    /* catch() { ... } // from try @ 031f2cd0 with catch @ 031f2cf8 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 031f2d08 to 032f2d1b has its CatchHandler @ 031f2d98 */
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 031f2bec with catch @ 031f2d1c
                       try { // try from 031f2d1c to 032f2d3f has its CatchHandler @ 031f2b40 */
        DAT_04565b7d = '\x01';
      }
                    /* catch() { ... } // from try @ 031f2ca0 with catch @ 031f2d20 */
                    /* catch() { ... } // from try @ 031f2bfc with catch @ 031f2d24 */
                    /* catch() { ... } // from try @ 031f2bdc with catch @ 031f2d28 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar9 != (ACHLOMELAJE_o *)0x0) {
                    /* try { // try from 031f2d40 to 032f2d43 has its CatchHandler @ 031f2d6c */
                    /* try { // try from 031f2d44 to 032f2d7b has its CatchHandler @ 031f2b40 */
        iVar4 = ACHLOMELAJE__EOEAKGGDBFH(pAVar9,(MethodInfo *)0x0);
        fVar13 = 0.5;
        if (iVar2 <= iVar4) {
          fVar13 = 1.0;
        }
        (__this->fields).super.PEFNNFJCCNG = fVar13;
        pNVar12 = (__this->fields)._lockIcon;
                    /* catch() { ... } // from try @ 031f2d40 with catch @ 031f2d6c */
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 031f2d7c to 032f2d83 has its CatchHandler @ 031f2d98 */
                    /* try { // try from 031f2d84 to 032f2d8f has its CatchHandler @ 031f2b40 */
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pNVar12,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar3) {
                    /* try { // try from 031f2d90 to 032f2d97 has its CatchHandler @ 031f2d98 */
          iVar2 = (IKKAMAMLIKA->fields)._JDEHPJEIOCI_k__BackingField;
                    /* catch() { ... } // from try @ 031f2d08 with catch @ 031f2d98
                       catch() { ... } // from try @ 031f2d7c with catch @ 031f2d98
                       catch() { ... } // from try @ 031f2d90 with catch @ 031f2d98 */
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
          pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar9 == (ACHLOMELAJE_o *)0x0) goto LAB_031f316c;
          iVar4 = ACHLOMELAJE__EOEAKGGDBFH(pAVar9,(MethodInfo *)0x0);
          pNVar12 = (__this->fields)._lockIcon;
          if ((pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
             (pUVar7 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar12,(MethodInfo *)0x0),
             pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031f316c;
          UnityEngine_GameObject__SetActive(pUVar7,iVar4 < iVar2,(MethodInfo *)0x0);
        }
        pNVar12 = (__this->fields)._jackdawIcon;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pNVar12,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar3) {
          pNVar12 = (__this->fields)._jackdawIcon;
          if (pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_031f316c;
          pUVar7 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar12,(MethodInfo *)0x0);
          if (__this_02 == (IGFGDDANEPE_o *)0x0) {
            bVar3 = false;
          }
          else {
            bVar3 = System_String__op_Inequality
                              ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,
                               StringLiteral_11751,(MethodInfo *)0x0);
          }
          if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto LAB_031f316c;
          UnityEngine_GameObject__SetActive(pUVar7,bVar3,(MethodInfo *)0x0);
        }
        pNVar12 = (__this->fields)._equppiedIcon;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pNVar12,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar3) {
          bVar3 = false;
          if (__this_02 != (IGFGDDANEPE_o *)0x0) {
            bVar3 = (__this_02->fields).OFIKEBGDMBE != false;
          }
          pNVar12 = (__this->fields)._equppiedIcon;
          if ((pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
             (pUVar7 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar12,(MethodInfo *)0x0),
             pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031f316c;
          UnityEngine_GameObject__SetActive(pUVar7,bVar3,(MethodInfo *)0x0);
        }
        if (*ppHVar1 != (HOOAAGABMBL_o *)0x0) {
          iVar2 = ((*ppHVar1)->fields)._JDEHPJEIOCI_k__BackingField;
          pUVar11 = (__this->fields)._levelLabel;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (bVar3) {
            pHVar6 = (__this->fields).IHKJJFAEEHM;
            if (pHVar6 == (HOOAAGABMBL_o *)0x0) goto LAB_031f316c;
            local_54 = (pHVar6->fields)._JDEHPJEIOCI_k__BackingField;
            pUVar11 = (__this->fields)._levelLabel;
                    /* try { // try from 031f2f54 to 032f3193 has its CatchHandler @ 031f2f54
                       catch() { ... } // from try @ 031f2f54 with catch @ 031f2f54
                       catch() { ... } // from try @ 031f334c with catch @ 031f2f54
                       catch() { ... } // from try @ 031f3408 with catch @ 031f2f54
                       catch() { ... } // from try @ 031f3410 with catch @ 031f2f54
                       catch() { ... } // from try @ 031f3504 with catch @ 031f2f54 */
            pSVar5 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
            if (pUVar11 == (UnityEngine_UI_Text_o *)0x0) goto LAB_031f316c;
            (*(pUVar11->klass->vtable)._75_set_text.methodPtr)
                      (pUVar11,pSVar5,(pUVar11->klass->vtable)._75_set_text.method);
            pUVar11 = (__this->fields)._levelLabel;
            if ((pUVar11 == (UnityEngine_UI_Text_o *)0x0) ||
               (pUVar7 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0),
               pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031f316c;
            UnityEngine_GameObject__SetActive(pUVar7,0 < iVar2,(MethodInfo *)0x0);
          }
          pNVar12 = (__this->fields)._levelIcon;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pNVar12,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (bVar3) {
            pNVar12 = (__this->fields)._levelIcon;
            if ((pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
               (pUVar7 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar12,(MethodInfo *)0x0),
               pUVar7 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031f316c;
            UnityEngine_GameObject__SetActive(pUVar7,0 < iVar2,(MethodInfo *)0x0);
          }
          pNVar12 = (__this->fields)._image;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pNVar12,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (bVar3) {
            bVar3 = System_String__op_Equality
                              ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,
                               StringLiteral_11751,(MethodInfo *)0x0);
            pNVar12 = (__this->fields)._image;
            if (bVar3) {
              if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pSVar5 = MGENAMAJALB__OPLAHNAJGAJ((MethodInfo *)0x0);
              if (pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_031f316c;
            }
            else {
              if (pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_031f316c;
              pSVar5 = (__this->fields).CNMMJHJNNAJ;
            }
            *(System_String_o **)&(pNVar12->fields).super.m_PixelsPerUnitMultiplier = pSVar5;
            thunk_FUN_01c20e04(&(pNVar12->fields).super.m_PixelsPerUnitMultiplier);
            pNVar12 = (__this->fields)._image;
            if (pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_031f316c;
            Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                      (pNVar12,(IKKAMAMLIKA->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0)
            ;
            pNVar12 = (__this->fields)._image;
            if (pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_031f316c;
            (*(pNVar12->klass->vtable)._45_SetNativeSize.methodPtr)
                      (pNVar12,(pNVar12->klass->vtable)._45_SetNativeSize.method);
          }
          else {
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogError(StringLiteral_12046,(MethodInfo *)0x0);
          }
          pNVar10 = (__this->fields)._perksPanel;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pNVar10,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          method_00 = extraout_x1;
          if (bVar3) {
            pNVar10 = (__this->fields)._perksPanel;
            pHVar6 = (__this->fields).IHKJJFAEEHM;
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar8 = NLPJLHOEAOE__GMJMEKENPAP(pHVar6,true,(MethodInfo *)0x0);
            if (pNVar10 == (Nekki_SF2_GUI_Shop_PerksPanel_o *)0x0) goto LAB_031f316c;
            (*(pNVar10->klass->vtable)._4_SetPerks.methodPtr)
                      (pNVar10,pSVar8,*ppHVar1,(pNVar10->klass->vtable)._4_SetPerks.method);
            method_00 = extraout_x1_00;
          }
          Nekki_SF2_GUI_Shop_ShopScrollItem__CDEPJFBHKID(__this,method_00);
          Nekki_SF2_GUI_Shop_ShopScrollItem__PKENFJMKHKF(__this,method_01);
          return;
        }
      }
    }
  }
LAB_031f316c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

