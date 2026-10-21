// FAIJGJCCKJC$$.ctor @ RVA 0x3163A8C

void FAIJGJCCKJC___ctor(FAIJGJCCKJC_o *__this,JMDPBFOCHHP_ENBCJNLAHAC_o *IOOJAJAPMBM,
                       MethodInfo *method)

{
  System_String_o *pSVar1;
  FAIJGJCCKJC_Fields *pFVar2;
  bool bVar3;
  System_String_array *pSVar4;
  MethodInfo *method_00;
  System_String_o *pSVar5;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar6;
  System_String_o **ppSVar7;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_40;
  
  if ((DAT_045668ef & 1) == 0) {
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_11073);
    FUN_01bab630(&StringLiteral_10876);
    DAT_045668ef = 1;
  }
  HOOAAGABMBL___ctor((HOOAAGABMBL_o *)__this,(MethodInfo *)0x0);
  (__this->fields).FBBBEHLGDJK = IOOJAJAPMBM;
  thunk_FUN_01c20e04(&(__this->fields).FBBBEHLGDJK,IOOJAJAPMBM);
  if (IOOJAJAPMBM == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
    pSVar5 = (System_String_o *)0x0;
  }
  else {
    pSVar5 = (IOOJAJAPMBM->fields).BGHFADDGPAD;
  }
  pSVar1 = StringLiteral_10876;
  if (pSVar5 != (System_String_o *)0x0) {
    pSVar1 = pSVar5;
  }
  ppSVar7 = &(__this->fields).super._GMPAEDFIIHF_k__BackingField;
  *ppSVar7 = pSVar1;
  thunk_FUN_01c20e04(ppSVar7);
  pJVar6 = (__this->fields).FBBBEHLGDJK;
  (__this->fields).super._EMNGHFLALAI_k__BackingField = false;
  if (pJVar6 == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
    return;
  }
  ppSVar7 = &(__this->fields).super._COIPKAKHDFP_k__BackingField;
  *ppSVar7 = (pJVar6->fields).JIJLBFGKNJK;
  thunk_FUN_01c20e04(ppSVar7);
  pJVar6 = (__this->fields).FBBBEHLGDJK;
  if (pJVar6 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
    ppSVar7 = &(__this->fields).super._HONAAKEIHJI_k__BackingField;
    *ppSVar7 = (pJVar6->fields).JMGIACHBIKG;
    thunk_FUN_01c20e04(ppSVar7);
    pJVar6 = (__this->fields).FBBBEHLGDJK;
    if (pJVar6 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
      ppSVar7 = &(__this->fields).super._GPEFIOMJHNN_k__BackingField;
      *ppSVar7 = (pJVar6->fields).KPDPJONADPJ;
      thunk_FUN_01c20e04(ppSVar7);
      pJVar6 = (__this->fields).FBBBEHLGDJK;
      if (pJVar6 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                  (&local_40,(long)(pJVar6->fields).NGMFKGGBHND,(MethodInfo *)0x0);
        (__this->fields).super._AHMCDBKNKAJ_k__BackingField.fields.hiddenValue =
             local_40.fields.hiddenValue;
        (__this->fields).super._AHMCDBKNKAJ_k__BackingField.fields.currentCryptoKey =
             local_40.fields.currentCryptoKey;
        pFVar2 = &__this->fields;
        (pFVar2->super)._AHMCDBKNKAJ_k__BackingField.fields.fakeValueActive =
             local_40.fields.fakeValueActive;
        (pFVar2->super)._AHMCDBKNKAJ_k__BackingField.fields.inited = local_40.fields.inited;
        *(undefined6 *)&(pFVar2->super)._AHMCDBKNKAJ_k__BackingField.fields.field_0x1a =
             local_40.fields._26_6_;
        (__this->fields).super._AHMCDBKNKAJ_k__BackingField.fields.fakeValue =
             local_40.fields.fakeValue;
        pJVar6 = (__this->fields).FBBBEHLGDJK;
        if (pJVar6 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
          ppSVar7 = &(__this->fields).super._OICGFKLBNPE_k__BackingField;
          *ppSVar7 = (pJVar6->fields).BPCADJLKKGA;
          thunk_FUN_01c20e04(ppSVar7);
          pJVar6 = (__this->fields).FBBBEHLGDJK;
          if (pJVar6 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
            (__this->fields).super._HPKBDBMFCBC_k__BackingField = (pJVar6->fields).PCDOKDMDNMB;
            (__this->fields).super._PLEEGEDKAGM_k__BackingField = (pJVar6->fields).KMKNJMEDEAH;
            (__this->fields).super._FHACLMPKGOM_k__BackingField = (pJVar6->fields).CBCJKNHJFJL;
            (__this->fields).super._BGCHJEEOKMG_k__BackingField = (pJVar6->fields).MOBGHJBCHFF;
            ppSVar7 = &(__this->fields).super._ILMMODKJGFK_k__BackingField;
            *ppSVar7 = (pJVar6->fields).FPMPKOCHBEB;
            thunk_FUN_01c20e04(ppSVar7);
            pJVar6 = (__this->fields).FBBBEHLGDJK;
            if (pJVar6 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
                    /* try { // try from 03263c08 to 0336514b has its CatchHandler @ 03263c08
                       catch() { ... } // from try @ 03263c08 with catch @ 03263c08
                       catch() { ... } // from try @ 03265230 with catch @ 03263c08
                       catch() { ... } // from try @ 03265458 with catch @ 03263c08
                       catch() { ... } // from try @ 03265684 with catch @ 03263c08
                       catch() { ... } // from try @ 032658f8 with catch @ 03263c08
                       catch() { ... } // from try @ 03265b30 with catch @ 03263c08
                       catch() { ... } // from try @ 03265d5c with catch @ 03263c08
                       catch() { ... } // from try @ 032667d8 with catch @ 03263c08
                       catch() { ... } // from try @ 032667f0 with catch @ 03263c08
                       catch() { ... } // from try @ 03266800 with catch @ 03263c08
                       catch() { ... } // from try @ 032668e0 with catch @ 03263c08
                       catch() { ... } // from try @ 032669ac with catch @ 03263c08
                       catch() { ... } // from try @ 03266a84 with catch @ 03263c08
                       catch() { ... } // from try @ 03266b48 with catch @ 03263c08
                       catch() { ... } // from try @ 03266c00 with catch @ 03263c08
                       catch() { ... } // from try @ 03266cbc with catch @ 03263c08 */
              (__this->fields).super._IHNMHEFKJJG_k__BackingField = (pJVar6->fields).APCNIPADHAO;
              thunk_FUN_01c20e04(&(__this->fields).super._IHNMHEFKJJG_k__BackingField);
              pJVar6 = (__this->fields).FBBBEHLGDJK;
              if (pJVar6 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
                (__this->fields).super._KNNLLCNGLGO_k__BackingField = (pJVar6->fields).JHFAAGIPDAJ;
                thunk_FUN_01c20e04(&(__this->fields).super._KNNLLCNGLGO_k__BackingField);
                pJVar6 = (__this->fields).FBBBEHLGDJK;
                if (pJVar6 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
                  (__this->fields).super._NMBNLNIMMPI_k__BackingField = (pJVar6->fields).BDDFFNDBGHC
                  ;
                  thunk_FUN_01c20e04(&(__this->fields).super._NMBNLNIMMPI_k__BackingField);
                  pJVar6 = (__this->fields).FBBBEHLGDJK;
                  if (pJVar6 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
                    ppSVar7 = &(__this->fields).super._CIEBCKIBJHL_k__BackingField;
                    *ppSVar7 = (pJVar6->fields).IIHFLLPKBJI;
                    thunk_FUN_01c20e04(ppSVar7);
                    pJVar6 = (__this->fields).FBBBEHLGDJK;
                    if (pJVar6 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
                      ppSVar7 = &(__this->fields).super.KPKHGGOBOJG;
                      *ppSVar7 = (pJVar6->fields).PNGPGDCGOKD;
                      thunk_FUN_01c20e04(ppSVar7);
                      pJVar6 = (__this->fields).FBBBEHLGDJK;
                      if (pJVar6 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
                        (__this->fields).super.BEJKCHFCABF = (pJVar6->fields).KAOKFFDMLGK;
                        thunk_FUN_01c20e04();
                        pSVar5 = HOOAAGABMBL__ANEHPKMBLHA((HOOAAGABMBL_o *)__this,(MethodInfo *)0x0)
                        ;
                        bVar3 = PCOEHCPGBBG__EDHHJAMCOJH(pSVar5,(MethodInfo *)0x0);
                        if (bVar3) {
LAB_03263d50:
                          System_String__op_Equality
                                    ((__this->fields).super._GMPAEDFIIHF_k__BackingField,
                                     StringLiteral_11073,(MethodInfo *)0x0);
                          FAIJGJCCKJC__MAPOGIEBMKE(__this,method_00);
                          return;
                        }
                        pSVar5 = HOOAAGABMBL__ANEHPKMBLHA((HOOAAGABMBL_o *)__this,(MethodInfo *)0x0)
                        ;
                        if ((pSVar5 != (System_String_o *)0x0) &&
                           (pSVar5 = System_String__Substring(pSVar5,1,(MethodInfo *)0x0),
                           pSVar5 != (System_String_o *)0x0)) {
                          bVar3 = System_String__Contains
                                            (pSVar5,StringLiteral_167,(MethodInfo *)0x0);
                          pSVar5 = HOOAAGABMBL__ANEHPKMBLHA
                                             ((HOOAAGABMBL_o *)__this,(MethodInfo *)0x0);
                          if (pSVar5 != (System_String_o *)0x0) {
                            pSVar5 = System_String__Substring(pSVar5,1,(MethodInfo *)0x0);
                            if (bVar3) {
                              if ((pSVar5 == (System_String_o *)0x0) ||
                                 (pSVar4 = System_String__Split(pSVar5,0x20,0,(MethodInfo *)0x0),
                                 pSVar4 == (System_String_array *)0x0)) goto LAB_03263d80;
                              if ((int)pSVar4->max_length == 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_01bab8d0();
                              }
                              pSVar5 = pSVar4->m_Items[0];
                            }
                            ppSVar7 = &(__this->fields).super.AAEIONBBBBF;
                            *ppSVar7 = pSVar5;
                            thunk_FUN_01c20e04(ppSVar7,pSVar5);
                            HOOAAGABMBL__FPEKMLPMFPB((HOOAAGABMBL_o *)__this,(MethodInfo *)0x0);
                            goto LAB_03263d50;
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
    }
  }
LAB_03263d80:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

