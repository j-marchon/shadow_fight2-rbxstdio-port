// Nekki.SF2.GUI.Shop.ShopTableViewCell$$SetItemInfo @ RVA 0x3190630

void Nekki_SF2_GUI_Shop_ShopTableViewCell__SetItemInfo
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  int32_t iVar5;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar6;
  GGHCLMEFIGO_o *__this_01;
  IGFGDDANEPE_o *__this_02;
  HOOAAGABMBL_o *pHVar7;
  HOOAAGABMBL_o *pHVar8;
  DDMHMABAHHD_o *pDVar9;
  JMDPBFOCHHP_o *pJVar10;
  JMDPBFOCHHP_EFAJBOEHPLJ_o *pJVar11;
  JMDPBFOCHHP_HJLEKMDIDPO_o *pJVar12;
  EEGDOGKBLNG_o *__this_03;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar13;
  UnityEngine_GameObject_o *pUVar14;
  Nekki_SF2_GUI_CompositeImage_o *__this_04;
  UnityEngine_RectTransform_o *__this_05;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar15;
  Nekki_SF2_GUI_Shop_PerksPanel_DCBCPMKGJEA_o *__this_06;
  UnityEngine_Events_UnityAction_bool__bool__o **ppUVar16;
  IGNEHHMICKB_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  ACHLOMELAJE_o *pAVar17;
  undefined8 *puVar18;
  Nekki_SF2_GUI_LabelAlias_o *pNVar19;
  Nekki_SF2_GUI_Shop_PerksPanel_o *pNVar20;
  UnityEngine_Events_UnityEvent_bool__bool__o *__this_07;
  UnityEngine_Events_UnityAction_bool__bool__o *call;
  int local_68;
  bool local_64 [4];
  bool local_58 [4];
  int32_t local_54;
  
  if ((DAT_04566a41 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopTableViewCell_<>c_MLHFGMCEHLM__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ShopTableViewCell_<>c_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<bool,_bool>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<bool,_bool>_AddListener__);
    FUN_01bab630(&StringLiteral_22052);
    FUN_01bab630(&StringLiteral_5562);
    FUN_01bab630(&StringLiteral_2430);
    FUN_01bab630(&StringLiteral_3535);
    FUN_01bab630(&StringLiteral_12036);
    FUN_01bab630(&StringLiteral_11073);
    FUN_01bab630(&StringLiteral_3469);
    FUN_01bab630(&StringLiteral_1223);
    FUN_01bab630(&StringLiteral_4617);
    FUN_01bab630(&StringLiteral_4921);
    FUN_01bab630(&StringLiteral_11751);
    FUN_01bab630(&StringLiteral_21001);
    FUN_01bab630(&StringLiteral_756);
    FUN_01bab630(&StringLiteral_12030);
    FUN_01bab630(&StringLiteral_10876);
    FUN_01bab630(&StringLiteral_12032);
    FUN_01bab630(&StringLiteral_20998);
    FUN_01bab630(&StringLiteral_6589);
    FUN_01bab630(&StringLiteral_12039);
    FUN_01bab630(&StringLiteral_10823);
    FUN_01bab630(&StringLiteral_14785);
    FUN_01bab630(&StringLiteral_12050);
    FUN_01bab630(&StringLiteral_9206);
    FUN_01bab630(&StringLiteral_10075);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_12033);
    FUN_01bab630(&StringLiteral_12049);
    FUN_01bab630(&StringLiteral_12051);
    DAT_04566a41 = 1;
  }
  local_54 = 0;
  local_58[0] = false;
  local_64[0] = false;
  local_68 = 0;
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar18 = &StringLiteral_12051;
LAB_03290af0:
    UnityEngine_Debug__LogError((Il2CppObject *)*puVar18,(MethodInfo *)0x0);
    return;
  }
  __this_00 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pSVar6 = System_String__Format
                     (StringLiteral_12049,
                      (Il2CppObject *)(IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,
                      (MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Object_o *)0x0) goto LAB_03291810;
  UnityEngine_Object__set_name(__this_00,pSVar6,(MethodInfo *)0x0);
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
  pAVar17 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar17 == (ACHLOMELAJE_o *)0x0) ||
     (__this_01 = (pAVar17->fields).OIDPLCLELEN, __this_01 == (GGHCLMEFIGO_o *)0x0))
  goto LAB_03291810;
  __this_02 = GGHCLMEFIGO__JNFIBDBHNOA(__this_01,IKKAMAMLIKA,(MethodInfo *)0x0);
  pHVar8 = IKKAMAMLIKA;
  if ((__this_02 != (IGFGDDANEPE_o *)0x0) &&
     ((pHVar7 = IGFGDDANEPE__JGBDIHJDIHD(__this_02,(MethodInfo *)0x0),
      pHVar7 != (HOOAAGABMBL_o *)0x0 &&
      (bVar2 = System_String__op_Inequality
                         ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876,
                          (MethodInfo *)0x0), bVar2)))) {
    pHVar8 = IGFGDDANEPE__JGBDIHJDIHD(__this_02,(MethodInfo *)0x0);
  }
  if (__this == (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0) goto LAB_03291810;
  (__this->fields).IHKJJFAEEHM = pHVar8;
  thunk_FUN_01c20e04(&(__this->fields).IHKJJFAEEHM);
  if ((__this->fields).IHKJJFAEEHM == (HOOAAGABMBL_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar18 = &StringLiteral_12050;
    goto LAB_03290af0;
  }
  iVar4 = -1;
  local_54 = -1;
  bVar2 = System_String__op_Equality
                    ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876,
                     (MethodInfo *)0x0);
  if (bVar2) {
    pDVar9 = HCAICJLDDJO__PEENAMDLAKO(IKKAMAMLIKA,(MethodInfo *)0x0);
    if (pDVar9 == (DDMHMABAHHD_o *)0x0) {
      pJVar12 = (JMDPBFOCHHP_HJLEKMDIDPO_o *)0x0;
    }
    else {
      pSVar6 = (pDVar9->fields)._COIPKAKHDFP_k__BackingField;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
      }
      pJVar10 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (pJVar10 == (JMDPBFOCHHP_o *)0x0) goto LAB_03291810;
      pJVar11 = JMDPBFOCHHP__BHJOLIJDBLO(pJVar10,pSVar6,(MethodInfo *)0x0);
      pJVar10 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (pJVar10 == (JMDPBFOCHHP_o *)0x0) goto LAB_03291810;
      pJVar12 = JMDPBFOCHHP__FPPDGOEOJCH(pJVar10,pSVar6,(MethodInfo *)0x0);
      if ((pJVar11 != (JMDPBFOCHHP_EFAJBOEHPLJ_o *)0x0) ||
         ((pJVar12 != (JMDPBFOCHHP_HJLEKMDIDPO_o *)0x0 &&
          (bVar2 = System_String__op_Inequality
                             ((pJVar12->fields).BGHFADDGPAD,StringLiteral_5562,(MethodInfo *)0x0),
          bVar2)))) {
        bVar2 = System_String__op_Equality
                          ((IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,StringLiteral_10075,
                           (MethodInfo *)0x0);
        if (bVar2) {
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
          pAVar17 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar17 == (ACHLOMELAJE_o *)0x0) goto LAB_03291810;
          iVar4 = ACHLOMELAJE__FCPIAEEKGEL(pAVar17,pSVar6,(MethodInfo *)0x0);
          local_54 = iVar4;
        }
        else {
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_03 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          if (__this_03 == (EEGDOGKBLNG_o *)0x0) goto LAB_03291810;
          iVar4 = EEGDOGKBLNG__OHDDLJKGLGA(__this_03,pSVar6,(MethodInfo *)0x0);
          local_54 = iVar4;
        }
        goto LAB_03290b68;
      }
    }
    iVar4 = -1;
  }
  else {
    pJVar12 = (JMDPBFOCHHP_HJLEKMDIDPO_o *)0x0;
  }
