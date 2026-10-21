// TypeDefIndex 104
// Namespace: Nekki.SF2.GUI.Shop
// public class InfoPanelContent : SidePanelContent
// Fields:
//   private const string CAHIPBNKJBB = "#646464FF";
//   private const float CPLEPHHFGFA = 0.24;
//   private const float PBDMOFDCFGH = 180;
//   public InfoPanelContent.MPOFOFAICOB updateEvent; // 0x28
//   private LabelAlias _header; // 0x30
//   private LayoutElement _headerLayout; // 0x38
//   private ResolutionImage _image; // 0x40
//   private LabelAlias _description; // 0x48
//   private LabelAlias _descriptionDonate; // 0x50
//   private ParametersPanel _parametersPanel; // 0x58
//   private GameObject _buttonPanel; // 0x60
//   private GameObject _buttonPrefab; // 0x68
//   private LabelAlias _timerAlias; // 0x70
//   private IconLabelButton BMHDNILOKHO; // 0x78
//   private IconLabelButton KCFECNOELAA; // 0x80
//   private IconLabelButton CAMONFIFEEA; // 0x88
//   private IconLabelButton HACELDGGHLJ; // 0x90
//   private IconLabelButton FELGNBGPJFO; // 0x98
//   private IconLabelButton PPBLJHFNPKG; // 0xA0
//   private IconLabelButton HMANCFHBJIN; // 0xA8
//   private IconLabelButton MDKMGENBAOJ; // 0xB0
//   private IconLabelButton CJMBPDHIHLO; // 0xB8
//   private IconLabelButton BDGGFDABEAO; // 0xC0
//   private IconLabelButton HNNIFDIPKBJ; // 0xC8
//   private List<IconLabelButton> PGCBEJGMIMA; // 0xD0
//   private HOOAAGABMBL BBODGCMLKFP; // 0xD8
//   private List<HOOAAGABMBL> MCDJCCBKFGP; // 0xE0
//   private HOOAAGABMBL KJBDDCNKNNE; // 0xE8
//   private IGFGDDANEPE AAIHPGBKKNM; // 0xF0
//   private bool LLJHPAIHMEO; // 0xF8
//   private bool BFBFNFNPJKB; // 0xF9
//   private bool AMLKHDGJPGJ; // 0xFA
//   private bool GBHMJHPFMAM; // 0xFB
//   private ObscuredLong IKDBOANBHLG; // 0x100
//   private bool BGODGJNKGOE; // 0x120
//   private LabelAlias FLLKPPCFJAG; // 0x128
//   private string OLHENOKIMKB; // 0x130

// ===== private void PBPPPILDIBH(BKKPAKHJDKB MEJOGHDACNG)  [RVA 0x3005440]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$PBPPPILDIBH @ RVA 0x3005440

void Nekki_SF2_GUI_Shop_InfoPanelContent__PBPPPILDIBH
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,BKKPAKHJDKB_o *MEJOGHDACNG,
               MethodInfo *method)

