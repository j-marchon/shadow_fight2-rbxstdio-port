// Nekki.SF2.GUI.Dialogs.LotteryDialog$$KNDKMGHNIMK @ RVA 0x3289D6C

void Nekki_SF2_GUI_Dialogs_LotteryDialog__KNDKMGHNIMK
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *pCVar1;
  bool bVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  ACHLOMELAJE_o *__this_00;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar5;
  System_Collections_Generic_List_MGNDHCBAPEN_string__int___o *EDEHNHIHDDH;
  Il2CppObject *pIVar6;
  System_String_array *values;
  EEGDOGKBLNG_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  LPGLKMNHELJ_o *pLVar7;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar8;
  PKHMIGFEJCL_o *pPVar9;
  LabelButton_o *pLVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Color_o UVar15;
  UnityEngine_Color_o CJNHFNHJHPE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_80;
  int64_t local_60;
  int64_t iStack_58;
  int64_t iStack_50;
  bool_conflict bStack_48;
  bool_conflict bStack_47;
  undefined6 uStack_46;
  
  if ((DAT_045672d4 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_PHPELPFMOII<MGNDHCBAPEN<string,_int>>__);
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_get_Count__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_22500);
    FUN_01bab630(&StringLiteral_22507);
    FUN_01bab630(&StringLiteral_17827);
    FUN_01bab630(&StringLiteral_17826);
    FUN_01bab630(&StringLiteral_17833);
    FUN_01bab630(&StringLiteral_9095);
    FUN_01bab630(&StringLiteral_17834);
    DAT_045672d4 = 1;
  }
  pLVar7 = (__this->fields).DKMMBMBMJBO;
  if (pLVar7 != (LPGLKMNHELJ_o *)0x0) {
    if ((pLVar7->fields).BGHFADDGPAD == 1) {
      pJVar8 = (pLVar7->fields).FIJPJBGCODO;
      if (pJVar8 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
        pLVar10 = (__this->fields).BtnSpin;
        pSVar4 = System_Int32__ToString((int)pJVar8 + 0x38,(MethodInfo *)0x0);
        pSVar4 = System_String__Concat
                           (StringLiteral_17827,pSVar4,StringLiteral_22500,(MethodInfo *)0x0);
        if (pLVar10 != (LabelButton_o *)0x0) {
          LabelButton__set_Alias(pLVar10,pSVar4,(MethodInfo *)0x0);
          pLVar10 = (__this->fields).BtnSpin;
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
          pLVar7 = (__this->fields).DKMMBMBMJBO;
          if (((pLVar7 != (LPGLKMNHELJ_o *)0x0) &&
              (pJVar8 = (pLVar7->fields).FIJPJBGCODO, pJVar8 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0))
             && (__this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField,
                __this_00 != (ACHLOMELAJE_o *)0x0)) {
            bVar2 = ACHLOMELAJE__MIFEPGNGDON
                              (__this_00,(long)(pJVar8->fields).NGMFKGGBHND,(MethodInfo *)0x0);
            if (bVar2) {
              fVar14 = 1.0;
              fVar11 = 0.0;
              fVar12 = 0.0;
              fVar13 = 0.0;
            }
            else {
              if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UVar15 = FGKGKDEJCOG__IALPNFOEEBP((MethodInfo *)0x0);
              fVar14 = UVar15.fields.a;
              fVar13 = UVar15.fields.b;
              fVar12 = UVar15.fields.g;
              fVar11 = UVar15.fields.r;
            }
            if (pLVar10 != (LabelButton_o *)0x0) {
              UVar15.fields.g = fVar12;
              UVar15.fields.r = fVar11;
              UVar15.fields.a = fVar14;
              UVar15.fields.b = fVar13;
              LabelButton__set_Color(pLVar10,UVar15,(MethodInfo *)0x0);
              pLVar7 = (__this->fields).DKMMBMBMJBO;
              if (((pLVar7 != (LPGLKMNHELJ_o *)0x0) &&
                  (pJVar8 = (pLVar7->fields).FIJPJBGCODO, pJVar8 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0
                  )) && (EDEHNHIHDDH = (pJVar8->fields).LIJCIBIOOOH,
                        EDEHNHIHDDH !=
                        (System_Collections_Generic_List_MGNDHCBAPEN_string__int___o *)0x0)) {
                if ((EDEHNHIHDDH->fields)._size == 0) {
                  return;
                }
                pIVar6 = DJNBJHPDKDP__PHPELPFMOII<object>
                                   ((System_Collections_Generic_List_T__o *)EDEHNHIHDDH,
                                    Method_DJNBJHPDKDP_PHPELPFMOII<MGNDHCBAPEN<string,_int>>__);
                pLVar10 = (__this->fields).BtnSpinCurrency;
                values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
                if (values != (System_String_array *)0x0) {
                  if ((int)values->max_length != 0) {
                    values->m_Items[0] = StringLiteral_17826;
                    thunk_FUN_01c20e04();
                    if (pIVar6 == (Il2CppObject *)0x0) goto LAB_0338a244;
                    pSVar4 = OFFIONDOEPM__CDGICMOFKHE
                                       ((System_String_o *)pIVar6[1].klass,(MethodInfo *)0x0);
                    if (1 < (uint)values->max_length) {
                      values->m_Items[1] = pSVar4;
                      thunk_FUN_01c20e04(values->m_Items + 1,pSVar4);
                      if (2 < (uint)values->max_length) {
                        values->m_Items[2] = StringLiteral_22507;
                        thunk_FUN_01c20e04(values->m_Items + 2);
                        pSVar4 = System_Int32__ToString((int)pIVar6 + 0x18,(MethodInfo *)0x0);
                        if (3 < (uint)values->max_length) {
                          values->m_Items[3] = pSVar4;
                          thunk_FUN_01c20e04(values->m_Items + 3,pSVar4);
                          if (4 < (uint)values->max_length) {
                            values->m_Items[4] = StringLiteral_22500;
                            thunk_FUN_01c20e04();
                            pSVar4 = System_String__Concat(values,(MethodInfo *)0x0);
                            if (pLVar10 != (LabelButton_o *)0x0) {
                              LabelButton__set_Alias(pLVar10,pSVar4,(MethodInfo *)0x0);
                              pLVar10 = (__this->fields).BtnSpinCurrency;
                              if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                                thunk_FUN_01ba7564();
                              }
                              __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                              if (__this_01 != (EEGDOGKBLNG_o *)0x0) {
                                iVar3 = EEGDOGKBLNG__APFFEAJBAEK
                                                  (__this_01,(System_String_o *)pIVar6[1].klass,
                                                   (MethodInfo *)0x0);
                                if (iVar3 < *(int *)&pIVar6[1].monitor) {
                                  if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
                                    thunk_FUN_01ba7564();
                                  }
                                  UVar15 = FGKGKDEJCOG__IALPNFOEEBP((MethodInfo *)0x0);
                                  fVar14 = UVar15.fields.a;
                                  fVar13 = UVar15.fields.b;
                                  fVar12 = UVar15.fields.g;
                                  fVar11 = UVar15.fields.r;
                                }
                                else {
                                  fVar14 = 1.0;
                                  fVar11 = 0.0;
                                  fVar12 = 0.0;
                                  fVar13 = 0.0;
                                }
                                if (pLVar10 != (LabelButton_o *)0x0) {
                                  CJNHFNHJHPE.fields.g = fVar12;
                                  CJNHFNHJHPE.fields.r = fVar11;
                                  CJNHFNHJHPE.fields.a = fVar14;
                                  CJNHFNHJHPE.fields.b = fVar13;
                                  LabelButton__set_Color(pLVar10,CJNHFNHJHPE,(MethodInfo *)0x0);
                                  return;
                                }
                              }
                            }
                            goto LAB_0338a244;
                          }
                        }
                      }
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8d0();
                }
              }
            }
          }
        }
      }
    }
    else {
      pNVar5 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (((pNVar5 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
          (pLVar7 = (__this->fields).DKMMBMBMJBO, pLVar7 != (LPGLKMNHELJ_o *)0x0)) &&
         (pPVar9 = (pNVar5->fields).QuestParameters, pPVar9 != (PKHMIGFEJCL_o *)0x0)) {
        iVar3 = (pLVar7->fields).PJBADHPBBAF;
        (pPVar9->fields).NKIBNMGPGAL = iVar3;
        method_00 = extraout_x1;
        if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method_00 = extraout_x1_00;
        }
        iVar3 = Nekki_SF2_GUI_Dialogs_LotteryDialog__KDBBHOPBFBE(iVar3,method_00);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                  (&local_80,(long)iVar3,(MethodInfo *)0x0);
        pCVar1 = &(__this->fields).ENCFNGGMNAN;
        iStack_58 = local_80.fields.hiddenValue;
        local_60 = local_80.fields.currentCryptoKey;
        bStack_48 = local_80.fields.fakeValueActive;
        bStack_47 = local_80.fields.inited;
        uStack_46 = local_80.fields._26_6_;
        iStack_50 = local_80.fields.fakeValue;
        (__this->fields).ENCFNGGMNAN.fields.hiddenValue = local_80.fields.hiddenValue;
        (pCVar1->fields).currentCryptoKey = local_80.fields.currentCryptoKey;
        (__this->fields).ENCFNGGMNAN.fields.fakeValueActive = local_80.fields.fakeValueActive;
        (__this->fields).ENCFNGGMNAN.fields.inited = local_80.fields.inited;
        *(undefined6 *)&(__this->fields).ENCFNGGMNAN.fields.field_0x1a = local_80.fields._26_6_;
        (__this->fields).ENCFNGGMNAN.fields.fakeValue = local_80.fields.fakeValue;
        pLVar7 = (__this->fields).DKMMBMBMJBO;
        if (pLVar7 != (LPGLKMNHELJ_o *)0x0) {
          pLVar10 = (__this->fields).BtnSpin;
          _bStack_48 = local_80.fields._24_8_;
          pSVar4 = StringLiteral_17833;
          if (0 < (pLVar7->fields).PJBADHPBBAF) {
            iStack_58 = (__this->fields).ENCFNGGMNAN.fields.hiddenValue;
            local_60 = (pCVar1->fields).currentCryptoKey;
            bStack_48 = (__this->fields).ENCFNGGMNAN.fields.fakeValueActive;
            bStack_47 = (__this->fields).ENCFNGGMNAN.fields.inited;
            uStack_46 = *(undefined6 *)&(__this->fields).ENCFNGGMNAN.fields.field_0x1a;
            iStack_50 = (__this->fields).ENCFNGGMNAN.fields.fakeValue;
            pIVar6 = (Il2CppObject *)
                     thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                        &local_60);
            pSVar4 = System_String__Format
                               (StringLiteral_17834,StringLiteral_9095,pIVar6,(MethodInfo *)0x0);
          }
          if (pLVar10 != (LabelButton_o *)0x0) {
            LabelButton__set_Alias(pLVar10,pSVar4,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_0338a244:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

