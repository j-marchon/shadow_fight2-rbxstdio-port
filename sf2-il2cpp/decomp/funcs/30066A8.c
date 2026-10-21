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