LAB_03290b68:
  pNVar13 = (__this->fields)._lockIcon;
  if (pNVar13 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    pUVar14 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)pNVar13,(MethodInfo *)0x0);
    iVar1 = (IKKAMAMLIKA->fields)._JDEHPJEIOCI_k__BackingField;
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
    pAVar17 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar17 != (ACHLOMELAJE_o *)0x0) {
      iVar5 = ACHLOMELAJE__EOEAKGGDBFH(pAVar17,(MethodInfo *)0x0);
      if (iVar5 < iVar1) {
        bVar2 = HCAICJLDDJO__MINAKLNNDBL(IKKAMAMLIKA,false,(MethodInfo *)0x0);
        bVar2 = (bool)(~bVar2 & 1);
      }
      else {
        bVar2 = false;
      }
      if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar14,bVar2,(MethodInfo *)0x0);
        bVar2 = false;
        if (__this_02 != (IGFGDDANEPE_o *)0x0) {
          bVar2 = System_String__op_Inequality
                            ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_6589,
                             (MethodInfo *)0x0);
          if ((((bVar2) &&
               (bVar2 = System_String__op_Inequality
                                  ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,
                                   StringLiteral_11751,(MethodInfo *)0x0), bVar2)) &&
              (bVar2 = System_String__op_Inequality
                                 ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,
                                  StringLiteral_4617,(MethodInfo *)0x0), bVar2)) &&
             (bVar2 = System_String__op_Inequality
                                ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,
                                 StringLiteral_10823,(MethodInfo *)0x0), bVar2)) {
            bVar2 = (IKKAMAMLIKA->fields)._NPMFPMGCNEC_k__BackingField == false;
          }
          else {
            bVar2 = false;
          }
        }
        bVar3 = System_String__op_Equality
                          ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876,
                           (MethodInfo *)0x0);
        pNVar13 = (__this->fields)._jackdawIcon;
        if (0 < iVar4 && ((bVar3 ^ 0xffU) & 1) == 0) {
          bVar2 = pJVar12 != (JMDPBFOCHHP_HJLEKMDIDPO_o *)0x0;
        }
        if ((pNVar13 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (pUVar14 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar13,(MethodInfo *)0x0),
           pUVar14 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar14,bVar2,(MethodInfo *)0x0);
          local_58[0] = false;
          local_64[0] = false;
          HCAICJLDDJO__IOJJNFJDFEJ(local_58,local_64,IKKAMAMLIKA,(MethodInfo *)0x0);
          pNVar13 = (__this->fields)._equppiedIcon;
          if ((pNVar13 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
             (pUVar14 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pNVar13,(MethodInfo *)0x0),
             pUVar14 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar14,local_64[0],(MethodInfo *)0x0);
            pHVar8 = (__this->fields).IHKJJFAEEHM;
            if (pHVar8 != (HOOAAGABMBL_o *)0x0) {
              iVar1 = (pHVar8->fields)._JDEHPJEIOCI_k__BackingField;
              if (0 < iVar1) {
                pNVar19 = (__this->fields)._levelLabel;
                local_68 = iVar1;
                pSVar6 = System_Int32__ToString((int32_t)&local_68,(MethodInfo *)0x0);
                pSVar6 = System_String__Concat(StringLiteral_2430,pSVar6,(MethodInfo *)0x0);
                if (pNVar19 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03291810;
                (*(pNVar19->klass->vtable)._75_set_text.methodPtr)
                          (pNVar19,pSVar6,(pNVar19->klass->vtable)._75_set_text.method);
              }
              pNVar19 = (__this->fields)._levelLabel;
              if ((pNVar19 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                 (pUVar14 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pNVar19,(MethodInfo *)0x0),
                 pUVar14 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar14,0 < iVar1,(MethodInfo *)0x0);
                CJNHFNHJHPE = (IKKAMAMLIKA->fields)._NMBNLNIMMPI_k__BackingField;
                if (CJNHFNHJHPE == (IGNEHHMICKB_o *)0x0) {
                  pNVar13 = (__this->fields)._image;
                  bVar2 = System_String__op_Equality
                                    ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,
                                     StringLiteral_11751,(MethodInfo *)0x0);
                  if (bVar2) {
                    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    pSVar6 = MGENAMAJALB__OPLAHNAJGAJ((MethodInfo *)0x0);
                  }
                  else {
                    pSVar6 = (__this->fields).CNMMJHJNNAJ;
                  }
                  if (pNVar13 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03291810;
                  *(System_String_o **)&(pNVar13->fields).super.m_PixelsPerUnitMultiplier = pSVar6;
                  thunk_FUN_01c20e04(&(pNVar13->fields).super.m_PixelsPerUnitMultiplier);
                  pNVar13 = (__this->fields)._image;
                  pSVar6 = OFFIONDOEPM__CNLBHLNMCCI
                                     ((IKKAMAMLIKA->fields)._GPEFIOMJHNN_k__BackingField,
                                      (MethodInfo *)0x0);
                  if (pNVar13 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03291810;
                  Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar13,pSVar6,(MethodInfo *)0x0);
                  bVar2 = System_String__op_Equality
                                    ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,
                                     StringLiteral_11751,(MethodInfo *)0x0);
                  pNVar13 = (__this->fields)._image;
                  if (pNVar13 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03291810;
                  if (bVar2) {
                    __this_05 = UnityEngine_UI_Graphic__get_rectTransform
                                          ((UnityEngine_UI_Graphic_o *)pNVar13,(MethodInfo *)0x0);
                    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564(BHEDGAKGKPO_TypeInfo);
                    }
                    if (__this_05 == (UnityEngine_RectTransform_o *)0x0) goto LAB_03291810;
                    UnityEngine_RectTransform__set_sizeDelta
                              (__this_05,
                               (UnityEngine_Vector2_o)
                               (BHEDGAKGKPO_TypeInfo->static_fields->PHOPCECNCND).fields,
                               (MethodInfo *)0x0);
                    method_00 = extraout_x1_00;
                  }
                  else {
                    (*(pNVar13->klass->vtable)._45_SetNativeSize.methodPtr)
                              (pNVar13,(pNVar13->klass->vtable)._45_SetNativeSize.method);
                    method_00 = extraout_x1_01;
                  }
                }
                else {
                  __this_04 = (__this->fields)._compositeImage;
                  if (__this_04 == (Nekki_SF2_GUI_CompositeImage_o *)0x0) goto LAB_03291810;
                  Nekki_SF2_GUI_CompositeImage__set_Data(__this_04,CJNHFNHJHPE,(MethodInfo *)0x0);
                  pNVar13 = (__this->fields)._image;
                  if ((pNVar13 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
                     (pUVar14 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pNVar13,(MethodInfo *)0x0),
                     pUVar14 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03291810;
                  UnityEngine_GameObject__SetActive(pUVar14,false,(MethodInfo *)0x0);
                  method_00 = extraout_x1;
                }
                pHVar8 = (__this->fields).IHKJJFAEEHM;
                if (pHVar8 == (HOOAAGABMBL_o *)0x0) {
LAB_03290fec:
                  Nekki_SF2_GUI_Shop_ShopTableViewCell__CDEPJFBHKID(__this,method_00);
                  Nekki_SF2_GUI_Shop_ShopTableViewCell__PKENFJMKHKF(__this,method_01);
                  FUN_03f939e8(&PTR_System_Collections_Generic_List<FBBNEILNOKK>_TypeInfo_0422f000,
                               (IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField);
                  return;
                }
                pNVar20 = (__this->fields)._perksPanel;
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pSVar15 = NLPJLHOEAOE__GMJMEKENPAP(pHVar8,true,(MethodInfo *)0x0);
                if (pNVar20 != (Nekki_SF2_GUI_Shop_PerksPanel_o *)0x0) {
                  (*(pNVar20->klass->vtable)._4_SetPerks.methodPtr)
                            (pNVar20,pSVar15,(__this->fields).IHKJJFAEEHM,
                             (pNVar20->klass->vtable)._4_SetPerks.method);
                  pNVar20 = (__this->fields)._perksPanel;
                  if ((pNVar20 != (Nekki_SF2_GUI_Shop_PerksPanel_o *)0x0) &&
                     (__this_06 = (pNVar20->fields)._OnPerkHintShowed,
                     __this_06 != (Nekki_SF2_GUI_Shop_PerksPanel_DCBCPMKGJEA_o *)0x0)) {
                    UnityEngine_Events_UnityEventBase__RemoveAllListeners
                              ((UnityEngine_Events_UnityEventBase_o *)__this_06,(MethodInfo *)0x0);
                    pNVar20 = (__this->fields)._perksPanel;
                    if (pNVar20 != (Nekki_SF2_GUI_Shop_PerksPanel_o *)0x0) {
                      __this_07 = (UnityEngine_Events_UnityEvent_bool__bool__o *)
                                  (pNVar20->fields)._OnPerkHintShowed;
                      if ((Nekki_SF2_GUI_Shop_ShopTableViewCell_<>c_TypeInfo->_2).cctor_finished ==
                          0) {
                        thunk_FUN_01ba7564();
                      }
                      call = Nekki_SF2_GUI_Shop_ShopTableViewCell_<>c_TypeInfo->static_fields->
                             __9__51_0;
                      if (call == (UnityEngine_Events_UnityAction_bool__bool__o *)0x0) {
                        if ((Nekki_SF2_GUI_Shop_ShopTableViewCell_<>c_TypeInfo->_2).cctor_finished
                            == 0) {
                          thunk_FUN_01ba7564();
                        }
                        call = (UnityEngine_Events_UnityAction_bool__bool__o *)
                               thunk_FUN_01bda818(
                                                 UnityEngine_Events_UnityAction<bool,_bool>_TypeInfo
                                                 );
                        UnityEngine_Events_UnityAction<bool,_bool>___ctor();
                        ppUVar16 = &Nekki_SF2_GUI_Shop_ShopTableViewCell_<>c_TypeInfo->static_fields
                                    ->__9__51_0;
                        *ppUVar16 = call;
                        thunk_FUN_01c20e04(ppUVar16,call);
                      }
                      if (__this_07 != (UnityEngine_Events_UnityEvent_bool__bool__o *)0x0) {
                        UnityEngine_Events_UnityEvent<bool,_bool>__AddListener
                                  (__this_07,(UnityEngine_Events_UnityAction_T0__T1__o *)call,
                                   Method_UnityEngine_Events_UnityEvent<bool,_bool>_AddListener__);
                        method_00 = extraout_x1_02;
                        goto LAB_03290fec;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03291810:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

