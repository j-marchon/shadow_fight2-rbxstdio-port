// TypeDefIndex 1365
// Namespace: 
// public class FAIJGJCCKJC : HOOAAGABMBL
// Fields:
//   private JMDPBFOCHHP.ENBCJNLAHAC FBBBEHLGDJK; // 0x330

// ===== public override NMAHEBEALAB PDECHBMCBDB(int CDLNPAAECKM = 0)  [RVA 0x316A4B8]
// FAIJGJCCKJC$$PDECHBMCBDB @ RVA 0x316A4B8

NMAHEBEALAB_o *
FAIJGJCCKJC__PDECHBMCBDB(FAIJGJCCKJC_o *__this,int32_t CDLNPAAECKM,MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  int64_t iVar1;
  int64_t iVar2;
  NMAHEBEALAB_o *pNVar3;
  
  if ((DAT_045668eb & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_045668eb = 1;
  }
  if (CDLNPAAECKM == 0) {
    __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (__this_00 == (KKLJIDJBFEI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = KKLJIDJBFEI__HEDLNKCNMCI(__this_00,(MethodInfo *)0x0);
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
    }
    iVar2 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
    CDLNPAAECKM = (int)iVar2 + (int)iVar1;
  }
  pNVar3 = HOOAAGABMBL__PDECHBMCBDB((HOOAAGABMBL_o *)__this,CDLNPAAECKM,(MethodInfo *)0x0);
  return pNVar3;
}


// ===== public string IOEMDFKAGIM()  [RVA 0x316A548]
// FAIJGJCCKJC$$IOEMDFKAGIM @ RVA 0x316A548

System_String_o * FAIJGJCCKJC__IOEMDFKAGIM(FAIJGJCCKJC_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar2;
  
  if ((DAT_045668ec & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045668ec = 1;
  }
  pJVar2 = (__this->fields).FBBBEHLGDJK;
  ppSVar1 = (System_String_o **)&StringLiteral_1/*""*/;
  if (pJVar2 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
    ppSVar1 = &(pJVar2->fields).KIDAPFADKEE;
  }
  return *ppSVar1;
}


// ===== public JMDPBFOCHHP.ENBCJNLAHAC EMHPLGLIIEG()  [RVA 0x316A59C]
// FAIJGJCCKJC$$EMHPLGLIIEG @ RVA 0x316A59C

JMDPBFOCHHP_ENBCJNLAHAC_o * FAIJGJCCKJC__EMHPLGLIIEG(FAIJGJCCKJC_o *__this,MethodInfo *method)

{
  return (__this->fields).FBBBEHLGDJK;
}


// ===== public long PPPNCCIPNEH()  [RVA 0x316A5A4]
// FAIJGJCCKJC$$PPPNCCIPNEH @ RVA 0x316A5A4

int64_t FAIJGJCCKJC__PPPNCCIPNEH(FAIJGJCCKJC_o *__this,MethodInfo *method)

{
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar1;
  
  pJVar1 = (__this->fields).FBBBEHLGDJK;
  if (pJVar1 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
    return (pJVar1->fields).NFKHJPMMNLM;
  }
  return -2;
}


// ===== public override bool EFLKILFFJKH()  [RVA 0x316A5BC]
// FAIJGJCCKJC$$EFLKILFFJKH @ RVA 0x316A5BC

bool FAIJGJCCKJC__EFLKILFFJKH(FAIJGJCCKJC_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar3;
  
  if ((DAT_045668ed & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045668ed = 1;
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
    iVar2 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    pJVar3 = (__this->fields).FBBBEHLGDJK;
    if (pJVar3 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
      if (((pJVar3->fields).MLBCPAGCKAH <= iVar2) && (iVar2 <= (pJVar3->fields).FKHFKAJHLOG)) {
        bVar1 = HOOAAGABMBL__EFLKILFFJKH((HOOAAGABMBL_o *)__this,(MethodInfo *)0x0);
        return bVar1;
      }
      return true;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool KDBOPDDCNID()  [RVA 0x316A690]
// FAIJGJCCKJC$$KDBOPDDCNID @ RVA 0x316A690

bool FAIJGJCCKJC__KDBOPDDCNID(FAIJGJCCKJC_o *__this,MethodInfo *method)

{
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar1;
  
  pJVar1 = (__this->fields).FBBBEHLGDJK;
  if ((pJVar1 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) && (0 < (pJVar1->fields).NFKHJPMMNLM)) {
    return 0 < (pJVar1->fields).CEGNAMELGID;
  }
  return false;
}


// ===== public long EFOFAAKJOGD()  [RVA 0x316A6BC]
// FAIJGJCCKJC$$EFOFAAKJOGD @ RVA 0x316A6BC

int64_t FAIJGJCCKJC__EFOFAAKJOGD(FAIJGJCCKJC_o *__this,MethodInfo *method)

{
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar1;
  
  pJVar1 = (__this->fields).FBBBEHLGDJK;
  if (pJVar1 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
    return (pJVar1->fields).CEGNAMELGID;
  }
  return -2;
}


// ===== public override bool OIEONLNFHKC()  [RVA 0x316A6D4]
// FAIJGJCCKJC$$OIEONLNFHKC @ RVA 0x316A6D4

bool FAIJGJCCKJC__OIEONLNFHKC(FAIJGJCCKJC_o *__this,MethodInfo *method)

{
  bool bVar1;
  KKLJIDJBFEI_o *__this_00;
  int64_t iVar2;
  int64_t iVar3;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar4;
  
  if ((DAT_045668ee & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_045668ee = 1;
  }
  if ((__this->fields).FBBBEHLGDJK == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
    bVar1 = HOOAAGABMBL__OIEONLNFHKC((HOOAAGABMBL_o *)__this,(MethodInfo *)0x0);
    return bVar1;
  }
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
    iVar2 = KKLJIDJBFEI__HEDLNKCNMCI(__this_00,(MethodInfo *)0x0);
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
    }
    iVar3 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
    pJVar4 = (__this->fields).FBBBEHLGDJK;
    if (pJVar4 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
      return (pJVar4->fields).NFKHJPMMNLM <= iVar3 + iVar2 &&
             iVar3 + iVar2 < (pJVar4->fields).CEGNAMELGID;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(JMDPBFOCHHP.ENBCJNLAHAC IOOJAJAPMBM)  [RVA 0x3163A8C]
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
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_11073/*"RealMoneyItem"*/);
    FUN_01bab630(&StringLiteral_10876/*"RaidItemPack"*/);
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
  pSVar1 = StringLiteral_10876/*"RaidItemPack"*/;
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
                                     StringLiteral_11073/*"RealMoneyItem"*/,(MethodInfo *)0x0);
                          FAIJGJCCKJC__MAPOGIEBMKE(__this,method_00);
                          return;
                        }
                        pSVar5 = HOOAAGABMBL__ANEHPKMBLHA((HOOAAGABMBL_o *)__this,(MethodInfo *)0x0)
                        ;
                        if ((pSVar5 != (System_String_o *)0x0) &&
                           (pSVar5 = System_String__Substring(pSVar5,1,(MethodInfo *)0x0),
                           pSVar5 != (System_String_o *)0x0)) {
                          bVar3 = System_String__Contains
                                            (pSVar5,StringLiteral_167/*" "*/,(MethodInfo *)0x0);
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


// ===== private void MAPOGIEBMKE()  [RVA 0x316A78C]
// FAIJGJCCKJC$$MAPOGIEBMKE @ RVA 0x316A78C

/* WARNING: Type propagation algorithm not settling */

void FAIJGJCCKJC__MAPOGIEBMKE(FAIJGJCCKJC_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *pCVar1;
  int iVar2;
  FAIJGJCCKJC_Fields *pFVar3;
  bool bVar4;
  int32_t iVar5;
  JMDPBFOCHHP_o *pJVar6;
  JMDPBFOCHHP_FNILDHLJBBJ_o *pJVar7;
  System_Collections_Generic_List_DDMHMABAHHD__o *__this_00;
  Il2CppObject *pIVar8;
  System_String_o *pSVar9;
  NMAHEBEALAB_o *__this_01;
  MethodInfo *extraout_x1;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar10;
  int64_t iVar11;
  System_String_o **ppSVar12;
  int64_t GOKKDGLPFPJ;
  float fVar13;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_c0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_a0;
  undefined8 local_78;
  undefined1 local_70 [24];
  Il2CppClass *pIStack_58;
  
  if ((DAT_045668f0 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IEHDDOIHPNI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&NMAHEBEALAB_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045668f0 = 1;
    method = extraout_x1;
  }
  local_78 = (Il2CppMethodPointer)0x0;
  local_70._8_8_ = (InvokerMethod)0x0;
  local_70._0_8_ = (Il2CppMethodPointer)0x0;
  pIStack_58 = (Il2CppClass *)0x0;
  local_70._16_8_ = (char *)0x0;
  if ((__this->fields).FBBBEHLGDJK == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pJVar6 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  pJVar10 = (__this->fields).FBBBEHLGDJK;
  if ((pJVar10 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) && (pJVar6 != (JMDPBFOCHHP_o *)0x0)) {
    pJVar7 = JMDPBFOCHHP__OJOIAONADNG(pJVar6,(pJVar10->fields).LEJBNEIJJIF,(MethodInfo *)0x0);
    if ((pJVar7 == (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) || ((pJVar7->fields).HNGIBIJJKAP == false)) {
      iVar11 = 0;
    }
    else {
      __this_00 = (pJVar7->fields).GFBNJPMOEKD;
      if ((__this_00 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) ||
         (pIVar8 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,0,
                              Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__),
         pIVar8 == (Il2CppObject *)0x0)) goto LAB_0326aad4;
      iVar11 = (int64_t)*(int *)&pIVar8[1].monitor;
    }
    pJVar10 = (__this->fields).FBBBEHLGDJK;
    if (pJVar10 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
      pCVar1 = &(__this->fields).super._AHMCDBKNKAJ_k__BackingField;
      local_70._8_8_ = (__this->fields).super._AHMCDBKNKAJ_k__BackingField.fields.hiddenValue;
      local_70._0_8_ = (pCVar1->fields).currentCryptoKey;
      pIStack_58 = *(Il2CppClass **)
                    &(__this->fields).super._AHMCDBKNKAJ_k__BackingField.fields.fakeValueActive;
      local_70._16_8_ = (__this->fields).super._AHMCDBKNKAJ_k__BackingField.fields.fakeValue;
      GOKKDGLPFPJ = (pJVar10->fields).CEGNAMELGID;
      pSVar9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ToString
                         ((CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)local_70,
                          (MethodInfo *)0x0);
      __this_01 = (NMAHEBEALAB_o *)thunk_FUN_01bda818(NMAHEBEALAB_TypeInfo);
      NMAHEBEALAB___ctor(__this_01,StringLiteral_1/*""*/,StringLiteral_1/*""*/,GOKKDGLPFPJ,iVar11,pSVar9,
                         StringLiteral_1/*""*/,0,false,false,false,(MethodInfo *)0x0);
      if (__this_01 != (NMAHEBEALAB_o *)0x0) {
        (__this_01->fields).CKGAMIHJOMC = true;
        local_a0.fields.hiddenValue =
             (__this->fields).super._AHMCDBKNKAJ_k__BackingField.fields.hiddenValue;
        local_a0.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
        pFVar3 = &__this->fields;
        local_a0.fields.fakeValueActive =
             (pFVar3->super)._AHMCDBKNKAJ_k__BackingField.fields.fakeValueActive;
        local_a0.fields.inited = (pFVar3->super)._AHMCDBKNKAJ_k__BackingField.fields.inited;
        local_a0.fields._26_6_ =
             *(undefined6 *)&(pFVar3->super)._AHMCDBKNKAJ_k__BackingField.fields.field_0x1a;
        local_a0.fields.fakeValue =
             (__this->fields).super._AHMCDBKNKAJ_k__BackingField.fields.fakeValue;
        iVar11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                           (&local_a0,(MethodInfo *)0x0);
        local_78 = (Il2CppMethodPointer)CONCAT44((int)iVar11,(undefined4)local_78);
        pSVar9 = System_Int32__ToString((int)&local_78 + 4,(MethodInfo *)0x0);
        (__this_01->fields).HCCELBFOFPE = pSVar9;
        thunk_FUN_01c20e04();
        local_78 = (Il2CppMethodPointer)
                   CONCAT44((__this->fields).super._IAEGOLJCOIB_k__BackingField,(undefined4)local_78
                           );
        pSVar9 = System_Int32__ToString((int)&local_78 + 4,(MethodInfo *)0x0);
        ppSVar12 = &(__this_01->fields).EGEHGIEAIJL;
        *ppSVar12 = pSVar9;
        thunk_FUN_01c20e04(ppSVar12,pSVar9);
        pJVar10 = (__this->fields).FBBBEHLGDJK;
        if (pJVar10 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
          bVar4 = System_String__IsNullOrEmpty((pJVar10->fields).KIDAPFADKEE,(MethodInfo *)0x0);
          if (!bVar4) {
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pJVar6 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
            pJVar10 = (__this->fields).FBBBEHLGDJK;
            if ((pJVar10 == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) || (pJVar6 == (JMDPBFOCHHP_o *)0x0))
            goto LAB_0326aad4;
            pJVar10 = JMDPBFOCHHP__DIFLKMKBENA
                                (pJVar6,(pJVar10->fields).KIDAPFADKEE,false,(MethodInfo *)0x0);
            if (pJVar10 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
              local_c0.fields.hiddenValue =
                   (__this->fields).super._AHMCDBKNKAJ_k__BackingField.fields.hiddenValue;
              local_c0.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
              pFVar3 = &__this->fields;
              local_c0.fields.fakeValueActive =
                   (pFVar3->super)._AHMCDBKNKAJ_k__BackingField.fields.fakeValueActive;
              local_c0.fields.inited = (pFVar3->super)._AHMCDBKNKAJ_k__BackingField.fields.inited;
              local_c0.fields._26_6_ =
                   *(undefined6 *)&(pFVar3->super)._AHMCDBKNKAJ_k__BackingField.fields.field_0x1a;
              local_c0.fields.fakeValue =
                   (__this->fields).super._AHMCDBKNKAJ_k__BackingField.fields.fakeValue;
              iVar11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                                 (&local_c0,(MethodInfo *)0x0);
              iVar2 = (pJVar10->fields).NGMFKGGBHND;
              fVar13 = ((float)(iVar11 - iVar2) / (float)iVar2) * 100.0;
              if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              iVar5 = -0x80000000;
              if (fVar13 != INFINITY) {
                iVar5 = (int)fVar13;
              }
              iVar5 = MGNPHCAAEIO__JLNDJMOBBLI(iVar5,(MethodInfo *)0x0);
              if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(System_Math_TypeInfo);
              }
              local_78 = (Il2CppMethodPointer)CONCAT44(local_78._4_4_,ABS((float)iVar5));
              pSVar9 = System_Single__ToString(ABS((float)iVar5),(MethodInfo *)&local_78);
              *ppSVar12 = pSVar9;
              thunk_FUN_01c20e04(ppSVar12,pSVar9);
            }
          }
          (__this->fields).super.DLBFLPBOJNI = __this_01;
          thunk_FUN_01c20e04(&(__this->fields).super.DLBFLPBOJNI,__this_01);
          if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          IEHDDOIHPNI__EDNBFMMPAHG((HOOAAGABMBL_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0326aad4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