{
  FAIJGJCCKJC_o *pFVar1;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar2;
  
  if (MEJOGHDACNG == (BKKPAKHJDKB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pFVar1 = (MEJOGHDACNG->fields).IJDPHADMDKN;
  if (((pFVar1 != (FAIJGJCCKJC_o *)0x0) &&
      (pJVar2 = (pFVar1->fields).FBBBEHLGDJK, pJVar2 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0)) &&
     ((pJVar2->fields).CBKACDJHFNE != false)) {
    Nekki_SF2_GUI_Shop_InfoPanelContent__UpdateContent(__this,(MethodInfo *)MEJOGHDACNG);
    return;
  }
  return;
}


// ===== private void CIGHKOCIDBN()  [RVA 0x30055FC]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$CIGHKOCIDBN @ RVA 0x30055FC

void Nekki_SF2_GUI_Shop_InfoPanelContent__CIGHKOCIDBN
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_HOOAAGABMBL__o *FHJLFJLEBKA;
  uint HEBCBHHLHHH;
  int iVar1;
  int32_t iVar2;
  bool bVar3;
  HOOAAGABMBL_o *pHVar4;
  int64_t iVar5;
  int64_t iVar6;
  int64_t NBHHBBOJJME;
  int64_t OIHNACKJOJG;
  System_String_array *values;
  System_String_o *str3;
  Nekki_SF2_GUI_Shop_InfoPanelContent_o *pNVar7;
  Nekki_SF2_GUI_LabelAlias_o *pNVar8;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *in_x3;
  MethodInfo *in_x4;
  ACHLOMELAJE_o *pAVar9;
  System_String_o *pSVar10;
  float fVar11;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_1d0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_1b0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_190;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_170;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_150;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_130;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_110;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_f0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_d0;
  int64_t local_b0;
  int64_t iStack_a8;
  int64_t iStack_a0;
  bool_conflict bStack_98;
  bool_conflict bStack_97;
  undefined6 uStack_96;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_90;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_70;
  
  if ((DAT_04565b4a & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_6546/*"ForgeMaterial1"*/);
    FUN_01bab630(&StringLiteral_2444/*"<quad name=TopPanel.ruby usedsize=100 > "*/);
    FUN_01bab630(&StringLiteral_2476/*"> "*/);
    FUN_01bab630(&StringLiteral_2422/*"<quad name="*/);
    FUN_01bab630(&StringLiteral_6548/*"ForgeMaterial3"*/);
    FUN_01bab630(&StringLiteral_548/*" usedsize=100 > "*/);
    FUN_01bab630(&StringLiteral_9095/*"MiscSprites.ruby"*/);
    FUN_01bab630(&StringLiteral_68/*"\n<quad name="*/);
    FUN_01bab630(&StringLiteral_6547/*"ForgeMaterial2"*/);
    DAT_04565b4a = 1;
  }
  pHVar4 = (__this->fields).BBODGCMLKFP;
  if (pHVar4 != (HOOAAGABMBL_o *)0x0) {
    pSVar10 = string_TypeInfo->static_fields->Empty;
    iVar5 = HOOAAGABMBL__FKKAEBAKBOO(pHVar4,(MethodInfo *)0x0);
    pHVar4 = (__this->fields).BBODGCMLKFP;
    if (pHVar4 != (HOOAAGABMBL_o *)0x0) {
      local_70.fields.hiddenValue = (pHVar4->fields)._OFDIEEPACGC_k__BackingField.fields.hiddenValue
      ;
      local_70.fields.currentCryptoKey =
           (pHVar4->fields)._OFDIEEPACGC_k__BackingField.fields.currentCryptoKey;
      local_70.fields.fakeValueActive =
           (pHVar4->fields)._OFDIEEPACGC_k__BackingField.fields.fakeValueActive;
      local_70.fields.inited = (pHVar4->fields)._OFDIEEPACGC_k__BackingField.fields.inited;
      local_70.fields._26_6_ =
           *(undefined6 *)&(pHVar4->fields)._OFDIEEPACGC_k__BackingField.fields.field_0x1a;
      local_70.fields.fakeValue = (pHVar4->fields)._OFDIEEPACGC_k__BackingField.fields.fakeValue;
      iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                        (&local_70,(MethodInfo *)0x0);
      pHVar4 = (__this->fields).BBODGCMLKFP;
      if (pHVar4 != (HOOAAGABMBL_o *)0x0) {
        NBHHBBOJJME = HOOAAGABMBL__GPCDIEIDNHH(pHVar4,(MethodInfo *)0x0);
        pHVar4 = (__this->fields).BBODGCMLKFP;
        if (pHVar4 != (HOOAAGABMBL_o *)0x0) {
          local_90.fields.hiddenValue =
               (pHVar4->fields)._DILLJMLCPON_k__BackingField.fields.hiddenValue;
          local_90.fields.currentCryptoKey =
               (pHVar4->fields)._DILLJMLCPON_k__BackingField.fields.currentCryptoKey;
          local_90.fields.fakeValueActive =
               (pHVar4->fields)._DILLJMLCPON_k__BackingField.fields.fakeValueActive;
          local_90.fields.inited = (pHVar4->fields)._DILLJMLCPON_k__BackingField.fields.inited;
          local_90.fields._26_6_ =
               *(undefined6 *)&(pHVar4->fields)._DILLJMLCPON_k__BackingField.fields.field_0x1a;
          local_90.fields.fakeValue = (pHVar4->fields)._DILLJMLCPON_k__BackingField.fields.fakeValue
          ;
          OIHNACKJOJG = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                                  (&local_90,(MethodInfo *)0x0);
          if (0 < iVar5) {
            if (iVar5 == iVar6) {
              pHVar4 = (__this->fields).BBODGCMLKFP;
              if (pHVar4 == (HOOAAGABMBL_o *)0x0) goto LAB_03105d78;
              HEBCBHHLHHH = (pHVar4->fields)._IAEGOLJCOIB_k__BackingField;
              in_x3 = (MethodInfo *)(ulong)HEBCBHHLHHH;
              if ((int)HEBCBHHLHHH < 1) {
                if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pSVar10 = BJFCCEEPHOF__POMAAOILGAL(iVar5,(MethodInfo *)0x0);
                pSVar10 = System_String__Concat(StringLiteral_2444/*"<quad name=TopPanel.ruby usedsize=100 > "*/,pSVar10,(MethodInfo *)0x0);
              }
              else {
                fVar11 = (float)iVar5 / ((float)(int)HEBCBHHLHHH / 100.0 + 1.0);
                iVar6 = -0x7ffffffffffffff8;
                if (fVar11 != INFINITY) {
                  iVar6 = ((long)fVar11 / 10) * 10;
                }
                pSVar10 = Nekki_SF2_GUI_Shop_InfoPanelContent__BPODLFGBCDE
                                    (StringLiteral_9095/*"MiscSprites.ruby"*/,iVar6,iVar5,HEBCBHHLHHH,in_x4);
              }
            }
            else {
              pSVar10 = Nekki_SF2_GUI_Shop_InfoPanelContent__BBOHGDDHMLH
                                  (StringLiteral_9095/*"MiscSprites.ruby"*/,iVar6,iVar5,in_x3);
            }
            pHVar4 = (__this->fields).BBODGCMLKFP;
            FHJLFJLEBKA = (__this->fields).MCDJCCBKFGP;
            if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            MGNPHCAAEIO__PAADLMOJFJC(&local_d0,pHVar4,FHJLFJLEBKA,(MethodInfo *)0x0);
            iStack_a8 = local_d0.fields.hiddenValue;
            local_b0 = local_d0.fields.currentCryptoKey;
            bStack_98 = local_d0.fields.fakeValueActive;
            bStack_97 = local_d0.fields.inited;
            uStack_96 = local_d0.fields._26_6_;
            iStack_a0 = local_d0.fields.fakeValue;
            (__this->fields).IKDBOANBHLG.fields.hiddenValue = local_d0.fields.hiddenValue;
            (__this->fields).IKDBOANBHLG.fields.currentCryptoKey = local_d0.fields.currentCryptoKey;
            (__this->fields).IKDBOANBHLG.fields.fakeValueActive = local_d0.fields.fakeValueActive;
            (__this->fields).IKDBOANBHLG.fields.inited = local_d0.fields.inited;
            *(undefined6 *)&(__this->fields).IKDBOANBHLG.fields.field_0x1a = local_d0.fields._26_6_;
            (__this->fields).IKDBOANBHLG.fields.fakeValue = local_d0.fields.fakeValue;
            local_f0.fields.hiddenValue = local_d0.fields.hiddenValue;
            local_f0.fields.currentCryptoKey = local_d0.fields.currentCryptoKey;
            local_f0.fields.fakeValueActive = local_d0.fields.fakeValueActive;
            local_f0.fields.inited = local_d0.fields.inited;
            local_f0.fields._26_6_ = local_d0.fields._26_6_;
            local_f0.fields.fakeValue = local_d0.fields.fakeValue;
            iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                              (&local_f0,(MethodInfo *)0x0);
            if (0 < iVar5) {
              values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
              if (values == (System_String_array *)0x0) goto LAB_03105d78;
              if ((int)values->max_length == 0) {
LAB_03105d7c:
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
              values->m_Items[0] = pSVar10;
              thunk_FUN_01c20e04(values->m_Items,pSVar10);
              if ((uint)values->max_length < 2) goto LAB_03105d7c;
              values->m_Items[1] = StringLiteral_68/*"\n<quad name="*/;
              thunk_FUN_01c20e04();
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
              if (pAVar9 == (ACHLOMELAJE_o *)0x0) goto LAB_03105d78;
              if ((uint)values->max_length < 3) goto LAB_03105d7c;
              values->m_Items[2] = (pAVar9->fields).FAAJGHKHEBI;
              thunk_FUN_01c20e04(values->m_Items + 2);
              if ((uint)values->max_length < 4) goto LAB_03105d7c;
              values->m_Items[3] = StringLiteral_2476/*"> "*/;
              thunk_FUN_01c20e04();
              local_110.fields.hiddenValue = (__this->fields).IKDBOANBHLG.fields.hiddenValue;
              local_110.fields.currentCryptoKey =
                   (__this->fields).IKDBOANBHLG.fields.currentCryptoKey;
              local_110.fields.fakeValueActive = (__this->fields).IKDBOANBHLG.fields.fakeValueActive
              ;
              local_110.fields.inited = (__this->fields).IKDBOANBHLG.fields.inited;
              local_110.fields._26_6_ =
                   *(undefined6 *)&(__this->fields).IKDBOANBHLG.fields.field_0x1a;
              local_110.fields.fakeValue = (__this->fields).IKDBOANBHLG.fields.fakeValue;
              iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                                (&local_110,(MethodInfo *)0x0);
              if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(BJFCCEEPHOF_TypeInfo);
              }
              pSVar10 = BJFCCEEPHOF__POMAAOILGAL(iVar5,(MethodInfo *)0x0);
              if ((uint)values->max_length < 5) goto LAB_03105d7c;
              values->m_Items[4] = pSVar10;
              thunk_FUN_01c20e04();
              pSVar10 = System_String__Concat(values,(MethodInfo *)0x0);
            }
          }
          if (0 < NBHHBBOJJME) {
            if (NBHHBBOJJME == OIHNACKJOJG) {
              pHVar4 = (__this->fields).BBODGCMLKFP;
              if (pHVar4 == (HOOAAGABMBL_o *)0x0) goto LAB_03105d78;
              iVar1 = (pHVar4->fields)._IAEGOLJCOIB_k__BackingField;
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
              if (pAVar9 == (ACHLOMELAJE_o *)0x0) goto LAB_03105d78;
              pSVar10 = (pAVar9->fields).FAAJGHKHEBI;
              if (iVar1 < 1) {
                if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                str3 = BJFCCEEPHOF__POMAAOILGAL(NBHHBBOJJME,(MethodInfo *)0x0);
                in_x4 = (MethodInfo *)0x0;
                pSVar10 = System_String__Concat
                                    (StringLiteral_2422/*"<quad name="*/,pSVar10,StringLiteral_548/*" usedsize=100 > "*/,str3,
                                     (MethodInfo *)0x0);
              }
              else {
                pHVar4 = (__this->fields).BBODGCMLKFP;
                if (pHVar4 == (HOOAAGABMBL_o *)0x0) goto LAB_03105d78;
                iVar1 = (pHVar4->fields)._IAEGOLJCOIB_k__BackingField;
                fVar11 = (float)NBHHBBOJJME / ((float)iVar1 / 100.0 + 1.0);
                iVar5 = -0x7ffffffffffffff8;
                if (fVar11 != INFINITY) {
                  iVar5 = ((long)fVar11 / 10) * 10;
                }
                pSVar10 = Nekki_SF2_GUI_Shop_InfoPanelContent__BPODLFGBCDE
                                    (pSVar10,iVar5,NBHHBBOJJME,iVar1,in_x4);
              }
            }
            else {
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
              if (pAVar9 == (ACHLOMELAJE_o *)0x0) goto LAB_03105d78;
              pSVar10 = Nekki_SF2_GUI_Shop_InfoPanelContent__BBOHGDDHMLH
                                  ((pAVar9->fields).FAAJGHKHEBI,OIHNACKJOJG,NBHHBBOJJME,in_x3);
            }
          }
          pHVar4 = (__this->fields).BBODGCMLKFP;
          if (pHVar4 != (HOOAAGABMBL_o *)0x0) {
            local_130.fields.hiddenValue =
                 (pHVar4->fields)._EAOJFBDIFLL_k__BackingField.fields.hiddenValue;
            local_130.fields.currentCryptoKey =
                 (pHVar4->fields)._EAOJFBDIFLL_k__BackingField.fields.currentCryptoKey;
            local_130.fields.fakeValueActive =
                 (pHVar4->fields)._EAOJFBDIFLL_k__BackingField.fields.fakeValueActive;
            local_130.fields.inited = (pHVar4->fields)._EAOJFBDIFLL_k__BackingField.fields.inited;
            local_130.fields._26_6_ =
                 *(undefined6 *)&(pHVar4->fields)._EAOJFBDIFLL_k__BackingField.fields.field_0x1a;
            local_130.fields.fakeValue =
                 (pHVar4->fields)._EAOJFBDIFLL_k__BackingField.fields.fakeValue;
            iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                              (&local_130,(MethodInfo *)0x0);
            if (0 < iVar5) {
              pHVar4 = (__this->fields).BBODGCMLKFP;
              if (pHVar4 == (HOOAAGABMBL_o *)0x0) goto LAB_03105d78;
              local_150.fields.hiddenValue =
                   (pHVar4->fields)._EAOJFBDIFLL_k__BackingField.fields.hiddenValue;
              local_150.fields.currentCryptoKey =
                   (pHVar4->fields)._EAOJFBDIFLL_k__BackingField.fields.currentCryptoKey;
              local_150.fields.fakeValueActive =
                   (pHVar4->fields)._EAOJFBDIFLL_k__BackingField.fields.fakeValueActive;
              local_150.fields.inited = (pHVar4->fields)._EAOJFBDIFLL_k__BackingField.fields.inited;
              local_150.fields._26_6_ =
                   *(undefined6 *)&(pHVar4->fields)._EAOJFBDIFLL_k__BackingField.fields.field_0x1a;
              local_150.fields.fakeValue =
                   (pHVar4->fields)._EAOJFBDIFLL_k__BackingField.fields.fakeValue;
              iVar2 = (pHVar4->fields)._IAEGOLJCOIB_k__BackingField;
              pNVar7 = (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)
                       CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                                 (&local_150,(MethodInfo *)0x0);
              pSVar10 = Nekki_SF2_GUI_Shop_InfoPanelContent__MABIFJPJJIE
                                  (pNVar7,iVar2,(int64_t)pNVar7,StringLiteral_6546/*"ForgeMaterial1"*/,in_x4);
            }
            pHVar4 = (__this->fields).BBODGCMLKFP;
            if (pHVar4 != (HOOAAGABMBL_o *)0x0) {
              local_170.fields.hiddenValue =
                   (pHVar4->fields)._GNFNOKJDGFH_k__BackingField.fields.hiddenValue;
              local_170.fields.currentCryptoKey =
                   (pHVar4->fields)._GNFNOKJDGFH_k__BackingField.fields.currentCryptoKey;
              local_170.fields.fakeValueActive =
                   (pHVar4->fields)._GNFNOKJDGFH_k__BackingField.fields.fakeValueActive;
              local_170.fields.inited = (pHVar4->fields)._GNFNOKJDGFH_k__BackingField.fields.inited;
              local_170.fields._26_6_ =
                   *(undefined6 *)&(pHVar4->fields)._GNFNOKJDGFH_k__BackingField.fields.field_0x1a;
              local_170.fields.fakeValue =
                   (pHVar4->fields)._GNFNOKJDGFH_k__BackingField.fields.fakeValue;
              iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                                (&local_170,(MethodInfo *)0x0);
              if (0 < iVar5) {
                pHVar4 = (__this->fields).BBODGCMLKFP;
                if (pHVar4 == (HOOAAGABMBL_o *)0x0) goto LAB_03105d78;
                local_190.fields.hiddenValue =
                     (pHVar4->fields)._GNFNOKJDGFH_k__BackingField.fields.hiddenValue;
                local_190.fields.currentCryptoKey =
                     (pHVar4->fields)._GNFNOKJDGFH_k__BackingField.fields.currentCryptoKey;
                local_190.fields.fakeValueActive =
                     (pHVar4->fields)._GNFNOKJDGFH_k__BackingField.fields.fakeValueActive;
                local_190.fields.inited =
                     (pHVar4->fields)._GNFNOKJDGFH_k__BackingField.fields.inited;
                local_190.fields._26_6_ =
                     *(undefined6 *)&(pHVar4->fields)._GNFNOKJDGFH_k__BackingField.fields.field_0x1a
                ;
                local_190.fields.fakeValue =
                     (pHVar4->fields)._GNFNOKJDGFH_k__BackingField.fields.fakeValue;
                iVar2 = (pHVar4->fields)._IAEGOLJCOIB_k__BackingField;
                pNVar7 = (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)
                         CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                                   (&local_190,(MethodInfo *)0x0);
                pSVar10 = Nekki_SF2_GUI_Shop_InfoPanelContent__MABIFJPJJIE
                                    (pNVar7,iVar2,(int64_t)pNVar7,StringLiteral_6547/*"ForgeMaterial2"*/,in_x4);
              }
              pHVar4 = (__this->fields).BBODGCMLKFP;
              if (pHVar4 != (HOOAAGABMBL_o *)0x0) {
                local_1b0.fields.hiddenValue =
                     (pHVar4->fields)._JMHDOFLEICP_k__BackingField.fields.hiddenValue;
                local_1b0.fields.currentCryptoKey =
                     (pHVar4->fields)._JMHDOFLEICP_k__BackingField.fields.currentCryptoKey;
                local_1b0.fields.fakeValueActive =
                     (pHVar4->fields)._JMHDOFLEICP_k__BackingField.fields.fakeValueActive;
                local_1b0.fields.inited =
                     (pHVar4->fields)._JMHDOFLEICP_k__BackingField.fields.inited;
                local_1b0.fields._26_6_ =
                     *(undefined6 *)&(pHVar4->fields)._JMHDOFLEICP_k__BackingField.fields.field_0x1a
                ;
                local_1b0.fields.fakeValue =
                     (pHVar4->fields)._JMHDOFLEICP_k__BackingField.fields.fakeValue;
                iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                                  (&local_1b0,(MethodInfo *)0x0);
                if (0 < iVar5) {
                  pHVar4 = (__this->fields).BBODGCMLKFP;
                  if (pHVar4 == (HOOAAGABMBL_o *)0x0) goto LAB_03105d78;
                  local_1d0.fields.hiddenValue =
                       (pHVar4->fields)._JMHDOFLEICP_k__BackingField.fields.hiddenValue;
                  local_1d0.fields.currentCryptoKey =
                       (pHVar4->fields)._JMHDOFLEICP_k__BackingField.fields.currentCryptoKey;
                  local_1d0.fields.fakeValueActive =
                       (pHVar4->fields)._JMHDOFLEICP_k__BackingField.fields.fakeValueActive;
                  local_1d0.fields.inited =
                       (pHVar4->fields)._JMHDOFLEICP_k__BackingField.fields.inited;
                  local_1d0.fields._26_6_ =
                       *(undefined6 *)
                        &(pHVar4->fields)._JMHDOFLEICP_k__BackingField.fields.field_0x1a;
                  local_1d0.fields.fakeValue =
                       (pHVar4->fields)._JMHDOFLEICP_k__BackingField.fields.fakeValue;
                  iVar2 = (pHVar4->fields)._IAEGOLJCOIB_k__BackingField;
                  pNVar7 = (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)
                           CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                                     (&local_1d0,(MethodInfo *)0x0);
                  pSVar10 = Nekki_SF2_GUI_Shop_InfoPanelContent__MABIFJPJJIE
                                      (pNVar7,iVar2,(int64_t)pNVar7,StringLiteral_6548/*"ForgeMaterial3"*/,in_x4);
                }
                pNVar8 = (__this->fields)._descriptionDonate;
                if (pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                  Nekki_SF2_GUI_LabelAlias__set_Alias
                            (pNVar8,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
                  bVar3 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
                  pNVar8 = (__this->fields)._descriptionDonate;
                  if ((pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                     (__this_00 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
                     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                    if (bVar3) {
                      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
                    }
                    else {
                      UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
                      pNVar8 = (__this->fields)._descriptionDonate;
                      if (pNVar8 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03105d78;
                      (*(pNVar8->klass->vtable)._75_set_text.methodPtr)
                                (pNVar8,pSVar10,(pNVar8->klass->vtable)._75_set_text.method);
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03105d78:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string BPODLFGBCDE(string DGGHNFBCNGI, long OIHNACKJOJG, long NBHHBBOJJME, int HEBCBHHLHHH)  [RVA 0x3005DDC]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$BPODLFGBCDE @ RVA 0x3005DDC

System_String_o *
Nekki_SF2_GUI_Shop_InfoPanelContent__BPODLFGBCDE
          (System_String_o *DGGHNFBCNGI,int64_t OIHNACKJOJG,int64_t NBHHBBOJJME,int32_t HEBCBHHLHHH,
          MethodInfo *method)

{
  ushort uVar1;
  System_Object_array *args;
  long lVar2;
  System_String_o *pSVar3;
  Il2CppObject *pIVar4;
  VirtualInvokeData *pVVar5;
  undefined8 uVar6;
  Il2CppClass *pIVar7;
  ulong uVar8;
  int32_t *piVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  int32_t local_4c;
  undefined8 local_48;
  
  local_4c = HEBCBHHLHHH;
  if ((DAT_04565b4b & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&DFLJPJMIMHI_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_2449/*"<quad name={0} usedsize=100> {1}\n<size={2}>({3} <quad name={4} offsety=1>)</size>"*/);
    FUN_01bab630(&StringLiteral_12031/*"ShopPieces.Bonus_"*/);
    DAT_04565b4b = 1;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,5);
  if (args == (System_Object_array *)0x0) {
LAB_0310618c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((DGGHNFBCNGI != (System_String_o *)0x0) &&
     (lVar2 = thunk_FUN_01bda71c(DGGHNFBCNGI,(((args->obj).klass)->_1).element_class), lVar2 == 0))
  goto LAB_03106180;
  if ((int)args->max_length == 0) goto LAB_0310617c;
  args->m_Items[0] = (Il2CppObject *)DGGHNFBCNGI;
  thunk_FUN_01c20e04(args->m_Items,DGGHNFBCNGI);
  if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = BJFCCEEPHOF__POMAAOILGAL(NBHHBBOJJME,(MethodInfo *)0x0);
  if ((pSVar3 != (System_String_o *)0x0) &&
     (lVar2 = thunk_FUN_01bda71c(pSVar3,(((args->obj).klass)->_1).element_class), lVar2 == 0))
  goto LAB_03106180;
  if ((uint)args->max_length < 2) goto LAB_0310617c;
  args->m_Items[1] = (Il2CppObject *)pSVar3;
  thunk_FUN_01c20e04(args->m_Items + 1,pSVar3);
  pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  if (pIVar4 == (Il2CppObject *)0x0) goto LAB_0310618c;
  pIVar7 = pIVar4->klass;
  uVar1._0_1_ = (pIVar7->_2).rank;
  uVar1._1_1_ = (pIVar7->_2).minimumAlignment;
  uVar8 = (ulong)uVar1;
  if (uVar8 != 0) {
    piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
          (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
        pVVar5 = pIVar7->vtable + (*piVar9 + 9);
        goto LAB_03105f80;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar4,DFLJPJMIMHI_TypeInfo,9);
LAB_03105f80:
  fVar10 = (float)(*pVVar5->methodPtr)(pIVar4,pVVar5->method);
  if (DAT_04561501 == '\0') {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04561501 = '\x01';
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  dVar12 = (double)(fVar10 * 70.0);
  dVar11 = modf(dVar12,(double *)&local_48);
  if (0.0 <= fVar10 * 70.0) {
    if (dVar11 == 0.5) {
      dVar11 = 1.0;
      goto LAB_03106020;
    }
    dVar12 = (double)(long)(dVar12 + 0.5);
  }
  else if (dVar11 == -0.5) {
    dVar11 = -1.0;
LAB_03106020:
    dVar12 = (double)CONCAT44(local_48._4_4_,(int)local_48);
    if (((long)dVar12 & 1U) != 0) {
      dVar12 = dVar12 + dVar11;
    }
  }
  else {
    dVar12 = (double)(long)(dVar12 + -0.5);
  }
  local_48._0_4_ = -0x80000000;
  if (dVar12 != INFINITY) {
    local_48._0_4_ = (int)dVar12;
  }
  pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_48);
  if ((pIVar4 != (Il2CppObject *)0x0) &&
     (lVar2 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
LAB_03106180:
    uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar6,0);
  }
  if (2 < (uint)args->max_length) {
    args->m_Items[2] = pIVar4;
    thunk_FUN_01c20e04(args->m_Items + 2,pIVar4);
    pSVar3 = BJFCCEEPHOF__POMAAOILGAL(OIHNACKJOJG,(MethodInfo *)0x0);
    if ((pSVar3 != (System_String_o *)0x0) &&
       (lVar2 = thunk_FUN_01bda71c(pSVar3,(((args->obj).klass)->_1).element_class), lVar2 == 0))
    goto LAB_03106180;
    if (3 < (uint)args->max_length) {
      args->m_Items[3] = (Il2CppObject *)pSVar3;
      thunk_FUN_01c20e04(args->m_Items + 3,pSVar3);
      pSVar3 = System_Int32__ToString((int32_t)&local_4c,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat(StringLiteral_12031/*"ShopPieces.Bonus_"*/,pSVar3,(MethodInfo *)0x0);
      if ((pSVar3 != (System_String_o *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(pSVar3,(((args->obj).klass)->_1).element_class), lVar2 == 0))
      goto LAB_03106180;
      if (4 < (uint)args->max_length) {
        args->m_Items[4] = (Il2CppObject *)pSVar3;
        thunk_FUN_01c20e04(args->m_Items + 4,pSVar3);
        pSVar3 = System_String__Format(StringLiteral_2449/*"<quad name={0} usedsize=100> {1}\n<size={2}>({3} <quad name={4} offsety=1>)</size>"*/,args,(MethodInfo *)0x0);
        return pSVar3;
      }
    }
  }
LAB_0310617c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== private void AOHAKEEHGKG(IconLabelButton BECCOGAMKJL, long PGGOPJDLPDI, Color EFJKPCADGJH)  [RVA 0x30064C0]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$AOHAKEEHGKG @ RVA 0x30064C0

void Nekki_SF2_GUI_Shop_InfoPanelContent__AOHAKEEHGKG
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,IconLabelButton_o *BECCOGAMKJL,
               int64_t PGGOPJDLPDI,UnityEngine_Color_o EFJKPCADGJH,MethodInfo *method)

{
  System_String_o *EHNFGMGKCHO;
  MethodInfo *in_x4;
  
  if ((DAT_04565b4c & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    DAT_04565b4c = 1;
  }
  if (0 < PGGOPJDLPDI) {
    if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    EHNFGMGKCHO = BJFCCEEPHOF__POMAAOILGAL(PGGOPJDLPDI,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Shop_InfoPanelContent__AOHAKEEHGKG
              (__this,BECCOGAMKJL,EHNFGMGKCHO,EFJKPCADGJH,false,in_x4);
    return;
  }
  return;
}


// ===== public void ShowDefaultButton()  [RVA 0x30066A8]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$ShowDefaultButton @ RVA 0x30066A8

void Nekki_SF2_GUI_Shop_InfoPanelContent__ShowDefaultButton
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *pCVar1;
  long lVar2;
  bool bVar3;
  IconLabelButton_o *pIVar4;
  UnityEngine_GameObject_o *__this_00;
  IGFGDDANEPE_o *pIVar5;
  int64_t iVar6;
  MethodInfo *in_x3;
  HOOAAGABMBL_o *pHVar7;
  ACHLOMELAJE_o *pAVar8;
  float fVar9;
  UnityEngine_Color_o UVar13;
  UnityEngine_Color_o EFJKPCADGJH;
  UnityEngine_Color_o EFJKPCADGJH_00;
  UnityEngine_Color_o EFJKPCADGJH_01;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_90;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_70;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((DAT_04565b4d & 1) == 0) {
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b4d = 1;
  }
  pIVar4 = (__this->fields).PPBLJHFNPKG;
  if ((pIVar4 != (IconLabelButton_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pIVar4,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,(__this->fields).AMLKHDGJPGJ,(MethodInfo *)0x0);
    if ((__this->fields).AMLKHDGJPGJ == false) {
      if ((__this->fields).LLJHPAIHMEO == false) {
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
        pHVar7 = (__this->fields).BBODGCMLKFP;
        if (pHVar7 != (HOOAAGABMBL_o *)0x0) {
          pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          iVar6 = HOOAAGABMBL__ICMFLAFFOFM(pHVar7,(MethodInfo *)0x0);
          if (pAVar8 != (ACHLOMELAJE_o *)0x0) {
            bVar3 = ACHLOMELAJE__BGAGPDBFPID(pAVar8,iVar6,(MethodInfo *)0x0);
            if (bVar3) {
              fVar12 = 1.0;
              fVar9 = 0.0;
              fVar10 = 0.0;
              fVar11 = 0.0;
            }
            else {
              if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UVar13 = FGKGKDEJCOG__IALPNFOEEBP((MethodInfo *)0x0);
              fVar12 = UVar13.fields.a;
              fVar11 = UVar13.fields.b;
              fVar10 = UVar13.fields.g;
              fVar9 = UVar13.fields.r;
            }
            pHVar7 = (__this->fields).BBODGCMLKFP;
            if (pHVar7 != (HOOAAGABMBL_o *)0x0) {
              pIVar4 = (__this->fields).BMHDNILOKHO;
              iVar6 = HOOAAGABMBL__ICMFLAFFOFM(pHVar7,(MethodInfo *)0x0);
              UVar13.fields.g = fVar10;
              UVar13.fields.r = fVar9;
              UVar13.fields.a = fVar12;
              UVar13.fields.b = fVar11;
              Nekki_SF2_GUI_Shop_InfoPanelContent__AOHAKEEHGKG(__this,pIVar4,iVar6,UVar13,in_x3);
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
              pHVar7 = (__this->fields).BBODGCMLKFP;
              if (pHVar7 != (HOOAAGABMBL_o *)0x0) {
                pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                iVar6 = HOOAAGABMBL__MNKCHHFDEGH(pHVar7,(MethodInfo *)0x0);
                if (pAVar8 != (ACHLOMELAJE_o *)0x0) {
                  bVar3 = ACHLOMELAJE__MIFEPGNGDON(pAVar8,iVar6,(MethodInfo *)0x0);
                  if (bVar3) {
                    fVar12 = 1.0;
                    fVar9 = 0.0;
                    fVar10 = 0.0;
                    fVar11 = 0.0;
                  }
                  else {
                    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    UVar13 = FGKGKDEJCOG__IALPNFOEEBP((MethodInfo *)0x0);
                    fVar12 = UVar13.fields.a;
                    fVar11 = UVar13.fields.b;
                    fVar10 = UVar13.fields.g;
                    fVar9 = UVar13.fields.r;
                  }
                  pHVar7 = (__this->fields).BBODGCMLKFP;
                  if (pHVar7 != (HOOAAGABMBL_o *)0x0) {
                    pIVar4 = (__this->fields).KCFECNOELAA;
                    iVar6 = HOOAAGABMBL__MNKCHHFDEGH(pHVar7,(MethodInfo *)0x0);
                    goto LAB_03106c64;
                  }
                }
              }
            }
          }
        }
      }
      else {
        if ((__this->fields).GBHMJHPFMAM == false) {
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
        pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar8 != (ACHLOMELAJE_o *)0x0) {
          if ((pAVar8->fields).CDAFCFNLDND == false) {
            return;
          }
          pIVar5 = (__this->fields).AAIHPGBKKNM;
          if (pIVar5 != (IGFGDDANEPE_o *)0x0) {
            pHVar7 = (pIVar5->fields).LFPOIAJDMBK;
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
            if (pHVar7 != (HOOAAGABMBL_o *)0x0) {
              pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
              iVar6 = HOOAAGABMBL__ICMFLAFFOFM(pHVar7,(MethodInfo *)0x0);
              if (pAVar8 != (ACHLOMELAJE_o *)0x0) {
                bVar3 = ACHLOMELAJE__BGAGPDBFPID(pAVar8,iVar6,(MethodInfo *)0x0);
                if (bVar3) {
                  fVar12 = 1.0;
                  fVar9 = 0.0;
                  fVar10 = 0.0;
                  fVar11 = 0.0;
                }
                else {
                  if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  UVar13 = FGKGKDEJCOG__IALPNFOEEBP((MethodInfo *)0x0);
                  fVar12 = UVar13.fields.a;
                  fVar11 = UVar13.fields.b;
                  fVar10 = UVar13.fields.g;
                  fVar9 = UVar13.fields.r;
                }
                pIVar4 = (__this->fields).CAMONFIFEEA;
                iVar6 = HOOAAGABMBL__ICMFLAFFOFM(pHVar7,(MethodInfo *)0x0);
                EFJKPCADGJH_00.fields.g = fVar10;
                EFJKPCADGJH_00.fields.r = fVar9;
                EFJKPCADGJH_00.fields.a = fVar12;
                EFJKPCADGJH_00.fields.b = fVar11;
                Nekki_SF2_GUI_Shop_InfoPanelContent__AOHAKEEHGKG
                          (__this,pIVar4,iVar6,EFJKPCADGJH_00,in_x3);
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
                pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                iVar6 = HOOAAGABMBL__MNKCHHFDEGH(pHVar7,(MethodInfo *)0x0);
                if (pAVar8 != (ACHLOMELAJE_o *)0x0) {
                  bVar3 = ACHLOMELAJE__MIFEPGNGDON(pAVar8,iVar6,(MethodInfo *)0x0);
                  if (bVar3) {
                    fVar12 = 1.0;
                    fVar9 = 0.0;
                    fVar10 = 0.0;
                    fVar11 = 0.0;
                  }
                  else {
                    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    UVar13 = FGKGKDEJCOG__IALPNFOEEBP((MethodInfo *)0x0);
                    fVar12 = UVar13.fields.a;
                    fVar11 = UVar13.fields.b;
                    fVar10 = UVar13.fields.g;
                    fVar9 = UVar13.fields.r;
                  }
                  pIVar4 = (__this->fields).HACELDGGHLJ;
                  iVar6 = HOOAAGABMBL__MNKCHHFDEGH(pHVar7,(MethodInfo *)0x0);
LAB_03106c64:
                  EFJKPCADGJH_01.fields.g = fVar10;
                  EFJKPCADGJH_01.fields.r = fVar9;
                  EFJKPCADGJH_01.fields.a = fVar12;
                  EFJKPCADGJH_01.fields.b = fVar11;
                  Nekki_SF2_GUI_Shop_InfoPanelContent__AOHAKEEHGKG
                            (__this,pIVar4,iVar6,EFJKPCADGJH_01,in_x3);
                  return;
                }
              }
            }
          }
        }
      }
    }
    else {
      pIVar5 = (__this->fields).AAIHPGBKKNM;
      if (pIVar5 != (IGFGDDANEPE_o *)0x0) {
        bVar3 = IGFGDDANEPE__DABHOGHGNBB(pIVar5,(MethodInfo *)0x0);
        pIVar5 = (__this->fields).AAIHPGBKKNM;
        if (pIVar5 != (IGFGDDANEPE_o *)0x0) {
          lVar2 = 0x98;
          if (!bVar3) {
            lVar2 = 0x18;
          }
          pHVar7 = *(HOOAAGABMBL_o **)((long)&pIVar5->klass + lVar2);
          if (pHVar7 == (HOOAAGABMBL_o *)0x0) {
            pHVar7 = IGFGDDANEPE__JGBDIHJDIHD(pIVar5,(MethodInfo *)0x0);
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
          if (pHVar7 != (HOOAAGABMBL_o *)0x0) {
            pCVar1 = &(pHVar7->fields)._BGAELGPOEHE_k__BackingField;
            local_70.fields.hiddenValue =
                 (pHVar7->fields)._BGAELGPOEHE_k__BackingField.fields.hiddenValue;
            local_70.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
            local_70.fields.fakeValueActive =
                 (pHVar7->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValueActive;
            local_70.fields.inited = (pHVar7->fields)._BGAELGPOEHE_k__BackingField.fields.inited;
            local_70.fields._26_6_ =
                 *(undefined6 *)&(pHVar7->fields)._BGAELGPOEHE_k__BackingField.fields.field_0x1a;
            local_70.fields.fakeValue =
                 (pHVar7->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValue;
            pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                              (&local_70,(MethodInfo *)0x0);
            if (pAVar8 != (ACHLOMELAJE_o *)0x0) {
              bVar3 = ACHLOMELAJE__MIFEPGNGDON(pAVar8,iVar6,(MethodInfo *)0x0);
              if (bVar3) {
                fVar12 = 1.0;
                fVar9 = 0.0;
                fVar10 = 0.0;
                fVar11 = 0.0;
              }
              else {
                if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                UVar13 = FGKGKDEJCOG__IALPNFOEEBP((MethodInfo *)0x0);
                fVar12 = UVar13.fields.a;
                fVar11 = UVar13.fields.b;
                fVar10 = UVar13.fields.g;
                fVar9 = UVar13.fields.r;
              }
              local_90.fields.hiddenValue =
                   (pHVar7->fields)._BGAELGPOEHE_k__BackingField.fields.hiddenValue;
              local_90.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
              local_90.fields.fakeValueActive =
                   (pHVar7->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValueActive;
              local_90.fields.inited = (pHVar7->fields)._BGAELGPOEHE_k__BackingField.fields.inited;
              local_90.fields._26_6_ =
                   *(undefined6 *)&(pHVar7->fields)._BGAELGPOEHE_k__BackingField.fields.field_0x1a;
              local_90.fields.fakeValue =
                   (pHVar7->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValue;
              pIVar4 = (__this->fields).FELGNBGPJFO;
              iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                                (&local_90,(MethodInfo *)0x0);
              EFJKPCADGJH.fields.g = fVar10;
              EFJKPCADGJH.fields.r = fVar9;
              EFJKPCADGJH.fields.a = fVar12;
              EFJKPCADGJH.fields.b = fVar11;
              Nekki_SF2_GUI_Shop_InfoPanelContent__AOHAKEEHGKG
                        (__this,pIVar4,iVar6,EFJKPCADGJH,in_x3);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ShowImage(bool DLOGMDGABJH)  [RVA 0x3006C94]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$ShowImage @ RVA 0x3006C94

void Nekki_SF2_GUI_Shop_InfoPanelContent__ShowImage
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,bool DLOGMDGABJH,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_GameObject_o *__this_00;
  System_String_o *pSVar2;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  HOOAAGABMBL_o *pHVar4;
  
  if ((DAT_04565b4e & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    DAT_04565b4e = 1;
  }
  pNVar1 = (__this->fields)._image;
  if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._image;
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      *(System_String_o **)&(pNVar1->fields).super.m_PixelsPerUnitMultiplier = pSVar2;
      thunk_FUN_01c20e04(&(pNVar1->fields).super.m_PixelsPerUnitMultiplier);
      pHVar4 = (__this->fields).BBODGCMLKFP;
      if (pHVar4 != (HOOAAGABMBL_o *)0x0) {
        pNVar1 = (__this->fields)._image;
        pSVar2 = OFFIONDOEPM__CNLBHLNMCCI
                           ((pHVar4->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0);
        if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar1,pSVar2,(MethodInfo *)0x0);
          pUVar3 = (__this->fields)._headerLayout;
          if (pUVar3 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            (*(pUVar3->klass->vtable)._34_set_minHeight.methodPtr)
                      (0x43340000,pUVar3,(pUVar3->klass->vtable)._34_set_minHeight.method);
            (__this->fields).BGODGJNKGOE = DLOGMDGABJH;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GGPMAGBKBFA(TradeDialog.KEHKALMFNHN CPECAEHDDDB, long PGGOPJDLPDI, Action<object> BLMFLPJJMPF, long OHLGEMOFODG = 0)  [RVA 0x3006D80]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$GGPMAGBKBFA @ RVA 0x3006D80

void Nekki_SF2_GUI_Shop_InfoPanelContent__GGPMAGBKBFA
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,int32_t CPECAEHDDDB,
               int64_t PGGOPJDLPDI,System_Action_object__o *BLMFLPJJMPF,int64_t OHLGEMOFODG,
               MethodInfo *method)

{
  ACHLOMELAJE_o *__this_00;
  int64_t MMDLBPONFAF;
  MethodInfo *in_stack_ffffffffffffffb0;
  
  if ((DAT_04565b4f & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b4f = 1;
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
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    MMDLBPONFAF = ACHLOMELAJE__HEHFNBKGJLP(__this_00,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Shop_InfoPanelContent__KGKJDFLBLNM
              (__this,CPECAEHDDDB,1,PGGOPJDLPDI,MMDLBPONFAF,BLMFLPJJMPF,3,OHLGEMOFODG,
               in_stack_ffffffffffffffb0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GKPCOMLBGCO(long CNHMFABDCHB)  [RVA 0x3007024]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$GKPCOMLBGCO @ RVA 0x3007024

void Nekki_SF2_GUI_Shop_InfoPanelContent__GKPCOMLBGCO
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,int64_t CNHMFABDCHB,MethodInfo *method
               )

{
  System_String_o **ppSVar1;
  ushort uVar2;
  undefined8 uVar3;
  bool bVar4;
  UnityEngine_RectTransform_o *pUVar5;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_Object_o *pUVar6;
  Il2CppObject *pIVar7;
  long lVar8;
  VirtualInvokeData *pVVar9;
  System_String_o *pSVar10;
  int32_t BCDLHKNFNDA;
  IconLabelButton_o *pIVar11;
  long lVar12;
  Il2CppClass *pIVar13;
  ulong uVar14;
  int32_t *piVar15;
  UnityEngine_UI_LayoutGroup_o *pUVar16;
  undefined8 uVar17;
  
  if ((DAT_04565b50 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInChildren<LabelAlias>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<LayoutElement>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_1223/*"-"*/);
    FUN_01bab630(&StringLiteral_13795/*"TimeDaysShort"*/);
    FUN_01bab630(&StringLiteral_2086/*":"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565b50 = 1;
  }
  pIVar11 = (__this->fields).PPBLJHFNPKG;
  if (pIVar11 == (IconLabelButton_o *)0x0) goto LAB_031074b8;
  pUVar16 = (pIVar11->fields).super._Layout;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pIVar11 = (__this->fields).PPBLJHFNPKG;
    if ((pIVar11 == (IconLabelButton_o *)0x0) ||
       (pUVar16 = (pIVar11->fields).super._Layout, pUVar16 == (UnityEngine_UI_LayoutGroup_o *)0x0))
    goto LAB_031074b8;
    pUVar5 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar16,
                        Method_UnityEngine_Component_GetComponent<RectTransform>__);
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
    }
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_031074b8;
    UnityEngine_RectTransform__set_offsetMin
              (pUVar5,(UnityEngine_Vector2_o)
                      (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    pIVar11 = (__this->fields).PPBLJHFNPKG;
    if ((pIVar11 == (IconLabelButton_o *)0x0) ||
       (pUVar16 = (pIVar11->fields).super._Layout, pUVar16 == (UnityEngine_UI_LayoutGroup_o *)0x0))
    goto LAB_031074b8;
    pUVar5 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar16,
                        Method_UnityEngine_Component_GetComponent<RectTransform>__);
    if (DAT_0455fa75 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
    }
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_031074b8;
    UnityEngine_RectTransform__set_offsetMax
              (pUVar5,(UnityEngine_Vector2_o)
                      (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
  }
  pIVar11 = (__this->fields).PPBLJHFNPKG;
  if ((pIVar11 != (IconLabelButton_o *)0x0) &&
     (__this_00 = (pIVar11->fields)._icon, __this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
    pUVar6 = (UnityEngine_Object_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this_00,
                        Method_UnityEngine_Component_GetComponent<LayoutElement>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar4 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      if (pUVar6 == (UnityEngine_Object_o *)0x0) goto LAB_031074b8;
      (*(code *)pUVar6->klass[2]._1.implementedInterfaces)
                (0x42c80000,pUVar6,pUVar6->klass[2]._1.interfaceOffsets);
      (*pUVar6->klass[2]._1.events)(0x42c80000,pUVar6,pUVar6->klass[2]._1.properties);
    }
    pIVar11 = (__this->fields).PPBLJHFNPKG;
    if (pIVar11 != (IconLabelButton_o *)0x0) {
      pUVar6 = (UnityEngine_Object_o *)
               UnityEngine_Component__GetComponentInChildren<object>
                         ((UnityEngine_Component_o *)pIVar11,
                          Method_UnityEngine_Component_GetComponentInChildren<LabelAlias>__);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        (pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar4) {
        return;
      }
      BCDLHKNFNDA = 3;
      if (0x1517f < CNHMFABDCHB) {
        BCDLHKNFNDA = 4;
      }
      pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar8 = Method_System_Array_Empty<string>__;
      lVar12 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar12 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar12 = *(long *)(lVar8 + 0x38);
      }
      lVar12 = *(long *)(lVar12 + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01b81620();
      }
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01b81620();
      }
      uVar3 = StringLiteral_13795/*"TimeDaysShort"*/;
      if (pIVar7 != (Il2CppObject *)0x0) {
        pIVar13 = pIVar7->klass;
        uVar17 = **(undefined8 **)(lVar8 + 0xb8);
        uVar2._0_1_ = (pIVar13->_2).rank;
        uVar2._1_1_ = (pIVar13->_2).minimumAlignment;
        uVar14 = (ulong)uVar2;
        if (uVar14 != 0) {
          piVar15 = &((pIVar13->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar9 = pIVar13->vtable + (*piVar15 + 0xc);
              goto LAB_031073b4;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031073b4:
        pSVar10 = (System_String_o *)(*pVVar9->methodPtr)(pIVar7,uVar3,uVar17,pVVar9->method);
        pSVar10 = System_String__Concat(pSVar10,StringLiteral_167/*" "*/,(MethodInfo *)0x0);
        pSVar10 = Nekki_SF2_GUI_TimerLabel__GetTimeString
                            (CNHMFABDCHB,true,true,true,0x1517f < CNHMFABDCHB,false,false,
                             StringLiteral_2086/*":"*/,pSVar10,false,true,true,true,false,StringLiteral_1/*""*/,
                             StringLiteral_1/*""*/,StringLiteral_1/*""*/,BCDLHKNFNDA,(MethodInfo *)0x0);
        pSVar10 = System_String__Concat(StringLiteral_1223/*"-"*/,pSVar10,(MethodInfo *)0x0);
        ppSVar1 = &(__this->fields).OLHENOKIMKB;
        (__this->fields).OLHENOKIMKB = pSVar10;
        thunk_FUN_01c20e04(ppSVar1,pSVar10);
        if (pUVar6 != (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031074b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pUVar6->klass[4]._1.gc_desc)(pUVar6,*ppSVar1,pUVar6->klass[4]._1.name);
          return;
        }
      }
    }
  }
LAB_031074b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FKFCOAPPDJK(object IMMNELPBGIF)  [RVA 0x30074BC]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$FKFCOAPPDJK @ RVA 0x30074BC

void Nekki_SF2_GUI_Shop_InfoPanelContent__FKFCOAPPDJK
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  int *piVar2;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  GGHCLMEFIGO_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar3;
  
  if ((DAT_04565b51 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b51 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar2 = (int *)thunk_FUN_01bda96c();
    if ((0 < *piVar2) &&
       (IKKAMAMLIKA = (__this->fields).KJBDDCNKNNE, IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0)) {
      bVar1 = AMIINPEKKFB__NLLNEAKJCLB(IKKAMAMLIKA,(MethodInfo *)0x0);
      method_00 = extraout_x1;
      if (bVar1) {
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
        pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if ((pAVar3 == (ACHLOMELAJE_o *)0x0) ||
           (__this_00 = (pAVar3->fields).OIDPLCLELEN, __this_00 == (GGHCLMEFIGO_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        GGHCLMEFIGO__BOEFGIBCIIL(__this_00,(__this->fields).KJBDDCNKNNE,true,(MethodInfo *)0x0);
        method_00 = extraout_x1_00;
      }
      Nekki_SF2_GUI_Shop_InfoPanelContent__UpdateContent(__this,method_00);
      return;
    }
  }
  return;
}


// ===== public HOOAAGABMBL get_ItemInfo()  [RVA 0x30075D8]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$get_ItemInfo @ RVA 0x30075D8

HOOAAGABMBL_o *
Nekki_SF2_GUI_Shop_InfoPanelContent__get_ItemInfo
          (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  return (__this->fields).BBODGCMLKFP;
}


// ===== private void DLDIPMHEPGG()  [RVA 0x30075E0]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$DLDIPMHEPGG @ RVA 0x30075E0

void Nekki_SF2_GUI_Shop_InfoPanelContent__DLDIPMHEPGG
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar3;
  PKHMIGFEJCL_o *pPVar4;
  LPGLKMNHELJ_o *__this_00;
  HOOAAGABMBL_o *pHVar5;
  HOOAAGABMBL_c *pHVar6;
  HOOAAGABMBL_o **ppHVar7;
  undefined1 auVar8 [16];
  
  if ((DAT_04565b52 & 1) == 0) {
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&LPGLKMNHELJ_TypeInfo);
    DAT_04565b52 = 1;
  }
  ppHVar7 = &(__this->fields).KJBDDCNKNNE;
  *ppHVar7 = (__this->fields).BBODGCMLKFP;
  thunk_FUN_01c20e04(ppHVar7);
  pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (((pNVar3 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) ||
      (*ppHVar7 == (HOOAAGABMBL_o *)0x0)) ||
     (pPVar4 = (pNVar3->fields).QuestParameters, pPVar4 == (PKHMIGFEJCL_o *)0x0)) goto LAB_03107728;
  (pPVar4->fields).MCEKGACJNMK = ((*ppHVar7)->fields)._COIPKAKHDFP_k__BackingField;
  auVar8 = thunk_FUN_01c20e04();
  if (*ppHVar7 == (HOOAAGABMBL_o *)0x0) {
LAB_03107694:
    pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar3 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_03107728;
    bVar2 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar3,0x42,(MethodInfo *)0x0)
    ;
    if (bVar2) {
      return;
    }
  }
  else {
    pHVar6 = (*ppHVar7)->klass;
    bVar1 = (FAIJGJCCKJC_TypeInfo->_2).naturalAligment;
    if ((((pHVar6->_2).naturalAligment < bVar1) ||
        ((pHVar6->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)FAIJGJCCKJC_TypeInfo)) ||
       (bVar2 = Nekki_SF2_GUI_Shop_InfoPanelContent__HDADGIDKFGF(auVar8._0_8_,auVar8._8_8_), bVar2))
    goto LAB_03107694;
  }
  pHVar5 = *ppHVar7;
  if (pHVar5 != (HOOAAGABMBL_o *)0x0) {
    bVar1 = (FAIJGJCCKJC_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (pHVar5->klass->_2).naturalAligment) &&
       ((pHVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)FAIJGJCCKJC_TypeInfo))
    {
      pHVar6 = pHVar5[1].klass;
      __this_00 = (LPGLKMNHELJ_o *)thunk_FUN_01bda818(LPGLKMNHELJ_TypeInfo);
      LPGLKMNHELJ___ctor(__this_00,(JMDPBFOCHHP_ENBCJNLAHAC_o *)pHVar6,(MethodInfo *)0x0);
      JJPNLEPEAFM__IPLAAIJEPOM(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03107728:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateContent()  [RVA 0x3005474]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$UpdateContent @ RVA 0x3005474

void Nekki_SF2_GUI_Shop_InfoPanelContent__UpdateContent
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar3;
  UnityEngine_Events_UnityEvent_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_Object_o *x;
  undefined1 auVar4 [16];
  
  if ((DAT_04565b53 & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_04565b53 = 1;
    method = extraout_x1;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  auVar4._8_8_ = method;
  auVar4._0_8_ = lVar2;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    auVar4 = FUN_01b81620(lVar2,method);
  }
  lVar2 = *(long *)(*(long *)(auVar4._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620(lVar2,auVar4._8_8_);
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  if ((**(long **)(lVar2 + 0xb8) != 0) &&
     (pNVar3 = *(Nekki_SF2_GUI_Shop_ItemsPanel_o **)(**(long **)(lVar2 + 0xb8) + 0x178),
     pNVar3 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0)) {
    Nekki_SF2_GUI_Shop_ItemsPanel__RememberSelection
              (pNVar3,(__this->fields).BBODGCMLKFP,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Shop_InfoPanelContent__Refresh(__this,method_00);
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this->fields).updateEvent;
    if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
      lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      if ((**(long **)(lVar2 + 0xb8) != 0) &&
         (pNVar3 = *(Nekki_SF2_GUI_Shop_ItemsPanel_o **)(**(long **)(lVar2 + 0xb8) + 0x178),
         pNVar3 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0)) {
        Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToLastSelection(pNVar3,(MethodInfo *)0x0);
        if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        LHKALFIIJKB__LMNENJFLCEB((MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string BBOHGDDHMLH(string DGGHNFBCNGI, long OIHNACKJOJG, long NBHHBBOJJME)  [RVA 0x3006190]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$BBOHGDDHMLH @ RVA 0x3006190

System_String_o *
Nekki_SF2_GUI_Shop_InfoPanelContent__BBOHGDDHMLH
          (System_String_o *DGGHNFBCNGI,int64_t OIHNACKJOJG,int64_t NBHHBBOJJME,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  
  if ((DAT_04565b54 & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_2422/*"<quad name="*/);
    FUN_01bab630(&StringLiteral_2182/*"</color></strike>\n"*/);
    FUN_01bab630(&StringLiteral_549/*" usedsize=100 > <strike color=#646464FF thickness=4 trail=0.25><color=#646464FF>"*/);
    DAT_04565b54 = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_2422/*"<quad name="*/;
      thunk_FUN_01c20e04(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = DGGHNFBCNGI;
        thunk_FUN_01c20e04(values->m_Items + 1,DGGHNFBCNGI);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_549/*" usedsize=100 > <strike color=#646464FF thickness=4 trail=0.25><color=#646464FF>"*/;
          thunk_FUN_01c20e04();
          if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar1 = BJFCCEEPHOF__POMAAOILGAL(OIHNACKJOJG,(MethodInfo *)0x0);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = pSVar1;
            thunk_FUN_01c20e04(values->m_Items + 3,pSVar1);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = StringLiteral_2182/*"</color></strike>\n"*/;
              thunk_FUN_01c20e04(values->m_Items + 4);
              pSVar1 = BJFCCEEPHOF__POMAAOILGAL(NBHHBBOJJME,(MethodInfo *)0x0);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = pSVar1;
                thunk_FUN_01c20e04();
                pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
                return pSVar1;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PHLHFMNMLKP(Unit HOKBHLPPCAH)  [RVA 0x3008388]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$PHLHFMNMLKP @ RVA 0x3008388

void Nekki_SF2_GUI_Shop_InfoPanelContent__PHLHFMNMLKP(Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this)

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
  System_String_o *pSVar19;
  MethodInfo *method;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_02;
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
  int32_t iStack_64;
  
  if ((DAT_04565b62 & 1) == 0) {
    FUN_01bab630(&DFLJPJMIMHI_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15964/*"_FirstGemPurchaseBonusActive"*/);
    FUN_01bab630(&StringLiteral_9307/*"NO_ITEM_NAME"*/);
    FUN_01bab630(&StringLiteral_3535/*"Bonus"*/);
    FUN_01bab630(&StringLiteral_11073/*"RealMoneyItem"*/);
    FUN_01bab630(&StringLiteral_22482/*"{{{0}}}"*/);
    FUN_01bab630(&StringLiteral_10876/*"RaidItemPack"*/);
    FUN_01bab630(&StringLiteral_8722/*"MISSILE"*/);
    FUN_01bab630(&StringLiteral_10823/*"RaidConsumable"*/);
    FUN_01bab630(&StringLiteral_7510/*"InfoPanelContent Refresh. not found TranslatableItemName "*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    DAT_04565b62 = 1;
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
  pAVar22 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar22 == (ACHLOMELAJE_o *)0x0) ||
     (__this_00 = (pAVar22->fields).OIDPLCLELEN, __this_00 == (GGHCLMEFIGO_o *)0x0))
  goto LAB_03108384;
  pIVar10 = GGHCLMEFIGO__JNFIBDBHNOA(__this_00,(__this->fields).BBODGCMLKFP,(MethodInfo *)0x0);
  ppIVar29 = &(__this->fields).AAIHPGBKKNM;
  *ppIVar29 = pIVar10;
  thunk_FUN_01c20e04(ppIVar29,pIVar10);
  bVar7 = HCAICJLDDJO__AEFGCHDNCDG(*ppIVar29,(MethodInfo *)0x0);
  pNVar1 = __this;
  if (!bVar7) {
    pNVar1 = (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0;
  }
  (__this->fields).LLJHPAIHMEO = bVar7;
  pNVar20 = __this;
  if (bVar7) {
    if (*ppIVar29 == (IGFGDDANEPE_o *)0x0) goto LAB_03108384;
    pHVar11 = IGFGDDANEPE__JGBDIHJDIHD(*ppIVar29,(MethodInfo *)0x0);
    if (pHVar11 == (HOOAAGABMBL_o *)0x0) goto LAB_03107af4;
    pHVar11 = (__this->fields).BBODGCMLKFP;
    if (pHVar11 == (HOOAAGABMBL_o *)0x0) goto LAB_03108384;
    bVar7 = System_String__op_Inequality
                      ((pHVar11->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,
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
    }
    else {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04563eaa == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04563eaa = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if ((*ppIVar29 == (IGFGDDANEPE_o *)0x0) ||
         (__this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField,
         __this_01 == (DOPEEDABNEK_o *)0x0)) goto LAB_03108384;
      pHVar11 = DOPEEDABNEK__CKKIPBAIEMN
                          (__this_01,((*ppIVar29)->fields).NPFMOEOIEKM,(MethodInfo *)0x0);
      if (pHVar11 == (HOOAAGABMBL_o *)0x0) {
        pSVar31 = (System_String_o *)0x0;
      }
      else {
        pSVar31 = (pHVar11->fields)._HONAAKEIHJI_k__BackingField;
      }
      bVar7 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar31,(MethodInfo *)0x0);
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
      pSVar31 = (pHVar11->fields)._HONAAKEIHJI_k__BackingField;
    }
  }
  pIVar12 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                      (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  pSVar31 = FEEEICKDOFK__PEKFIKKFOEP((BLEFOFGCKEF_o *)pIVar12,pSVar31,(MethodInfo *)0x0);
  bVar7 = System_String__op_Equality(pSVar31,StringLiteral_9307/*"NO_ITEM_NAME"*/,(MethodInfo *)0x0);
  if (bVar7) {
    pHVar11 = (__this->fields).BBODGCMLKFP;
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
    pSVar19 = System_String__Concat(StringLiteral_7510/*"InfoPanelContent Refresh. not found TranslatableItemName "*/,pSVar19,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar19,(MethodInfo *)0x0);
  }
  pHVar11 = (__this->fields).BBODGCMLKFP;
  if (pHVar11 == (HOOAAGABMBL_o *)0x0) {
    pNVar32 = (__this->fields)._timerAlias;
LAB_03107e04:
    iVar9 = 1;
  }
  else {
    pMVar21 = (MethodInfo *)0x0;
    bVar7 = System_String__op_Equality
                      ((pHVar11->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,
                       (MethodInfo *)0x0);
    pSVar19 = StringLiteral_1/*""*/;
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
                            ((pJVar15->fields).BGHFADDGPAD,StringLiteral_8722/*"MISSILE"*/,(MethodInfo *)0x0),
         bVar7)) {
        iStack_64 = iVar9;
        pIVar12 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&iStack_64);
        pSVar19 = System_String__Format(StringLiteral_22482/*"{{{0}}}"*/,pIVar12,(MethodInfo *)0x0);
        pSVar31 = System_String__Concat(pSVar31,pSVar19,(MethodInfo *)0x0);
      }
    }
    pHVar11 = (__this->fields).BBODGCMLKFP;
    pNVar32 = (__this->fields)._timerAlias;
    if (pHVar11 == (HOOAAGABMBL_o *)0x0) goto LAB_03107e04;
    bVar7 = System_String__op_Equality
                      ((pHVar11->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,
                       (MethodInfo *)0x0);
    if (bVar7) {
LAB_03107df8:
      iVar9 = 4;
    }
    else {
      pHVar11 = (__this->fields).BBODGCMLKFP;
      if (pHVar11 == (HOOAAGABMBL_o *)0x0) goto LAB_03108384;
      bVar7 = System_String__op_Equality
                        ((pHVar11->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10823/*"RaidConsumable"*/,
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
  pMVar16 = ACHLOMELAJE__HKIEGNBOFCD(pAVar22,StringLiteral_15964/*"_FirstGemPurchaseBonusActive"*/,0,(MethodInfo *)0x0);
  if (((pMVar16 == (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) ||
      (bVar7 = System_String__op_Equality
                         ((pMVar16->fields).JAICMIMBIOA,StringLiteral_1606/*"1"*/,(MethodInfo *)0x0),
      !bVar7)) ||
     ((pHVar11 = (__this->fields).BBODGCMLKFP, pHVar11 == (HOOAAGABMBL_o *)0x0 ||
      (bVar7 = System_String__op_Equality
                         ((pHVar11->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_11073/*"RealMoneyItem"*/,
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
    pVVar17 = (VirtualInvokeData *)FUN_01b81914(pIVar12,DFLJPJMIMHI_TypeInfo,8);
LAB_03107fe0:
    fVar35 = (float)(*pVVar17->methodPtr)(pIVar12,pVVar17->method);
    if (pNVar32 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03108384;
  }
  else {
    pHVar11 = (__this->fields).BBODGCMLKFP;
    if (pHVar11 == (HOOAAGABMBL_o *)0x0) goto LAB_03108384;
    bVar7 = System_String__op_Equality
                      ((pHVar11->fields)._DKODBGOHKGH_k__BackingField,StringLiteral_3535/*"Bonus"*/,
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
  Nekki_SF2_GUI_Shop_InfoPanelContent__PJNIDLOFIML(__this,method);
  Nekki_SF2_GUI_Shop_InfoPanelContent__LFLGIOKBFCG(__this,method_00);
  Nekki_SF2_GUI_Shop_InfoPanelContent__ShowButton(__this,method_01);
  pHVar11 = (__this->fields).BBODGCMLKFP;
  pMVar21 = extraout_x1;
  if (pHVar11 == (HOOAAGABMBL_o *)0x0) {
LAB_0310807c:
    Nekki_SF2_GUI_Shop_InfoPanelContent__LockButton(__this,pMVar21);
  }
  else {
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
    pMVar21 = method_02;
    if (iVar9 < iVar2) goto LAB_0310807c;
    Nekki_SF2_GUI_Shop_InfoPanelContent__OOCCHCBLHBE(__this,method_02);
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
      bVar7 = pHVar11 != (HOOAAGABMBL_o *)0x0 && (__this->fields).LLJHPAIHMEO != false;
    }
    pHVar25 = (__this->fields).BBODGCMLKFP;
    if ((pHVar25 == (HOOAAGABMBL_o *)0x0) ||
       (bVar8 = System_String__op_Inequality
                          ((pHVar25->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,
                           (MethodInfo *)0x0), !bVar8)) {
      bVar8 = false;
    }
    else {
      pHVar25 = (__this->fields).BBODGCMLKFP;
      if (pHVar25 == (HOOAAGABMBL_o *)0x0) goto LAB_03108384;
      bVar8 = System_String__op_Inequality
                        ((pHVar25->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10823/*"RaidConsumable"*/,
                         (MethodInfo *)0x0);
    }
    pNVar18 = (__this->fields)._parametersPanel;
    if ((pNVar18 != (Nekki_SF2_GUI_Shop_ParametersPanel_o *)0x0) &&
       (__this_03 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar18,(MethodInfo *)0x0),
       __this_03 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_03,bVar8,(MethodInfo *)0x0);
      if (bVar8 != false) {
        pNVar18 = (__this->fields)._parametersPanel;
        if (pNVar18 == (Nekki_SF2_GUI_Shop_ParametersPanel_o *)0x0) goto LAB_03108384;
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


// ===== public void SetDefaultDescription()  [RVA 0x3008390]
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
    FUN_01bab630(&StringLiteral_22230/*"{"*/);
    FUN_01bab630(&StringLiteral_20999/*"shopUpgrade{{img::MiscSprites.star offsety::8}}{{{0}}}"*/);
    FUN_01bab630(&StringLiteral_20995/*"shopOrder"*/);
    FUN_01bab630(&StringLiteral_22500/*"}"*/);
                    /* try { // try from 03108418 to 03208427 has its CatchHandler @ 031085c0 */
    FUN_01bab630(&StringLiteral_21000/*"shopUpgrade{{}}{{{0}}}"*/);
    FUN_01bab630(&StringLiteral_20994/*"shopMaking"*/);
                    /* try { // try from 03108428 to 03208447 has its CatchHandler @ 031085d0 */
    FUN_01bab630(&StringLiteral_10876/*"RaidItemPack"*/);
    FUN_01bab630(&StringLiteral_8722/*"MISSILE"*/);
                    /* try { // try from 03108448 to 03208453 has its CatchHandler @ 031085bc */
    FUN_01bab630(&StringLiteral_17691/*"descForgeChest"*/);
    FUN_01bab630(&StringLiteral_10823/*"RaidConsumable"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 03108464 to 0320846b has its CatchHandler @ 031085b8 */
    FUN_01bab630(&StringLiteral_22458/*"{0}{{{1}}}"*/);
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
        puVar13 = &StringLiteral_20994/*"shopMaking"*/;
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
        puVar13 = &StringLiteral_20995/*"shopOrder"*/;
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
          puVar13 = &StringLiteral_20999/*"shopUpgrade{{img::MiscSprites.star offsety::8}}{{{0}}}"*/;
        }
        else {
          local_3c = iVar2;
          pIVar9 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_3c);
          puVar13 = &StringLiteral_21000/*"shopUpgrade{{}}{{{0}}}"*/;
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
                (pNVar3,StringLiteral_1/*""*/,(pNVar3->klass->vtable)._75_set_text.method);
      return;
    }
  }
  else {
                    /* try { // try from 031084a0 to 0320853f has its CatchHandler @ 031085e0 */
    pMVar11 = (MethodInfo *)0x0;
    bVar1 = System_String__op_Equality
                      ((pHVar12->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      pHVar12 = (__this->fields).BBODGCMLKFP;
      if (pHVar12 == (HOOAAGABMBL_o *)0x0) goto LAB_03108868;
      pMVar11 = (MethodInfo *)0x0;
      bVar1 = System_String__op_Equality
                        ((pHVar12->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10823/*"RaidConsumable"*/,
                         (MethodInfo *)0x0);
      if (!bVar1) goto LAB_03108510;
    }
    pSVar16 = StringLiteral_1/*""*/;
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
                        ((pJVar7->fields).BGHFADDGPAD,StringLiteral_8722/*"MISSILE"*/,(MethodInfo *)0x0);
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
                         (str0,StringLiteral_22230/*"{"*/,(System_String_o *)pMVar11,StringLiteral_22500/*"}"*/,
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
                       (StringLiteral_22458/*"{0}{{{1}}}"*/,(Il2CppObject *)pSVar16,pIVar9,(MethodInfo *)0x0);
                    /* try { // try from 0310867c to 03208687 has its CatchHandler @ 03108398 */
    }
    if (str0 == (System_String_o *)0x0) goto LAB_03108868;
                    /* try { // try from 03108688 to 0320868f has its CatchHandler @ 03108690 */
                    /* catch() { ... } // from try @ 0310860c with catch @ 03108690
                       catch() { ... } // from try @ 03108658 with catch @ 03108690
                       catch() { ... } // from try @ 03108688 with catch @ 03108690 */
    pMVar11 = (MethodInfo *)0x0;
    bVar1 = System_String__StartsWith(str0,StringLiteral_17691/*"descForgeChest"*/,(MethodInfo *)0x0);
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


// ===== private void Update()  [RVA 0x3008C98]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$Update @ RVA 0x3008C98

void Nekki_SF2_GUI_Shop_InfoPanelContent__Update
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  int64_t NFBEBOIDJLL;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
                    /* try { // try from 03108cac to 03208d2b has its CatchHandler @ 03108cac
                       catch() { ... } // from try @ 03108cac with catch @ 03108cac
                       catch() { ... } // from try @ 03108e74 with catch @ 03108cac
                       catch() { ... } // from try @ 03108ecc with catch @ 03108cac
                       catch() { ... } // from try @ 03108f2c with catch @ 03108cac
                       catch() { ... } // from try @ 03108f4c with catch @ 03108cac
                       catch() { ... } // from try @ 03108f90 with catch @ 03108cac */
  if ((DAT_04565b56 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_04565b56 = 1;
    method = extraout_x1;
  }
  NFBEBOIDJLL = Nekki_SF2_GUI_Shop_InfoPanelContent__GetItemTimer(__this,method);
  if (0 < NFBEBOIDJLL) {
    Nekki_SF2_GUI_Shop_InfoPanelContent__GMOBPKAOMNA(__this,NFBEBOIDJLL,in_x2);
    Nekki_SF2_GUI_Shop_InfoPanelContent__HMDPBFDLELC(__this,NFBEBOIDJLL,in_x2);
    return;
  }
  pNVar1 = (__this->fields)._timerAlias;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
              (pNVar1,string_TypeInfo->static_fields->Empty,
               (pNVar1->klass->vtable)._75_set_text.method);
    pNVar1 = (__this->fields)._timerAlias;
                    /* try { // try from 03108d2c to 03208d3b has its CatchHandler @ 03108ed4 */
    if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 03108d3c to 03208d5b has its CatchHandler @ 03108ee4 */
      UnityEngine_GameObject__SetActive(__this_00,(__this->fields).BGODGJNKGOE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PJNIDLOFIML()  [RVA 0x3009354]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$PJNIDLOFIML @ RVA 0x3009354

void Nekki_SF2_GUI_Shop_InfoPanelContent__PJNIDLOFIML
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  System_String_o *pSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_01;
  MethodInfo *pMVar5;
  HOOAAGABMBL_o *pHVar6;
  
  if ((DAT_04565b57 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11073/*"RealMoneyItem"*/);
    FUN_01bab630(&StringLiteral_4617/*"Consumable"*/);
    FUN_01bab630(&StringLiteral_6589/*"Free"*/);
    FUN_01bab630(&StringLiteral_12834/*"TapJoy"*/);
    DAT_04565b57 = 1;
  }
  pNVar2 = (__this->fields)._description;
  if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 031093b8 to 032093c3 has its CatchHandler @ 0310942c */
    UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
                    /* try { // try from 031093c4 to 032093ef has its CatchHandler @ 03109160 */
    pNVar2 = (__this->fields)._descriptionDonate;
    if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      pHVar6 = (__this->fields).BBODGCMLKFP;
      pMVar5 = extraout_x1;
      if (pHVar6 == (HOOAAGABMBL_o *)0x0) {
LAB_031094b4:
        Nekki_SF2_GUI_Shop_InfoPanelContent__SetDefaultDescription(__this,pMVar5);
        return;
      }
      pSVar4 = (pHVar6->fields)._GMPAEDFIIHF_k__BackingField;
                    /* try { // try from 031093f0 to 03209413 has its CatchHandler @ 03109450 */
      if (pSVar4 != (System_String_o *)0x0) {
        bVar1 = System_String__Equals(pSVar4,StringLiteral_4617/*"Consumable"*/,(MethodInfo *)0x0);
        if (bVar1) {
                    /* try { // try from 03109414 to 0320941b has its CatchHandler @ 0310942c */
          Nekki_SF2_GUI_Shop_InfoPanelContent__IDAFPIICNIF(__this,method_00);
          return;
        }
                    /* try { // try from 0310941c to 03209463 has its CatchHandler @ 03109160 */
        pHVar6 = (__this->fields).BBODGCMLKFP;
                    /* catch() { ... } // from try @ 031092ac with catch @ 03109420 */
        pMVar5 = method_00;
        if (pHVar6 == (HOOAAGABMBL_o *)0x0) goto LAB_031094b4;
                    /* catch() { ... } // from try @ 03109290 with catch @ 03109424 */
        pSVar4 = (pHVar6->fields)._GMPAEDFIIHF_k__BackingField;
                    /* catch() { ... } // from try @ 03109260 with catch @ 03109428 */
        if (pSVar4 != (System_String_o *)0x0) {
                    /* catch() { ... } // from try @ 031093b8 with catch @ 0310942c
                       catch() { ... } // from try @ 03109414 with catch @ 0310942c */
                    /* catch() { ... } // from try @ 03109270 with catch @ 03109438 */
          bVar1 = System_String__Equals(pSVar4,StringLiteral_6589/*"Free"*/,(MethodInfo *)0x0);
          pMVar5 = extraout_x1_00;
          if (!bVar1) {
                    /* catch() { ... } // from try @ 031092fc with catch @ 03109444 */
            pHVar6 = (__this->fields).BBODGCMLKFP;
                    /* catch() { ... } // from try @ 031092dc with catch @ 03109448 */
                    /* catch() { ... } // from try @ 03109300 with catch @ 0310944c */
                    /* catch() { ... } // from try @ 031093f0 with catch @ 03109450 */
            if ((pHVar6 == (HOOAAGABMBL_o *)0x0) ||
               (pSVar4 = (pHVar6->fields)._DKODBGOHKGH_k__BackingField,
               pSVar4 == (System_String_o *)0x0)) goto LAB_031094c4;
                    /* try { // try from 03109464 to 03209467 has its CatchHandler @ 031094cc */
            bVar1 = System_String__Equals(pSVar4,StringLiteral_12834/*"TapJoy"*/,(MethodInfo *)0x0);
            pMVar5 = extraout_x1_01;
            if (!bVar1) {
              pHVar6 = (__this->fields).BBODGCMLKFP;
              if (pHVar6 != (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 03109484 to 0320949f has its CatchHandler @ 03109160 */
                pSVar4 = (pHVar6->fields)._GMPAEDFIIHF_k__BackingField;
                if (pSVar4 == (System_String_o *)0x0) goto LAB_031094c4;
                bVar1 = System_String__Equals(pSVar4,StringLiteral_11073/*"RealMoneyItem"*/,(MethodInfo *)0x0);
                pMVar5 = method_01;
                    /* try { // try from 031094a0 to 032094a3 has its CatchHandler @ 031094d8 */
                if (bVar1) {
                    /* try { // try from 031094a4 to 032094c3 has its CatchHandler @ 03109160 */
                  Nekki_SF2_GUI_Shop_InfoPanelContent__CIGHKOCIDBN(__this,method_01);
                  return;
                }
              }
              goto LAB_031094b4;
            }
          }
                    /* try { // try from 03109478 to 03209483 has its CatchHandler @ 031094fc */
          Nekki_SF2_GUI_Shop_InfoPanelContent__ALIIMHNKFNO(__this,pMVar5);
          return;
        }
      }
    }
  }
LAB_031094c4:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031094c4 to 032094e7 has its CatchHandler @ 031094fc */
  FUN_01bab8c8();
}


// ===== private void PCEIMHFPFDH(object IMMNELPBGIF)  [RVA 0x3009638]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$PCEIMHFPFDH @ RVA 0x3009638

void Nekki_SF2_GUI_Shop_InfoPanelContent__PCEIMHFPFDH
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  int *piVar2;
  System_Action_BKKPAKHJDKB__o *BLMFLPJJMPF;
  GGHCLMEFIGO_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  HOOAAGABMBL_o *pHVar3;
  ACHLOMELAJE_o *pAVar4;
  
  if ((DAT_04565b58 & 1) == 0) {
    FUN_01bab630(&System_Action<BKKPAKHJDKB>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_InfoPanelContent_PBPPPILDIBH__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_10876/*"RaidItemPack"*/);
    FUN_01bab630(&StringLiteral_10823/*"RaidConsumable"*/);
    DAT_04565b58 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar2 = (int *)thunk_FUN_01bda96c();
    if ((0 < *piVar2) && (pHVar3 = (__this->fields).KJBDDCNKNNE, pHVar3 != (HOOAAGABMBL_o *)0x0)) {
      bVar1 = System_String__op_Equality
                        ((pHVar3->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10823/*"RaidConsumable"*/,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        pHVar3 = (__this->fields).KJBDDCNKNNE;
        if (pHVar3 == (HOOAAGABMBL_o *)0x0) {
LAB_0310980c:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = System_String__op_Equality
                          ((pHVar3->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,
                           (MethodInfo *)0x0);
        if (!bVar1) {
          bVar1 = AMIINPEKKFB__CNDGBHMOMJB((__this->fields).KJBDDCNKNNE,(MethodInfo *)0x0);
          method_00 = extraout_x1;
          if (bVar1) {
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
            pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if ((pAVar4 == (ACHLOMELAJE_o *)0x0) ||
               (__this_00 = (pAVar4->fields).OIDPLCLELEN, __this_00 == (GGHCLMEFIGO_o *)0x0))
            goto LAB_0310980c;
            GGHCLMEFIGO__BOEFGIBCIIL(__this_00,(__this->fields).KJBDDCNKNNE,true,(MethodInfo *)0x0);
            method_00 = extraout_x1_00;
          }
          Nekki_SF2_GUI_Shop_InfoPanelContent__UpdateContent(__this,method_00);
          return;
        }
      }
      pHVar3 = (__this->fields).KJBDDCNKNNE;
      BLMFLPJJMPF = (System_Action_BKKPAKHJDKB__o *)
                    thunk_FUN_01bda818(System_Action<BKKPAKHJDKB>_TypeInfo);
      System_Action<object>___ctor();
      AMIINPEKKFB__IEJBJDHAELB(pHVar3,BLMFLPJJMPF,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// ===== private void ECPADJDPHLL()  [RVA 0x3009810]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$ECPADJDPHLL @ RVA 0x3009810

void Nekki_SF2_GUI_Shop_InfoPanelContent__ECPADJDPHLL
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  System_Func_IconLabelButton__bool__o **ppSVar1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Comparison_IconLabelButton__o **ppSVar2;
  SFButton_o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  float fVar4;
  System_Collections_Generic_List_IconLabelButton__o *CJNHFNHJHPE;
  int iVar5;
  System_Func_IconLabelButton__bool__o *CPECAEHDDDB;
  System_Comparison_IconLabelButton__o *comparison;
  float fVar6;
  float fVar7;
  UnityEngine_Vector2_o MJBMLNKAPGC;
  UnityEngine_Vector2_o PGFAIJMMOHJ;
  
  if ((DAT_04565b59 & 1) == 0) {
    FUN_01bab630(&System_Comparison<IconLabelButton>_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_ADHEKCHLKFA<IconLabelButton>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<IconLabelButton>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_PHPELPFMOII<IconLabelButton>__);
    FUN_01bab630(&System_Func<IconLabelButton,_bool>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IconLabelButton>_Sort__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IconLabelButton>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IconLabelButton>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_AIBGCCPEGJG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_OFLICMNNNPA__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo);
    DAT_04565b59 = 1;
    method = extraout_x1;
  }
  CJNHFNHJHPE = (__this->fields).PGCBEJGMIMA;
  if ((Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  CPECAEHDDDB = Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo->static_fields->__9__64_0;
  if (CPECAEHDDDB == (System_Func_IconLabelButton__bool__o *)0x0) {
    if ((Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo,method);
    }
    CPECAEHDDDB = (System_Func_IconLabelButton__bool__o *)
                  thunk_FUN_01bda818(System_Func<IconLabelButton,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo->static_fields->__9__64_0;
    *ppSVar1 = CPECAEHDDDB;
    thunk_FUN_01c20e04(ppSVar1,CPECAEHDDDB);
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              DJNBJHPDKDP__ADHEKCHLKFA<object>
                        ((System_Collections_Generic_List_T__o *)CJNHFNHJHPE,
                         (System_Func_T__bool__o *)CPECAEHDDDB,
                         Method_DJNBJHPDKDP_ADHEKCHLKFA<IconLabelButton>__);
  if ((Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo);
  }
  comparison = Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo->static_fields->__9__64_1;
  if (comparison == (System_Comparison_IconLabelButton__o *)0x0) {
    if ((Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo);
    }
    comparison = (System_Comparison_IconLabelButton__o *)
                 thunk_FUN_01bda818(System_Comparison<IconLabelButton>_TypeInfo);
    System_Comparison<object>___ctor();
    ppSVar2 = &Nekki_SF2_GUI_Shop_InfoPanelContent_<>c_TypeInfo->static_fields->__9__64_1;
    *ppSVar2 = comparison;
    thunk_FUN_01c20e04(ppSVar2,comparison);
  }
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__Sort
              (__this_00,(System_Comparison_T__o *)comparison,
               Method_System_Collections_Generic_List<IconLabelButton>_Sort__);
    iVar5 = (__this_00->fields)._size;
    if (iVar5 < 2) {
      pSVar3 = (SFButton_o *)
               DJNBJHPDKDP__PHPELPFMOII<object>
                         ((System_Collections_Generic_List_T__o *)__this_00,
                          Method_DJNBJHPDKDP_PHPELPFMOII<IconLabelButton>__);
      if (pSVar3 != (SFButton_o *)0x0) {
        fVar6 = 0.0;
        fVar7 = 20.0;
        fVar4 = 320.0;
LAB_03109aa8:
        MJBMLNKAPGC.fields.y = fVar7;
        MJBMLNKAPGC.fields.x = fVar6;
        PGFAIJMMOHJ.fields.y = fVar4;
        PGFAIJMMOHJ.fields.x = 540.0;
        SFButton__CreateAdditionalTouchZone(pSVar3,PGFAIJMMOHJ,MJBMLNKAPGC,(MethodInfo *)0x0);
        return;
      }
    }
    else if (iVar5 == 2) {
      pSVar3 = (SFButton_o *)
               DJNBJHPDKDP__PHPELPFMOII<object>
                         ((System_Collections_Generic_List_T__o *)__this_00,
                          Method_DJNBJHPDKDP_PHPELPFMOII<IconLabelButton>__);
      if (pSVar3 != (SFButton_o *)0x0) {
        SFButton__CreateAdditionalTouchZone
                  (pSVar3,(UnityEngine_Vector2_o)0x4334000044070000,
                   (UnityEngine_Vector2_o)0x41c8000000000000,(MethodInfo *)0x0);
        pSVar3 = (SFButton_o *)
                 DJNBJHPDKDP__KIKGKKGDCKK<object>
                           ((System_Collections_Generic_List_T__o *)__this_00,
                            Method_DJNBJHPDKDP_KIKGKKGDCKK<IconLabelButton>__);
        if (pSVar3 != (SFButton_o *)0x0) {
          fVar7 = -25.0;
          fVar4 = 180.0;
          fVar6 = -0.0;
          goto LAB_03109aa8;
        }
      }
    }
    else {
      iVar5 = 1;
      while (pSVar3 = (SFButton_o *)
                      System_Collections_Generic_List<object>__get_Item
                                (__this_00,iVar5,
                                 Method_System_Collections_Generic_List<IconLabelButton>_get_Item__)
            , pSVar3 != (SFButton_o *)0x0) {
        SFButton__CreateAdditionalTouchZone
                  (pSVar3,(UnityEngine_Vector2_o)0x430c000044070000,(UnityEngine_Vector2_o)0x0,
                   (MethodInfo *)0x0);
        iVar5 = iVar5 + 1;
        if ((__this_00->fields)._size + -1 <= iVar5) {
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ShowPaymentButton()  [RVA 0x3009B24]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$ShowPaymentButton @ RVA 0x3009B24

void Nekki_SF2_GUI_Shop_InfoPanelContent__ShowPaymentButton
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *str2;
  IconLabelButton_o *BECCOGAMKJL;
  System_String_o *pSVar2;
  MethodInfo *in_x4;
  HOOAAGABMBL_o *pHVar3;
  
  if ((DAT_04565b5a & 1) == 0) {
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_12834/*"TapJoy"*/);
    DAT_04565b5a = 1;
  }
  pHVar3 = (__this->fields).BBODGCMLKFP;
  if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((pHVar3->fields)._DKODBGOHKGH_k__BackingField,StringLiteral_12834/*"TapJoy"*/,
                       (MethodInfo *)0x0);
    if (bVar1) {
      pHVar3 = (__this->fields).BBODGCMLKFP;
      if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
        BECCOGAMKJL = (__this->fields).CJMBPDHIHLO;
        pSVar2 = (pHVar3->fields)._DEKLMOAFMOI_k__BackingField;
        bVar1 = true;
LAB_03109c14:
        Nekki_SF2_GUI_Shop_InfoPanelContent__AOHAKEEHGKG
                  (__this,BECCOGAMKJL,pSVar2,
                   (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),bVar1,in_x4);
        return;
      }
    }
    else {
      pHVar3 = (__this->fields).BBODGCMLKFP;
      if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
        BECCOGAMKJL = (__this->fields).MDKMGENBAOJ;
        pSVar2 = HOOAAGABMBL__GFMPCIOBMBJ(pHVar3,(MethodInfo *)0x0);
        pHVar3 = (__this->fields).BBODGCMLKFP;
        if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
          str2 = HOOAAGABMBL__EHECKFKDKJD(pHVar3,(MethodInfo *)0x0);
          pSVar2 = System_String__Concat(pSVar2,StringLiteral_167/*" "*/,str2,(MethodInfo *)0x0);
          bVar1 = false;
          goto LAB_03109c14;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Awake()  [RVA 0x3009C24]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$Awake @ RVA 0x3009C24

void Nekki_SF2_GUI_Shop_InfoPanelContent__Awake
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_IObservable_Unit__o *source;
  System_Action_T__o *onNext;
  
  if ((DAT_04565b5b & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_InfoPanelContent_PHLHFMNMLKP__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    DAT_04565b5b = 1;
  }
  pIVar1 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  source = FEEEICKDOFK__CICIPAHCKDB((BLEFOFGCKEF_o *)pIVar1,(MethodInfo *)0x0);
  onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
  System_Action<Unit>___ctor();
  pIVar1 = (Il2CppObject *)
           UniRx_ObservableExtensions__Subscribe<Unit>
                     ((System_IObservable_T__o *)source,onNext,
                      Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar1,(UnityEngine_Component_o *)__this,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}


// ===== public IconLabelButton GetGoldButton()  [RVA 0x3009D10]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$GetGoldButton @ RVA 0x3009D10

IconLabelButton_o *
Nekki_SF2_GUI_Shop_InfoPanelContent__GetGoldButton
          (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  return (__this->fields).BMHDNILOKHO;
}


// ===== private void DJKPEGLONEE(object IMMNELPBGIF)  [RVA 0x3009D18]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$DJKPEGLONEE @ RVA 0x3009D18

void Nekki_SF2_GUI_Shop_InfoPanelContent__DJKPEGLONEE
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  bool bVar4;
  int32_t iVar5;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar6;
  System_Object_array *args;
  undefined4 *puVar7;
  System_String_o *pSVar8;
  long lVar9;
  IGFGDDANEPE_o *pIVar10;
  KKEKKPIDGBK_o *pKVar11;
  VirtualInvokeData *pVVar12;
  HOOAAGABMBL_o *pHVar13;
  int64_t iVar14;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar15;
  EEGDOGKBLNG_o *__this_01;
  System_Action_object__o *pSVar16;
  undefined8 uVar17;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int64_t OHLGEMOFODG;
  MethodInfo *in_x5;
  KKEKKPIDGBK_c *pKVar18;
  ulong uVar19;
  int32_t *piVar20;
  UnityEngine_Object_o *x;
  Nekki_SF2_GUI_Common_PaymentUI_o *__this_02;
  undefined1 auVar21 [16];
  MethodInfo *in_stack_ffffffffffffff40;
  System_Enum_c *local_b0;
  void *pvStack_a8;
  int64_t iStack_a0;
  int64_t iStack_98;
  bool_conflict local_90;
  bool_conflict bStack_8f;
  undefined6 uStack_8e;
  System_Nullable_ObscuredLong__o local_80;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_50;
  
  if ((DAT_04565b5c & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_InfoPanelContent_ABCDOFCJLOG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_InfoPanelContent_FKFCOAPPDJK__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_InfoPanelContent_HKFCEOLDACN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_InfoPanelContent_OCEFNAOJJPH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_InfoPanelContent_OLICMLPMDDF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_InfoPanelContent_PCEIMHFPFDH__);
    FUN_01bab630(&KGNNFOHIBBD_TypeInfo);
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Item__);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<ObscuredLong>__ctor__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_UIModule_GetModule<PaymentUI>__);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    FUN_01bab630(&StringLiteral_14559/*"Unsupported item action [{0}]"*/);
    FUN_01bab630(&StringLiteral_12834/*"TapJoy"*/);
    FUN_01bab630(&StringLiteral_14785/*"Video"*/);
    DAT_04565b5c = 1;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) goto LAB_0310a5b4;
  if ((IMMNELPBGIF->klass->_1).element_class != (KGNNFOHIBBD_TypeInfo->_1).element_class) {
LAB_0310a5bc:
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
  auVar21 = thunk_FUN_01bda96c(IMMNELPBGIF);
  iVar1 = *auVar21._0_8_;
  if (iVar1 == 4) {
    Nekki_SF2_GUI_Shop_InfoPanelContent__DLDIPMHEPGG(__this,auVar21._8_8_);
    return;
  }
  pNVar6 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (pNVar6 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_0310a5b4;
  bVar4 = Nekki_SF2_GUI_Shop_InfoPanelContent__OJCGBHPFEOJ
                    (__this,(pNVar6->fields).QuestParameters,method);
  if (bVar4) {
    return;
  }
  switch(iVar1) {
  case 1:
    pHVar13 = (__this->fields).BBODGCMLKFP;
    if (pHVar13 != (HOOAAGABMBL_o *)0x0) {
      iVar14 = HOOAAGABMBL__ICMFLAFFOFM(pHVar13,(MethodInfo *)0x0);
      pSVar16 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      pHVar13 = (__this->fields).BBODGCMLKFP;
      if (pHVar13 != (HOOAAGABMBL_o *)0x0) {
        OHLGEMOFODG = (pHVar13->fields)._LAOFJOMPFDL_k__BackingField;
        iVar5 = 0;
LAB_0310a198:
        Nekki_SF2_GUI_Shop_InfoPanelContent__NEKPFCFDNEJ
                  (__this,iVar5,iVar14,pSVar16,OHLGEMOFODG,in_x5);
        return;
      }
    }
    break;
  case 2:
    pHVar13 = (__this->fields).BBODGCMLKFP;
    if (pHVar13 == (HOOAAGABMBL_o *)0x0) break;
    iVar14 = HOOAAGABMBL__MNKCHHFDEGH(pHVar13,(MethodInfo *)0x0);
    pSVar16 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    goto LAB_0310a338;
  case 3:
    lVar9 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01b81620();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01b81620();
    }
    x = (UnityEngine_Object_o *)**(undefined8 **)(lVar9 + 0xb8);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      lVar9 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01b81620();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01b81620();
      }
      if (**(long **)(lVar9 + 0xb8) == 0) break;
      __this_02 = *(Nekki_SF2_GUI_Common_PaymentUI_o **)(**(long **)(lVar9 + 0xb8) + 0x1a8);
    }
    else {
      if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = (Nekki_SF2_GUI_Common_PaymentUI_o *)
                  Nekki_SF2_GUI_UIModule__GetModule<object>
                            (Method_Nekki_SF2_GUI_UIModule_GetModule<PaymentUI>__);
    }
    pHVar13 = (__this->fields).BBODGCMLKFP;
    local_80.fields.value.fields.fakeValueActive = false;
    local_80.fields.value.fields.inited = false;
    local_80.fields.value.fields._26_6_ = 0;
    local_80.fields.value.fields.currentCryptoKey = 0;
    local_80.fields._0_8_ = (System_Enum_c *)0x0;
    local_80.fields.value.fields.fakeValue = 0;
    local_80.fields.value.fields.hiddenValue = 0;
    local_50.fields.hiddenValue = (__this->fields).IKDBOANBHLG.fields.hiddenValue;
    local_50.fields.currentCryptoKey = (__this->fields).IKDBOANBHLG.fields.currentCryptoKey;
    local_50.fields.fakeValueActive = (__this->fields).IKDBOANBHLG.fields.fakeValueActive;
    local_50.fields.inited = (__this->fields).IKDBOANBHLG.fields.inited;
    local_50.fields._26_6_ = *(undefined6 *)&(__this->fields).IKDBOANBHLG.fields.field_0x1a;
    local_50.fields.fakeValue = (__this->fields).IKDBOANBHLG.fields.fakeValue;
    System_Nullable<ObscuredLong>___ctor
              (&local_80,&local_50,Method_System_Nullable<ObscuredLong>__ctor__);
    if (__this_02 != (Nekki_SF2_GUI_Common_PaymentUI_o *)0x0) {
      pvStack_a8 = (void *)local_80.fields.value.fields.currentCryptoKey;
      local_b0 = (System_Enum_c *)local_80.fields._0_8_;
      iStack_98 = local_80.fields.value.fields.fakeValue;
      iStack_a0 = local_80.fields.value.fields.hiddenValue;
      local_90 = local_80.fields.value.fields.fakeValueActive;
      bStack_8f = local_80.fields.value.fields.inited;
      uStack_8e = local_80.fields.value.fields._26_6_;
      Nekki_SF2_GUI_Common_PaymentUI__MakePurchase
                (__this_02,pHVar13,(System_Nullable_ObscuredLong__o *)&local_b0,(MethodInfo *)0x0);
      return;
    }
    break;
  default:
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    if ((IMMNELPBGIF->klass->_1).element_class != (KGNNFOHIBBD_TypeInfo->_1).element_class)
    goto LAB_0310a5bc;
    puVar7 = (undefined4 *)thunk_FUN_01bda96c(IMMNELPBGIF);
    local_80.fields._0_8_ = KGNNFOHIBBD_TypeInfo;
    local_80.fields.value.fields.currentCryptoKey = -1;
    local_80.fields.value.fields.hiddenValue =
         CONCAT44(local_80.fields.value.fields.hiddenValue._4_4_,*puVar7);
    pSVar8 = System_Enum__ToString((System_Enum_o *)&local_80,(MethodInfo *)0x0);
    if (args != (System_Object_array *)0x0) {
      if ((pSVar8 != (System_String_o *)0x0) &&
         (lVar9 = thunk_FUN_01bda71c(pSVar8,(((args->obj).klass)->_1).element_class), lVar9 == 0)) {
        uVar17 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar17,0);
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = (Il2CppObject *)pSVar8;
        thunk_FUN_01c20e04(args->m_Items,pSVar8);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_14559/*"Unsupported item action [{0}]"*/,args,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    break;
  case 8:
    pHVar13 = (__this->fields).BBODGCMLKFP;
    if (pHVar13 != (HOOAAGABMBL_o *)0x0) {
      pSVar8 = (pHVar13->fields)._COIPKAKHDFP_k__BackingField;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pIVar10 = NLPJLHOEAOE__JNFIBDBHNOA(pSVar8,(MethodInfo *)0x0);
      if ((pIVar10 != (IGFGDDANEPE_o *)0x0) &&
         (pHVar13 = (pIVar10->fields).LFPOIAJDMBK, pHVar13 != (HOOAAGABMBL_o *)0x0)) {
        iVar14 = HOOAAGABMBL__ICMFLAFFOFM(pHVar13,(MethodInfo *)0x0);
        pSVar16 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        OHLGEMOFODG = (pHVar13->fields)._LAOFJOMPFDL_k__BackingField;
        iVar5 = 1;
        goto LAB_0310a198;
      }
    }
    break;
  case 9:
    pHVar13 = (__this->fields).BBODGCMLKFP;
    if (pHVar13 == (HOOAAGABMBL_o *)0x0) break;
    pSVar8 = (pHVar13->fields)._COIPKAKHDFP_k__BackingField;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pIVar10 = NLPJLHOEAOE__JNFIBDBHNOA(pSVar8,(MethodInfo *)0x0);
    if ((pIVar10 == (IGFGDDANEPE_o *)0x0) ||
       (pHVar13 = (pIVar10->fields).LFPOIAJDMBK, pHVar13 == (HOOAAGABMBL_o *)0x0)) break;
    iVar14 = HOOAAGABMBL__MNKCHHFDEGH(pHVar13,(MethodInfo *)0x0);
    pSVar16 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    iVar5 = 1;
    goto LAB_0310a354;
  case 0xb:
    Nekki_SF2_GUI_Shop_InfoPanelContent__GOBCLPJNCJP(__this,method_00);
    return;
  case 0xc:
    (__this->fields).KJBDDCNKNNE = (__this->fields).BBODGCMLKFP;
    thunk_FUN_01c20e04();
    Nekki_SF2_GUI_Shop_InfoPanelContent__GJGOBMPLAFA(__this,method_01);
    return;
  case 0xe:
    pHVar13 = (__this->fields).BBODGCMLKFP;
    if (pHVar13 != (HOOAAGABMBL_o *)0x0) {
      pSVar8 = (pHVar13->fields)._DKODBGOHKGH_k__BackingField;
      bVar4 = System_String__op_Equality(pSVar8,StringLiteral_12834/*"TapJoy"*/,(MethodInfo *)0x0);
      if (bVar4) {
        if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pKVar11 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pKVar11 != (KKEKKPIDGBK_o *)0x0) {
          pKVar18 = pKVar11->klass;
          uVar3._0_1_ = (pKVar18->_2).rank;
          uVar3._1_1_ = (pKVar18->_2).minimumAlignment;
          uVar19 = (ulong)uVar3;
          if (uVar19 != 0) {
            piVar20 = &((pKVar18->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar20 + -2))->interfaceType ==
                  (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
                pVVar12 = pKVar18->vtable + (*piVar20 + 4);
                goto LAB_0310a58c;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          pVVar12 = (VirtualInvokeData *)FUN_01b81914(pKVar11,KKEKKPIDGBK_TypeInfo,4);
LAB_0310a58c:
                    /* WARNING: Could not recover jumptable at 0x0310a5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pVVar12->methodPtr)(pKVar11,1,1,1,pVVar12->method);
          return;
        }
      }
      else {
        bVar4 = System_String__op_Equality(pSVar8,StringLiteral_14785/*"Video"*/,(MethodInfo *)0x0);
        if (!bVar4) {
          return;
        }
        lVar9 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01b81620();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x10);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01b81620();
        }
        if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar9 + 0xb8) !=
            (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
          Nekki_SF2_GUI_Shop_ShopScene__RemoveAdVideoNotificator
                    ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar9 + 0xb8),
                     (MethodInfo *)0x0);
          pNVar6 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
          if (pNVar6 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
            Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar6,0x2b,(MethodInfo *)0x0)
            ;
            return;
          }
        }
      }
    }
    break;
  case 0x13:
    pHVar13 = (__this->fields).BBODGCMLKFP;
    if (pHVar13 == (HOOAAGABMBL_o *)0x0) break;
    iVar14 = HOOAAGABMBL__MNKCHHFDEGH(pHVar13,(MethodInfo *)0x0);
    pSVar16 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
LAB_0310a338:
    System_Action<object>___ctor();
    iVar5 = 0;
LAB_0310a354:
    Nekki_SF2_GUI_Shop_InfoPanelContent__GGPMAGBKBFA(__this,iVar5,iVar14,pSVar16,0,in_x5);
    return;
  case 0x14:
    IMMNELPBGIF = (Il2CppObject *)(__this->fields).BBODGCMLKFP;
    if ((HOOAAGABMBL_o *)IMMNELPBGIF != (HOOAAGABMBL_o *)0x0) {
      bVar2 = (FAIJGJCCKJC_TypeInfo->_2).naturalAligment;
      if (((((HOOAAGABMBL_o *)IMMNELPBGIF)->klass->_2).naturalAligment < bVar2) ||
         ((((HOOAAGABMBL_o *)IMMNELPBGIF)->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)FAIJGJCCKJC_TypeInfo)) goto LAB_0310a5bc;
      if ((((HOOAAGABMBL_o *)((long)IMMNELPBGIF + 0x330))->klass != (HOOAAGABMBL_c *)0x0) &&
         ((__this_00 = (System_Collections_Generic_List_object__o *)
                       (((HOOAAGABMBL_o *)((long)IMMNELPBGIF + 0x330))->klass->_1).
                       implementedInterfaces,
          __this_00 != (System_Collections_Generic_List_object__o *)0x0 &&
          (pIVar15 = System_Collections_Generic_List<object>__get_Item
                               (__this_00,0,
                                Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Item__
                               ), pIVar15 != (Il2CppObject *)0x0)))) {
        iVar1 = *(int *)&pIVar15[1].monitor;
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (__this_01 != (EEGDOGKBLNG_o *)0x0) {
          iVar5 = EEGDOGKBLNG__APFFEAJBAEK
                            (__this_01,(System_String_o *)pIVar15[1].klass,(MethodInfo *)0x0);
          pSVar16 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
          System_Action<object>___ctor();
          Nekki_SF2_GUI_Shop_InfoPanelContent__KGKJDFLBLNM
                    (__this,0,3,(long)iVar1,(long)iVar5,pSVar16,6,0,in_stack_ffffffffffffff40);
          return;
        }
      }
    }
  }
LAB_0310a5b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NEKPFCFDNEJ(TradeDialog.KEHKALMFNHN CPECAEHDDDB, long PGGOPJDLPDI, Action<object> BLMFLPJJMPF, long OHLGEMOFODG = 0)  [RVA 0x300A6A4]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$NEKPFCFDNEJ @ RVA 0x300A6A4

void Nekki_SF2_GUI_Shop_InfoPanelContent__NEKPFCFDNEJ
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,int32_t CPECAEHDDDB,
               int64_t PGGOPJDLPDI,System_Action_object__o *BLMFLPJJMPF,int64_t OHLGEMOFODG,
               MethodInfo *method)

{
  bool bVar1;
  ACHLOMELAJE_o *pAVar2;
  int64_t iVar3;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  MethodInfo *in_stack_ffffffffffffffb0;
  
  if ((DAT_04565b5d & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b5d = 1;
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
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
    iVar3 = ACHLOMELAJE__IMLCNMCBEEN(pAVar2,(MethodInfo *)0x0);
    if (iVar3 < PGGOPJDLPDI) {
      IKKAMAMLIKA = (__this->fields).BBODGCMLKFP;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      MGNPHCAAEIO__EHEMFMCGKKK(IKKAMAMLIKA,2,(MethodInfo *)0x0);
      return;
    }
    if (CPECAEHDDDB != 1) {
      __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (__this_00 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_0310a858;
      bVar1 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests
                        (__this_00,0x41,(MethodInfo *)0x0);
      if (CPECAEHDDDB != 0) {
        return;
      }
      if (bVar1) {
        return;
      }
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
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
      iVar3 = ACHLOMELAJE__IMLCNMCBEEN(pAVar2,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Shop_InfoPanelContent__KGKJDFLBLNM
                (__this,CPECAEHDDDB,0,PGGOPJDLPDI,iVar3,BLMFLPJJMPF,2,OHLGEMOFODG,
                 in_stack_ffffffffffffffb0);
      return;
    }
  }
LAB_0310a858:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HKFCEOLDACN(object IMMNELPBGIF)  [RVA 0x300A9C4]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$HKFCEOLDACN @ RVA 0x300A9C4

void Nekki_SF2_GUI_Shop_InfoPanelContent__HKFCEOLDACN
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  int *piVar2;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  GGHCLMEFIGO_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar3;
  
  if ((DAT_04565b5e & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b5e = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar2 = (int *)thunk_FUN_01bda96c();
    if ((0 < *piVar2) &&
       (IKKAMAMLIKA = (__this->fields).KJBDDCNKNNE, IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0)) {
      bVar1 = AMIINPEKKFB__JJFBBLPMPAE(IKKAMAMLIKA,(MethodInfo *)0x0);
      method_00 = extraout_x1;
      if (bVar1) {
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
        pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if ((pAVar3 == (ACHLOMELAJE_o *)0x0) ||
           (__this_00 = (pAVar3->fields).OIDPLCLELEN, __this_00 == (GGHCLMEFIGO_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        GGHCLMEFIGO__BOEFGIBCIIL(__this_00,(__this->fields).KJBDDCNKNNE,true,(MethodInfo *)0x0);
        method_00 = extraout_x1_00;
      }
      Nekki_SF2_GUI_Shop_InfoPanelContent__UpdateContent(__this,method_00);
      return;
    }
  }
  return;
}


// ===== public void .ctor()  [RVA 0x300AAE0]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$.ctor @ RVA 0x300AAE0

void Nekki_SF2_GUI_Shop_InfoPanelContent___ctor
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_InfoPanelContent_MPOFOFAICOB_o *__this_00;
  Nekki_SF2_GUI_Shop_InfoPanelContent_MPOFOFAICOB_o **ppNVar1;
  System_Collections_Generic_List_IconLabelButton__o *__this_01;
  System_Collections_Generic_List_IconLabelButton__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565b5f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IconLabelButton>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IconLabelButton>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_InfoPanelContent_MPOFOFAICOB_TypeInfo);
    DAT_04565b5f = 1;
    method = extraout_x1;
  }
  __this_00 = (Nekki_SF2_GUI_Shop_InfoPanelContent_MPOFOFAICOB_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_InfoPanelContent_MPOFOFAICOB_TypeInfo,method);
  Nekki_SF2_GUI_Shop_InfoPanelContent_MPOFOFAICOB___ctor(__this_00,(MethodInfo *)0x0);
  ppNVar1 = &(__this->fields).updateEvent;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_IconLabelButton__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IconLabelButton>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<IconLabelButton>__ctor__);
  ppSVar2 = &(__this->fields).PGCBEJGMIMA;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  Nekki_SF2_GUI_Shop_SidePanelContent___ctor
            ((Nekki_SF2_GUI_Shop_SidePanelContent_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void OLICMLPMDDF(object IMMNELPBGIF)  [RVA 0x300ABA0]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$OLICMLPMDDF @ RVA 0x300ABA0

void Nekki_SF2_GUI_Shop_InfoPanelContent__OLICMLPMDDF
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  int *piVar2;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  GGHCLMEFIGO_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar3;
  
  if ((DAT_04565b60 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b60 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar2 = (int *)thunk_FUN_01bda96c();
    if ((0 < *piVar2) &&
       (IKKAMAMLIKA = (__this->fields).KJBDDCNKNNE, IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0)) {
      bVar1 = AMIINPEKKFB__AANBLAAMHIP(IKKAMAMLIKA,(MethodInfo *)0x0);
      method_00 = extraout_x1;
      if (bVar1) {
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
        pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if ((pAVar3 == (ACHLOMELAJE_o *)0x0) ||
           (__this_00 = (pAVar3->fields).OIDPLCLELEN, __this_00 == (GGHCLMEFIGO_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        GGHCLMEFIGO__BOEFGIBCIIL(__this_00,(__this->fields).KJBDDCNKNNE,true,(MethodInfo *)0x0);
        method_00 = extraout_x1_00;
      }
      Nekki_SF2_GUI_Shop_InfoPanelContent__UpdateContent(__this,method_00);
      return;
    }
  }
  return;
}


// ===== private IconLabelButton CNLCOHAHEPN(IconLabelButton IMFNGNGIIAM)  [RVA 0x300ACBC]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$CNLCOHAHEPN @ RVA 0x300ACBC

/* WARNING: Type propagation algorithm not settling */

IconLabelButton_o *
Nekki_SF2_GUI_Shop_InfoPanelContent__CNLCOHAHEPN
          (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,IconLabelButton_o *IMFNGNGIIAM,
          MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  
  if ((DAT_04565b61 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b61 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)IMFNGNGIIAM,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    if ((IMFNGNGIIAM == (IconLabelButton_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)IMFNGNGIIAM,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_GameObject_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if ((bVar1) && ((IMFNGNGIIAM->fields).super.super.super.super.super.m_Interactable != false)) {
      return IMFNGNGIIAM;
    }
  }
  return (IconLabelButton_o *)0x0;
}


// ===== public void Refresh()  [RVA 0x30078F0]
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
    FUN_01bab630(&StringLiteral_15964/*"_FirstGemPurchaseBonusActive"*/);
    FUN_01bab630(&StringLiteral_9307/*"NO_ITEM_NAME"*/);
    FUN_01bab630(&StringLiteral_3535/*"Bonus"*/);
    FUN_01bab630(&StringLiteral_11073/*"RealMoneyItem"*/);
    FUN_01bab630(&StringLiteral_22482/*"{{{0}}}"*/);
    FUN_01bab630(&StringLiteral_10876/*"RaidItemPack"*/);
                    /* try { // try from 031079c8 to 03207a47 has its CatchHandler @ 031079c8
                       catch() { ... } // from try @ 031079c8 with catch @ 031079c8
                       catch() { ... } // from try @ 03107b90 with catch @ 031079c8
                       catch() { ... } // from try @ 03107be8 with catch @ 031079c8
                       catch() { ... } // from try @ 03107c48 with catch @ 031079c8
                       catch() { ... } // from try @ 03107c68 with catch @ 031079c8
                       catch() { ... } // from try @ 03107cac with catch @ 031079c8 */
    FUN_01bab630(&StringLiteral_8722/*"MISSILE"*/);
    FUN_01bab630(&StringLiteral_10823/*"RaidConsumable"*/);
    FUN_01bab630(&StringLiteral_7510/*"InfoPanelContent Refresh. not found TranslatableItemName "*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
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
                      ((pHVar11->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,
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
  bVar7 = System_String__op_Equality(pSVar31,StringLiteral_9307/*"NO_ITEM_NAME"*/,(MethodInfo *)0x0);
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
    pSVar19 = System_String__Concat(StringLiteral_7510/*"InfoPanelContent Refresh. not found TranslatableItemName "*/,pSVar19,(MethodInfo *)0x0);
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
                      ((pHVar11->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,
                       (MethodInfo *)0x0);
    pSVar19 = StringLiteral_1/*""*/;
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
                            ((pJVar15->fields).BGHFADDGPAD,StringLiteral_8722/*"MISSILE"*/,(MethodInfo *)0x0),
         bVar7)) {
        local_64 = iVar9;
        pIVar12 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_64);
        pSVar19 = System_String__Format(StringLiteral_22482/*"{{{0}}}"*/,pIVar12,(MethodInfo *)0x0);
        pSVar31 = System_String__Concat(pSVar31,pSVar19,(MethodInfo *)0x0);
      }
    }
    pHVar11 = (__this->fields).BBODGCMLKFP;
    pNVar32 = (__this->fields)._timerAlias;
    if (pHVar11 == (HOOAAGABMBL_o *)0x0) goto LAB_03107e04;
    bVar7 = System_String__op_Equality
                      ((pHVar11->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,
                       (MethodInfo *)0x0);
    if (bVar7) {
LAB_03107df8:
      iVar9 = 4;
    }
    else {
      pHVar11 = (__this->fields).BBODGCMLKFP;
      if (pHVar11 == (HOOAAGABMBL_o *)0x0) goto LAB_03108384;
      bVar7 = System_String__op_Equality
                        ((pHVar11->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10823/*"RaidConsumable"*/,
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
  pMVar16 = ACHLOMELAJE__HKIEGNBOFCD(pAVar22,StringLiteral_15964/*"_FirstGemPurchaseBonusActive"*/,0,(MethodInfo *)0x0);
  if (((pMVar16 == (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) ||
      (bVar7 = System_String__op_Equality
                         ((pMVar16->fields).JAICMIMBIOA,StringLiteral_1606/*"1"*/,(MethodInfo *)0x0),
      !bVar7)) ||
     ((pHVar11 = (__this->fields).BBODGCMLKFP, pHVar11 == (HOOAAGABMBL_o *)0x0 ||
      (bVar7 = System_String__op_Equality
                         ((pHVar11->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_11073/*"RealMoneyItem"*/,
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
                      ((pHVar11->fields)._DKODBGOHKGH_k__BackingField,StringLiteral_3535/*"Bonus"*/,
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
                          ((pHVar25->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,
                           (MethodInfo *)0x0), !bVar8)) {
      bVar8 = false;
    }
    else {
      pHVar25 = (__this->fields).BBODGCMLKFP;
      if (pHVar25 == (HOOAAGABMBL_o *)0x0) goto LAB_03108384;
                    /* try { // try from 03108144 to 03208147 has its CatchHandler @ 0310816c */
                    /* try { // try from 03108148 to 0320816f has its CatchHandler @ 03107f48 */
      bVar8 = System_String__op_Inequality
                        ((pHVar25->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10823/*"RaidConsumable"*/,
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


// ===== private void GOBCLPJNCJP()  [RVA 0x300A85C]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$GOBCLPJNCJP @ RVA 0x300A85C

void Nekki_SF2_GUI_Shop_InfoPanelContent__GOBCLPJNCJP
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  GGHCLMEFIGO_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar2;
  HOOAAGABMBL_o **ppHVar3;
  
  if ((DAT_04565b63 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b63 = 1;
  }
  ppHVar3 = &(__this->fields).KJBDDCNKNNE;
  *ppHVar3 = (__this->fields).BBODGCMLKFP;
  thunk_FUN_01c20e04(ppHVar3);
  if (*ppHVar3 == (HOOAAGABMBL_o *)0x0) {
    return;
  }
  bVar1 = AMIINPEKKFB__NLJKKOINGGE(*ppHVar3,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (bVar1) {
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
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar2 == (ACHLOMELAJE_o *)0x0) ||
       (__this_00 = (pAVar2->fields).OIDPLCLELEN, __this_00 == (GGHCLMEFIGO_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    GGHCLMEFIGO__BOEFGIBCIIL(__this_00,*ppHVar3,true,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
  Nekki_SF2_GUI_Shop_InfoPanelContent__UpdateContent(__this,method_00);
  return;
}


// ===== public void ShowRaidButton()  [RVA 0x300B400]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$ShowRaidButton @ RVA 0x300B400

void Nekki_SF2_GUI_Shop_InfoPanelContent__ShowRaidButton
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Color_o JNBIEOHKMMI;
  bool bVar2;
  int32_t iVar3;
  ACHLOMELAJE_o *__this_00;
  int64_t iVar4;
  int64_t iVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_List_object__o *__this_01;
  Il2CppObject *pIVar7;
  EEGDOGKBLNG_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x4;
  MethodInfo *method_00;
  MethodInfo *in_x5;
  HOOAAGABMBL_o *pHVar8;
  HOOAAGABMBL_o *pHVar9;
  BHEDGAKGKPO_StaticFields *pBVar10;
  IconLabelButton_o *pIVar11;
  IconLabelButton_o **BECCOGAMKJL;
  Nekki_SF2_GUI_ResolutionImage_o *__this_04;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Color_o UVar16;
  UnityEngine_Color_o EFJKPCADGJH;
  UnityEngine_Color_o NEPACPNPKHJ;
  undefined1 in_stack_ffffffffffffff90;
  undefined7 in_stack_ffffffffffffff91;
  MethodInfo *in_stack_ffffffffffffff98;
  int64_t local_58;
  
  if ((DAT_04565b64 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_12266/*"SpecialButton"*/);
    FUN_01bab630(&StringLiteral_16819/*"btnShopLottery"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04565b64 = 1;
    method = extraout_x1;
  }
  local_58 = 0;
  pHVar8 = (__this->fields).BBODGCMLKFP;
  if (pHVar8 != (HOOAAGABMBL_o *)0x0) {
    bVar1 = (FAIJGJCCKJC_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (pHVar8->klass->_2).naturalAligment) &&
       ((pHVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)FAIJGJCCKJC_TypeInfo))
    {
      if (pHVar8 != (HOOAAGABMBL_o *)0x0) {
        if ((pHVar8->fields)._PLEEGEDKAGM_k__BackingField == 1) {
          pIVar11 = (__this->fields).HNNIFDIPKBJ;
          if (pIVar11 != (IconLabelButton_o *)0x0) {
            UVar16 = LabelButton__get_Color((LabelButton_o *)pIVar11,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Shop_InfoPanelContent__AOHAKEEHGKG
                      (__this,pIVar11,StringLiteral_16819/*"btnShopLottery"*/,UVar16,true,in_x4);
            return;
          }
        }
        else {
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
          __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (__this_00 != (ACHLOMELAJE_o *)0x0) {
            iVar4 = ACHLOMELAJE__HEHFNBKGJLP(__this_00,(MethodInfo *)0x0);
            pHVar9 = (__this->fields).BBODGCMLKFP;
            if (pHVar9 != (HOOAAGABMBL_o *)0x0) {
              iVar5 = HOOAAGABMBL__MNKCHHFDEGH(pHVar9,(MethodInfo *)0x0);
              if (iVar4 < iVar5) {
                if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                UVar16 = FGKGKDEJCOG__IALPNFOEEBP((MethodInfo *)0x0);
                fVar15 = UVar16.fields.a;
                fVar14 = UVar16.fields.b;
                fVar13 = UVar16.fields.g;
                fVar12 = UVar16.fields.r;
              }
              else {
                if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pBVar10 = BHEDGAKGKPO_TypeInfo->static_fields;
                fVar12 = (pBVar10->FHIAKPJBBCB).fields.r;
                fVar13 = (pBVar10->FHIAKPJBBCB).fields.g;
                fVar14 = (pBVar10->FHIAKPJBBCB).fields.b;
                fVar15 = (pBVar10->FHIAKPJBBCB).fields.a;
              }
              pHVar9 = (__this->fields).BBODGCMLKFP;
              if (pHVar9 != (HOOAAGABMBL_o *)0x0) {
                pIVar11 = (__this->fields).KCFECNOELAA;
                local_58 = HOOAAGABMBL__MNKCHHFDEGH(pHVar9,(MethodInfo *)0x0);
                pSVar6 = System_Int64__ToString((int64_t)&local_58,(MethodInfo *)0x0);
                iVar3 = 0;
                UVar16.fields.g = fVar13;
                UVar16.fields.r = fVar12;
                UVar16.fields.a = fVar15;
                UVar16.fields.b = fVar14;
                Nekki_SF2_GUI_Shop_InfoPanelContent__AOHAKEEHGKG
                          (__this,pIVar11,pSVar6,UVar16,false,in_x4);
                pHVar9 = (__this->fields).BBODGCMLKFP;
                if (pHVar9 != (HOOAAGABMBL_o *)0x0) {
                  iVar4 = HOOAAGABMBL__MNKCHHFDEGH(pHVar9,(MethodInfo *)0x0);
                  method_00 = (MethodInfo *)0x1;
                  JNBIEOHKMMI.fields._1_7_ = in_stack_ffffffffffffff91;
                  JNBIEOHKMMI.fields.r._0_1_ = in_stack_ffffffffffffff90;
                  JNBIEOHKMMI.fields._8_8_ = in_stack_ffffffffffffff98;
                  NEPACPNPKHJ.fields.g = fVar13;
                  NEPACPNPKHJ.fields.r = fVar12;
                  NEPACPNPKHJ.fields.a = fVar15;
                  NEPACPNPKHJ.fields.b = fVar14;
                  Nekki_SF2_GUI_Shop_InfoPanelContent__JMKIPMNGBEG
                            (__this,-1,iVar4,iVar3,true,
                             (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),NEPACPNPKHJ,
                             JNBIEOHKMMI,in_x5);
                  if (pHVar8[1].klass == (HOOAAGABMBL_c *)0x0) {
                    return;
                  }
                  __this_01 = (System_Collections_Generic_List_object__o *)
                              ((pHVar8[1].klass)->_1).implementedInterfaces;
                  if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
                    if ((__this_01->fields)._size < 1) {
                      return;
                    }
                    pIVar7 = System_Collections_Generic_List<object>__get_Item
                                       (__this_01,0,
                                        Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Item__
                                       );
                    BECCOGAMKJL = &(__this->fields).BDGGFDABEAO;
                    pIVar11 = *BECCOGAMKJL;
                    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
                    }
                    bVar2 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pIVar11,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if (bVar2) {
                      if ((*BECCOGAMKJL == (IconLabelButton_o *)0x0) ||
                         (pIVar7 == (Il2CppObject *)0x0)) goto LAB_0310b8a0;
                      __this_04 = ((*BECCOGAMKJL)->fields)._icon;
                      pSVar6 = OFFIONDOEPM__CDGICMOFKHE
                                         ((System_String_o *)pIVar7[1].klass,(MethodInfo *)0x0);
                      if (__this_04 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0310b8a0;
                      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                                (__this_04,pSVar6,(MethodInfo *)0x0);
                    }
                    else {
                      if (pIVar7 == (Il2CppObject *)0x0) goto LAB_0310b8a0;
                      method_00 = (MethodInfo *)
                                  OFFIONDOEPM__CDGICMOFKHE
                                            ((System_String_o *)pIVar7[1].klass,(MethodInfo *)0x0);
                      Nekki_SF2_GUI_Shop_InfoPanelContent__ACICKHKFILK
                                (__this,BECCOGAMKJL,StringLiteral_12266/*"SpecialButton"*/,2,
                                 (System_String_o *)method_00,0x14,0,StringLiteral_1567/*"0"*/,true,
                                 in_stack_ffffffffffffff98);
                    }
                    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    __this_02 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                    if (__this_02 != (EEGDOGKBLNG_o *)0x0) {
                      iVar3 = EEGDOGKBLNG__APFFEAJBAEK
                                        (__this_02,(System_String_o *)pIVar7[1].klass,
                                         (MethodInfo *)0x0);
                      if (iVar3 < *(int *)&pIVar7[1].monitor) {
                        if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564();
                        }
                        UVar16 = FGKGKDEJCOG__IALPNFOEEBP((MethodInfo *)0x0);
                        fVar15 = UVar16.fields.a;
                        fVar14 = UVar16.fields.b;
                        fVar13 = UVar16.fields.g;
                        fVar12 = UVar16.fields.r;
                      }
                      else {
                        if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564();
                        }
                        pBVar10 = BHEDGAKGKPO_TypeInfo->static_fields;
                        fVar12 = (pBVar10->FHIAKPJBBCB).fields.r;
                        fVar13 = (pBVar10->FHIAKPJBBCB).fields.g;
                        fVar14 = (pBVar10->FHIAKPJBBCB).fields.b;
                        fVar15 = (pBVar10->FHIAKPJBBCB).fields.a;
                      }
                      pIVar11 = (__this->fields).BDGGFDABEAO;
                      pSVar6 = System_Int32__ToString((int32_t)&pIVar7[1].monitor,(MethodInfo *)0x0)
                      ;
                      EFJKPCADGJH.fields.g = fVar13;
                      EFJKPCADGJH.fields.r = fVar12;
                      EFJKPCADGJH.fields.a = fVar15;
                      EFJKPCADGJH.fields.b = fVar14;
                      Nekki_SF2_GUI_Shop_InfoPanelContent__AOHAKEEHGKG
                                (__this,pIVar11,pSVar6,EFJKPCADGJH,false,method_00);
                      if ((pHVar8->fields)._BGCHJEEOKMG_k__BackingField == false) {
                        return;
                      }
                      pIVar11 = (__this->fields).KCFECNOELAA;
                      if ((pIVar11 != (IconLabelButton_o *)0x0) &&
                         (__this_03 = UnityEngine_Component__get_gameObject
                                                ((UnityEngine_Component_o *)pIVar11,
                                                 (MethodInfo *)0x0),
                         __this_03 != (UnityEngine_GameObject_o *)0x0)) {
                        UnityEngine_GameObject__SetActive(__this_03,false,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_0310b8a0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== private void ALIIMHNKFNO()  [RVA 0x3009514]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$ALIIMHNKFNO @ RVA 0x3009514

void Nekki_SF2_GUI_Shop_InfoPanelContent__ALIIMHNKFNO
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *arg1;
  System_String_o *str1;
  HOOAAGABMBL_o *pHVar3;
  System_String_o *str0;
  int64_t local_40;
  int64_t iStack_38;
  int64_t iStack_30;
  undefined8 uStack_28;
  
  if ((DAT_04565b65 & 1) == 0) {
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    FUN_01bab630(&StringLiteral_22481/*"{{img::{0}}}{{ {1}}}"*/);
    FUN_01bab630(&StringLiteral_14785/*"Video"*/);
    FUN_01bab630(&StringLiteral_9095/*"MiscSprites.ruby"*/);
    DAT_04565b65 = 1;
  }
  pNVar2 = (__this->fields)._descriptionDonate;
  if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    pHVar3 = (__this->fields).BBODGCMLKFP;
    if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
      str0 = (pHVar3->fields)._OICGFKLBNPE_k__BackingField;
      bVar1 = System_String__op_Equality
                        ((pHVar3->fields)._DKODBGOHKGH_k__BackingField,StringLiteral_14785/*"Video"*/,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pHVar3 = (__this->fields).BBODGCMLKFP;
        if (pHVar3 == (HOOAAGABMBL_o *)0x0) goto LAB_03109634;
        iStack_38 = (pHVar3->fields)._OFDIEEPACGC_k__BackingField.fields.hiddenValue;
        local_40 = (pHVar3->fields)._OFDIEEPACGC_k__BackingField.fields.currentCryptoKey;
        uStack_28._0_1_ = (pHVar3->fields)._OFDIEEPACGC_k__BackingField.fields.fakeValueActive;
        uStack_28._1_1_ = (pHVar3->fields)._OFDIEEPACGC_k__BackingField.fields.inited;
        uStack_28._2_6_ =
             *(undefined6 *)&(pHVar3->fields)._OFDIEEPACGC_k__BackingField.fields.field_0x1a;
        iStack_30 = (pHVar3->fields)._OFDIEEPACGC_k__BackingField.fields.fakeValue;
        arg1 = (Il2CppObject *)
               thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,&local_40)
        ;
        str1 = System_String__Format(StringLiteral_22481/*"{{img::{0}}}{{ {1}}}"*/,StringLiteral_9095/*"MiscSprites.ruby"*/,arg1,(MethodInfo *)0x0);
        str0 = System_String__Concat(str0,str1,(MethodInfo *)0x0);
      }
      pNVar2 = (__this->fields)._descriptionDonate;
      if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,str0,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03109634:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NJKNBJPIIOC()  [RVA 0x300838C]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$NJKNBJPIIOC @ RVA 0x300838C

void Nekki_SF2_GUI_Shop_InfoPanelContent__NJKNBJPIIOC
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
  int32_t iStack_64;
  
  if ((DAT_04565b62 & 1) == 0) {
    FUN_01bab630(&DFLJPJMIMHI_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15964/*"_FirstGemPurchaseBonusActive"*/);
    FUN_01bab630(&StringLiteral_9307/*"NO_ITEM_NAME"*/);
    FUN_01bab630(&StringLiteral_3535/*"Bonus"*/);
    FUN_01bab630(&StringLiteral_11073/*"RealMoneyItem"*/);
    FUN_01bab630(&StringLiteral_22482/*"{{{0}}}"*/);
    FUN_01bab630(&StringLiteral_10876/*"RaidItemPack"*/);
    FUN_01bab630(&StringLiteral_8722/*"MISSILE"*/);
    FUN_01bab630(&StringLiteral_10823/*"RaidConsumable"*/);
    FUN_01bab630(&StringLiteral_7510/*"InfoPanelContent Refresh. not found TranslatableItemName "*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
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
  pAVar22 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar22 == (ACHLOMELAJE_o *)0x0) ||
     (__this_00 = (pAVar22->fields).OIDPLCLELEN, __this_00 == (GGHCLMEFIGO_o *)0x0))
  goto LAB_03108384;
  pIVar10 = GGHCLMEFIGO__JNFIBDBHNOA(__this_00,(__this->fields).BBODGCMLKFP,(MethodInfo *)0x0);
  ppIVar29 = &(__this->fields).AAIHPGBKKNM;
  *ppIVar29 = pIVar10;
  thunk_FUN_01c20e04(ppIVar29,pIVar10);
  bVar7 = HCAICJLDDJO__AEFGCHDNCDG(*ppIVar29,(MethodInfo *)0x0);
  pNVar1 = __this;
  if (!bVar7) {
    pNVar1 = (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0;
  }
  (__this->fields).LLJHPAIHMEO = bVar7;
  pNVar20 = __this;
  if (bVar7) {
    if (*ppIVar29 == (IGFGDDANEPE_o *)0x0) goto LAB_03108384;
    pHVar11 = IGFGDDANEPE__JGBDIHJDIHD(*ppIVar29,(MethodInfo *)0x0);
    if (pHVar11 == (HOOAAGABMBL_o *)0x0) goto LAB_03107af4;
    pHVar11 = (__this->fields).BBODGCMLKFP;
    if (pHVar11 == (HOOAAGABMBL_o *)0x0) goto LAB_03108384;
    bVar7 = System_String__op_Inequality
                      ((pHVar11->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,
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
    }
    else {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04563eaa == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04563eaa = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if ((*ppIVar29 == (IGFGDDANEPE_o *)0x0) ||
         (__this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField,
         __this_01 == (DOPEEDABNEK_o *)0x0)) goto LAB_03108384;
      pHVar11 = DOPEEDABNEK__CKKIPBAIEMN
                          (__this_01,((*ppIVar29)->fields).NPFMOEOIEKM,(MethodInfo *)0x0);
      if (pHVar11 == (HOOAAGABMBL_o *)0x0) {
        pSVar31 = (System_String_o *)0x0;
      }
      else {
        pSVar31 = (pHVar11->fields)._HONAAKEIHJI_k__BackingField;
      }
      bVar7 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar31,(MethodInfo *)0x0);
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
      pSVar31 = (pHVar11->fields)._HONAAKEIHJI_k__BackingField;
    }
  }
  pIVar12 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                      (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  pSVar31 = FEEEICKDOFK__PEKFIKKFOEP((BLEFOFGCKEF_o *)pIVar12,pSVar31,(MethodInfo *)0x0);
  bVar7 = System_String__op_Equality(pSVar31,StringLiteral_9307/*"NO_ITEM_NAME"*/,(MethodInfo *)0x0);
  if (bVar7) {
    pHVar11 = (__this->fields).BBODGCMLKFP;
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
    pSVar19 = System_String__Concat(StringLiteral_7510/*"InfoPanelContent Refresh. not found TranslatableItemName "*/,pSVar19,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar19,(MethodInfo *)0x0);
  }
  pHVar11 = (__this->fields).BBODGCMLKFP;
  if (pHVar11 == (HOOAAGABMBL_o *)0x0) {
    pNVar32 = (__this->fields)._timerAlias;
LAB_03107e04:
    iVar9 = 1;
  }
  else {
    pMVar21 = (MethodInfo *)0x0;
    bVar7 = System_String__op_Equality
                      ((pHVar11->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,
                       (MethodInfo *)0x0);
    pSVar19 = StringLiteral_1/*""*/;
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
                            ((pJVar15->fields).BGHFADDGPAD,StringLiteral_8722/*"MISSILE"*/,(MethodInfo *)0x0),
         bVar7)) {
        iStack_64 = iVar9;
        pIVar12 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&iStack_64);
        pSVar19 = System_String__Format(StringLiteral_22482/*"{{{0}}}"*/,pIVar12,(MethodInfo *)0x0);
        pSVar31 = System_String__Concat(pSVar31,pSVar19,(MethodInfo *)0x0);
      }
    }
    pHVar11 = (__this->fields).BBODGCMLKFP;
    pNVar32 = (__this->fields)._timerAlias;
    if (pHVar11 == (HOOAAGABMBL_o *)0x0) goto LAB_03107e04;
    bVar7 = System_String__op_Equality
                      ((pHVar11->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,
                       (MethodInfo *)0x0);
    if (bVar7) {
LAB_03107df8:
      iVar9 = 4;
    }
    else {
      pHVar11 = (__this->fields).BBODGCMLKFP;
      if (pHVar11 == (HOOAAGABMBL_o *)0x0) goto LAB_03108384;
      bVar7 = System_String__op_Equality
                        ((pHVar11->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10823/*"RaidConsumable"*/,
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
  pMVar16 = ACHLOMELAJE__HKIEGNBOFCD(pAVar22,StringLiteral_15964/*"_FirstGemPurchaseBonusActive"*/,0,(MethodInfo *)0x0);
  if (((pMVar16 == (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) ||
      (bVar7 = System_String__op_Equality
                         ((pMVar16->fields).JAICMIMBIOA,StringLiteral_1606/*"1"*/,(MethodInfo *)0x0),
      !bVar7)) ||
     ((pHVar11 = (__this->fields).BBODGCMLKFP, pHVar11 == (HOOAAGABMBL_o *)0x0 ||
      (bVar7 = System_String__op_Equality
                         ((pHVar11->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_11073/*"RealMoneyItem"*/,
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
    pVVar17 = (VirtualInvokeData *)FUN_01b81914(pIVar12,DFLJPJMIMHI_TypeInfo,8);
LAB_03107fe0:
    fVar35 = (float)(*pVVar17->methodPtr)(pIVar12,pVVar17->method);
    if (pNVar32 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03108384;
  }
  else {
    pHVar11 = (__this->fields).BBODGCMLKFP;
    if (pHVar11 == (HOOAAGABMBL_o *)0x0) goto LAB_03108384;
    bVar7 = System_String__op_Equality
                      ((pHVar11->fields)._DKODBGOHKGH_k__BackingField,StringLiteral_3535/*"Bonus"*/,
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
  Nekki_SF2_GUI_Shop_InfoPanelContent__ShowButton(__this,method_02);
  pHVar11 = (__this->fields).BBODGCMLKFP;
  pMVar21 = extraout_x1_02;
  if (pHVar11 == (HOOAAGABMBL_o *)0x0) {
LAB_0310807c:
    Nekki_SF2_GUI_Shop_InfoPanelContent__LockButton(__this,pMVar21);
  }
  else {
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
      bVar7 = pHVar11 != (HOOAAGABMBL_o *)0x0 && (__this->fields).LLJHPAIHMEO != false;
    }
    pHVar25 = (__this->fields).BBODGCMLKFP;
    if ((pHVar25 == (HOOAAGABMBL_o *)0x0) ||
       (bVar8 = System_String__op_Inequality
                          ((pHVar25->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,
                           (MethodInfo *)0x0), !bVar8)) {
      bVar8 = false;
    }
    else {
      pHVar25 = (__this->fields).BBODGCMLKFP;
      if (pHVar25 == (HOOAAGABMBL_o *)0x0) goto LAB_03108384;
      bVar8 = System_String__op_Inequality
                        ((pHVar25->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10823/*"RaidConsumable"*/,
                         (MethodInfo *)0x0);
    }
    pNVar18 = (__this->fields)._parametersPanel;
    if ((pNVar18 != (Nekki_SF2_GUI_Shop_ParametersPanel_o *)0x0) &&
       (__this_03 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar18,(MethodInfo *)0x0),
       __this_03 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_03,bVar8,(MethodInfo *)0x0);
      if (bVar8 != false) {
        pNVar18 = (__this->fields)._parametersPanel;
        if (pNVar18 == (Nekki_SF2_GUI_Shop_ParametersPanel_o *)0x0) goto LAB_03108384;
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


// ===== private void OOCCHCBLHBE()  [RVA 0x300B088]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$OOCCHCBLHBE @ RVA 0x300B088

void Nekki_SF2_GUI_Shop_InfoPanelContent__OOCCHCBLHBE
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_List_IconLabelButton__o *__this_01;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04565b66 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IconLabelButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IconLabelButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IconLabelButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IconLabelButton>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b66 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).PGCBEJGMIMA;
  if (__this_01 != (System_Collections_Generic_List_IconLabelButton__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<IconLabelButton>_GetEnumerator__);
    while( true ) {
      do {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<IconLabelButton>_MoveNext__
                          );
        __this_00 = local_48.fields._current;
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_List_Enumerator<IconLabelButton>_Dispose__);
          return;
        }
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
      } while (!bVar1);
      if ((UnityEngine_UI_Selectable_o *)__this_00 == (UnityEngine_UI_Selectable_o *)0x0) break;
      (*(code *)((UnityEngine_UI_Selectable_c *)__this_00->klass)[1].rgctx_data)
                (0x3f800000,__this_00,
                 ((UnityEngine_UI_Selectable_c *)__this_00->klass)[1]._2.typeHierarchy);
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)__this_00,true,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== private void JMKIPMNGBEG(long EMJHGPFHPEG, long IPGOFHMGFOI, int EBJIEEKBHDK, bool IBHEJHNKABF, Color HOGGDIKLIPB, Color NEPACPNPKHJ, Color JNBIEOHKMMI)  [RVA 0x300B8A4]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$JMKIPMNGBEG @ RVA 0x300B8A4

void Nekki_SF2_GUI_Shop_InfoPanelContent__JMKIPMNGBEG
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,int64_t EMJHGPFHPEG,
               int64_t IPGOFHMGFOI,int32_t EBJIEEKBHDK,bool IBHEJHNKABF,
               UnityEngine_Color_o HOGGDIKLIPB,UnityEngine_Color_o NEPACPNPKHJ,
               UnityEngine_Color_o JNBIEOHKMMI,MethodInfo *method)

{
  int64_t iVar1;
  UnityEngine_GameObject_o *pUVar2;
  System_String_o *pSVar3;
  IconLabelButton_o *pIVar4;
  int64_t local_78;
  int64_t iStack_28;
  
  local_78 = IPGOFHMGFOI;
  iStack_28 = EMJHGPFHPEG;
  if ((DAT_04565b67 & 1) == 0) {
    FUN_01bab630(&StringLiteral_20992/*"shopFree"*/,EMJHGPFHPEG,IPGOFHMGFOI,EBJIEEKBHDK);
    DAT_04565b67 = 1;
  }
  pIVar4 = (__this->fields).BMHDNILOKHO;
  if (pIVar4 != (IconLabelButton_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pIVar4,IBHEJHNKABF,(MethodInfo *)0x0);
    if (-1 < EMJHGPFHPEG) {
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pIVar4,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_0310ba64;
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      LabelButton__set_Color((LabelButton_o *)pIVar4,HOGGDIKLIPB,(MethodInfo *)0x0);
      if (EMJHGPFHPEG < 1) {
        LabelButton__set_Alias((LabelButton_o *)pIVar4,StringLiteral_20992/*"shopFree"*/,(MethodInfo *)0x0);
      }
      else {
        pSVar3 = System_Int64__ToString((int64_t)&iStack_28,(MethodInfo *)0x0);
        LabelButton__set_Text((LabelButton_o *)pIVar4,pSVar3,(MethodInfo *)0x0);
      }
    }
    pIVar4 = (__this->fields).KCFECNOELAA;
    if (pIVar4 != (IconLabelButton_o *)0x0) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pIVar4,IBHEJHNKABF,(MethodInfo *)0x0);
      iVar1 = local_78;
      if (-1 < local_78) {
        pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pIVar4,(MethodInfo *)0x0);
        if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_0310ba64;
        UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
        LabelButton__set_Color((LabelButton_o *)pIVar4,NEPACPNPKHJ,(MethodInfo *)0x0);
        if (iVar1 < 1) {
          LabelButton__set_Alias((LabelButton_o *)pIVar4,StringLiteral_20992/*"shopFree"*/,(MethodInfo *)0x0);
        }
        else {
          pSVar3 = System_Int64__ToString((int64_t)&local_78,(MethodInfo *)0x0);
          LabelButton__set_Text((LabelButton_o *)pIVar4,pSVar3,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
LAB_0310ba64:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetFlashingButtons(string PKOJKJJKCAL)  [RVA 0x300BD60]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$SetFlashingButtons @ RVA 0x300BD60

void Nekki_SF2_GUI_Shop_InfoPanelContent__SetFlashingButtons
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,System_String_o *PKOJKJJKCAL,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_InfoPanelContent_FEGNCOGLDFA_o *__this_00;
  System_Action_T__o *action;
  System_Collections_Generic_List_IconLabelButton__o *__this_01;
  
  if ((DAT_04565b68 & 1) == 0) {
    FUN_01bab630(&System_Action<IconLabelButton>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_InfoPanelContent_FEGNCOGLDFA_LOJIFIHGKEL__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_InfoPanelContent_FEGNCOGLDFA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IconLabelButton>_ForEach__);
    DAT_04565b68 = 1;
  }
  __this_00 = (Nekki_SF2_GUI_Shop_InfoPanelContent_FEGNCOGLDFA_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_InfoPanelContent_FEGNCOGLDFA_TypeInfo);
  Nekki_SF2_GUI_Shop_InfoPanelContent_FEGNCOGLDFA___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Shop_InfoPanelContent_FEGNCOGLDFA_o *)0x0) {
    (__this_00->fields).flashingButtons = PKOJKJJKCAL;
    thunk_FUN_01c20e04(&__this_00->fields,PKOJKJJKCAL);
    __this_01 = (__this->fields).PGCBEJGMIMA;
    action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<IconLabelButton>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_IconLabelButton__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_01,action,
                 Method_System_Collections_Generic_List<IconLabelButton>_ForEach__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HMDPBFDLELC(long LFJGFLNMBMC)  [RVA 0x3009258]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$HMDPBFDLELC @ RVA 0x3009258

void Nekki_SF2_GUI_Shop_InfoPanelContent__HMDPBFDLELC
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,int64_t LFJGFLNMBMC,MethodInfo *method
               )

{
  Nekki_SF2_GUI_LabelAlias_o **ppNVar1;
  IconLabelButton_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  
                    /* try { // try from 03109260 to 0320926f has its CatchHandler @ 03109428 */
                    /* try { // try from 03109270 to 0320928f has its CatchHandler @ 03109438 */
  if ((DAT_04565b69 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInChildren<LabelAlias>__);
    FUN_01bab630(&FEPCHKMAIBL_TypeInfo);
                    /* try { // try from 03109290 to 0320929b has its CatchHandler @ 03109424 */
    FUN_01bab630(&StringLiteral_12052/*"ShopUpgradeNow"*/);
    DAT_04565b69 = 1;
  }
  ppNVar1 = &(__this->fields).FLLKPPCFJAG;
                    /* try { // try from 031092ac to 032092b3 has its CatchHandler @ 03109420 */
  if ((__this->fields).FLLKPPCFJAG == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    __this_00 = (__this->fields).PPBLJHFNPKG;
    if (__this_00 == (IconLabelButton_o *)0x0) goto LAB_03109350;
    pNVar2 = (Nekki_SF2_GUI_LabelAlias_o *)
             UnityEngine_Component__GetComponentInChildren<object>
                       ((UnityEngine_Component_o *)__this_00,
                        Method_UnityEngine_Component_GetComponentInChildren<LabelAlias>__);
    *ppNVar1 = pNVar2;
    thunk_FUN_01c20e04(ppNVar1,pNVar2);
  }
                    /* try { // try from 031092dc to 032092eb has its CatchHandler @ 03109448 */
  if ((FEPCHKMAIBL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar2 = *ppNVar1;
                    /* try { // try from 031092fc to 032092ff has its CatchHandler @ 03109444 */
                    /* try { // try from 03109300 to 032093a3 has its CatchHandler @ 0310944c */
  if (FEPCHKMAIBL_TypeInfo->static_fields->JKIEAGJNDFE < LFJGFLNMBMC) {
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03109328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                (pNVar2,(__this->fields).OLHENOKIMKB,(pNVar2->klass->vtable)._75_set_text.method);
      return;
    }
  }
  else if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,StringLiteral_12052/*"ShopUpgradeNow"*/,(MethodInfo *)0x0);
    return;
  }
LAB_03109350:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GJGOBMPLAFA()  [RVA 0x300A94C]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$GJGOBMPLAFA @ RVA 0x300A94C

void Nekki_SF2_GUI_Shop_InfoPanelContent__GJGOBMPLAFA
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  HOOAAGABMBL_o *ANMFBABEMFD;
  
  if ((DAT_04565b6a & 1) == 0) {
    FUN_01bab630(&FEPCHKMAIBL_TypeInfo);
    DAT_04565b6a = 1;
    method = extraout_x1;
  }
  ANMFBABEMFD = (__this->fields).KJBDDCNKNNE;
  if (ANMFBABEMFD != (HOOAAGABMBL_o *)0x0) {
    if ((FEPCHKMAIBL_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(FEPCHKMAIBL_TypeInfo,method);
    }
    FEPCHKMAIBL__DDKMAJOBNFM(ANMFBABEMFD,(System_Action_int__int__o *)0x0,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Shop_InfoPanelContent__UpdateContent(__this,method_00);
    return;
  }
  return;
}


// ===== private void AOHAKEEHGKG(IconLabelButton BECCOGAMKJL, string EHNFGMGKCHO, Color EFJKPCADGJH, bool JCLPIKHEKBB = False)  [RVA 0x300658C]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$AOHAKEEHGKG @ RVA 0x300658C

void Nekki_SF2_GUI_Shop_InfoPanelContent__AOHAKEEHGKG
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,IconLabelButton_o *BECCOGAMKJL,
               System_String_o *EHNFGMGKCHO,UnityEngine_Color_o EFJKPCADGJH,bool JCLPIKHEKBB,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  if ((DAT_04565b6b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b6b = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)BECCOGAMKJL,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((BECCOGAMKJL != (IconLabelButton_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)BECCOGAMKJL,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    LabelButton__set_Color((LabelButton_o *)BECCOGAMKJL,EFJKPCADGJH,(MethodInfo *)0x0);
    if (JCLPIKHEKBB) {
      LabelButton__set_Alias((LabelButton_o *)BECCOGAMKJL,EHNFGMGKCHO,(MethodInfo *)0x0);
      method_00 = extraout_x1;
    }
    else {
      LabelButton__set_Text((LabelButton_o *)BECCOGAMKJL,EHNFGMGKCHO,(MethodInfo *)0x0);
      method_00 = extraout_x1_00;
    }
    Nekki_SF2_GUI_Shop_InfoPanelContent__ECPADJDPHLL(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KGKJDFLBLNM(TradeDialog.KEHKALMFNHN CPECAEHDDDB, CAKCKIAJAFO CJNHFNHJHPE, long PGGOPJDLPDI, long MMDLBPONFAF, Action<object> BLMFLPJJMPF, NLPJLHOEAOE.GHFILAJDFLC KLPEHBCJBFC, long OHLGEMOFODG = 0)  [RVA 0x3006E68]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$KGKJDFLBLNM @ RVA 0x3006E68

void Nekki_SF2_GUI_Shop_InfoPanelContent__KGKJDFLBLNM
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,int32_t CPECAEHDDDB,
               int32_t CJNHFNHJHPE,int64_t PGGOPJDLPDI,int64_t MMDLBPONFAF,
               System_Action_object__o *BLMFLPJJMPF,int32_t KLPEHBCJBFC,int64_t OHLGEMOFODG,
               MethodInfo *method)

{
  byte bVar1;
  HOOAAGABMBL_c *LMMIEAICFHL;
  HOOAAGABMBL_o *pHVar2;
  HOOAAGABMBL_o **ppHVar3;
  
  if ((DAT_04565b6c & 1) == 0) {
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565b6c = 1;
  }
  ppHVar3 = &(__this->fields).KJBDDCNKNNE;
  *ppHVar3 = (__this->fields).BBODGCMLKFP;
  thunk_FUN_01c20e04(ppHVar3);
  if (MMDLBPONFAF < PGGOPJDLPDI) {
    pHVar2 = (__this->fields).BBODGCMLKFP;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    MGNPHCAAEIO__EHEMFMCGKKK(pHVar2,KLPEHBCJBFC,(MethodInfo *)0x0);
    return;
  }
  pHVar2 = *ppHVar3;
  if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
    bVar1 = (FAIJGJCCKJC_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (pHVar2->klass->_2).naturalAligment) &&
       ((pHVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)FAIJGJCCKJC_TypeInfo))
    {
      LMMIEAICFHL = pHVar2[1].klass;
      if (LMMIEAICFHL == (HOOAAGABMBL_c *)0x0) goto LAB_03107020;
      if (*(char *)&(LMMIEAICFHL->_1).interfaceOffsets != '\0') {
        JJPNLEPEAFM__FOMGGGJEKEA
                  ((JMDPBFOCHHP_ENBCJNLAHAC_o *)LMMIEAICFHL,(JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0,
                   BLMFLPJJMPF,StringLiteral_1/*""*/,StringLiteral_1/*""*/,false,1,2,(System_String_o *)0x0,
                   (System_String_o *)0x0,2,1,false,(MethodInfo *)0x0);
        return;
      }
    }
    JJPNLEPEAFM__JHMPDKFFLPN
              (CPECAEHDDDB,CJNHFNHJHPE,PGGOPJDLPDI,BLMFLPJJMPF,OHLGEMOFODG,
               (pHVar2->fields)._COIPKAKHDFP_k__BackingField,false,(MethodInfo *)0x0);
    return;
  }
LAB_03107020:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_ItemInfo(HOOAAGABMBL CJNHFNHJHPE)  [RVA 0x300BE44]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$set_ItemInfo @ RVA 0x300BE44

void Nekki_SF2_GUI_Shop_InfoPanelContent__set_ItemInfo
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,HOOAAGABMBL_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  MethodInfo *method_00;
  
  (__this->fields).BBODGCMLKFP = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_Shop_InfoPanelContent__Refresh(__this,method_00);
  return;
}


// ===== private string MABIFJPJJIE(int JPIEHMHGPEO, long FOHFEBNEFKO, string FNLDECDGPBF)  [RVA 0x3006330]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$MABIFJPJJIE @ RVA 0x3006330

System_String_o *
Nekki_SF2_GUI_Shop_InfoPanelContent__MABIFJPJJIE
          (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,int32_t JPIEHMHGPEO,int64_t FOHFEBNEFKO,
          System_String_o *FNLDECDGPBF,MethodInfo *method)

{
  System_String_o **ppSVar1;
  int64_t OIHNACKJOJG;
  MGNPHCAAEIO_HLAKGGFFNAO_o *__this_00;
  HBNENINHPGF_o *pHVar2;
  System_String_o *str3;
  System_String_o *pSVar3;
  float fVar4;
  
  if ((DAT_04565b6d & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_2422/*"<quad name="*/);
    FUN_01bab630(&StringLiteral_548/*" usedsize=100 > "*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565b6d = 1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = MGNPHCAAEIO_TypeInfo->static_fields->BHAAICEFMBC;
  if (__this_00 != (MGNPHCAAEIO_HLAKGGFFNAO_o *)0x0) {
    pHVar2 = MGNPHCAAEIO_HLAKGGFFNAO__BHJOLIJDBLO(__this_00,FNLDECDGPBF,(MethodInfo *)0x0);
    ppSVar1 = (System_String_o **)&StringLiteral_1/*""*/;
    if (pHVar2 != (HBNENINHPGF_o *)0x0) {
      ppSVar1 = &(pHVar2->fields)._PGCEKJLODEJ_k__BackingField;
    }
    pSVar3 = *ppSVar1;
    if (0 < JPIEHMHGPEO) {
      fVar4 = (float)FOHFEBNEFKO / ((float)JPIEHMHGPEO / 100.0 + 1.0);
      OIHNACKJOJG = -0x7ffffffffffffff8;
      if (fVar4 != INFINITY) {
        OIHNACKJOJG = ((long)fVar4 / 10) * 10;
      }
      pSVar3 = Nekki_SF2_GUI_Shop_InfoPanelContent__BPODLFGBCDE
                         (pSVar3,OIHNACKJOJG,FOHFEBNEFKO,JPIEHMHGPEO,method);
      return pSVar3;
    }
    if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    str3 = BJFCCEEPHOF__POMAAOILGAL(FOHFEBNEFKO,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat
                       (StringLiteral_2422/*"<quad name="*/,pSVar3,StringLiteral_548/*" usedsize=100 > "*/,str3,(MethodInfo *)0x0);
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool OJCGBHPFEOJ(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x300A5D0]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$OJCGBHPFEOJ @ RVA 0x300A5D0

bool Nekki_SF2_GUI_Shop_InfoPanelContent__OJCGBHPFEOJ
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,
               MethodInfo *method)

{
  bool bVar1;
  DNELIPCHKLK_o *pDVar2;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  DNELIPCHKLK_o **ppDVar3;
  DNELIPCHKLK_o *pDVar4;
  
  if ((DAT_04565b6e & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565b6e = 1;
  }
  if (AAJBIMFNMBB != (PKHMIGFEJCL_o *)0x0) {
    ppDVar3 = &(AAJBIMFNMBB->fields).NMHCLFFOMJH;
    pDVar4 = *ppDVar3;
    pDVar2 = DNELIPCHKLK__OBECCOPBADO((MethodInfo *)0x0);
    *ppDVar3 = pDVar2;
    thunk_FUN_01c20e04(ppDVar3,pDVar2);
    (AAJBIMFNMBB->fields).PNPKEKHEMCD = StringLiteral_1/*""*/;
    thunk_FUN_01c20e04();
    (AAJBIMFNMBB->fields).LOLFFJGLKLD = StringLiteral_1/*""*/;
    thunk_FUN_01c20e04();
    (AAJBIMFNMBB->fields).CJLNOJMBNPN = (__this->fields).BBODGCMLKFP;
    thunk_FUN_01c20e04(&AAJBIMFNMBB->fields);
    __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      bVar1 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests
                        (__this_00,0xc,(MethodInfo *)0x0);
      *ppDVar3 = pDVar4;
      thunk_FUN_01c20e04(ppDVar3,pDVar4);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Init()  [RVA 0x300BE60]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$Init @ RVA 0x300BE60

void Nekki_SF2_GUI_Shop_InfoPanelContent__Init
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  ACHLOMELAJE_o *pAVar4;
  System_Collections_Generic_List_HOOAAGABMBL__o **ppSVar5;
  UnityEngine_Object_o *pUVar6;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if ((DAT_04565b6f & 1) == 0) {
    FUN_01bab630(&FEPCHKMAIBL_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_9098/*"MiscSprites.video_large"*/);
    FUN_01bab630(&StringLiteral_7352/*"ImmediatelyDeliveryButton"*/);
    FUN_01bab630(&StringLiteral_7353/*"ImmediatelyDeliveryForADButton"*/);
    FUN_01bab630(&StringLiteral_4618/*"ConsumableButton"*/);
    FUN_01bab630(&StringLiteral_6591/*"FreeButton"*/);
    FUN_01bab630(&StringLiteral_10189/*"PaymentButton"*/);
    FUN_01bab630(&StringLiteral_6869/*"GoldButton"*/);
    FUN_01bab630(&StringLiteral_1573/*"0.00 USD"*/);
    FUN_01bab630(&StringLiteral_11455/*"RubyUpgradeButton"*/);
    FUN_01bab630(&StringLiteral_6871/*"GoldUpgradeButton"*/);
    FUN_01bab630(&StringLiteral_8689/*"LotteryButton"*/);
    FUN_01bab630(&StringLiteral_11453/*"RubyButton"*/);
    FUN_01bab630(&StringLiteral_9095/*"MiscSprites.ruby"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04565b6f = 1;
    method = extraout_x1;
  }
  pUVar6 = (UnityEngine_Object_o *)(__this->fields)._buttonPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar6 = (UnityEngine_Object_o *)(__this->fields)._buttonPanel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
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
      pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar4 == (ACHLOMELAJE_o *)0x0) goto LAB_0310c318;
      Nekki_SF2_GUI_Shop_InfoPanelContent__ACICKHKFILK
                (__this,&(__this->fields).BMHDNILOKHO,StringLiteral_6869/*"GoldButton"*/,2,
                 (pAVar4->fields).FAAJGHKHEBI,1,0,StringLiteral_1567/*"0"*/,false,in_stack_ffffffffffffffb8
                );
      Nekki_SF2_GUI_Shop_InfoPanelContent__ACICKHKFILK
                (__this,&(__this->fields).KCFECNOELAA,StringLiteral_11453/*"RubyButton"*/,2,StringLiteral_9095/*"MiscSprites.ruby"*/,2,3,
                 StringLiteral_1567/*"0"*/,false,in_stack_ffffffffffffffb8);
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar4 == (ACHLOMELAJE_o *)0x0) goto LAB_0310c318;
      Nekki_SF2_GUI_Shop_InfoPanelContent__ACICKHKFILK
                (__this,&(__this->fields).CAMONFIFEEA,StringLiteral_6871/*"GoldUpgradeButton"*/,4,
                 (pAVar4->fields).FAAJGHKHEBI,8,0,StringLiteral_1567/*"0"*/,false,in_stack_ffffffffffffffb8
                );
      Nekki_SF2_GUI_Shop_InfoPanelContent__ACICKHKFILK
                (__this,&(__this->fields).HACELDGGHLJ,StringLiteral_11455/*"RubyUpgradeButton"*/,4,StringLiteral_9095/*"MiscSprites.ruby"*/,9,3,
                 StringLiteral_1567/*"0"*/,false,in_stack_ffffffffffffffb8);
      Nekki_SF2_GUI_Shop_InfoPanelContent__ACICKHKFILK
                (__this,&(__this->fields).FELGNBGPJFO,StringLiteral_7352/*"ImmediatelyDeliveryButton"*/,2,StringLiteral_9095/*"MiscSprites.ruby"*/,0xb,0,
                 StringLiteral_1567/*"0"*/,false,in_stack_ffffffffffffffb8);
      method_01 = StringLiteral_7353/*"ImmediatelyDeliveryForADButton"*/;
      Nekki_SF2_GUI_Shop_InfoPanelContent__ACICKHKFILK
                (__this,&(__this->fields).PPBLJHFNPKG,(System_String_o *)StringLiteral_7353/*"ImmediatelyDeliveryForADButton"*/,2,
                 StringLiteral_9098/*"MiscSprites.video_large"*/,0xc,3,StringLiteral_1/*""*/,false,in_stack_ffffffffffffffb8);
      if ((FEPCHKMAIBL_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      Nekki_SF2_GUI_Shop_InfoPanelContent__GKPCOMLBGCO
                (__this,FEPCHKMAIBL_TypeInfo->static_fields->JKIEAGJNDFE,method_01);
      Nekki_SF2_GUI_Shop_InfoPanelContent__ACICKHKFILK
                (__this,&(__this->fields).HMANCFHBJIN,StringLiteral_4618/*"ConsumableButton"*/,2,StringLiteral_9095/*"MiscSprites.ruby"*/,0x13,0
                 ,StringLiteral_1567/*"0"*/,false,in_stack_ffffffffffffffb8);
      Nekki_SF2_GUI_Shop_InfoPanelContent__ACICKHKFILK
                (__this,&(__this->fields).MDKMGENBAOJ,StringLiteral_10189/*"PaymentButton"*/,2,StringLiteral_1/*""*/,3,0,
                 StringLiteral_1573/*"0.00 USD"*/,false,in_stack_ffffffffffffffb8);
      Nekki_SF2_GUI_Shop_InfoPanelContent__ACICKHKFILK
                (__this,&(__this->fields).CJMBPDHIHLO,StringLiteral_6591/*"FreeButton"*/,2,StringLiteral_1/*""*/,0xe,0,
                 StringLiteral_1/*""*/,false,in_stack_ffffffffffffffb8);
      Nekki_SF2_GUI_Shop_InfoPanelContent__ACICKHKFILK
                (__this,&(__this->fields).HNNIFDIPKBJ,StringLiteral_8689/*"LotteryButton"*/,2,StringLiteral_1/*""*/,4,0,
                 StringLiteral_1/*""*/,false,in_stack_ffffffffffffffb8);
    }
  }
  pNVar2 = (__this->fields)._timerAlias;
  if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._timerAlias;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                (pNVar2,StringLiteral_1/*""*/,(pNVar2->klass->vtable)._75_set_text.method);
      Nekki_SF2_GUI_Shop_InfoPanelContent__LFLGIOKBFCG(__this,method_00);
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = MGNPHCAAEIO__OKJKIOKPKEJ((MethodInfo *)0x0);
      ppSVar5 = &(__this->fields).MCDJCCBKFGP;
      *ppSVar5 = pSVar3;
      thunk_FUN_01c20e04(ppSVar5,pSVar3);
      return;
    }
  }
LAB_0310c318:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void PaymentOrFreeDoubleClickBuy()  [RVA 0x300C31C]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$PaymentOrFreeDoubleClickBuy @ RVA 0x300C31C

void Nekki_SF2_GUI_Shop_InfoPanelContent__PaymentOrFreeDoubleClickBuy
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this_00;
  IconLabelButton_o *x;
  UnityEngine_EventSystems_EventSystem_o *eventSystem;
  UnityEngine_EventSystems_PointerEventData_o *__this_01;
  UnityEngine_GameObject_o *target;
  MethodInfo *in_x2;
  
  __this_00 = __this;
  if ((DAT_04565b70 & 1) == 0) {
    FUN_01bab630(&UnityEngine_EventSystems_EventSystem_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IPointerClickHandler>__);
    FUN_01bab630(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    __this_00 = (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)
                FUN_01bab630(&UnityEngine_EventSystems_PointerEventData_TypeInfo);
    DAT_04565b70 = 1;
  }
  x = Nekki_SF2_GUI_Shop_InfoPanelContent__CNLCOHAHEPN(__this_00,(__this->fields).BDGGFDABEAO,in_x2)
  ;
  if (((((x == (IconLabelButton_o *)0x0) &&
        (x = Nekki_SF2_GUI_Shop_InfoPanelContent__CNLCOHAHEPN
                       ((Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0,(__this->fields).BMHDNILOKHO,
                        in_x2), x == (IconLabelButton_o *)0x0)) &&
       (x = Nekki_SF2_GUI_Shop_InfoPanelContent__CNLCOHAHEPN
                      ((Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0,(__this->fields).CAMONFIFEEA,
                       in_x2), x == (IconLabelButton_o *)0x0)) &&
      ((x = Nekki_SF2_GUI_Shop_InfoPanelContent__CNLCOHAHEPN
                      ((Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0,(__this->fields).HMANCFHBJIN,
                       in_x2), x == (IconLabelButton_o *)0x0 &&
       (x = Nekki_SF2_GUI_Shop_InfoPanelContent__CNLCOHAHEPN
                      ((Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0,(__this->fields).FELGNBGPJFO,
                       in_x2), x == (IconLabelButton_o *)0x0)))) &&
     ((x = Nekki_SF2_GUI_Shop_InfoPanelContent__CNLCOHAHEPN
                     ((Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0,(__this->fields).KCFECNOELAA,
                      in_x2), x == (IconLabelButton_o *)0x0 &&
      ((x = Nekki_SF2_GUI_Shop_InfoPanelContent__CNLCOHAHEPN
                      ((Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0,(__this->fields).HACELDGGHLJ,
                       in_x2), x == (IconLabelButton_o *)0x0 &&
       (x = Nekki_SF2_GUI_Shop_InfoPanelContent__CNLCOHAHEPN
                      ((Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0,(__this->fields).MDKMGENBAOJ,
                       in_x2), x == (IconLabelButton_o *)0x0)))))) {
    x = Nekki_SF2_GUI_Shop_InfoPanelContent__CNLCOHAHEPN
                  ((Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0,(__this->fields).HNNIFDIPKBJ,in_x2);
  }
                    /* try { // try from 0310c418 to 0320c8bb has its CatchHandler @ 0310c418
                       catch() { ... } // from try @ 0310c418 with catch @ 0310c418
                       catch() { ... } // from try @ 0310c974 with catch @ 0310c418
                       catch() { ... } // from try @ 0310d0a0 with catch @ 0310c418
                       catch() { ... } // from try @ 0310d254 with catch @ 0310c418
                       catch() { ... } // from try @ 0310d34c with catch @ 0310c418
                       catch() { ... } // from try @ 0310d4a4 with catch @ 0310c418
                       catch() { ... } // from try @ 0310d4e4 with catch @ 0310c418
                       catch() { ... } // from try @ 0310d528 with catch @ 0310c418
                       catch() { ... } // from try @ 0310d5a8 with catch @ 0310c418 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((UnityEngine_EventSystems_EventSystem_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  eventSystem = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  __this_01 = (UnityEngine_EventSystems_PointerEventData_o *)
              thunk_FUN_01bda818(UnityEngine_EventSystems_PointerEventData_TypeInfo);
  UnityEngine_EventSystems_PointerEventData___ctor(__this_01,eventSystem,(MethodInfo *)0x0);
  if (x != (IconLabelButton_o *)0x0) {
    target = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
    if ((UnityEngine_EventSystems_ExecuteEvents_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
    }
    if (DAT_04565b85 == '\0') {
      FUN_01bab630(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
      DAT_04565b85 = '\x01';
    }
    if ((UnityEngine_EventSystems_ExecuteEvents_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_EventSystems_ExecuteEvents__Execute<object>
              (target,(UnityEngine_EventSystems_BaseEventData_o *)__this_01,
               (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T__o *)
               UnityEngine_EventSystems_ExecuteEvents_TypeInfo->static_fields->s_PointerClickHandler
               ,Method_UnityEngine_EventSystems_ExecuteEvents_Execute<IPointerClickHandler>__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LockButton()  [RVA 0x300B240]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$LockButton @ RVA 0x300B240

void Nekki_SF2_GUI_Shop_InfoPanelContent__LockButton
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_List_IconLabelButton__o *__this_01;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04565b71 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IconLabelButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IconLabelButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IconLabelButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IconLabelButton>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b71 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).PGCBEJGMIMA;
  if (__this_01 != (System_Collections_Generic_List_IconLabelButton__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<IconLabelButton>_GetEnumerator__);
    while( true ) {
      do {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<IconLabelButton>_MoveNext__
                          );
        __this_00 = local_48.fields._current;
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_List_Enumerator<IconLabelButton>_Dispose__);
          return;
        }
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
      } while (!bVar1);
      if ((UnityEngine_UI_Selectable_o *)__this_00 == (UnityEngine_UI_Selectable_o *)0x0) break;
      (*(code *)((UnityEngine_UI_Selectable_c *)__this_00->klass)[1].rgctx_data)
                (0x3f333333,__this_00,
                 ((UnityEngine_UI_Selectable_c *)__this_00->klass)[1]._2.typeHierarchy);
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)__this_00,false,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== private void IDAFPIICNIF()  [RVA 0x30094C8]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$IDAFPIICNIF @ RVA 0x30094C8

void Nekki_SF2_GUI_Shop_InfoPanelContent__IDAFPIICNIF
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *__this_00;
  HOOAAGABMBL_o *pHVar2;
  
                    /* catch() { ... } // from try @ 03109464 with catch @ 031094cc */
  pNVar1 = (__this->fields)._descriptionDonate;
                    /* catch() { ... } // from try @ 031094a0 with catch @ 031094d8 */
  if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 031094e8 to 032094f3 has its CatchHandler @ 03109160 */
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    pHVar2 = (__this->fields).BBODGCMLKFP;
                    /* try { // try from 031094f4 to 032094fb has its CatchHandler @ 031094fc */
                    /* catch() { ... } // from try @ 03109478 with catch @ 031094fc
                       catch() { ... } // from try @ 031094c4 with catch @ 031094fc
                       catch() { ... } // from try @ 031094f4 with catch @ 031094fc */
    if ((pHVar2 != (HOOAAGABMBL_o *)0x0) &&
       (pNVar1 = (__this->fields)._descriptionDonate, pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0))
    {
      Nekki_SF2_GUI_LabelAlias__set_Alias
                (pNVar1,(pHVar2->fields)._OICGFKLBNPE_k__BackingField,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ShowButton()  [RVA 0x300AF08]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$ShowButton @ RVA 0x300AF08

void Nekki_SF2_GUI_Shop_InfoPanelContent__ShowButton
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *in_x4;
  HOOAAGABMBL_o *pHVar2;
  System_String_o *a;
  
  if ((DAT_04565b72 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11073/*"RealMoneyItem"*/);
    FUN_01bab630(&StringLiteral_4617/*"Consumable"*/);
    FUN_01bab630(&StringLiteral_10876/*"RaidItemPack"*/);
    FUN_01bab630(&StringLiteral_6589/*"Free"*/);
    FUN_01bab630(&StringLiteral_10823/*"RaidConsumable"*/);
    DAT_04565b72 = 1;
  }
  pHVar2 = (__this->fields).BBODGCMLKFP;
  if ((pHVar2 == (HOOAAGABMBL_o *)0x0) || ((pHVar2->fields)._FHACLMPKGOM_k__BackingField != false))
  {
    return;
  }
  a = (pHVar2->fields)._GMPAEDFIIHF_k__BackingField;
  bVar1 = System_String__op_Equality(a,StringLiteral_4617/*"Consumable"*/,(MethodInfo *)0x0);
  if (bVar1) {
    Nekki_SF2_GUI_Shop_InfoPanelContent__ShowConsumableButton(__this,method_00);
    return;
  }
  bVar1 = System_String__op_Equality(a,StringLiteral_6589/*"Free"*/,(MethodInfo *)0x0);
  if (bVar1) {
    pHVar2 = (__this->fields).BBODGCMLKFP;
    if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
      Nekki_SF2_GUI_Shop_InfoPanelContent__AOHAKEEHGKG
                (__this,(__this->fields).CJMBPDHIHLO,(pHVar2->fields)._DEKLMOAFMOI_k__BackingField,
                 (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),true,in_x4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = System_String__op_Equality(a,StringLiteral_11073/*"RealMoneyItem"*/,(MethodInfo *)0x0);
  if (bVar1) {
    Nekki_SF2_GUI_Shop_InfoPanelContent__ShowPaymentButton(__this,method_01);
    return;
  }
  bVar1 = System_String__op_Equality(a,StringLiteral_10876/*"RaidItemPack"*/,(MethodInfo *)0x0);
  method_03 = extraout_x1;
  if ((!bVar1) &&
     (bVar1 = System_String__op_Equality(a,StringLiteral_10823/*"RaidConsumable"*/,(MethodInfo *)0x0),
     method_03 = method_02, !bVar1)) {
    Nekki_SF2_GUI_Shop_InfoPanelContent__ShowDefaultButton(__this,method_02);
    return;
  }
  Nekki_SF2_GUI_Shop_InfoPanelContent__ShowRaidButton(__this,method_03);
  return;
}


// ===== private bool HDADGIDKFGF()  [RVA 0x3007738]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$HDADGIDKFGF @ RVA 0x3007738

bool Nekki_SF2_GUI_Shop_InfoPanelContent__HDADGIDKFGF
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  IIHMKHNLJKD_o *pIVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_04565b73 & 1) == 0) {
    FUN_01bab630(&ACHLOMELAJE_TypeInfo);
    FUN_01bab630(&StringLiteral_9257/*"MultiplyLottery"*/);
    DAT_04565b73 = 1;
    method = extraout_x1;
  }
  if ((ACHLOMELAJE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(ACHLOMELAJE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b86 == '\0') {
    FUN_01bab630(&ACHLOMELAJE_TypeInfo);
    DAT_04565b86 = '\x01';
    method = extraout_x1_01;
  }
  if ((ACHLOMELAJE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(ACHLOMELAJE_TypeInfo,method);
  }
  pIVar4 = ACHLOMELAJE_TypeInfo->static_fields->BFJCOMHPDJC;
  if (pIVar4 != (IIHMKHNLJKD_o *)0x0) {
    IIHMKHNLJKD__JJCEPPADHNK(pIVar4,StringLiteral_9257/*"MultiplyLottery"*/,(MethodInfo *)0x0);
    if (DAT_04565b86 == '\0') {
      FUN_01bab630(&ACHLOMELAJE_TypeInfo);
      DAT_04565b86 = '\x01';
    }
    if ((ACHLOMELAJE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pIVar4 = ACHLOMELAJE_TypeInfo->static_fields->BFJCOMHPDJC;
    if (pIVar4 != (IIHMKHNLJKD_o *)0x0) {
      bVar1 = IIHMKHNLJKD__NKNLFKGBOPK(pIVar4,StringLiteral_9257/*"MultiplyLottery"*/,(MethodInfo *)0x0);
      if (!bVar1) {
        return true;
      }
      if ((ACHLOMELAJE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b86 == '\0') {
        FUN_01bab630(&ACHLOMELAJE_TypeInfo);
        DAT_04565b86 = '\x01';
      }
      if ((ACHLOMELAJE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pIVar4 = ACHLOMELAJE_TypeInfo->static_fields->BFJCOMHPDJC;
      if (pIVar4 != (IIHMKHNLJKD_o *)0x0) {
        iVar2 = IIHMKHNLJKD__OAKGGOAHHAA(pIVar4,StringLiteral_9257/*"MultiplyLottery"*/,(MethodInfo *)0x0);
        if (DAT_04565b86 == '\0') {
          FUN_01bab630(&ACHLOMELAJE_TypeInfo);
          DAT_04565b86 = '\x01';
        }
        if ((ACHLOMELAJE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pIVar4 = ACHLOMELAJE_TypeInfo->static_fields->BFJCOMHPDJC;
        if (pIVar4 != (IIHMKHNLJKD_o *)0x0) {
          iVar3 = IIHMKHNLJKD__HLIPFHGLPKN(pIVar4,StringLiteral_9257/*"MultiplyLottery"*/,(MethodInfo *)0x0);
          return iVar3 < iVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static long FNIAJKKLKCB(long FJJJGOHDLBH, int IPBCCKOHOBD)  [RVA 0x3005D80]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$FNIAJKKLKCB @ RVA 0x3005D80

int64_t Nekki_SF2_GUI_Shop_InfoPanelContent__FNIAJKKLKCB
                  (int64_t FJJJGOHDLBH,int32_t IPBCCKOHOBD,MethodInfo *method)

{
  int64_t iVar1;
  float fVar2;
  
  fVar2 = (float)FJJJGOHDLBH / ((float)IPBCCKOHOBD / 100.0 + 1.0);
  iVar1 = -0x7ffffffffffffff8;
  if (fVar2 != INFINITY) {
    iVar1 = ((long)fVar2 / 10) * 10;
  }
  return iVar1;
}


// ===== private void ACICKHKFILK(ref IconLabelButton BECCOGAMKJL, string KGLJICLJHEL, LabelButton.MANJLBPDELA EFJKPCADGJH, string HCAAAAMDCNO, KGNNFOHIBBD MHNMDBICHEJ, FBBNEILNOKK OOJKNECICBP, string NEDLFJCJLKI = "0", bool MHPCMIBLMPE = False)  [RVA 0x300BA68]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$ACICKHKFILK @ RVA 0x300BA68

void Nekki_SF2_GUI_Shop_InfoPanelContent__ACICKHKFILK
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,IconLabelButton_o **BECCOGAMKJL,
               System_String_o *KGLJICLJHEL,int32_t EFJKPCADGJH,System_String_o *HCAAAAMDCNO,
               int32_t MHNMDBICHEJ,int32_t OOJKNECICBP,System_String_o *NEDLFJCJLKI,bool MHPCMIBLMPE
               ,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Object_o *__this_00;
  IconLabelButton_o *pIVar6;
  System_Collections_Generic_List_IconLabelButton__o *__this_01;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar7;
  Il2CppObject *pIVar8;
  System_Action_object__o *IELDNEAAPBE;
  IconLabelButton_array *pIVar9;
  UnityEngine_GameObject_o *original;
  
  if ((DAT_04565b74 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<TutorialNode>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<IconLabelButton>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_InfoPanelContent_DJKPEGLONEE__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IconLabelButton>_Add__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b74 = 1;
  }
  pUVar4 = (__this->fields)._buttonPanel;
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    original = (__this->fields)._buttonPrefab;
    pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    __this_00 = (UnityEngine_Object_o *)
                UnityEngine_Object__Instantiate<object>
                          ((Il2CppObject *)original,pUVar5,false,
                           Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
      if (MHPCMIBLMPE) {
        pUVar5 = UnityEngine_GameObject__get_transform
                           ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
        if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_0310bd5c;
        UnityEngine_Transform__SetAsFirstSibling(pUVar5,(MethodInfo *)0x0);
      }
      pIVar6 = (IconLabelButton_o *)
               UnityEngine_GameObject__GetComponent<object>
                         ((UnityEngine_GameObject_o *)__this_00,
                          Method_UnityEngine_GameObject_GetComponent<IconLabelButton>__);
      *BECCOGAMKJL = pIVar6;
      thunk_FUN_01c20e04(BECCOGAMKJL,pIVar6);
      lVar2 = Method_System_Collections_Generic_List<IconLabelButton>_Add__;
      __this_01 = (__this->fields).PGCBEJGMIMA;
      if (__this_01 != (System_Collections_Generic_List_IconLabelButton__o *)0x0) {
        pIVar6 = *BECCOGAMKJL;
        pIVar9 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pIVar9 != (IconLabelButton_array *)0x0) {
          uVar1 = (__this_01->fields)._size;
          if (uVar1 < (uint)pIVar9->max_length) {
            (__this_01->fields)._size = uVar1 + 1;
            pIVar9->m_Items[(int)uVar1] = pIVar6;
            thunk_FUN_01c20e04(pIVar9->m_Items + (int)uVar1);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pIVar6
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(HCAAAAMDCNO,(MethodInfo *)0x0);
          if (((*BECCOGAMKJL != (IconLabelButton_o *)0x0) &&
              (pNVar7 = ((*BECCOGAMKJL)->fields)._icon,
              pNVar7 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) &&
             (pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
            if (bVar3) {
              UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
            }
            else {
              UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
              if ((*BECCOGAMKJL == (IconLabelButton_o *)0x0) ||
                 (pNVar7 = ((*BECCOGAMKJL)->fields)._icon,
                 pNVar7 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) goto LAB_0310bd5c;
              Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar7,HCAAAAMDCNO,(MethodInfo *)0x0);
            }
            if (*BECCOGAMKJL != (IconLabelButton_o *)0x0) {
              LabelButton__set_ButtonColor
                        ((LabelButton_o *)*BECCOGAMKJL,EFJKPCADGJH,(MethodInfo *)0x0);
              if (*BECCOGAMKJL != (IconLabelButton_o *)0x0) {
                LabelButton__set_Text((LabelButton_o *)*BECCOGAMKJL,NEDLFJCJLKI,(MethodInfo *)0x0);
                pIVar6 = *BECCOGAMKJL;
                if (pIVar6 != (IconLabelButton_o *)0x0) {
                  (pIVar6->fields).super.super.super.ButtonId = MHNMDBICHEJ;
                  LabelButton__set_Control((LabelButton_o *)pIVar6,OOJKNECICBP,(MethodInfo *)0x0);
                  if (((*BECCOGAMKJL != (IconLabelButton_o *)0x0) &&
                      (pUVar4 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)*BECCOGAMKJL,(MethodInfo *)0x0
                                          ), pUVar4 != (UnityEngine_GameObject_o *)0x0)) &&
                     (pIVar8 = UnityEngine_GameObject__AddComponent<object>
                                         (pUVar4,
                                          Method_UnityEngine_GameObject_AddComponent<TutorialNode>__
                                         ), pIVar8 != (Il2CppObject *)0x0)) {
                    pIVar8[2].klass = (Il2CppClass *)KGLJICLJHEL;
                    thunk_FUN_01c20e04(pIVar8 + 2,KGLJICLJHEL);
                    pIVar6 = *BECCOGAMKJL;
                    IELDNEAAPBE = (System_Action_object__o *)
                                  thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                    System_Action<object>___ctor();
                    if (pIVar6 != (IconLabelButton_o *)0x0) {
                      SFButton__AddEventListener
                                ((SFButton_o *)pIVar6,2,IELDNEAAPBE,(MethodInfo *)0x0);
                      return;
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
LAB_0310bd5c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private string KGEIJMKKPNG(string CJNHFNHJHPE)  [RVA 0x300886C]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$KGEIJMKKPNG @ RVA 0x300886C

/* WARNING: Type propagation algorithm not settling */

System_String_o *
Nekki_SF2_GUI_Shop_InfoPanelContent__KGEIJMKKPNG
          (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,System_String_o *CJNHFNHJHPE,
          MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  System_String_o *value;
  int startIndex;
  
  if ((DAT_04565b75 & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&StringLiteral_22230/*"{"*/);
    FUN_01bab630(&StringLiteral_20362/*"quad"*/);
    __this = (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)FUN_01bab630(&StringLiteral_22500/*"}"*/);
    DAT_04565b75 = 1;
  }
                    /* try { // try from 031088d4 to 032088e3 has its CatchHandler @ 03108a04 */
                    /* try { // try from 031088e4 to 032088ff has its CatchHandler @ 03108a14 */
  startIndex = 0;
  while( true ) {
    do {
      if (startIndex < 0) {
                    /* try { // try from 031089e4 to 032089f3 has its CatchHandler @ 03108a28 */
        return (System_String_o *)(Nekki_SF2_GUI_Shop_InfoPanelContent_o *)CJNHFNHJHPE;
      }
      if ((Nekki_SF2_GUI_Shop_InfoPanelContent_o *)CJNHFNHJHPE ==
          (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0) goto LAB_031089ec;
                    /* try { // try from 03108900 to 0320890b has its CatchHandler @ 03108a00 */
      if ((int)(((Nekki_SF2_GUI_Shop_InfoPanelContent_o *)CJNHFNHJHPE)->fields).super.super.super.
               super.super.m_CachedPtr <= startIndex + 1) {
        return (System_String_o *)(Nekki_SF2_GUI_Shop_InfoPanelContent_o *)CJNHFNHJHPE;
      }
      uVar2 = System_String__IndexOf
                        (CJNHFNHJHPE,StringLiteral_22230/*"{"*/,startIndex + 1,(MethodInfo *)0x0);
      if (uVar2 == 0xffffffff) {
        return (System_String_o *)(Nekki_SF2_GUI_Shop_InfoPanelContent_o *)CJNHFNHJHPE;
      }
                    /* try { // try from 0310891c to 03208923 has its CatchHandler @ 031089fc */
      startIndex = uVar2 + 1;
      iVar3 = System_String__IndexOf(CJNHFNHJHPE,StringLiteral_22500/*"}"*/,startIndex,(MethodInfo *)0x0);
      if (iVar3 == -1) {
        return (System_String_o *)(Nekki_SF2_GUI_Shop_InfoPanelContent_o *)CJNHFNHJHPE;
      }
                    /* try { // try from 03108944 to 03208953 has its CatchHandler @ 03108a20 */
                    /* try { // try from 03108958 to 0320899b has its CatchHandler @ 03108a24 */
      pSVar4 = System_String__Substring(CJNHFNHJHPE,startIndex,iVar3 + ~uVar2,(MethodInfo *)0x0);
      __this = (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0;
      if (pSVar4 == (System_String_o *)0x0) goto LAB_031089ec;
      bVar1 = System_String__Contains(pSVar4,StringLiteral_20362/*"quad"*/,(MethodInfo *)0x0);
      __this = (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)(ulong)bVar1;
    } while (bVar1);
    if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    value = BJFCCEEPHOF__NMABDFPBIHH(pSVar4,(MethodInfo *)0x0);
    pSVar4 = System_String__Remove
                       (CJNHFNHJHPE,startIndex,(pSVar4->fields)._stringLength,(MethodInfo *)0x0);
    __this = (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0;
                    /* try { // try from 031089b0 to 032089bb has its CatchHandler @ 03108a08 */
                    /* try { // try from 031089bc to 032089e3 has its CatchHandler @ 03108860 */
    if ((pSVar4 == (System_String_o *)0x0) ||
       (__this = (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)
                 System_String__Insert(pSVar4,startIndex,value,(MethodInfo *)0x0),
       value == (System_String_o *)0x0)) break;
    startIndex = (value->fields)._stringLength + iVar3;
    CJNHFNHJHPE = (System_String_o *)__this;
  }
LAB_031089ec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public long GetItemTimer()  [RVA 0x3008D50]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$GetItemTimer @ RVA 0x3008D50

int64_t Nekki_SF2_GUI_Shop_InfoPanelContent__GetItemTimer
                  (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  IGFGDDANEPE_o *__this_00;
  int64_t iVar2;
  long lVar3;
  HOOAAGABMBL_o *pHVar4;
  long lVar5;
  
                    /* try { // try from 03108d5c to 03208d67 has its CatchHandler @ 03108ed0 */
  if ((DAT_04565b76 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
                    /* try { // try from 03108d78 to 03208d7f has its CatchHandler @ 03108ecc */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_10876/*"RaidItemPack"*/);
    FUN_01bab630(&StringLiteral_10823/*"RaidConsumable"*/);
    DAT_04565b76 = 1;
  }
                    /* try { // try from 03108da0 to 03208daf has its CatchHandler @ 03108ef0 */
  if (((__this->fields).AMLKHDGJPGJ == false) ||
     (__this_00 = (__this->fields).AAIHPGBKKNM, __this_00 == (IGFGDDANEPE_o *)0x0)) {
    pHVar4 = (__this->fields).BBODGCMLKFP;
    if (pHVar4 == (HOOAAGABMBL_o *)0x0) {
      return 0;
    }
    if ((pHVar4->fields)._NPMFPMGCNEC_k__BackingField != false) {
      lVar3 = (*(pHVar4->klass->vtable)._6_PDECHBMCBDB.methodPtr)
                        (pHVar4,0,(pHVar4->klass->vtable)._6_PDECHBMCBDB.method);
      if (lVar3 == 0) {
        return 0;
      }
      lVar3 = *(long *)(lVar3 + 0x70);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
      }
                    /* try { // try from 03108e68 to 03208e73 has its CatchHandler @ 03108ed8 */
      if (DAT_04565b87 == '\0') {
                    /* try { // try from 03108e74 to 03208e9f has its CatchHandler @ 03108cac */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b87 = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 03108ea0 to 03208ec3 has its CatchHandler @ 03108ef8 */
      lVar5 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
      }
      iVar2 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
                    /* try { // try from 03108ec4 to 03208ecb has its CatchHandler @ 03108ed8 */
      lVar3 = (lVar3 - lVar5) - iVar2;
      goto joined_r0x03108fc8;
    }
                    /* catch() { ... } // from try @ 03108d3c with catch @ 03108ee4 */
                    /* catch() { ... } // from try @ 03108da0 with catch @ 03108ef0 */
                    /* catch() { ... } // from try @ 03108db4 with catch @ 03108ef4 */
    bVar1 = System_String__op_Equality
                      ((pHVar4->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,
                       (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03108ea0 with catch @ 03108ef8 */
    if (!bVar1) {
      pHVar4 = (__this->fields).BBODGCMLKFP;
      if (pHVar4 == (HOOAAGABMBL_o *)0x0) goto LAB_03108fd0;
                    /* try { // try from 03108f0c to 03208f0f has its CatchHandler @ 03108f74 */
      bVar1 = System_String__op_Equality
                        ((pHVar4->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10823/*"RaidConsumable"*/,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        return 0;
      }
    }
                    /* try { // try from 03108f20 to 03208f2b has its CatchHandler @ 03108fa4 */
    pHVar4 = (__this->fields).BBODGCMLKFP;
    if (pHVar4 == (HOOAAGABMBL_o *)0x0) {
LAB_03108fd0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03108f2c to 03208f47 has its CatchHandler @ 03108cac */
    lVar3 = (*(pHVar4->klass->vtable)._6_PDECHBMCBDB.methodPtr)
                      (pHVar4,0,(pHVar4->klass->vtable)._6_PDECHBMCBDB.method);
    if (lVar3 == 0) {
      return 0;
    }
    lVar3 = *(long *)(lVar3 + 0x70);
                    /* try { // try from 03108f48 to 03208f4b has its CatchHandler @ 03108f80 */
                    /* try { // try from 03108f4c to 03208f6b has its CatchHandler @ 03108cac */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    if (DAT_04565b87 == '\0') {
                    /* try { // try from 03108f6c to 03208f8f has its CatchHandler @ 03108fa4 */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 03108f0c with catch @ 03108f74 */
      DAT_04565b87 = '\x01';
    }
                    /* catch() { ... } // from try @ 03108f48 with catch @ 03108f80 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03108f90 to 03208f9b has its CatchHandler @ 03108cac */
                    /* try { // try from 03108f9c to 03208fa3 has its CatchHandler @ 03108fa4 */
    lVar5 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
                    /* catch() { ... } // from try @ 03108f20 with catch @ 03108fa4
                       catch() { ... } // from try @ 03108f6c with catch @ 03108fa4
                       catch() { ... } // from try @ 03108f9c with catch @ 03108fa4 */
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
    }
    iVar2 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
    lVar3 = (lVar3 - lVar5) - iVar2;
  }
  else {
                    /* try { // try from 03108db4 to 03208e53 has its CatchHandler @ 03108ef4 */
    iVar2 = IGFGDDANEPE__OMMIKNKEKJN(__this_00,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    if (DAT_04565b87 == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b87 = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    lVar3 = iVar2 - NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
  }
joined_r0x03108fc8:
  if (lVar3 < 1) {
                    /* catch() { ... } // from try @ 03108d5c with catch @ 03108ed0 */
                    /* catch() { ... } // from try @ 03108d2c with catch @ 03108ed4 */
                    /* catch() { ... } // from try @ 03108e68 with catch @ 03108ed8
                       catch() { ... } // from try @ 03108ec4 with catch @ 03108ed8 */
    return 0;
  }
  return lVar3;
}


// ===== private void ABCDOFCJLOG(object IMMNELPBGIF)  [RVA 0x300C6BC]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$ABCDOFCJLOG @ RVA 0x300C6BC

void Nekki_SF2_GUI_Shop_InfoPanelContent__ABCDOFCJLOG
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  int *piVar2;
  System_Action_BKKPAKHJDKB__o *BLMFLPJJMPF;
  GGHCLMEFIGO_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  HOOAAGABMBL_o *pHVar3;
  ACHLOMELAJE_o *pAVar4;
  
  if ((DAT_04565b77 & 1) == 0) {
    FUN_01bab630(&System_Action<BKKPAKHJDKB>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_InfoPanelContent_PBPPPILDIBH__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_10876/*"RaidItemPack"*/);
    FUN_01bab630(&StringLiteral_10823/*"RaidConsumable"*/);
    DAT_04565b77 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar2 = (int *)thunk_FUN_01bda96c();
    if ((0 < *piVar2) && (pHVar3 = (__this->fields).KJBDDCNKNNE, pHVar3 != (HOOAAGABMBL_o *)0x0)) {
      bVar1 = System_String__op_Equality
                        ((pHVar3->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10823/*"RaidConsumable"*/,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        pHVar3 = (__this->fields).KJBDDCNKNNE;
        if (pHVar3 == (HOOAAGABMBL_o *)0x0) {
LAB_0310c890:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = System_String__op_Equality
                          ((pHVar3->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,
                           (MethodInfo *)0x0);
        if (!bVar1) {
          bVar1 = AMIINPEKKFB__CNDGBHMOMJB((__this->fields).KJBDDCNKNNE,(MethodInfo *)0x0);
          method_00 = extraout_x1;
          if (bVar1) {
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
            pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if ((pAVar4 == (ACHLOMELAJE_o *)0x0) ||
               (__this_00 = (pAVar4->fields).OIDPLCLELEN, __this_00 == (GGHCLMEFIGO_o *)0x0))
            goto LAB_0310c890;
            GGHCLMEFIGO__BOEFGIBCIIL(__this_00,(__this->fields).KJBDDCNKNNE,true,(MethodInfo *)0x0);
            method_00 = extraout_x1_00;
          }
          Nekki_SF2_GUI_Shop_InfoPanelContent__UpdateContent(__this,method_00);
          return;
        }
      }
      pHVar3 = (__this->fields).KJBDDCNKNNE;
      BLMFLPJJMPF = (System_Action_BKKPAKHJDKB__o *)
                    thunk_FUN_01bda818(System_Action<BKKPAKHJDKB>_TypeInfo);
      System_Action<object>___ctor();
      AMIINPEKKFB__AOBOOIINCOA(pHVar3,BLMFLPJJMPF,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// ===== private string GHEBFAHKFBG(string JCLPIKHEKBB)  [RVA 0x30089F0]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$GHEBFAHKFBG @ RVA 0x30089F0

System_String_o *
Nekki_SF2_GUI_Shop_InfoPanelContent__GHEBFAHKFBG
          (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,System_String_o *JCLPIKHEKBB,
          MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int32_t iVar4;
  System_String_o *pSVar5;
  int iVar6;
  int iVar7;
  
                    /* try { // try from 031089f4 to 032089fb has its CatchHandler @ 03108a08 */
                    /* catch() { ... } // from try @ 0310891c with catch @ 031089fc
                       try { // try from 031089fc to 03208a3f has its CatchHandler @ 03108860 */
                    /* catch() { ... } // from try @ 03108900 with catch @ 03108a00 */
                    /* catch() { ... } // from try @ 031088d4 with catch @ 03108a04 */
                    /* catch() { ... } // from try @ 031089b0 with catch @ 03108a08
                       catch() { ... } // from try @ 031089f4 with catch @ 03108a08 */
                    /* catch() { ... } // from try @ 031088e4 with catch @ 03108a14 */
  if ((DAT_04565b78 & 1) == 0) {
                    /* catch() { ... } // from try @ 03108944 with catch @ 03108a20 */
    FUN_01bab630(&StringLiteral_22230/*"{"*/);
                    /* catch() { ... } // from try @ 03108958 with catch @ 03108a24 */
                    /* catch() { ... } // from try @ 031089e4 with catch @ 03108a28 */
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_20362/*"quad"*/);
                    /* try { // try from 03108a40 to 03208a43 has its CatchHandler @ 03108aa8 */
    FUN_01bab630(&StringLiteral_2274/*"<color=#00000000>0</color>"*/);
    FUN_01bab630(&StringLiteral_22500/*"}"*/);
                    /* try { // try from 03108a54 to 03208a5f has its CatchHandler @ 03108ad8 */
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 03108a60 to 03208a7b has its CatchHandler @ 03108860 */
    DAT_04565b78 = 1;
  }
  bVar2 = System_String__IsNullOrEmpty(JCLPIKHEKBB,(MethodInfo *)0x0);
  if (!bVar2) {
    if (JCLPIKHEKBB == (System_String_o *)0x0) {
LAB_03108c94:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03108a7c to 03208a7f has its CatchHandler @ 03108ab4 */
                    /* try { // try from 03108a80 to 03208a9f has its CatchHandler @ 03108860 */
    bVar2 = System_String__Contains(JCLPIKHEKBB,StringLiteral_22230/*"{"*/,(MethodInfo *)0x0);
    if (bVar2) {
                    /* try { // try from 03108aa0 to 03208ac3 has its CatchHandler @ 03108ad8 */
                    /* catch() { ... } // from try @ 03108a40 with catch @ 03108aa8 */
                    /* catch() { ... } // from try @ 03108a7c with catch @ 03108ab4 */
      iVar1 = 0;
      iVar6 = 0;
                    /* try { // try from 03108ac4 to 03208acf has its CatchHandler @ 03108860 */
                    /* try { // try from 03108ad0 to 03208ad7 has its CatchHandler @ 03108ad8 */
                    /* catch() { ... } // from try @ 03108a54 with catch @ 03108ad8
                       catch() { ... } // from try @ 03108aa0 with catch @ 03108ad8
                       catch() { ... } // from try @ 03108ad0 with catch @ 03108ad8 */
      while (((iVar7 = iVar1, -1 < iVar6 && (iVar6 + 1 < (JCLPIKHEKBB->fields)._stringLength)) &&
             (uVar3 = System_String__IndexOf
                                (JCLPIKHEKBB,StringLiteral_22230/*"{"*/,iVar6 + 1,(MethodInfo *)0x0),
             uVar3 != 0xffffffff))) {
        iVar6 = uVar3 + 1;
        iVar4 = System_String__IndexOf(JCLPIKHEKBB,StringLiteral_22500/*"}"*/,iVar6,(MethodInfo *)0x0);
        if (iVar4 == -1) break;
        pSVar5 = System_String__Substring(JCLPIKHEKBB,iVar6,iVar4 + ~uVar3,(MethodInfo *)0x0);
        if (pSVar5 == (System_String_o *)0x0) goto LAB_03108c94;
        bVar2 = System_String__Contains(pSVar5,StringLiteral_20362/*"quad"*/,(MethodInfo *)0x0);
        iVar1 = iVar7;
        if (!bVar2) {
          pSVar5 = System_String__Replace
                             (pSVar5,StringLiteral_2274/*"<color=#00000000>0</color>"*/,StringLiteral_167/*" "*/,(MethodInfo *)0x0);
          if (pSVar5 == (System_String_o *)0x0) goto LAB_03108c94;
          iVar1 = (pSVar5->fields)._stringLength;
          iVar6 = iVar4;
          if (iVar1 <= iVar7) {
            iVar1 = iVar7;
          }
        }
      }
      iVar6 = 0;
      while (-1 < iVar6) {
        if (JCLPIKHEKBB == (System_String_o *)0x0) goto LAB_03108c94;
        if ((JCLPIKHEKBB->fields)._stringLength <= iVar6 + 1) {
          return JCLPIKHEKBB;
        }
        uVar3 = System_String__IndexOf(JCLPIKHEKBB,StringLiteral_22230/*"{"*/,iVar6 + 1,(MethodInfo *)0x0);
        if (uVar3 == 0xffffffff) {
          return JCLPIKHEKBB;
        }
        iVar6 = uVar3 + 1;
        iVar4 = System_String__IndexOf(JCLPIKHEKBB,StringLiteral_22500/*"}"*/,iVar6,(MethodInfo *)0x0);
        if (iVar4 == -1) {
          return JCLPIKHEKBB;
        }
        pSVar5 = System_String__Substring(JCLPIKHEKBB,iVar6,iVar4 + ~uVar3,(MethodInfo *)0x0);
        if (pSVar5 == (System_String_o *)0x0) goto LAB_03108c94;
        bVar2 = System_String__Contains(pSVar5,StringLiteral_20362/*"quad"*/,(MethodInfo *)0x0);
        if (!bVar2) {
          pSVar5 = System_String__Replace
                             (pSVar5,StringLiteral_2274/*"<color=#00000000>0</color>"*/,StringLiteral_167/*" "*/,(MethodInfo *)0x0);
          if (pSVar5 == (System_String_o *)0x0) goto LAB_03108c94;
          iVar6 = iVar7 - (pSVar5->fields)._stringLength;
          pSVar5 = StringLiteral_1/*""*/;
          if (0 < iVar6) {
            do {
              pSVar5 = System_String__Concat(pSVar5,StringLiteral_2274/*"<color=#00000000>0</color>"*/,(MethodInfo *)0x0);
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          JCLPIKHEKBB = System_String__Insert(JCLPIKHEKBB,iVar4,pSVar5,(MethodInfo *)0x0);
          if (pSVar5 == (System_String_o *)0x0) goto LAB_03108c94;
          iVar6 = (pSVar5->fields)._stringLength + iVar4;
        }
      }
    }
  }
  return JCLPIKHEKBB;
}


// ===== private void IMHBFBDGNAD()  [RVA 0x300772C]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$IMHBFBDGNAD @ RVA 0x300772C

void Nekki_SF2_GUI_Shop_InfoPanelContent__IMHBFBDGNAD
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  (__this->fields).KJBDDCNKNNE = (__this->fields).BBODGCMLKFP;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void OCEFNAOJJPH(object IMMNELPBGIF)  [RVA 0x300C894]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$OCEFNAOJJPH @ RVA 0x300C894

void Nekki_SF2_GUI_Shop_InfoPanelContent__OCEFNAOJJPH
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int *piVar1;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  MethodInfo *method_00;
  
  if ((DAT_04565b79 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
                    /* try { // try from 0310c8bc to 0320c8c7 has its CatchHandler @ 0310d4e8 */
    DAT_04565b79 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
                    /* try { // try from 0310c8d0 to 0320c943 has its CatchHandler @ 0310d4f0 */
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar1 = (int *)thunk_FUN_01bda96c();
    if ((0 < *piVar1) &&
       (IKKAMAMLIKA = (__this->fields).KJBDDCNKNNE, IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0)) {
      AMIINPEKKFB__KBOOALOJLKH(IKKAMAMLIKA,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Shop_InfoPanelContent__UpdateContent(__this,method_00);
      return;
    }
  }
  return;
}


// ===== private void LFLGIOKBFCG()  [RVA 0x300AD54]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$LFLGIOKBFCG @ RVA 0x300AD54

void Nekki_SF2_GUI_Shop_InfoPanelContent__LFLGIOKBFCG
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  Il2CppObject *x;
  bool bVar1;
  System_Collections_Generic_List_IconLabelButton__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04565b7a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IconLabelButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IconLabelButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IconLabelButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IconLabelButton>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b7a = 1;
    method = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).PGCBEJGMIMA;
  if (__this_00 != (System_Collections_Generic_List_IconLabelButton__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<IconLabelButton>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    while( true ) {
      do {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<IconLabelButton>_MoveNext__
                          );
        x = local_50.fields._current;
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<IconLabelButton>_Dispose__);
          return;
        }
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      } while (!bVar1);
      if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) break;
      __this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== private void GMOBPKAOMNA(long NFBEBOIDJLL)  [RVA 0x3008FD4]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$GMOBPKAOMNA @ RVA 0x3008FD4

void Nekki_SF2_GUI_Shop_InfoPanelContent__GMOBPKAOMNA
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,int64_t NFBEBOIDJLL,MethodInfo *method
               )

{
  ushort uVar1;
  undefined8 uVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *pSVar7;
  int32_t BCDLHKNFNDA;
  long lVar8;
  Il2CppClass *pIVar9;
  ulong uVar10;
  int32_t *piVar11;
  undefined8 uVar12;
  
  if ((DAT_04565b7b & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_13795/*"TimeDaysShort"*/);
    FUN_01bab630(&StringLiteral_2086/*":"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565b7b = 1;
  }
  pNVar3 = (__this->fields)._timerAlias;
  if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._timerAlias;
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pNVar3,true,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._timerAlias;
      BCDLHKNFNDA = 3;
      if (0x1517f < NFBEBOIDJLL) {
        BCDLHKNFNDA = 4;
      }
      pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar5 = Method_System_Array_Empty<string>__;
      lVar8 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar8 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar8 = *(long *)(lVar5 + 0x38);
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01b81620();
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01b81620();
      }
      uVar2 = StringLiteral_13795/*"TimeDaysShort"*/;
      if (pIVar4 != (Il2CppObject *)0x0) {
        pIVar9 = pIVar4->klass;
        uVar12 = **(undefined8 **)(lVar5 + 0xb8);
        uVar1._0_1_ = (pIVar9->_2).rank;
        uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
        uVar10 = (ulong)uVar1;
        if (uVar10 != 0) {
          piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
          do {
                    /* try { // try from 03109160 to 0320925f has its CatchHandler @ 03109160
                       catch() { ... } // from try @ 03109160 with catch @ 03109160
                       catch() { ... } // from try @ 031093c4 with catch @ 03109160
                       catch() { ... } // from try @ 0310941c with catch @ 03109160
                       catch() { ... } // from try @ 03109484 with catch @ 03109160
                       catch() { ... } // from try @ 031094a4 with catch @ 03109160
                       catch() { ... } // from try @ 031094e8 with catch @ 03109160 */
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar6 = pIVar9->vtable + (*piVar11 + 0xc);
              goto LAB_03109198;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03109198:
        pSVar7 = (System_String_o *)(*pVVar6->methodPtr)(pIVar4,uVar2,uVar12,pVVar6->method);
        pSVar7 = System_String__Concat(pSVar7,StringLiteral_167/*" "*/,(MethodInfo *)0x0);
        pSVar7 = Nekki_SF2_GUI_TimerLabel__GetTimeString
                           (NFBEBOIDJLL,true,true,true,0x1517f < NFBEBOIDJLL,false,true,
                            StringLiteral_2086/*":"*/,pSVar7,false,true,true,true,false,StringLiteral_1/*""*/,
                            StringLiteral_1/*""*/,StringLiteral_1/*""*/,BCDLHKNFNDA,(MethodInfo *)0x0);
        if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03109250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                    (pNVar3,pSVar7,(pNVar3->klass->vtable)._75_set_text.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ShowConsumableButton()  [RVA 0x300C520]
// Nekki.SF2.GUI.Shop.InfoPanelContent$$ShowConsumableButton @ RVA 0x300C520

void Nekki_SF2_GUI_Shop_InfoPanelContent__ShowConsumableButton
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  ACHLOMELAJE_o *__this_00;
  int64_t iVar2;
  int64_t iVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x3;
  HOOAAGABMBL_o *pHVar4;
  BHEDGAKGKPO_StaticFields *pBVar5;
  IconLabelButton_o *BECCOGAMKJL;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Color_o EFJKPCADGJH;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_80;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  
  if ((DAT_04565b7c & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_10828/*"RaidCurrency"*/);
    DAT_04565b7c = 1;
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
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    iVar2 = ACHLOMELAJE__HEHFNBKGJLP(__this_00,(MethodInfo *)0x0);
    pHVar4 = (__this->fields).BBODGCMLKFP;
    if (pHVar4 != (HOOAAGABMBL_o *)0x0) {
      local_60.fields.hiddenValue = (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.hiddenValue
      ;
      local_60.fields.currentCryptoKey =
           (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.currentCryptoKey;
      local_60.fields.fakeValueActive =
           (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValueActive;
      local_60.fields.inited = (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.inited;
      local_60.fields._26_6_ =
           *(undefined6 *)&(pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.field_0x1a;
      local_60.fields.fakeValue = (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValue;
      iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                        (&local_60,(MethodInfo *)0x0);
      if (iVar2 < iVar3) {
        if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pBVar5 = BHEDGAKGKPO_TypeInfo->static_fields;
        fVar9 = (pBVar5->GNNEMOOOOCI).fields.r;
        fVar8 = (pBVar5->GNNEMOOOOCI).fields.g;
        fVar6 = (pBVar5->GNNEMOOOOCI).fields.b;
        fVar7 = (pBVar5->GNNEMOOOOCI).fields.a;
      }
      else {
        fVar6 = 0.0;
        fVar7 = 1.0;
        fVar8 = 0.0;
        fVar9 = 0.0;
      }
      pHVar4 = (__this->fields).BBODGCMLKFP;
      if (pHVar4 != (HOOAAGABMBL_o *)0x0) {
        bVar1 = System_String__op_Inequality
                          ((pHVar4->fields)._DKODBGOHKGH_k__BackingField,StringLiteral_10828/*"RaidCurrency"*/,
                           (MethodInfo *)0x0);
        if (bVar1) {
          pHVar4 = (__this->fields).BBODGCMLKFP;
          if (pHVar4 == (HOOAAGABMBL_o *)0x0) goto LAB_0310c6b8;
          local_80.fields.hiddenValue =
               (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.hiddenValue;
          local_80.fields.currentCryptoKey =
               (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.currentCryptoKey;
          local_80.fields.fakeValueActive =
               (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValueActive;
          local_80.fields.inited = (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.inited;
          local_80.fields._26_6_ =
               *(undefined6 *)&(pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.field_0x1a;
          local_80.fields.fakeValue = (pHVar4->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValue
          ;
          BECCOGAMKJL = (__this->fields).HMANCFHBJIN;
          iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                            (&local_80,(MethodInfo *)0x0);
          EFJKPCADGJH.fields.g = fVar8;
          EFJKPCADGJH.fields.r = fVar9;
          EFJKPCADGJH.fields.a = fVar7;
          EFJKPCADGJH.fields.b = fVar6;
          Nekki_SF2_GUI_Shop_InfoPanelContent__AOHAKEEHGKG
                    (__this,BECCOGAMKJL,iVar2,EFJKPCADGJH,in_x3);
        }
        return;
      }
    }
  }
LAB_0310c6b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

