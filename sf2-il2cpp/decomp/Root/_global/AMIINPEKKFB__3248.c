// TypeDefIndex 3248
// Namespace: 
// public class AMIINPEKKFB
// Fields:
//   private static Action<HOOAAGABMBL> PEFBFMPBJAA; // 0x0

// ===== public static void NKGDNFCCFCD(string CNIELFLIKJB, List<PKKLIJLIKGF> LDAIPGBJEOG)  [RVA 0x350E014]
// AMIINPEKKFB$$NKGDNFCCFCD @ RVA 0x350E014

void AMIINPEKKFB__NKGDNFCCFCD
               (System_String_o *CNIELFLIKJB,
               System_Collections_Generic_List_PKKLIJLIKGF__o *LDAIPGBJEOG,MethodInfo *method)

{
  DOPEEDABNEK_o *__this;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  System_String_o *JLNPKGGFFDD;
  MethodInfo *method_00;
  
  if ((DAT_045688e0 & 1) == 0) {
    FUN_01bab630(&Method_KFJJHMDIFIG_ONCJPMNKDIM<AMIINPEKKFB>__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_6859/*"GivePerksToItem: cant find item '"*/);
    FUN_01bab630(&StringLiteral_853/*"'!"*/);
    DAT_045688e0 = 1;
  }
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
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (__this != (DOPEEDABNEK_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    IKKAMAMLIKA = DOPEEDABNEK__CKKIPBAIEMN(__this,CNIELFLIKJB,(MethodInfo *)0x0);
    if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
      AMIINPEKKFB__NKGDNFCCFCD(IKKAMAMLIKA,LDAIPGBJEOG,method_00);
      return;
    }
    JLNPKGGFFDD = System_String__Concat
                            (StringLiteral_6859/*"GivePerksToItem: cant find item '"*/,CNIELFLIKJB,StringLiteral_853/*"'!"*/,(MethodInfo *)0x0);
    KFJJHMDIFIG__ONCJPMNKDIM<object>(JLNPKGGFFDD,Method_KFJJHMDIFIG_ONCJPMNKDIM<AMIINPEKKFB>__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool KMJPPCLIEDG(HOOAAGABMBL IKKAMAMLIKA, bool OFKBEIFPFMN = True, bool NGAJHNAFCGK = False)  [RVA 0x350E378]
// AMIINPEKKFB$$KMJPPCLIEDG @ RVA 0x350E378

bool AMIINPEKKFB__KMJPPCLIEDG
               (HOOAAGABMBL_o *IKKAMAMLIKA,bool OFKBEIFPFMN,bool NGAJHNAFCGK,MethodInfo *method)

{
  int32_t iVar1;
  GGHCLMEFIGO_o *pGVar2;
  IGFGDDANEPE_o *pIVar3;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar4;
  HOOAAGABMBL_o *pHVar5;
  System_Xml_XmlNode_o *GGDPPDFOEOH;
  System_String_o *KGLJICLJHEL;
  
  if ((DAT_045688e1 & 1) == 0) {
    FUN_01bab630(&IGFGDDANEPE_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_8095/*"Item"*/);
    DAT_045688e1 = 1;
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
                    /* try { // try from 0360e424 to 0370e42b has its CatchHandler @ 0360e654 */
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar4 != (ACHLOMELAJE_o *)0x0) &&
     (pGVar2 = (pAVar4->fields).OIDPLCLELEN, pGVar2 != (GGHCLMEFIGO_o *)0x0)) {
                    /* try { // try from 0360e43c to 0370e443 has its CatchHandler @ 0360e650 */
    pIVar3 = GGHCLMEFIGO__JNFIBDBHNOA(pGVar2,IKKAMAMLIKA,(MethodInfo *)0x0);
    if (pIVar3 != (IGFGDDANEPE_o *)0x0) {
                    /* try { // try from 0360e44c to 0370e453 has its CatchHandler @ 0360e638 */
      iVar1 = IGFGDDANEPE__LDJLMEFOMLG(pIVar3,(MethodInfo *)0x0);
                    /* try { // try from 0360e45c to 0370e463 has its CatchHandler @ 0360e640 */
      IGFGDDANEPE__PICGGLNNJFA(pIVar3,iVar1 + 1,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0360e66c with catch @ 0360e690 */
      return true;
    }
                    /* try { // try from 0360e468 to 0370e46f has its CatchHandler @ 0360e644 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0360e478 to 0370e47f has its CatchHandler @ 0360e63c */
    if (DAT_04565b7d == '\0') {
                    /* try { // try from 0360e480 to 0370e493 has its CatchHandler @ 0360e648 */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
                    /* try { // try from 0360e498 to 0370e4a3 has its CatchHandler @ 0360e634 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0360e4a4 to 0370e62b has its CatchHandler @ 0360e1b8 */
    pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar4 != (ACHLOMELAJE_o *)0x0) {
      iVar1 = ACHLOMELAJE__EOEAKGGDBFH(pAVar4,(MethodInfo *)0x0);
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar4 != (ACHLOMELAJE_o *)0x0) && (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0)) {
        GGDPPDFOEOH = (pAVar4->fields).LNPJFGHNPFN;
        KGLJICLJHEL = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
        pIVar3 = (IGFGDDANEPE_o *)thunk_FUN_01bda818(IGFGDDANEPE_TypeInfo);
        IGFGDDANEPE___ctor(pIVar3,iVar1,GGDPPDFOEOH,KGLJICLJHEL,false,1,-1,-1,-1,true,
                           StringLiteral_8095/*"Item"*/,(MethodInfo *)0x0);
        if (pIVar3 != (IGFGDDANEPE_o *)0x0) {
          IGFGDDANEPE__CLIDHHJIGOC(pIVar3,IKKAMAMLIKA,(MethodInfo *)0x0);
          IGFGDDANEPE__JIIEJGCOACC(pIVar3,false,(MethodInfo *)0x0);
          IGFGDDANEPE__PHAGOINEABA(pIVar3,(MethodInfo *)0x0);
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if ((pAVar4 != (ACHLOMELAJE_o *)0x0) &&
             (pGVar2 = (pAVar4->fields).OIDPLCLELEN, pGVar2 != (GGHCLMEFIGO_o *)0x0)) {
            method_00 = (MethodInfo *)0x0;
            GGHCLMEFIGO__FIFBDNADAAL(pGVar2,pIVar3,false,(MethodInfo *)0x0);
            if (DAT_04565b7d == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04565b7d = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (pAVar4 != (ACHLOMELAJE_o *)0x0) {
              iVar1 = ACHLOMELAJE__EOEAKGGDBFH(pAVar4,(MethodInfo *)0x0);
                    /* try { // try from 0360e62c to 0370e62f has its CatchHandler @ 0360e64c */
                    /* try { // try from 0360e630 to 0370e66b has its CatchHandler @ 0360e1b8 */
              IGFGDDANEPE__GIIJHCLHFDK(pIVar3,iVar1,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360e498 with catch @ 0360e634
                        */
              if (NGAJHNAFCGK) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360e44c with catch @ 0360e638
                        */
                pHVar5 = (pIVar3->fields).PCBECBEFJOI;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360e478 with catch @ 0360e63c
                        */
                if (pHVar5 == (HOOAAGABMBL_o *)0x0) goto LAB_0360e694;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360e45c with catch @ 0360e640
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360e468 with catch @ 0360e644
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360e480 with catch @ 0360e648
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360e62c with catch @ 0360e64c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360e43c with catch @ 0360e650
                        */
                if (((pHVar5->fields)._JDEHPJEIOCI_k__BackingField < iVar1) &&
                   ((pIVar3->fields).IIPJCIFKCIH == false)) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360e424 with catch @ 0360e654
                        */
                  pHVar5 = (pIVar3->fields).LFPOIAJDMBK;
                  if (pHVar5 == (HOOAAGABMBL_o *)0x0) {
                    return false;
                  }
                  AMIINPEKKFB__GLIKCOKNHDM(pHVar5,pIVar3,false,method_00);
                }
              }
              if (!OFKBEIFPFMN) {
                return true;
              }
                    /* try { // try from 0360e66c to 0370e66f has its CatchHandler @ 0360e690 */
                    /* try { // try from 0360e670 to 0370e697 has its CatchHandler @ 0360e1b8 */
              EDFDANKEBGF__HKPLJCDJKMB((MethodInfo *)0x0);
              return true;
            }
          }
        }
      }
    }
  }
LAB_0360e694:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool NLLNEAKJCLB(HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x350E794]
// AMIINPEKKFB$$NLLNEAKJCLB @ RVA 0x350E794

bool AMIINPEKKFB__NLLNEAKJCLB(HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  bool bVar1;
  ACHLOMELAJE_o *pAVar2;
  int64_t iVar3;
  int64_t iVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  MethodInfo *in_x3;
  MethodInfo *method_01;
  long lVar5;
  
                    /* try { // try from 0360e798 to 0370e853 has its CatchHandler @ 0360e798
                       catch() { ... } // from try @ 0360e798 with catch @ 0360e798
                       catch() { ... } // from try @ 0360e85c with catch @ 0360e798
                       catch() { ... } // from try @ 0360e8bc with catch @ 0360e798
                       catch() { ... } // from try @ 0360e8e0 with catch @ 0360e798
                       catch() { ... } // from try @ 0360e920 with catch @ 0360e798 */
  if ((DAT_045688e2 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045688e2 = 1;
    method = extraout_x1;
  }
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
                    /* catch() { ... } // from try @ 0360e8dc with catch @ 0360e908 */
                    /* try { // try from 0360e918 to 0370e91f has its CatchHandler @ 0360e934 */
    return false;
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
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
    iVar3 = ACHLOMELAJE__IMLCNMCBEEN(pAVar2,(MethodInfo *)0x0);
    iVar4 = HOOAAGABMBL__ICMFLAFFOFM(IKKAMAMLIKA,(MethodInfo *)0x0);
    if (iVar3 < iVar4) {
                    /* try { // try from 0360e854 to 0370e85b has its CatchHandler @ 0360e8c4 */
                    /* try { // try from 0360e85c to 0370e8b7 has its CatchHandler @ 0360e798 */
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      MGNPHCAAEIO__EHEMFMCGKKK(IKKAMAMLIKA,2,(MethodInfo *)0x0);
      return false;
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
                    /* try { // try from 0360e8b8 to 0370e8bb has its CatchHandler @ 0360e8c0 */
    }
                    /* try { // try from 0360e8bc to 0370e8db has its CatchHandler @ 0360e798 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360e8b8 with catch @ 0360e8c0
                        */
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360e854 with catch @ 0360e8c4
                        */
    if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
      iVar3 = ACHLOMELAJE__IMLCNMCBEEN(pAVar2,(MethodInfo *)0x0);
                    /* try { // try from 0360e8dc to 0370e8df has its CatchHandler @ 0360e908 */
      iVar4 = HOOAAGABMBL__ICMFLAFFOFM(IKKAMAMLIKA,(MethodInfo *)0x0);
                    /* try { // try from 0360e8e0 to 0370e917 has its CatchHandler @ 0360e798 */
      lVar5 = (IKKAMAMLIKA->fields)._LAOFJOMPFDL_k__BackingField;
      if (lVar5 < 1) {
                    /* try { // try from 0360e920 to 0370e92b has its CatchHandler @ 0360e798 */
        bVar1 = AMIINPEKKFB__KMJPPCLIEDG(IKKAMAMLIKA,true,false,in_x3);
                    /* try { // try from 0360e92c to 0370e933 has its CatchHandler @ 0360e934 */
        if (!bVar1) {
          return false;
        }
      }
      else {
        bVar1 = AMIINPEKKFB__LCJGGKADBPI(IKKAMAMLIKA,true,in_x2);
        if (!bVar1) {
          return false;
        }
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0360e918 with catch @ 0360e934
                       catch(type#2 @ 00000000) { ... } // from try @ 0360e92c with catch @ 0360e934
                        */
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
        method_01 = (MethodInfo *)0x0;
        ACHLOMELAJE__CEICBEHCCDA(pAVar2,iVar3 - iVar4,false,(MethodInfo *)0x0);
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
          CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar2,false,(MethodInfo *)0x0);
          AMIINPEKKFB__BDMBCINIFFB(IKKAMAMLIKA,0,false,method_01);
          AMIINPEKKFB__AMGIHEOPMEK(IKKAMAMLIKA,method_00);
          return lVar5 < 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void LNGOANIDDNG(AMJMGFCCAKN IKKAMAMLIKA)  [RVA 0x350EFD4]
// AMIINPEKKFB$$LNGOANIDDNG @ RVA 0x350EFD4

void AMIINPEKKFB__LNGOANIDDNG(AMJMGFCCAKN_o *IKKAMAMLIKA,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar1;
  PKHMIGFEJCL_ELHOKIPELBO_o *pPVar2;
  System_Action_HOOAAGABMBL__o *pSVar3;
  IGFGDDANEPE_o *pIVar4;
  GGLKHCAIGDI_o *pGVar5;
  DNELIPCHKLK_o **ppDVar6;
  DNELIPCHKLK_o *pDVar7;
  PKHMIGFEJCL_o *pPVar8;
  
                    /* try { // try from 0360efd4 to 0370efff has its CatchHandler @ 0360f328 */
  if ((DAT_045688e3 & 1) == 0) {
    FUN_01bab630(&AMIINPEKKFB_TypeInfo);
    DAT_045688e3 = 1;
  }
  pSVar3 = AMIINPEKKFB_TypeInfo->static_fields->PEFBFMPBJAA;
  if (pSVar3 != (System_Action_HOOAAGABMBL__o *)0x0) {
    (*(code *)(pSVar3->fields).super.super.invoke_impl)
              ((pSVar3->fields).super.super.method_code,IKKAMAMLIKA,
               (pSVar3->fields).super.super.method);
  }
  pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
                    /* try { // try from 0360f040 to 0370f04b has its CatchHandler @ 0360f33c */
  if ((pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
     (pPVar8 = (pNVar1->fields).QuestParameters, pPVar8 != (PKHMIGFEJCL_o *)0x0)) {
    ppDVar6 = &(pPVar8->fields).NMHCLFFOMJH;
    pDVar7 = *ppDVar6;
                    /* try { // try from 0360f05c to 0370f063 has its CatchHandler @ 0360f304 */
    if ((IKKAMAMLIKA != (AMJMGFCCAKN_o *)0x0) &&
       ((pIVar4 = (IKKAMAMLIKA->fields).MNELBNHIKGH, pIVar4 != (IGFGDDANEPE_o *)0x0 &&
        (pPVar2 = (pPVar8->fields).BJJFDMHOBNB, pPVar2 != (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0)))) {
      (pPVar2->fields).BMGMGAAPFGO = (pIVar4->fields).NPFMOEOIEKM;
      thunk_FUN_01c20e04();
                    /* try { // try from 0360f06c to 0370f073 has its CatchHandler @ 0360f300 */
      pGVar5 = (IKKAMAMLIKA->fields).PHAGOJCOMPN;
                    /* try { // try from 0360f074 to 0370f093 has its CatchHandler @ 0360f338 */
      if ((pGVar5 != (GGLKHCAIGDI_o *)0x0) &&
         (pPVar2 = (pPVar8->fields).BJJFDMHOBNB, pPVar2 != (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0)) {
        (pPVar2->fields).JDKKCDBDNLB = (pGVar5->fields)._COIPKAKHDFP_k__BackingField;
        thunk_FUN_01c20e04();
        pPVar2 = (pPVar8->fields).BJJFDMHOBNB;
        if (pPVar2 != (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0) {
          (pPVar2->fields).HDGEOJGHEOE = 0;
          (pPVar8->fields).CJLNOJMBNPN = (HOOAAGABMBL_o *)0x0;
                    /* try { // try from 0360f0a0 to 0370f0a7 has its CatchHandler @ 0360f308 */
          thunk_FUN_01c20e04(&pPVar8->fields,0);
          pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
          if (pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* try { // try from 0360f0b0 to 0370f0b7 has its CatchHandler @ 0360f318 */
                    /* try { // try from 0360f0b8 to 0370f0c3 has its CatchHandler @ 0360f2d4 */
            Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar1,0xb,(MethodInfo *)0x0);
            *ppDVar6 = pDVar7;
                    /* try { // try from 0360f0d4 to 0370f0db has its CatchHandler @ 0360f2d0 */
            thunk_FUN_01c20e04(ppDVar6,pDVar7);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static IGFGDDANEPE PJOFJOOGIBF(HOOAAGABMBL ANMFBABEMFD, int PCKDEOGMDHH = 1, long HFNPHCFGDHA = 0, bool KGLBDPMLIAE = True, bool HGELKAEHPCB = True)  [RVA 0x350F0DC]
// AMIINPEKKFB$$PJOFJOOGIBF @ RVA 0x350F0DC

IGFGDDANEPE_o *
AMIINPEKKFB__PJOFJOOGIBF
          (HOOAAGABMBL_o *ANMFBABEMFD,int32_t PCKDEOGMDHH,int64_t HFNPHCFGDHA,bool KGLBDPMLIAE,
          bool HGELKAEHPCB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  IGFGDDANEPE_o *pIVar3;
  int64_t iVar4;
  ACHLOMELAJE_o *pAVar5;
  System_Byte_array *pSVar6;
  System_Byte_array *pSVar7;
  NFGLEDADCGL_o *__this;
  System_String_o *a;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar8;
  System_String_o *pSVar9;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_a0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_80;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  
                    /* try { // try from 0360f0e4 to 0370f0eb has its CatchHandler @ 0360f2dc */
                    /* try { // try from 0360f0ec to 0370f0f7 has its CatchHandler @ 0360f2f8 */
                    /* try { // try from 0360f10c to 0370f113 has its CatchHandler @ 0360f2f4 */
  if ((DAT_045688e4 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2901);
                    /* try { // try from 0360f11c to 0370f123 has its CatchHandler @ 0360f2f0 */
                    /* try { // try from 0360f124 to 0370f13f has its CatchHandler @ 0360f330 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2902);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2903);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2904);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 0360f14c to 0370f153 has its CatchHandler @ 0360f2fc */
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* try { // try from 0360f15c to 0370f163 has its CatchHandler @ 0360f2d8 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0360f164 to 0370f183 has its CatchHandler @ 0360f324 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045688e4 = 1;
  }
  if (ANMFBABEMFD == (HOOAAGABMBL_o *)0x0) {
    pIVar3 = (IGFGDDANEPE_o *)0x0;
  }
  else {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pIVar3 = NLPJLHOEAOE__FIFBDNADAAL
                       (ANMFBABEMFD,PCKDEOGMDHH,HFNPHCFGDHA,KGLBDPMLIAE,HGELKAEHPCB,
                        (MethodInfo *)0x0);
    iVar4 = HOOAAGABMBL__GPCDIEIDNHH(ANMFBABEMFD,(MethodInfo *)0x0);
    if (0 < iVar4) {
                    /* try { // try from 0360f1d0 to 0370f1f3 has its CatchHandler @ 0360f2ec */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0360f1f4 to 0370f28f has its CatchHandler @ 0360ee08 */
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar5 == (ACHLOMELAJE_o *)0x0) goto LAB_0360f748;
      ACHLOMELAJE__KKDCNDLEGPP
                (pAVar5,iVar4,(ANMFBABEMFD->fields)._CEOFBAKJAEE_k__BackingField,(MethodInfo *)0x0);
    }
    iVar4 = HOOAAGABMBL__FKKAEBAKBOO(ANMFBABEMFD,(MethodInfo *)0x0);
    if (0 < iVar4) {
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
      pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar5 == (ACHLOMELAJE_o *)0x0) goto LAB_0360f748;
                    /* try { // try from 0360f290 to 0370f297 has its CatchHandler @ 0360f320 */
                    /* try { // try from 0360f298 to 0370f29b has its CatchHandler @ 0360f31c */
                    /* try { // try from 0360f29c to 0370f29f has its CatchHandler @ 0360f314 */
                    /* try { // try from 0360f2a0 to 0370f2a3 has its CatchHandler @ 0360f310 */
      ACHLOMELAJE__NDMIDIIDANL
                (pAVar5,iVar4,1,(ANMFBABEMFD->fields)._CEOFBAKJAEE_k__BackingField,(MethodInfo *)0x0
                );
    }
    local_60.fields.hiddenValue =
         (ANMFBABEMFD->fields)._EAOJFBDIFLL_k__BackingField.fields.hiddenValue;
    local_60.fields.currentCryptoKey =
         (ANMFBABEMFD->fields)._EAOJFBDIFLL_k__BackingField.fields.currentCryptoKey;
    local_60.fields.fakeValueActive =
         (ANMFBABEMFD->fields)._EAOJFBDIFLL_k__BackingField.fields.fakeValueActive;
    local_60.fields.inited = (ANMFBABEMFD->fields)._EAOJFBDIFLL_k__BackingField.fields.inited;
    local_60.fields._26_6_ =
         *(undefined6 *)&(ANMFBABEMFD->fields)._EAOJFBDIFLL_k__BackingField.fields.field_0x1a;
                    /* try { // try from 0360f2a4 to 0370f2a7 has its CatchHandler @ 0360f30c */
    local_60.fields.fakeValue = (ANMFBABEMFD->fields)._EAOJFBDIFLL_k__BackingField.fields.fakeValue;
                    /* try { // try from 0360f2a8 to 0370f2ab has its CatchHandler @ 0360f2e8 */
                    /* try { // try from 0360f2ac to 0370f2af has its CatchHandler @ 0360f334 */
                    /* try { // try from 0360f2b0 to 0370f2b3 has its CatchHandler @ 0360f2e4 */
                    /* try { // try from 0360f2b4 to 0370f2b7 has its CatchHandler @ 0360f2e0 */
    iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_60,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0360f2b8 to 0370f2bb has its CatchHandler @ 0360f334 */
                    /* try { // try from 0360f2bc to 0370f2bf has its CatchHandler @ 0360ee08 */
                    /* try { // try from 0360f2c0 to 0370f2c3 has its CatchHandler @ 0360f2cc */
    if (0 < (int)iVar4) {
                    /* try { // try from 0360f2c4 to 0370f35b has its CatchHandler @ 0360ee08 */
                    /* catch() { ... } // from try @ 0360f2c0 with catch @ 0360f2cc */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0360f0d4 with catch @ 0360f2d0 */
        thunk_FUN_01ba7564();
      }
                    /* catch() { ... } // from try @ 0360f0b8 with catch @ 0360f2d4 */
                    /* catch() { ... } // from try @ 0360f15c with catch @ 0360f2d8 */
      if (DAT_04565b7d == '\0') {
                    /* catch() { ... } // from try @ 0360f0e4 with catch @ 0360f2dc */
                    /* catch() { ... } // from try @ 0360f2b4 with catch @ 0360f2e0 */
                    /* catch() { ... } // from try @ 0360f2b0 with catch @ 0360f2e4 */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 0360f2a8 with catch @ 0360f2e8 */
                    /* catch() { ... } // from try @ 0360f1d0 with catch @ 0360f2ec */
        DAT_04565b7d = '\x01';
      }
                    /* catch() { ... } // from try @ 0360f11c with catch @ 0360f2f0 */
                    /* catch() { ... } // from try @ 0360f10c with catch @ 0360f2f4 */
                    /* catch() { ... } // from try @ 0360f0ec with catch @ 0360f2f8 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0360f14c with catch @ 0360f2fc */
        thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 0360f06c with catch @ 0360f300 */
      }
                    /* catch() { ... } // from try @ 0360f05c with catch @ 0360f304 */
                    /* catch() { ... } // from try @ 0360f0a0 with catch @ 0360f308 */
      pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* catch() { ... } // from try @ 0360f2a4 with catch @ 0360f30c */
      if (pAVar5 == (ACHLOMELAJE_o *)0x0) goto LAB_0360f748;
                    /* catch() { ... } // from try @ 0360f2a0 with catch @ 0360f310 */
                    /* catch() { ... } // from try @ 0360f29c with catch @ 0360f314 */
                    /* catch() { ... } // from try @ 0360f0b0 with catch @ 0360f318 */
      iVar2 = ACHLOMELAJE__HMGDGJOPLKB(pAVar5,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0360f298 with catch @ 0360f31c */
                    /* catch() { ... } // from try @ 0360f290 with catch @ 0360f320 */
                    /* catch() { ... } // from try @ 0360f164 with catch @ 0360f324 */
                    /* catch() { ... } // from try @ 0360efd4 with catch @ 0360f328 */
      ACHLOMELAJE__CFFOFKPDGEH(pAVar5,iVar2 + (int)iVar4,(MethodInfo *)0x0);
    }
    local_80.fields.hiddenValue =
         (ANMFBABEMFD->fields)._GNFNOKJDGFH_k__BackingField.fields.hiddenValue;
    local_80.fields.currentCryptoKey =
         (ANMFBABEMFD->fields)._GNFNOKJDGFH_k__BackingField.fields.currentCryptoKey;
    local_80.fields.fakeValueActive =
         (ANMFBABEMFD->fields)._GNFNOKJDGFH_k__BackingField.fields.fakeValueActive;
    local_80.fields.inited = (ANMFBABEMFD->fields)._GNFNOKJDGFH_k__BackingField.fields.inited;
    local_80.fields._26_6_ =
         *(undefined6 *)&(ANMFBABEMFD->fields)._GNFNOKJDGFH_k__BackingField.fields.field_0x1a;
                    /* catch() { ... } // from try @ 0360ef78 with catch @ 0360f32c */
    local_80.fields.fakeValue = (ANMFBABEMFD->fields)._GNFNOKJDGFH_k__BackingField.fields.fakeValue;
                    /* catch() { ... } // from try @ 0360f124 with catch @ 0360f330 */
                    /* catch() { ... } // from try @ 0360f2ac with catch @ 0360f334
                       catch() { ... } // from try @ 0360f2b8 with catch @ 0360f334 */
                    /* catch() { ... } // from try @ 0360f074 with catch @ 0360f338 */
                    /* catch() { ... } // from try @ 0360f040 with catch @ 0360f33c */
    iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_80,(MethodInfo *)0x0)
    ;
    if (0 < (int)iVar4) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 0360f35c to 0370f35f has its CatchHandler @ 0360f36c */
      if (DAT_04565b7d == '\0') {
                    /* catch() { ... } // from try @ 0360f35c with catch @ 0360f36c */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
                    /* try { // try from 0360f37c to 0370f3eb has its CatchHandler @ 0360f400 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar5 == (ACHLOMELAJE_o *)0x0) goto LAB_0360f748;
      iVar2 = ACHLOMELAJE__DHOOAGDPAMN(pAVar5,(MethodInfo *)0x0);
      ACHLOMELAJE__BKIIAAJJPOE(pAVar5,iVar2 + (int)iVar4,(MethodInfo *)0x0);
    }
    local_a0.fields.hiddenValue =
         (ANMFBABEMFD->fields)._JMHDOFLEICP_k__BackingField.fields.hiddenValue;
    local_a0.fields.currentCryptoKey =
         (ANMFBABEMFD->fields)._JMHDOFLEICP_k__BackingField.fields.currentCryptoKey;
    local_a0.fields.fakeValueActive =
         (ANMFBABEMFD->fields)._JMHDOFLEICP_k__BackingField.fields.fakeValueActive;
    local_a0.fields.inited = (ANMFBABEMFD->fields)._JMHDOFLEICP_k__BackingField.fields.inited;
    local_a0.fields._26_6_ =
         *(undefined6 *)&(ANMFBABEMFD->fields)._JMHDOFLEICP_k__BackingField.fields.field_0x1a;
    local_a0.fields.fakeValue = (ANMFBABEMFD->fields)._JMHDOFLEICP_k__BackingField.fields.fakeValue;
    iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_a0,(MethodInfo *)0x0)
    ;
    if (0 < (int)iVar4) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
                    /* try { // try from 0360f3ec to 0370f3f7 has its CatchHandler @ 0360ee08 */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0360f3f8 to 0370f3ff has its CatchHandler @ 0360f400 */
        DAT_04565b7d = '\x01';
      }
                    /* catch() { ... } // from try @ 0360f37c with catch @ 0360f400
                       catch() { ... } // from try @ 0360f3f8 with catch @ 0360f400 */
                    /* try { // try from 0360f404 to 0370f55b has its CatchHandler @ 0360f404
                       catch() { ... } // from try @ 0360f404 with catch @ 0360f404
                       catch() { ... } // from try @ 0360f708 with catch @ 0360f404
                       catch() { ... } // from try @ 0360f768 with catch @ 0360f404
                       catch() { ... } // from try @ 0360f7c4 with catch @ 0360f404
                       catch() { ... } // from try @ 0360f804 with catch @ 0360f404 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar5 == (ACHLOMELAJE_o *)0x0) goto LAB_0360f748;
      iVar2 = ACHLOMELAJE__PJFIPGDIGHD(pAVar5,(MethodInfo *)0x0);
      ACHLOMELAJE__IGOFELIJIOL(pAVar5,iVar2 + (int)iVar4,(MethodInfo *)0x0);
    }
    bVar1 = System_String__IsNullOrEmpty
                      ((ANMFBABEMFD->fields)._PGINAEHGANC_k__BackingField,(MethodInfo *)0x0);
    if ((!bVar1) &&
       (iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (ANMFBABEMFD->fields)._OJGPBEFJPKN_k__BackingField.fields,
                           (MethodInfo *)0x0), 0 < iVar2)) {
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
      pSVar9 = (ANMFBABEMFD->fields)._PGINAEHGANC_k__BackingField;
      pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (ANMFBABEMFD->fields)._OJGPBEFJPKN_k__BackingField.fields,(MethodInfo *)0x0
                        );
      if (pAVar5 == (ACHLOMELAJE_o *)0x0) goto LAB_0360f748;
      ACHLOMELAJE__GHLNGBDFENI(pAVar5,pSVar9,iVar2,(MethodInfo *)0x0);
    }
    a = (ANMFBABEMFD->fields)._DKODBGOHKGH_k__BackingField;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2901,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2902,(MethodInfo *)0x0)
    ;
    pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(a,pSVar9,(MethodInfo *)0x0);
    if (bVar1) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0360f55c to 0370f563 has its CatchHandler @ 0360f790 */
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
                    /* try { // try from 0360f57c to 0370f583 has its CatchHandler @ 0360f784 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar5 == (ACHLOMELAJE_o *)0x0) ||
         (__this = (pAVar5->fields).CKJAGLDEMAE, __this == (NFGLEDADCGL_o *)0x0)) goto LAB_0360f748;
      NFGLEDADCGL__JHJPKAJCJHF(__this,(MethodInfo *)0x0);
    }
    else {
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0360f5c4 to 0370f5cb has its CatchHandler @ 0360f774 */
                    /* try { // try from 0360f5d8 to 0370f5e7 has its CatchHandler @ 0360f770 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2903,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2904,
                 (MethodInfo *)0x0);
      pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                    /* try { // try from 0360f61c to 0370f627 has its CatchHandler @ 0360f7a8 */
      bVar1 = System_String__op_Equality(a,pSVar9,(MethodInfo *)0x0);
      if (bVar1) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 0360f638 to 0370f63b has its CatchHandler @ 0360f794 */
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0360f64c to 0370f653 has its CatchHandler @ 0360f798 */
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0360f65c to 0370f667 has its CatchHandler @ 0360f7a0 */
          thunk_FUN_01ba7564();
        }
        pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar5 == (ACHLOMELAJE_o *)0x0) {
LAB_0360f748:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0360f748 to 0370f74b has its CatchHandler @ 0360f79c */
          FUN_01bab8c8();
        }
        (pAVar5->fields).MMOJIJHAJJL = true;
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        MGNPHCAAEIO__LGONLBLHOFN((MethodInfo *)0x0);
        if (DAT_04565b84 == '\0') {
          FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
          DAT_04565b84 = '\x01';
        }
                    /* try { // try from 0360f6c8 to 0370f6cf has its CatchHandler @ 0360f76c */
        pNVar8 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0360f6e0 to 0370f6eb has its CatchHandler @ 0360f774 */
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar1) {
                    /* try { // try from 0360f6fc to 0370f707 has its CatchHandler @ 0360f76c */
          if (DAT_04565b84 == '\0') {
                    /* try { // try from 0360f708 to 0370f743 has its CatchHandler @ 0360f404 */
            FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
            DAT_04565b84 = '\x01';
          }
          pNVar8 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField
          ;
          if (pNVar8 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_0360f748;
          Nekki_SF2_GUI_Menu_MainMenu__UpdateEnergyView(pNVar8,(MethodInfo *)0x0);
        }
      }
    }
  }
                    /* try { // try from 0360f744 to 0370f747 has its CatchHandler @ 0360f7a4 */
  return pIVar3;
}


// ===== public static bool JJFBBLPMPAE(HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x350F74C]
// AMIINPEKKFB$$JJFBBLPMPAE @ RVA 0x350F74C

bool AMIINPEKKFB__JJFBBLPMPAE(HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *pCVar1;
  GGHCLMEFIGO_o *__this;
  IGFGDDANEPE_o *ENHJPOHLMCL;
  int64_t iVar2;
  int64_t iVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  MethodInfo *method_01;
  ACHLOMELAJE_o *pAVar4;
  HOOAAGABMBL_o *IKKAMAMLIKA_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_80;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  
                    /* try { // try from 0360f74c to 0370f74f has its CatchHandler @ 0360f78c */
                    /* try { // try from 0360f750 to 0370f753 has its CatchHandler @ 0360f77c */
                    /* try { // try from 0360f754 to 0370f757 has its CatchHandler @ 0360f788 */
                    /* try { // try from 0360f758 to 0370f75b has its CatchHandler @ 0360f778 */
                    /* try { // try from 0360f75c to 0370f75f has its CatchHandler @ 0360f788 */
                    /* try { // try from 0360f760 to 0370f767 has its CatchHandler @ 0360f780 */
                    /* try { // try from 0360f768 to 0370f7bf has its CatchHandler @ 0360f404 */
                    /* catch() { ... } // from try @ 0360f6c8 with catch @ 0360f76c
                       catch() { ... } // from try @ 0360f6fc with catch @ 0360f76c */
  if ((DAT_045688e5 & 1) == 0) {
                    /* catch() { ... } // from try @ 0360f5d8 with catch @ 0360f770 */
                    /* catch() { ... } // from try @ 0360f5c4 with catch @ 0360f774
                       catch() { ... } // from try @ 0360f6e0 with catch @ 0360f774 */
                    /* catch() { ... } // from try @ 0360f758 with catch @ 0360f778 */
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* catch() { ... } // from try @ 0360f750 with catch @ 0360f77c */
                    /* catch() { ... } // from try @ 0360f760 with catch @ 0360f780 */
                    /* catch() { ... } // from try @ 0360f57c with catch @ 0360f784 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 0360f754 with catch @ 0360f788
                       catch() { ... } // from try @ 0360f75c with catch @ 0360f788 */
                    /* catch() { ... } // from try @ 0360f74c with catch @ 0360f78c */
    DAT_045688e5 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 0360f55c with catch @ 0360f790 */
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    return false;
  }
                    /* catch() { ... } // from try @ 0360f638 with catch @ 0360f794 */
                    /* catch() { ... } // from try @ 0360f64c with catch @ 0360f798 */
                    /* catch() { ... } // from try @ 0360f748 with catch @ 0360f79c */
                    /* catch() { ... } // from try @ 0360f65c with catch @ 0360f7a0 */
                    /* catch() { ... } // from try @ 0360f744 with catch @ 0360f7a4 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0360f61c with catch @ 0360f7a8 */
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
                    /* try { // try from 0360f7c0 to 0370f7c3 has its CatchHandler @ 0360f7ec */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0360f7c4 to 0370f7fb has its CatchHandler @ 0360f404 */
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* catch() { ... } // from try @ 0360f7c0 with catch @ 0360f7ec */
  if ((pAVar4 != (ACHLOMELAJE_o *)0x0) &&
     (__this = (pAVar4->fields).OIDPLCLELEN, __this != (GGHCLMEFIGO_o *)0x0)) {
                    /* try { // try from 0360f7fc to 0370f803 has its CatchHandler @ 0360f818 */
    ENHJPOHLMCL = GGHCLMEFIGO__JNFIBDBHNOA(__this,IKKAMAMLIKA,(MethodInfo *)0x0);
    if (ENHJPOHLMCL == (IGFGDDANEPE_o *)0x0) {
      return false;
    }
                    /* try { // try from 0360f804 to 0370f80f has its CatchHandler @ 0360f404 */
    IKKAMAMLIKA_00 = (ENHJPOHLMCL->fields).LFPOIAJDMBK;
    if (IKKAMAMLIKA_00 == (HOOAAGABMBL_o *)0x0) {
      return false;
    }
                    /* try { // try from 0360f810 to 0370f817 has its CatchHandler @ 0360f818 */
                    /* catch() { ... } // from try @ 0360f7fc with catch @ 0360f818
                       catch() { ... } // from try @ 0360f810 with catch @ 0360f818 */
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
    if (pAVar4 != (ACHLOMELAJE_o *)0x0) {
      iVar2 = ACHLOMELAJE__HEHFNBKGJLP(pAVar4,(MethodInfo *)0x0);
      pCVar1 = &(IKKAMAMLIKA_00->fields)._AHMCDBKNKAJ_k__BackingField;
      local_60.fields.hiddenValue =
           (IKKAMAMLIKA_00->fields)._AHMCDBKNKAJ_k__BackingField.fields.hiddenValue;
      local_60.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
      local_60.fields.fakeValueActive =
           (IKKAMAMLIKA_00->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValueActive;
      local_60.fields.inited = (IKKAMAMLIKA_00->fields)._AHMCDBKNKAJ_k__BackingField.fields.inited;
      local_60.fields._26_6_ =
           *(undefined6 *)&(IKKAMAMLIKA_00->fields)._AHMCDBKNKAJ_k__BackingField.fields.field_0x1a;
      local_60.fields.fakeValue =
           (IKKAMAMLIKA_00->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValue;
      iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                        (&local_60,(MethodInfo *)0x0);
      if (iVar2 < iVar3) {
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        MGNPHCAAEIO__EHEMFMCGKKK(IKKAMAMLIKA,3,(MethodInfo *)0x0);
        return false;
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
      pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar4 != (ACHLOMELAJE_o *)0x0) {
                    /* try { // try from 0360f91c to 0370f9eb has its CatchHandler @ 0360f91c
                       catch() { ... } // from try @ 0360f91c with catch @ 0360f91c
                       catch() { ... } // from try @ 0360fa08 with catch @ 0360f91c
                       catch() { ... } // from try @ 0360fa94 with catch @ 0360f91c
                       catch() { ... } // from try @ 0360facc with catch @ 0360f91c */
        iVar2 = ACHLOMELAJE__HEHFNBKGJLP(pAVar4,(MethodInfo *)0x0);
        local_80.fields.hiddenValue =
             (IKKAMAMLIKA_00->fields)._AHMCDBKNKAJ_k__BackingField.fields.hiddenValue;
        local_80.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
        local_80.fields.fakeValueActive =
             (IKKAMAMLIKA_00->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValueActive;
        local_80.fields.inited = (IKKAMAMLIKA_00->fields)._AHMCDBKNKAJ_k__BackingField.fields.inited
        ;
        local_80.fields._26_6_ =
             *(undefined6 *)&(IKKAMAMLIKA_00->fields)._AHMCDBKNKAJ_k__BackingField.fields.field_0x1a
        ;
        local_80.fields.fakeValue =
             (IKKAMAMLIKA_00->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValue;
        iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                          (&local_80,(MethodInfo *)0x0);
        AMIINPEKKFB__GLIKCOKNHDM(IKKAMAMLIKA_00,ENHJPOHLMCL,true,in_x3);
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar4 != (ACHLOMELAJE_o *)0x0) {
          method_01 = (MethodInfo *)0x0;
          ACHLOMELAJE__OGPHHGFFKHD(pAVar4,iVar2 - iVar3,10,false,(MethodInfo *)0x0);
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar4 != (ACHLOMELAJE_o *)0x0) {
            CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar4,false,(MethodInfo *)0x0);
                    /* try { // try from 0360f9ec to 0370f9f3 has its CatchHandler @ 0360fa78 */
            AMIINPEKKFB__BDMBCINIFFB(IKKAMAMLIKA_00,1,false,method_01);
                    /* try { // try from 0360f9fc to 0370fa07 has its CatchHandler @ 0360fa74 */
            AMIINPEKKFB__AMGIHEOPMEK(IKKAMAMLIKA_00,method_00);
            return true;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0360fa08 to 0370fa8f has its CatchHandler @ 0360f91c */
  FUN_01bab8c8();
}


// ===== public static void BLKCJOFCPOO(string CNIELFLIKJB, int EPINGPGECOM, int GNDOPGAILNK, bool MEGHFHANLPK, bool CDCKLABCFOM)  [RVA 0x350FA0C]
// AMIINPEKKFB$$BLKCJOFCPOO @ RVA 0x350FA0C

void AMIINPEKKFB__BLKCJOFCPOO
               (System_String_o *CNIELFLIKJB,int32_t EPINGPGECOM,int32_t GNDOPGAILNK,
               bool MEGHFHANLPK,bool CDCKLABCFOM,MethodInfo *method)

{
  DOPEEDABNEK_o *__this;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  System_String_o *JLNPKGGFFDD;
  
  if ((DAT_045688e6 & 1) == 0) {
    FUN_01bab630(&Method_KFJJHMDIFIG_ONCJPMNKDIM<AMIINPEKKFB>__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_6856/*"GiveItemByName: cant find item '"*/);
    FUN_01bab630(&StringLiteral_853/*"'!"*/);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360f9fc with catch @ 0360fa74
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360f9ec with catch @ 0360fa78
                        */
    DAT_045688e6 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0360fa90 to 0370fa93 has its CatchHandler @ 0360fabc */
                    /* try { // try from 0360fa94 to 0370fac3 has its CatchHandler @ 0360f91c */
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 0360fa90 with catch @ 0360fabc */
  }
                    /* try { // try from 0360fac4 to 0370facb has its CatchHandler @ 0360fae0 */
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (__this != (DOPEEDABNEK_o *)0x0) {
                    /* try { // try from 0360facc to 0370fad7 has its CatchHandler @ 0360f91c */
    IKKAMAMLIKA = DOPEEDABNEK__CKKIPBAIEMN(__this,CNIELFLIKJB,(MethodInfo *)0x0);
                    /* try { // try from 0360fad8 to 0370fadf has its CatchHandler @ 0360fae0 */
    if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0360fac4 with catch @ 0360fae0
                       catch(type#2 @ 00000000) { ... } // from try @ 0360fad8 with catch @ 0360fae0
                        */
                    /* try { // try from 0360fae4 to 0370fc13 has its CatchHandler @ 0360fae4
                       catch() { ... } // from try @ 0360fae4 with catch @ 0360fae4
                       catch() { ... } // from try @ 0360fd50 with catch @ 0360fae4
                       catch() { ... } // from try @ 0360fdf4 with catch @ 0360fae4
                       catch() { ... } // from try @ 0360fdfc with catch @ 0360fae4
                       catch() { ... } // from try @ 0360feb0 with catch @ 0360fae4 */
      AMIINPEKKFB__CHENJHPJCKE(IKKAMAMLIKA,EPINGPGECOM,GNDOPGAILNK,MEGHFHANLPK,CDCKLABCFOM,method);
      return;
    }
    JLNPKGGFFDD = System_String__Concat
                            (StringLiteral_6856/*"GiveItemByName: cant find item '"*/,CNIELFLIKJB,StringLiteral_853/*"'!"*/,(MethodInfo *)0x0);
    KFJJHMDIFIG__ONCJPMNKDIM<object>(JLNPKGGFFDD,Method_KFJJHMDIFIG_ONCJPMNKDIM<AMIINPEKKFB>__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool AANBLAAMHIP(HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x351013C]
// AMIINPEKKFB$$AANBLAAMHIP @ RVA 0x351013C

bool AMIINPEKKFB__AANBLAAMHIP(HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  GGHCLMEFIGO_o *__this;
  IGFGDDANEPE_o *ENHJPOHLMCL;
  int64_t iVar1;
  int64_t iVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  MethodInfo *method_01;
  ACHLOMELAJE_o *pAVar3;
  long lVar4;
  HOOAAGABMBL_o *IKKAMAMLIKA_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_80;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  
                    /* try { // try from 0361013c to 03710143 has its CatchHandler @ 03610160 */
                    /* try { // try from 03610144 to 03710147 has its CatchHandler @ 03610150 */
                    /* try { // try from 03610148 to 03710183 has its CatchHandler @ 0360ff7c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610090 with catch @ 0361014c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610144 with catch @ 03610150
                        */
  if ((DAT_045688e7 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361013c with catch @ 03610160
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610084 with catch @ 03610164
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610064 with catch @ 03610168
                        */
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045688e7 = 1;
    method = extraout_x1;
  }
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    return false;
  }
                    /* try { // try from 03610184 to 03710187 has its CatchHandler @ 036101bc */
                    /* try { // try from 03610188 to 037101cb has its CatchHandler @ 0360ff7c */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
                    /* catch() { ... } // from try @ 03610184 with catch @ 036101bc */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
                    /* try { // try from 036101cc to 037101d3 has its CatchHandler @ 036101e8 */
  }
                    /* try { // try from 036101d4 to 037101df has its CatchHandler @ 0360ff7c */
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* try { // try from 036101e0 to 037101e7 has its CatchHandler @ 036101e8 */
  if ((pAVar3 != (ACHLOMELAJE_o *)0x0) &&
     (__this = (pAVar3->fields).OIDPLCLELEN, __this != (GGHCLMEFIGO_o *)0x0)) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036101cc with catch @ 036101e8
                       catch(type#2 @ 00000000) { ... } // from try @ 036101e0 with catch @ 036101e8
                        */
    ENHJPOHLMCL = GGHCLMEFIGO__JNFIBDBHNOA(__this,IKKAMAMLIKA,(MethodInfo *)0x0);
    if (ENHJPOHLMCL == (IGFGDDANEPE_o *)0x0) {
      return false;
    }
    IKKAMAMLIKA_00 = (ENHJPOHLMCL->fields).LFPOIAJDMBK;
    if (IKKAMAMLIKA_00 == (HOOAAGABMBL_o *)0x0) {
      return false;
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
    pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
      iVar1 = ACHLOMELAJE__IMLCNMCBEEN(pAVar3,(MethodInfo *)0x0);
      local_60.fields.hiddenValue =
           (IKKAMAMLIKA_00->fields)._JIJJJBAGEFK_k__BackingField.fields.hiddenValue;
      local_60.fields.currentCryptoKey =
           (IKKAMAMLIKA_00->fields)._JIJJJBAGEFK_k__BackingField.fields.currentCryptoKey;
      local_60.fields.fakeValueActive =
           (IKKAMAMLIKA_00->fields)._JIJJJBAGEFK_k__BackingField.fields.fakeValueActive;
      local_60.fields.inited = (IKKAMAMLIKA_00->fields)._JIJJJBAGEFK_k__BackingField.fields.inited;
      local_60.fields._26_6_ =
           *(undefined6 *)&(IKKAMAMLIKA_00->fields)._JIJJJBAGEFK_k__BackingField.fields.field_0x1a;
      local_60.fields.fakeValue =
           (IKKAMAMLIKA_00->fields)._JIJJJBAGEFK_k__BackingField.fields.fakeValue;
      iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                        (&local_60,(MethodInfo *)0x0);
      if (iVar1 < iVar2) {
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        MGNPHCAAEIO__EHEMFMCGKKK(IKKAMAMLIKA,2,(MethodInfo *)0x0);
        return false;
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
      pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
        iVar1 = ACHLOMELAJE__IMLCNMCBEEN(pAVar3,(MethodInfo *)0x0);
        local_80.fields.hiddenValue =
             (IKKAMAMLIKA_00->fields)._JIJJJBAGEFK_k__BackingField.fields.hiddenValue;
        local_80.fields.currentCryptoKey =
             (IKKAMAMLIKA_00->fields)._JIJJJBAGEFK_k__BackingField.fields.currentCryptoKey;
        local_80.fields.fakeValueActive =
             (IKKAMAMLIKA_00->fields)._JIJJJBAGEFK_k__BackingField.fields.fakeValueActive;
        local_80.fields.inited = (IKKAMAMLIKA_00->fields)._JIJJJBAGEFK_k__BackingField.fields.inited
        ;
        local_80.fields._26_6_ =
             *(undefined6 *)&(IKKAMAMLIKA_00->fields)._JIJJJBAGEFK_k__BackingField.fields.field_0x1a
        ;
        local_80.fields.fakeValue =
             (IKKAMAMLIKA_00->fields)._JIJJJBAGEFK_k__BackingField.fields.fakeValue;
        iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                          (&local_80,(MethodInfo *)0x0);
        lVar4 = (IKKAMAMLIKA_00->fields)._LAOFJOMPFDL_k__BackingField;
        if (lVar4 < 1) {
          AMIINPEKKFB__GLIKCOKNHDM(IKKAMAMLIKA_00,ENHJPOHLMCL,true,in_x3);
        }
        else {
          AMIINPEKKFB__DNGFJEFIACC(IKKAMAMLIKA_00,ENHJPOHLMCL,true,in_x3);
        }
                    /* try { // try from 03610364 to 03710493 has its CatchHandler @ 03610364
                       catch() { ... } // from try @ 03610364 with catch @ 03610364
                       catch() { ... } // from try @ 036105d0 with catch @ 03610364
                       catch() { ... } // from try @ 03610674 with catch @ 03610364
                       catch() { ... } // from try @ 0361067c with catch @ 03610364
                       catch() { ... } // from try @ 03610730 with catch @ 03610364 */
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
        if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
          method_01 = (MethodInfo *)0x0;
          ACHLOMELAJE__CEICBEHCCDA(pAVar3,iVar1 - iVar2,false,(MethodInfo *)0x0);
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
            CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar3,false,(MethodInfo *)0x0);
            AMIINPEKKFB__BDMBCINIFFB(IKKAMAMLIKA_00,0,false,method_01);
            AMIINPEKKFB__AMGIHEOPMEK(IKKAMAMLIKA_00,method_00);
            return lVar4 < 1;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void PFPPJAJFKDL(NCCFNKMICGK NLFMDIGKNGP, HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x35105A4]
// AMIINPEKKFB$$PFPPJAJFKDL @ RVA 0x35105A4

void AMIINPEKKFB__PFPPJAJFKDL
               (NCCFNKMICGK_o *NLFMDIGKNGP,HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar1;
  NCCFNKMICGK_o **ppNVar2;
  System_Action_HOOAAGABMBL__o *pSVar3;
  DNELIPCHKLK_o **ppDVar4;
  DNELIPCHKLK_o *pDVar5;
  PKHMIGFEJCL_o *pPVar6;
  
                    /* try { // try from 036105ac to 037105cf has its CatchHandler @ 03610688 */
  if ((DAT_045688e8 & 1) == 0) {
                    /* try { // try from 036105d0 to 03710663 has its CatchHandler @ 03610364 */
    FUN_01bab630(&AMIINPEKKFB_TypeInfo);
    DAT_045688e8 = 1;
  }
  pSVar3 = AMIINPEKKFB_TypeInfo->static_fields->PEFBFMPBJAA;
  if (pSVar3 != (System_Action_HOOAAGABMBL__o *)0x0) {
    (*(code *)(pSVar3->fields).super.super.invoke_impl)
              ((pSVar3->fields).super.super.method_code,IKKAMAMLIKA,
               (pSVar3->fields).super.super.method);
  }
  pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
     (pPVar6 = (pNVar1->fields).QuestParameters, pPVar6 != (PKHMIGFEJCL_o *)0x0)) {
    ppDVar4 = &(pPVar6->fields).NMHCLFFOMJH;
    pDVar5 = *ppDVar4;
    ppNVar2 = &(pPVar6->fields).LKNIEMOMBAA;
    *ppNVar2 = NLFMDIGKNGP;
    thunk_FUN_01c20e04(ppNVar2,NLFMDIGKNGP);
    (pPVar6->fields).CJLNOJMBNPN = IKKAMAMLIKA;
    thunk_FUN_01c20e04(&pPVar6->fields,IKKAMAMLIKA);
    pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar1,0x4b,(MethodInfo *)0x0);
      *ppDVar4 = pDVar5;
                    /* try { // try from 03610664 to 0371066b has its CatchHandler @ 0361068c */
                    /* try { // try from 0361066c to 03710673 has its CatchHandler @ 03610698 */
      thunk_FUN_01c20e04(ppDVar4,pDVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03610674 to 03710677 has its CatchHandler @ 03610364 */
  FUN_01bab8c8();
}


// ===== public static void KANIFNEGABC(Action<HOOAAGABMBL> CJNHFNHJHPE)  [RVA 0x3510678]
// AMIINPEKKFB$$KANIFNEGABC @ RVA 0x3510678

void AMIINPEKKFB__KANIFNEGABC(System_Action_HOOAAGABMBL__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_HOOAAGABMBL__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_HOOAAGABMBL__o *pSVar5;
  System_Action_HOOAAGABMBL__o *a;
  
                    /* try { // try from 03610678 to 0371067b has its CatchHandler @ 03610684 */
                    /* try { // try from 0361067c to 037106ab has its CatchHandler @ 03610364 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610678 with catch @ 03610684
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036105ac with catch @ 03610688
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610664 with catch @ 0361068c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036104f0 with catch @ 03610690
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610494 with catch @ 03610694
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361066c with catch @ 03610698
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610524 with catch @ 0361069c
                        */
  if ((DAT_045688e9 & 1) == 0) {
    FUN_01bab630(&AMIINPEKKFB_TypeInfo);
                    /* try { // try from 036106ac to 037106af has its CatchHandler @ 036106c0 */
    FUN_01bab630(&System_Action<HOOAAGABMBL>_TypeInfo);
    DAT_045688e9 = 1;
  }
                    /* catch() { ... } // from try @ 036106ac with catch @ 036106c0 */
                    /* try { // try from 036106c8 to 0371072f has its CatchHandler @ 03610744 */
  a = AMIINPEKKFB_TypeInfo->static_fields->PEFBFMPBJAA;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<HOOAAGABMBL>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<HOOAAGABMBL>_TypeInfo);
      if (lVar4 == 0) {
                    /* try { // try from 0361073c to 03710743 has its CatchHandler @ 03610744 */
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_HOOAAGABMBL__o *)
             FUN_01c07368(AMIINPEKKFB_TypeInfo->static_fields,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
                    /* try { // try from 03610730 to 0371073b has its CatchHandler @ 03610364 */
  return;
}


// ===== private static void LEDEFAKNIDE(IGFGDDANEPE ENHJPOHLMCL, int EBDDELGICGB)  [RVA 0x3510744]
// AMIINPEKKFB$$LEDEFAKNIDE @ RVA 0x3510744

/* WARNING: Removing unreachable block (ram,0x03610b54) */

void AMIINPEKKFB__LEDEFAKNIDE(IGFGDDANEPE_o *ENHJPOHLMCL,int32_t EBDDELGICGB,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Xml_XmlNode_o *pSVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *pSVar7;
  System_String_o *pSVar8;
  DEKKGJNMFEB_o *__this_00;
  ACHLOMELAJE_o *__this_01;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int32_t local_64;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036106c8 with catch @ 03610744
                       catch(type#2 @ 00000000) { ... } // from try @ 0361073c with catch @ 03610744
                        */
  if ((DAT_045688ea & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_11876/*"Set"*/);
    FUN_01bab630(&StringLiteral_5703/*"Enchantments"*/);
    FUN_01bab630(&StringLiteral_3114/*"Aspect"*/);
    DAT_045688ea = 1;
  }
  local_64 = 0;
  if ((ENHJPOHLMCL != (IGFGDDANEPE_o *)0x0) &&
     (pSVar3 = (ENHJPOHLMCL->fields).DMLGJFCNNJF, pSVar3 != (System_Xml_XmlNode_o *)0x0)) {
    pSVar3 = (System_Xml_XmlNode_o *)
             (*(pSVar3->klass->vtable)._51_get_Item.methodPtr)
                       (pSVar3,StringLiteral_5703/*"Enchantments"*/,(pSVar3->klass->vtable)._51_get_Item.method);
    if (pSVar3 == (System_Xml_XmlNode_o *)0x0) {
      return;
    }
    plVar4 = (long *)(*(pSVar3->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (pSVar3,(pSVar3->klass->vtable)._13_get_ChildNodes.method);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar9 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_036108b0;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_036108b0:
        uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar10 & 1) == 0) {
                    /* try { // try from 03610a94 to 03710ad7 has its CatchHandler @ 03610900 */
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar9 = *plVar4;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 == 0) goto LAB_03610ae0;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_03610ac8;
        }
        lVar9 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 03610900 to 03710a17 has its CatchHandler @ 03610900
                       catch() { ... } // from try @ 03610900 with catch @ 03610900
                       catch() { ... } // from try @ 03610a94 with catch @ 03610900
                       catch() { ... } // from try @ 03610af4 with catch @ 03610900
                       catch() { ... } // from try @ 03610b34 with catch @ 03610900
                       catch() { ... } // from try @ 03610bb8 with catch @ 03610900 */
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_03610910;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_03610910:
        plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03610b34 to 03710baf has its CatchHandler @ 03610900 */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03610b30 to 03710b33 has its CatchHandler @ 03610ba0 */
          FUN_01babc64(plVar6);
        }
        lVar9 = (**(code **)(*plVar6 + 0x468))
                          (plVar6,StringLiteral_11876/*"Set"*/,*(undefined8 *)(*plVar6 + 0x470));
        if (lVar9 != 0) {
          plVar6 = (long *)(**(code **)(*plVar6 + 0x468))
                                     (plVar6,StringLiteral_11876/*"Set"*/,*(undefined8 *)(*plVar6 + 0x470));
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          __this = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
          if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (__this,StringLiteral_3114/*"Aspect"*/,(MethodInfo *)0x0);
          if (pSVar7 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar8 = (System_String_o *)
                   (*(pSVar7->klass->vtable)._8_get_Name.methodPtr)
                             (pSVar7,(pSVar7->klass->vtable)._8_get_Name.method);
          bVar2 = System_String__op_Equality(pSVar8,StringLiteral_3114/*"Aspect"*/,(MethodInfo *)0x0);
          if (bVar2) {
            if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_00 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
            if (__this_00 == (DEKKGJNMFEB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            local_64 = DEKKGJNMFEB__HNBCOIJFCCA(__this_00,EBDDELGICGB,(MethodInfo *)0x0);
            pSVar8 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
                    /* try { // try from 03610a18 to 03710a1f has its CatchHandler @ 03610b0c */
            (*(pSVar7->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar7,pSVar8,(pSVar7->klass->vtable)._10_set_Value.method);
          }
                    /* try { // try from 03610a34 to 03710a37 has its CatchHandler @ 03610af8 */
          IGFGDDANEPE__LPLGJMMAKJG(ENHJPOHLMCL,pSVar3,true,(MethodInfo *)0x0);
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7d == '\0') {
                    /* try { // try from 03610a50 to 03710a53 has its CatchHandler @ 03610b00 */
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 03610a74 to 03710a7f has its CatchHandler @ 03610b14 */
          __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (__this_01 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 03610a88 to 03710a93 has its CatchHandler @ 03610b18 */
          CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_01,false,(MethodInfo *)0x0);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar10 = uVar10 - 1;
                    /* try { // try from 03610ad8 to 03710adb has its CatchHandler @ 03610b10 */
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_03610ac8:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
                    /* try { // try from 03610af0 to 03710af3 has its CatchHandler @ 03610afc */
                    /* try { // try from 03610af4 to 03710b2f has its CatchHandler @ 03610900 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610a34 with catch @ 03610af8
                        */
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03610afc;
    }
  }
LAB_03610ae0:
                    /* try { // try from 03610ae0 to 03710ae3 has its CatchHandler @ 03610b08 */
                    /* try { // try from 03610ae8 to 03710aeb has its CatchHandler @ 03610b04 */
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_03610afc:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610af0 with catch @ 03610afc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610a50 with catch @ 03610b00
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610ae8 with catch @ 03610b04
                        */
  (*(code *)*puVar5)(plVar4,puVar5[1]);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610a18 with catch @ 03610b0c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610ad8 with catch @ 03610b10
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610a74 with catch @ 03610b14
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610a88 with catch @ 03610b18
                        */
  return;
}


// ===== public void .ctor()  [RVA 0x3510C78]
// AMIINPEKKFB$$.ctor @ RVA 0x3510C78

void AMIINPEKKFB___ctor(AMIINPEKKFB_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void GPAJFKADBKK(BKKPAKHJDKB MEJOGHDACNG, Action<BKKPAKHJDKB> BLMFLPJJMPF)  [RVA 0x3510C80]
// AMIINPEKKFB$$GPAJFKADBKK @ RVA 0x3510C80

void AMIINPEKKFB__GPAJFKADBKK
               (BKKPAKHJDKB_o *MEJOGHDACNG,System_Action_BKKPAKHJDKB__o *BLMFLPJJMPF,
               MethodInfo *method)

{
  ADJEBFOPFFF_o *__this;
  MAEAAOFOANA_o *__this_00;
  FAIJGJCCKJC_o *pFVar1;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar2;
  
                    /* try { // try from 03610c8c to 03710c93 has its CatchHandler @ 03610cf0 */
  if ((DAT_045688eb & 1) == 0) {
                    /* try { // try from 03610ca4 to 03710caf has its CatchHandler @ 03610ce8 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 03610cb0 to 03710cdf has its CatchHandler @ 03610bf8 */
    FUN_01bab630(&MAEAAOFOANA_TypeInfo);
    DAT_045688eb = 1;
  }
  if ((MEJOGHDACNG != (BKKPAKHJDKB_o *)0x0) && ((MEJOGHDACNG->fields).HHJIJKJCEOF == 0)) {
                    /* try { // try from 03610ce0 to 03710ce3 has its CatchHandler @ 03610cec */
                    /* try { // try from 03610ce4 to 03710d07 has its CatchHandler @ 03610bf8 */
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610ca4 with catch @ 03610ce8
                        */
      thunk_FUN_01ba7564();
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610ce0 with catch @ 03610cec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610c8c with catch @ 03610cf0
                        */
    __this = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
    if (__this == (ADJEBFOPFFF_o *)0x0) {
LAB_03610d7c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ADJEBFOPFFF__AEADCLCKCEL(__this,(MEJOGHDACNG->fields).EBJBJCPBFLE,false,(MethodInfo *)0x0);
                    /* try { // try from 03610d08 to 03710d0b has its CatchHandler @ 03610d2c */
    pFVar1 = (MEJOGHDACNG->fields).IJDPHADMDKN;
                    /* try { // try from 03610d0c to 03710d33 has its CatchHandler @ 03610bf8 */
    if (((pFVar1 != (FAIJGJCCKJC_o *)0x0) &&
        (pJVar2 = (pFVar1->fields).FBBBEHLGDJK, pJVar2 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0)) &&
       ((pJVar2->fields).CBKACDJHFNE != false)) {
                    /* catch() { ... } // from try @ 03610d08 with catch @ 03610d2c */
      __this_00 = (MAEAAOFOANA_o *)thunk_FUN_01bda818(MAEAAOFOANA_TypeInfo);
                    /* try { // try from 03610d34 to 03710d3b has its CatchHandler @ 03610d50 */
      MAEAAOFOANA___ctor(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 03610d3c to 03710d47 has its CatchHandler @ 03610bf8 */
      if (__this_00 == (MAEAAOFOANA_o *)0x0) goto LAB_03610d7c;
                    /* try { // try from 03610d48 to 03710d4f has its CatchHandler @ 03610d50 */
      (__this_00->fields).EBBNAOLNKGD = (MEJOGHDACNG->fields).EBJBJCPBFLE;
      thunk_FUN_01c20e04();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03610d34 with catch @ 03610d50
                       catch(type#2 @ 00000000) { ... } // from try @ 03610d48 with catch @ 03610d50
                        */
      JJPNLEPEAFM__EFLNJLIDLEF(__this_00,(MethodInfo *)0x0);
    }
    if (BLMFLPJJMPF != (System_Action_BKKPAKHJDKB__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03610d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(BLMFLPJJMPF->fields).super.super.invoke_impl)
                ((BLMFLPJJMPF->fields).super.super.method_code,MEJOGHDACNG,
                 (BLMFLPJJMPF->fields).super.super.method);
      return;
    }
  }
  return;
}


// ===== public static bool FBNGEGEDKOA(string KGLJICLJHEL)  [RVA 0x3510D80]
// AMIINPEKKFB$$FBNGEGEDKOA @ RVA 0x3510D80

bool AMIINPEKKFB__FBNGEGEDKOA(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  DOPEEDABNEK_o *__this;
  HOOAAGABMBL_o *pHVar2;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *__this_01;
  int64_t iVar3;
  int64_t iVar4;
  ACHLOMELAJE_o *pAVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_80;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  
  if ((DAT_045688ec & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045688ec = 1;
  }
  bVar1 = System_String__IsNullOrEmpty(KGLJICLJHEL,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
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
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (__this != (DOPEEDABNEK_o *)0x0) {
    pHVar2 = DOPEEDABNEK__CKKIPBAIEMN(__this,KGLJICLJHEL,(MethodInfo *)0x0);
    if (pHVar2 == (HOOAAGABMBL_o *)0x0) {
      return false;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03610e48 to 03710ee3 has its CatchHandler @ 03610e48
                       catch() { ... } // from try @ 03610e48 with catch @ 03610e48
                       catch() { ... } // from try @ 03610f00 with catch @ 03610e48
                       catch() { ... } // from try @ 03610f24 with catch @ 03610e48
                       catch() { ... } // from try @ 03610f4c with catch @ 03610e48
                       catch() { ... } // from try @ 03610f8c with catch @ 03610e48 */
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar5 != (ACHLOMELAJE_o *)0x0) &&
       (__this_00 = (pAVar5->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) {
      __this_01 = GGHCLMEFIGO__JNFIBDBHNOA(__this_00,pHVar2,(MethodInfo *)0x0);
      if (__this_01 == (IGFGDDANEPE_o *)0x0) {
        return false;
      }
      iVar3 = IGFGDDANEPE__OMMIKNKEKJN(__this_01,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
      }
      if (DAT_04565b87 == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 03610ee4 to 03710eeb has its CatchHandler @ 03610f30 */
        DAT_04565b87 = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
                    /* try { // try from 03610ef8 to 03710eff has its CatchHandler @ 03610f2c */
      }
                    /* try { // try from 03610f00 to 03710f1f has its CatchHandler @ 03610e48 */
      if (iVar3 <= NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM) {
        return false;
      }
      bVar1 = IGFGDDANEPE__DABHOGHGNBB(__this_01,(MethodInfo *)0x0);
      if (bVar1) {
        pHVar2 = (__this_01->fields).LFPOIAJDMBK;
                    /* try { // try from 03610f20 to 03710f23 has its CatchHandler @ 03610f28 */
        if (pHVar2 == (HOOAAGABMBL_o *)0x0) {
          return false;
        }
                    /* try { // try from 03610f24 to 03710f47 has its CatchHandler @ 03610e48 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610f20 with catch @ 03610f28
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610ef8 with catch @ 03610f2c
                        */
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03610ee4 with catch @ 03610f30
                        */
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 03610f48 to 03710f4b has its CatchHandler @ 03610f74 */
                    /* try { // try from 03610f4c to 03710f83 has its CatchHandler @ 03610e48 */
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        local_80.fields.hiddenValue =
             (pHVar2->fields)._BGAELGPOEHE_k__BackingField.fields.hiddenValue;
        local_80.fields.currentCryptoKey =
             (pHVar2->fields)._BGAELGPOEHE_k__BackingField.fields.currentCryptoKey;
        local_80.fields.fakeValueActive =
             (pHVar2->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValueActive;
        local_80.fields.inited = (pHVar2->fields)._BGAELGPOEHE_k__BackingField.fields.inited;
        local_80.fields._26_6_ =
             *(undefined6 *)&(pHVar2->fields)._BGAELGPOEHE_k__BackingField.fields.field_0x1a;
        local_80.fields.fakeValue = (pHVar2->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValue;
                    /* catch() { ... } // from try @ 03610f48 with catch @ 03610f74 */
        pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                          (&local_80,(MethodInfo *)0x0);
                    /* try { // try from 03610f84 to 03710f8b has its CatchHandler @ 03610fa0 */
        if (pAVar5 != (ACHLOMELAJE_o *)0x0) {
                    /* try { // try from 03610f8c to 03710f97 has its CatchHandler @ 03610e48 */
          bVar1 = ACHLOMELAJE__MIFEPGNGDON(pAVar5,iVar3,(MethodInfo *)0x0);
          return bVar1;
                    /* try { // try from 03610f98 to 03710f9f has its CatchHandler @ 03610fa0 */
        }
      }
      else {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03610f84 with catch @ 03610fa0
                       catch(type#2 @ 00000000) { ... } // from try @ 03610f98 with catch @ 03610fa0
                        */
                    /* try { // try from 03610fa4 to 037110f7 has its CatchHandler @ 03610fa4
                       catch() { ... } // from try @ 03610fa4 with catch @ 03610fa4
                       catch() { ... } // from try @ 0361128c with catch @ 03610fa4
                       catch() { ... } // from try @ 03611344 with catch @ 03610fa4
                       catch() { ... } // from try @ 0361134c with catch @ 03610fa4
                       catch() { ... } // from try @ 03611430 with catch @ 03610fa4 */
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
        pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar5 != (ACHLOMELAJE_o *)0x0) {
          iVar3 = ACHLOMELAJE__HEHFNBKGJLP(pAVar5,(MethodInfo *)0x0);
          local_60.fields.hiddenValue =
               (pHVar2->fields)._BGAELGPOEHE_k__BackingField.fields.hiddenValue;
          local_60.fields.currentCryptoKey =
               (pHVar2->fields)._BGAELGPOEHE_k__BackingField.fields.currentCryptoKey;
          local_60.fields.fakeValueActive =
               (pHVar2->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValueActive;
          local_60.fields.inited = (pHVar2->fields)._BGAELGPOEHE_k__BackingField.fields.inited;
          local_60.fields._26_6_ =
               *(undefined6 *)&(pHVar2->fields)._BGAELGPOEHE_k__BackingField.fields.field_0x1a;
          local_60.fields.fakeValue = (pHVar2->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValue
          ;
          iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                            (&local_60,(MethodInfo *)0x0);
          return iVar4 <= iVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void GLIKCOKNHDM(HOOAAGABMBL IKKAMAMLIKA, IGFGDDANEPE ENHJPOHLMCL, bool OFKBEIFPFMN = True)  [RVA 0x350E698]
// AMIINPEKKFB$$GLIKCOKNHDM @ RVA 0x350E698

void AMIINPEKKFB__GLIKCOKNHDM
               (HOOAAGABMBL_o *IKKAMAMLIKA,IGFGDDANEPE_o *ENHJPOHLMCL,bool OFKBEIFPFMN,
               MethodInfo *method)

{
  int32_t PIDMGHLCFAJ;
  ACHLOMELAJE_o *__this;
  
                    /* try { // try from 0360e698 to 0370e69f has its CatchHandler @ 0360e6b4 */
                    /* try { // try from 0360e6a0 to 0370e6ab has its CatchHandler @ 0360e1b8 */
                    /* try { // try from 0360e6ac to 0370e6b3 has its CatchHandler @ 0360e6b4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0360e698 with catch @ 0360e6b4
                       catch(type#2 @ 00000000) { ... } // from try @ 0360e6ac with catch @ 0360e6b4
                        */
  if ((DAT_045688ed & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045688ed = 1;
  }
  if ((ENHJPOHLMCL != (IGFGDDANEPE_o *)0x0) &&
     (IGFGDDANEPE__JIIEJGCOACC(ENHJPOHLMCL,true,(MethodInfo *)0x0),
     IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0)) {
    IGFGDDANEPE__DJJHOOKLHHL
              (ENHJPOHLMCL,(IKKAMAMLIKA->fields)._HCHGENFJLHA_k__BackingField,(MethodInfo *)0x0);
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
    __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this != (ACHLOMELAJE_o *)0x0) {
      PIDMGHLCFAJ = ACHLOMELAJE__EOEAKGGDBFH(__this,(MethodInfo *)0x0);
      IGFGDDANEPE__GIIJHCLHFDK(ENHJPOHLMCL,PIDMGHLCFAJ,(MethodInfo *)0x0);
      if (OFKBEIFPFMN) {
        EDFDANKEBGF__ENELBCPGGJN((MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool BJIHLOHNOGH(HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x3511034]
// AMIINPEKKFB$$BJIHLOHNOGH @ RVA 0x3511034

bool AMIINPEKKFB__BJIHLOHNOGH(HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  GGHCLMEFIGO_o *__this;
  IGFGDDANEPE_o *ENHJPOHLMCL;
  HOOAAGABMBL_o *IKKAMAMLIKA_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x3;
  ACHLOMELAJE_o *pAVar1;
  bool bVar2;
  
  if ((DAT_045688ee & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045688ee = 1;
    method = extraout_x1;
  }
  bVar2 = false;
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
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
    pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar1 == (ACHLOMELAJE_o *)0x0) ||
       (__this = (pAVar1->fields).OIDPLCLELEN, __this == (GGHCLMEFIGO_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ENHJPOHLMCL = GGHCLMEFIGO__JNFIBDBHNOA(__this,IKKAMAMLIKA,(MethodInfo *)0x0);
    if ((ENHJPOHLMCL == (IGFGDDANEPE_o *)0x0) ||
       (IKKAMAMLIKA_00 = (ENHJPOHLMCL->fields).LFPOIAJDMBK, IKKAMAMLIKA_00 == (HOOAAGABMBL_o *)0x0))
    {
      bVar2 = false;
    }
    else {
      bVar2 = true;
      AMIINPEKKFB__GLIKCOKNHDM(IKKAMAMLIKA_00,ENHJPOHLMCL,true,in_x3);
    }
  }
                    /* try { // try from 036110f8 to 0371111f has its CatchHandler @ 03611394 */
  return bVar2;
}


// ===== public static void PFDBFCFBCAN(Action<HOOAAGABMBL> CJNHFNHJHPE)  [RVA 0x3511108]
// AMIINPEKKFB$$PFDBFCFBCAN @ RVA 0x3511108

void AMIINPEKKFB__PFDBFCFBCAN(System_Action_HOOAAGABMBL__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_HOOAAGABMBL__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_HOOAAGABMBL__o *pSVar5;
  System_Action_HOOAAGABMBL__o *source;
  
  if ((DAT_045688ef & 1) == 0) {
    FUN_01bab630(&AMIINPEKKFB_TypeInfo);
    FUN_01bab630(&System_Action<HOOAAGABMBL>_TypeInfo);
    DAT_045688ef = 1;
  }
                    /* try { // try from 03611154 to 0371117f has its CatchHandler @ 03611390 */
  source = AMIINPEKKFB_TypeInfo->static_fields->PEFBFMPBJAA;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<HOOAAGABMBL>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<HOOAAGABMBL>_TypeInfo);
                    /* try { // try from 03611188 to 037111cf has its CatchHandler @ 03611398 */
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_HOOAAGABMBL__o *)
             FUN_01c07368(AMIINPEKKFB_TypeInfo->static_fields,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public static bool NLJKKOINGGE(string CNIELFLIKJB)  [RVA 0x35111D4]
// AMIINPEKKFB$$NLJKKOINGGE @ RVA 0x35111D4

bool AMIINPEKKFB__NLJKKOINGGE(System_String_o *CNIELFLIKJB,MethodInfo *method)

{
  bool bVar1;
  DOPEEDABNEK_o *__this;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  
                    /* try { // try from 036111e4 to 037111eb has its CatchHandler @ 03611388 */
  if ((DAT_045688f0 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045688f0 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
                    /* try { // try from 03611218 to 0371121f has its CatchHandler @ 03611370 */
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 03611234 to 0371123b has its CatchHandler @ 03611378 */
    DAT_04563eaa = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
                    /* try { // try from 03611250 to 03711257 has its CatchHandler @ 0361137c */
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (__this != (DOPEEDABNEK_o *)0x0) {
    IKKAMAMLIKA = DOPEEDABNEK__CKKIPBAIEMN(__this,CNIELFLIKJB,(MethodInfo *)0x0);
                    /* try { // try from 03611268 to 0371126f has its CatchHandler @ 03611364 */
    bVar1 = AMIINPEKKFB__NLJKKOINGGE(IKKAMAMLIKA,method_00);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void AOBOOIINCOA(HOOAAGABMBL IKKAMAMLIKA, Action<BKKPAKHJDKB> BLMFLPJJMPF)  [RVA 0x350DE80]
// AMIINPEKKFB$$AOBOOIINCOA @ RVA 0x350DE80

void AMIINPEKKFB__AOBOOIINCOA
               (HOOAAGABMBL_o *IKKAMAMLIKA,System_Action_BKKPAKHJDKB__o *BLMFLPJJMPF,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this;
  System_Action_BKKPAKHJDKB__o *BLMFLPJJMPF_00;
  MethodInfo *method_00;
  
  if ((DAT_045688f1 & 1) == 0) {
    FUN_01bab630(&System_Action<BKKPAKHJDKB>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&Method_AMIINPEKKFB_NKICBHLFPAF_INMIPFHCDBL__);
    FUN_01bab630(&AMIINPEKKFB_NKICBHLFPAF_TypeInfo);
    DAT_045688f1 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(AMIINPEKKFB_NKICBHLFPAF_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this[1].klass = (Il2CppClass *)BLMFLPJJMPF;
  thunk_FUN_01c20e04(__this + 1,BLMFLPJJMPF);
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
    BLMFLPJJMPF_00 =
         (System_Action_BKKPAKHJDKB__o *)thunk_FUN_01bda818(System_Action<BKKPAKHJDKB>_TypeInfo);
    System_Action<object>___ctor();
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = MGNPHCAAEIO__IAGKBFCKFKB(IKKAMAMLIKA,2,1,BLMFLPJJMPF_00,true,(MethodInfo *)0x0);
    if (bVar1) {
      AMIINPEKKFB__AMGIHEOPMEK(IKKAMAMLIKA,method_00);
      return;
    }
  }
  return;
}


// ===== public static bool BDMNJJAAHAJ(string KGLJICLJHEL)  [RVA 0x3511520]
// AMIINPEKKFB$$BDMNJJAAHAJ @ RVA 0x3511520

bool AMIINPEKKFB__BDMNJJAAHAJ(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  DEKKGJNMFEB_o *pDVar3;
  AMJMGFCCAKN_o *pAVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *CJNHFNHJHPE;
  int64_t IDPMJOKDHNP;
  System_String_array *pSVar5;
  MethodInfo *extraout_x1;
  BFBONKPKBNL_o *pBVar6;
  ACHLOMELAJE_o *__this;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_40;
  
  CJNHFNHJHPE = &local_60;
  if ((DAT_045688f2 & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045688f2 = 1;
    method = extraout_x1;
  }
  if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DEKKGJNMFEB_TypeInfo,method);
  }
  pDVar3 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pDVar3 == (DEKKGJNMFEB_o *)0x0) goto LAB_03611724;
  pAVar4 = DEKKGJNMFEB__BEENALLFOCN(pDVar3,KGLJICLJHEL,(MethodInfo *)0x0);
  if (pAVar4 == (AMJMGFCCAKN_o *)0x0) {
    return false;
  }
  if ((pAVar4->fields).MHJAFBPAKEG == (BFBONKPKBNL_o *)0x0) {
                    /* try { // try from 03611638 to 0371163f has its CatchHandler @ 036116c4 */
    if ((KGLJICLJHEL == (System_String_o *)0x0) ||
       (pSVar5 = System_String__Split(KGLJICLJHEL,0x7c,0,(MethodInfo *)0x0),
       pSVar5 == (System_String_array *)0x0)) goto LAB_03611724;
                    /* try { // try from 03611654 to 0371165f has its CatchHandler @ 036116c0 */
    if ((int)pSVar5->max_length < 2) {
                    /* try { // try from 03611710 to 0371171b has its CatchHandler @ 03611510 */
                    /* try { // try from 0361171c to 03711723 has its CatchHandler @ 03611724 */
      return false;
    }
    if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0361166c to 0371167b has its CatchHandler @ 036116b8 */
    pDVar3 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
    iVar1 = (int)pSVar5->max_length;
                    /* try { // try from 0361167c to 037116a7 has its CatchHandler @ 03611510 */
    if ((iVar1 == 0) || (iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    if (pDVar3 == (DEKKGJNMFEB_o *)0x0) goto LAB_03611724;
    pBVar6 = DEKKGJNMFEB__NCFEMNMDBMJ
                       (pDVar3,pSVar5->m_Items[0],pSVar5->m_Items[1],(MethodInfo *)0x0);
    if (pBVar6 == (BFBONKPKBNL_o *)0x0) {
      return false;
    }
    if ((pAVar4->fields).CJKLJJIMECK < 1) {
      return false;
    }
                    /* try { // try from 036116a8 to 037116ab has its CatchHandler @ 036116bc */
                    /* try { // try from 036116ac to 037116af has its CatchHandler @ 036116b4 */
                    /* try { // try from 036116b0 to 037116db has its CatchHandler @ 03611510 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036116ac with catch @ 036116b4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361166c with catch @ 036116b8
                        */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036116a8 with catch @ 036116bc
                        */
      thunk_FUN_01ba7564();
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03611654 with catch @ 036116c0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03611638 with catch @ 036116c4
                        */
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 036116dc to 037116df has its CatchHandler @ 03611700 */
      DAT_04565b7d = '\x01';
    }
                    /* try { // try from 036116e0 to 03711707 has its CatchHandler @ 03611510 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_60.fields.hiddenValue = (pBVar6->fields)._BGAELGPOEHE_k__BackingField.fields.hiddenValue;
    local_60.fields.currentCryptoKey =
         (pBVar6->fields)._BGAELGPOEHE_k__BackingField.fields.currentCryptoKey;
    local_60.fields.fakeValueActive =
         (pBVar6->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValueActive;
    local_60.fields.inited = (pBVar6->fields)._BGAELGPOEHE_k__BackingField.fields.inited;
    local_60.fields._26_6_ =
         *(undefined6 *)&(pBVar6->fields)._BGAELGPOEHE_k__BackingField.fields.field_0x1a;
    local_60.fields.fakeValue = (pBVar6->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValue;
                    /* catch() { ... } // from try @ 036116dc with catch @ 03611700 */
    __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* try { // try from 03611708 to 0371170f has its CatchHandler @ 03611724 */
  }
  else {
    if ((pAVar4->fields).CJKLJJIMECK < 1) {
      return false;
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
    pBVar6 = (pAVar4->fields).MHJAFBPAKEG;
    if (pBVar6 == (BFBONKPKBNL_o *)0x0) goto LAB_03611724;
    local_40.fields.hiddenValue = (pBVar6->fields)._BGAELGPOEHE_k__BackingField.fields.hiddenValue;
    local_40.fields.currentCryptoKey =
         (pBVar6->fields)._BGAELGPOEHE_k__BackingField.fields.currentCryptoKey;
    local_40.fields.fakeValueActive =
         (pBVar6->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValueActive;
    local_40.fields.inited = (pBVar6->fields)._BGAELGPOEHE_k__BackingField.fields.inited;
    local_40.fields._26_6_ =
         *(undefined6 *)&(pBVar6->fields)._BGAELGPOEHE_k__BackingField.fields.field_0x1a;
    local_40.fields.fakeValue = (pBVar6->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValue;
    CJNHFNHJHPE = &local_40;
    __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  }
  IDPMJOKDHNP = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                          (CJNHFNHJHPE,(MethodInfo *)0x0);
  if (__this != (ACHLOMELAJE_o *)0x0) {
    bVar2 = ACHLOMELAJE__MIFEPGNGDON(__this,IDPMJOKDHNP,(MethodInfo *)0x0);
    return bVar2;
  }
LAB_03611724:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03611708 with catch @ 03611724
                       catch(type#2 @ 00000000) { ... } // from try @ 0361171c with catch @ 03611724
                        */
  FUN_01bab8c8();
}


// ===== private static void BDMBCINIFFB(HOOAAGABMBL IKKAMAMLIKA, NFNBHPOJFNJ.DDPHDDCKAGO ACCIHBHMFPN, bool OAKHPMMLFPP)  [RVA 0x350ED58]
// AMIINPEKKFB$$BDMBCINIFFB @ RVA 0x350ED58

void AMIINPEKKFB__BDMBCINIFFB
               (HOOAAGABMBL_o *IKKAMAMLIKA,int32_t ACCIHBHMFPN,bool OAKHPMMLFPP,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppObject *pIVar1;
  undefined1 local_58 [4];
  int32_t local_54;
  
  if ((DAT_045688f3 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&NFNBHPOJFNJ_DDPHDDCKAGO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
    FUN_01bab630(&MDNLIFLBFNO_TypeInfo);
    FUN_01bab630(&StringLiteral_18948/*"immediatelyDelivery"*/);
    FUN_01bab630(&StringLiteral_19209/*"item"*/);
    FUN_01bab630(&StringLiteral_21625/*"type"*/);
    DAT_045688f3 = 1;
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(MDNLIFLBFNO_TypeInfo);
  MDNLIFLBFNO___ctor((MDNLIFLBFNO_o *)__this,(MethodInfo *)0x0);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* try { // try from 0360ee08 to 0370ef77 has its CatchHandler @ 0360ee08
                       catch() { ... } // from try @ 0360ee08 with catch @ 0360ee08
                       catch() { ... } // from try @ 0360f1f4 with catch @ 0360ee08
                       catch() { ... } // from try @ 0360f2bc with catch @ 0360ee08
                       catch() { ... } // from try @ 0360f2c4 with catch @ 0360ee08
                       catch() { ... } // from try @ 0360f3ec with catch @ 0360ee08 */
    System_Collections_Generic_Dictionary<object,_object>__set_Item
              (__this,StringLiteral_19209/*"item"*/,(Il2CppObject *)IKKAMAMLIKA,
               Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
    local_54 = ACCIHBHMFPN;
    pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(NFNBHPOJFNJ_DDPHDDCKAGO_TypeInfo,&local_54);
    System_Collections_Generic_Dictionary<object,_object>__set_Item
              (__this,StringLiteral_21625/*"type"*/,pIVar1,
               Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
    local_58[0] = OAKHPMMLFPP;
    pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_58);
    System_Collections_Generic_Dictionary<object,_object>__set_Item
              (__this,StringLiteral_18948/*"immediatelyDelivery"*/,pIVar1,
               Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
    NFNBHPOJFNJ__NOJIAJPLOKB(6,(MDNLIFLBFNO_o *)__this,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void KCJJEDBFGKF(IGFGDDANEPE ENHJPOHLMCL, HOOAAGABMBL IHGFKLOLPOK)  [RVA 0x351172C]
// AMIINPEKKFB$$KCJJEDBFGKF @ RVA 0x351172C

void AMIINPEKKFB__KCJJEDBFGKF
               (IGFGDDANEPE_o *ENHJPOHLMCL,HOOAAGABMBL_o *IHGFKLOLPOK,MethodInfo *method)

{
  ACHLOMELAJE_o *pAVar1;
  int64_t iVar2;
  int64_t iVar3;
  GGHCLMEFIGO_o *__this;
  MethodInfo *method_00;
  MethodInfo *method_01;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  
  if ((DAT_045688f4 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045688f4 = 1;
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
  pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar1 != (ACHLOMELAJE_o *)0x0) &&
     (iVar2 = ACHLOMELAJE__HEHFNBKGJLP(pAVar1,(MethodInfo *)0x0),
     IHGFKLOLPOK != (HOOAAGABMBL_o *)0x0)) {
    local_60.fields.hiddenValue =
         (IHGFKLOLPOK->fields)._BGAELGPOEHE_k__BackingField.fields.hiddenValue;
    local_60.fields.currentCryptoKey =
         (IHGFKLOLPOK->fields)._BGAELGPOEHE_k__BackingField.fields.currentCryptoKey;
    local_60.fields.fakeValueActive =
         (IHGFKLOLPOK->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValueActive;
    local_60.fields.inited = (IHGFKLOLPOK->fields)._BGAELGPOEHE_k__BackingField.fields.inited;
    local_60.fields._26_6_ =
         *(undefined6 *)&(IHGFKLOLPOK->fields)._BGAELGPOEHE_k__BackingField.fields.field_0x1a;
    local_60.fields.fakeValue = (IHGFKLOLPOK->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValue;
    iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_60,(MethodInfo *)0x0)
    ;
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar1 != (ACHLOMELAJE_o *)0x0) &&
       (__this = (pAVar1->fields).OIDPLCLELEN, __this != (GGHCLMEFIGO_o *)0x0)) {
      GGHCLMEFIGO__AFPDMLCLGJM(__this,ENHJPOHLMCL,(MethodInfo *)0x0);
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
                    /* try { // try from 03611858 to 03711953 has its CatchHandler @ 03611858
                       catch() { ... } // from try @ 03611858 with catch @ 03611858
                       catch() { ... } // from try @ 036119f4 with catch @ 03611858
                       catch() { ... } // from try @ 03611a14 with catch @ 03611858
                       catch() { ... } // from try @ 03611a8c with catch @ 03611858
                       catch() { ... } // from try @ 03611ac4 with catch @ 03611858
                       catch() { ... } // from try @ 03611b00 with catch @ 03611858 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
        method_01 = (MethodInfo *)0x0;
        ACHLOMELAJE__OGPHHGFFKHD(pAVar1,iVar2 - iVar3,0xb,false,(MethodInfo *)0x0);
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
          CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar1,false,(MethodInfo *)0x0);
          AMIINPEKKFB__BDMBCINIFFB(IHGFKLOLPOK,1,true,method_01);
          AMIINPEKKFB__AMGIHEOPMEK(IHGFKLOLPOK,method_00);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void AMGIHEOPMEK(HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x350EEC8]
// AMIINPEKKFB$$AMGIHEOPMEK @ RVA 0x350EEC8

void AMIINPEKKFB__AMGIHEOPMEK(HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar1;
  DNELIPCHKLK_o *pDVar2;
  System_Action_HOOAAGABMBL__o *pSVar3;
  DNELIPCHKLK_o **ppDVar4;
  DNELIPCHKLK_o *pDVar5;
  PKHMIGFEJCL_o *pPVar6;
  
  if ((DAT_045688f5 & 1) == 0) {
    FUN_01bab630(&AMIINPEKKFB_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045688f5 = 1;
  }
  pSVar3 = AMIINPEKKFB_TypeInfo->static_fields->PEFBFMPBJAA;
  if (pSVar3 != (System_Action_HOOAAGABMBL__o *)0x0) {
    (*(code *)(pSVar3->fields).super.super.invoke_impl)
              ((pSVar3->fields).super.super.method_code,IKKAMAMLIKA,
               (pSVar3->fields).super.super.method);
  }
  pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
     (pPVar6 = (pNVar1->fields).QuestParameters, pPVar6 != (PKHMIGFEJCL_o *)0x0)) {
    ppDVar4 = &(pPVar6->fields).NMHCLFFOMJH;
    pDVar5 = *ppDVar4;
    pDVar2 = DNELIPCHKLK__OBECCOPBADO((MethodInfo *)0x0);
    *ppDVar4 = pDVar2;
    thunk_FUN_01c20e04(ppDVar4,pDVar2);
    (pPVar6->fields).PNPKEKHEMCD = StringLiteral_1/*""*/;
                    /* try { // try from 0360ef78 to 0370ef9f has its CatchHandler @ 0360f32c */
    thunk_FUN_01c20e04();
    (pPVar6->fields).LOLFFJGLKLD = StringLiteral_1/*""*/;
    thunk_FUN_01c20e04();
    (pPVar6->fields).CJLNOJMBNPN = IKKAMAMLIKA;
    thunk_FUN_01c20e04(&pPVar6->fields,IKKAMAMLIKA);
    pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar1,0xb,(MethodInfo *)0x0);
      *ppDVar4 = pDVar5;
      thunk_FUN_01c20e04(ppDVar4,pDVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void CHENJHPJCKE(HOOAAGABMBL IKKAMAMLIKA, int EPINGPGECOM, int GNDOPGAILNK, bool MEGHFHANLPK, bool CDCKLABCFOM)  [RVA 0x350FB48]
// AMIINPEKKFB$$CHENJHPJCKE @ RVA 0x350FB48

void AMIINPEKKFB__CHENJHPJCKE
               (HOOAAGABMBL_o *IKKAMAMLIKA,int32_t EPINGPGECOM,int32_t GNDOPGAILNK,bool MEGHFHANLPK,
               bool CDCKLABCFOM,MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int32_t iVar5;
  HOOAAGABMBL_o *CJNHFNHJHPE;
  GGHCLMEFIGO_o *__this;
  IGFGDDANEPE_o *pIVar6;
  long lVar7;
  Nekki_SF2_GUI_Shop_InfoPanelContent_o *pNVar8;
  HOOAAGABMBL_o *__this_00;
  NLPJLHOEAOE_o *__this_01;
  int iVar9;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar10;
  System_String_o *pSVar11;
  UnityEngine_Object_o *x;
  
  if ((DAT_045688f6 & 1) == 0) {
    FUN_01bab630(&Method_KFJJHMDIFIG_ONCJPMNKDIM<AMIINPEKKFB>__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&StringLiteral_14587/*"Upgrade"*/);
    FUN_01bab630(&StringLiteral_6854/*"GiveItem: try to give null item!"*/);
    DAT_045688f6 = 1;
  }
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 0360fc14 to 0370fc3b has its CatchHandler @ 0360fe14 */
    KFJJHMDIFIG__ONCJPMNKDIM<object>
              (StringLiteral_6854/*"GiveItem: try to give null item!"*/,Method_KFJJHMDIFIG_ONCJPMNKDIM<AMIINPEKKFB>__);
    return;
  }
  if (EPINGPGECOM < 1) {
    CJNHFNHJHPE = (HOOAAGABMBL_o *)0x0;
  }
  else {
    CJNHFNHJHPE = HOOAAGABMBL__HCMOFJHAKJH(IKKAMAMLIKA,EPINGPGECOM,(MethodInfo *)0x0);
  }
  if (MEGHFHANLPK) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    NLPJLHOEAOE__DKAIOJJLNGL(IKKAMAMLIKA,(MethodInfo *)0x0);
  }
                    /* try { // try from 0360fc70 to 0370fc9b has its CatchHandler @ 0360fe10 */
  if (GNDOPGAILNK < 1) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
                    /* try { // try from 0360fca4 to 0370fceb has its CatchHandler @ 0360fe1c */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar10 == (ACHLOMELAJE_o *)0x0) ||
       (__this = (pAVar10->fields).OIDPLCLELEN, __this == (GGHCLMEFIGO_o *)0x0)) goto LAB_03610138;
    bVar2 = GGHCLMEFIGO__JFPMAKABBOK
                      (__this,(IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
    if (!bVar2) goto LAB_0360fd3c;
    if (GNDOPGAILNK != 0) {
      pSVar11 = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pIVar6 = NLPJLHOEAOE__JNFIBDBHNOA(pSVar11,(MethodInfo *)0x0);
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_Math_TypeInfo);
      }
      iVar5 = -GNDOPGAILNK;
      if (-1 < GNDOPGAILNK) {
        iVar5 = GNDOPGAILNK;
      }
                    /* try { // try from 0360fd2c to 0370fd4f has its CatchHandler @ 0360fe08 */
      NLPJLHOEAOE__OMFGGNJKKAJ(pIVar6,iVar5,false,(MethodInfo *)0x0);
LAB_0360ff50:
      bVar2 = false;
      goto LAB_0360ff54;
    }
    if (!MEGHFHANLPK) goto LAB_0360ff50;
    pSVar11 = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pIVar6 = NLPJLHOEAOE__JNFIBDBHNOA(pSVar11,(MethodInfo *)0x0);
    bVar3 = NLPJLHOEAOE__CCPLLOAKNIL(pIVar6,true,true,(MethodInfo *)0x0);
    bVar2 = false;
  }
  else {
LAB_0360fd3c:
                    /* try { // try from 0360fd50 to 0370fde3 has its CatchHandler @ 0360fae4 */
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = MGNPHCAAEIO_TypeInfo->static_fields->JHOGCLNJGDK;
    MGNPHCAAEIO_TypeInfo->static_fields->JHOGCLNJGDK = CDCKLABCFOM;
    pIVar6 = AMIINPEKKFB__PJOFJOOGIBF(IKKAMAMLIKA,GNDOPGAILNK,0,MEGHFHANLPK,true,method);
    MGNPHCAAEIO_TypeInfo->static_fields->JHOGCLNJGDK = bVar1;
    if (CJNHFNHJHPE != (HOOAAGABMBL_o *)0x0) {
      if (pIVar6 == (IGFGDDANEPE_o *)0x0) goto LAB_03610138;
      IGFGDDANEPE__CCOEOCPGJBG(pIVar6,StringLiteral_14587/*"Upgrade"*/,(MethodInfo *)0x0);
      if ((CDCKLABCFOM) &&
         (iVar9 = (IKKAMAMLIKA->fields)._JDEHPJEIOCI_k__BackingField * 100, EPINGPGECOM < iVar9)) {
        iVar9 = iVar9 + 0x1e;
      }
      else {
        iVar9 = (CJNHFNHJHPE->fields)._HCHGENFJLHA_k__BackingField;
      }
      method_00 = (MethodInfo *)0x0;
      IGFGDDANEPE__DJJHOOKLHHL(pIVar6,iVar9,(MethodInfo *)0x0);
                    /* try { // try from 0360fde4 to 0370fdeb has its CatchHandler @ 0360fe0c */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0360fdec to 0370fdf3 has its CatchHandler @ 0360fe18 */
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 0360fdf4 to 0370fdf7 has its CatchHandler @ 0360fae4 */
      if (DAT_04565b7d == '\0') {
                    /* try { // try from 0360fdf8 to 0370fdfb has its CatchHandler @ 0360fe04 */
                    /* try { // try from 0360fdfc to 0370fe2b has its CatchHandler @ 0360fae4 */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360fdf8 with catch @ 0360fe04
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360fd2c with catch @ 0360fe08
                        */
        DAT_04565b7d = '\x01';
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360fde4 with catch @ 0360fe0c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360fc70 with catch @ 0360fe10
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360fc14 with catch @ 0360fe14
                        */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360fdec with catch @ 0360fe18
                        */
        thunk_FUN_01ba7564();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360fca4 with catch @ 0360fe1c
                        */
      }
      pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar10 == (ACHLOMELAJE_o *)0x0) goto LAB_03610138;
                    /* try { // try from 0360fe2c to 0370fe2f has its CatchHandler @ 0360fe40 */
      iVar5 = ACHLOMELAJE__EOEAKGGDBFH(pAVar10,(MethodInfo *)0x0);
      AMIINPEKKFB__LEDEFAKNIDE(pIVar6,iVar5,method_00);
                    /* catch() { ... } // from try @ 0360fe2c with catch @ 0360fe40 */
      if (DAT_04565b7d == '\0') {
                    /* try { // try from 0360fe48 to 0370feaf has its CatchHandler @ 0360fec4 */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar10 == (ACHLOMELAJE_o *)0x0) goto LAB_03610138;
      iVar5 = ACHLOMELAJE__EOEAKGGDBFH(pAVar10,(MethodInfo *)0x0);
      IGFGDDANEPE__GIIJHCLHFDK(pIVar6,iVar5,(MethodInfo *)0x0);
    }
    iVar9 = (IKKAMAMLIKA->fields)._JDEHPJEIOCI_k__BackingField;
    bVar2 = CJNHFNHJHPE != (HOOAAGABMBL_o *)0x0;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0360feb0 to 0370febb has its CatchHandler @ 0360fae4 */
    if (DAT_04565b7d == '\0') {
                    /* try { // try from 0360febc to 0370fec3 has its CatchHandler @ 0360fec4 */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0360fe48 with catch @ 0360fec4
                       catch(type#2 @ 00000000) { ... } // from try @ 0360febc with catch @ 0360fec4
                        */
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar10 == (ACHLOMELAJE_o *)0x0) goto LAB_03610138;
    iVar5 = ACHLOMELAJE__EOEAKGGDBFH(pAVar10,(MethodInfo *)0x0);
    if (iVar9 <= iVar5) {
      HOOAAGABMBL__GEBIJFANLGH(IKKAMAMLIKA,true,(MethodInfo *)0x0);
    }
LAB_0360ff54:
    bVar3 = false;
  }
  lVar7 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01b81620();
  }
                    /* try { // try from 0360ff7c to 03710063 has its CatchHandler @ 0360ff7c
                       catch() { ... } // from try @ 0360ff7c with catch @ 0360ff7c
                       catch() { ... } // from try @ 036100a0 with catch @ 0360ff7c
                       catch() { ... } // from try @ 03610148 with catch @ 0360ff7c
                       catch() { ... } // from try @ 03610188 with catch @ 0360ff7c
                       catch() { ... } // from try @ 036101d4 with catch @ 0360ff7c */
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01b81620();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar7 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if (bVar2) {
      lVar7 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01b81620();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01b81620();
      }
      if (((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar7 + 0xb8) ==
           (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) ||
         (pNVar8 = Nekki_SF2_GUI_Shop_ShopScene__get_InfoPanelContent
                             ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar7 + 0xb8),
                              (MethodInfo *)0x0),
         pNVar8 == (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0)) goto LAB_03610138;
      Nekki_SF2_GUI_Shop_InfoPanelContent__set_ItemInfo(pNVar8,CJNHFNHJHPE,(MethodInfo *)0x0);
    }
    if (bVar3 != false || bVar2) {
      lVar7 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01b81620();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01b81620();
      }
      if (((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar7 + 0xb8) ==
           (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) ||
         (pNVar8 = Nekki_SF2_GUI_Shop_ShopScene__get_InfoPanelContent
                             ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar7 + 0xb8),
                              (MethodInfo *)0x0),
         pNVar8 == (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0)) goto LAB_03610138;
      Nekki_SF2_GUI_Shop_InfoPanelContent__UpdateContent(pNVar8,(MethodInfo *)0x0);
    }
  }
                    /* try { // try from 03610064 to 0371006b has its CatchHandler @ 03610168 */
  if ((GNDOPGAILNK < 1) && (!MEGHFHANLPK)) {
    pSVar11 = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03610084 to 0371008b has its CatchHandler @ 03610164 */
    pIVar6 = NLPJLHOEAOE__JNFIBDBHNOA(pSVar11,(MethodInfo *)0x0);
    if (pIVar6 != (IGFGDDANEPE_o *)0x0) {
                    /* try { // try from 03610090 to 0371009f has its CatchHandler @ 0361014c */
      __this_00 = (pIVar6->fields).PCBECBEFJOI;
      if (__this_00 == (HOOAAGABMBL_o *)0x0) goto LAB_03610138;
                    /* try { // try from 036100a0 to 0371013b has its CatchHandler @ 0360ff7c */
      HOOAAGABMBL__GEBIJFANLGH(__this_00,false,(MethodInfo *)0x0);
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
      pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar10 == (ACHLOMELAJE_o *)0x0) goto LAB_03610138;
      ACHLOMELAJE__POEMPPEIGOM(pAVar10,(MethodInfo *)0x0);
    }
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_01 != (NLPJLHOEAOE_o *)0x0) {
    NLPJLHOEAOE__HBFMPJEOIEL(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
LAB_03610138:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void NKGDNFCCFCD(HOOAAGABMBL IKKAMAMLIKA, List<PKKLIJLIKGF> LDAIPGBJEOG)  [RVA 0x350E12C]
// AMIINPEKKFB$$NKGDNFCCFCD @ RVA 0x350E12C

void AMIINPEKKFB__NKGDNFCCFCD
               (HOOAAGABMBL_o *IKKAMAMLIKA,
               System_Collections_Generic_List_PKKLIJLIKGF__o *LDAIPGBJEOG,MethodInfo *method)

{
  bool bVar1;
  int32_t EDEIFHGMBFA;
  int32_t EBDDELGICGB;
  System_String_o *pSVar2;
  IGFGDDANEPE_o *__this;
  ACHLOMELAJE_o *pAVar3;
  System_Xml_XmlNode_o *pSVar4;
  undefined8 *puVar5;
  
  if ((DAT_045688f7 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<PKKLIJLIKGF>__);
    FUN_01bab630(&Method_KFJJHMDIFIG_ONCJPMNKDIM<AMIINPEKKFB>__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_802/*"'"*/);
    FUN_01bab630(&StringLiteral_6855/*"GiveItem: try to give perks to null item!"*/);
    FUN_01bab630(&StringLiteral_6861/*"GivePerksToItem: enchantments is empty"*/);
    FUN_01bab630(&StringLiteral_5703/*"Enchantments"*/);
    FUN_01bab630(&StringLiteral_6860/*"GivePerksToItem: cant find userItem '"*/);
    DAT_045688f7 = 1;
  }
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    puVar5 = &StringLiteral_6855/*"GiveItem: try to give perks to null item!"*/;
  }
  else {
                    /* try { // try from 0360e1b8 to 0370e423 has its CatchHandler @ 0360e1b8
                       catch() { ... } // from try @ 0360e1b8 with catch @ 0360e1b8
                       catch() { ... } // from try @ 0360e4a4 with catch @ 0360e1b8
                       catch() { ... } // from try @ 0360e630 with catch @ 0360e1b8
                       catch() { ... } // from try @ 0360e670 with catch @ 0360e1b8
                       catch() { ... } // from try @ 0360e6a0 with catch @ 0360e1b8 */
    bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                      ((System_Collections_Generic_List_T__o *)LDAIPGBJEOG,
                       Method_DJNBJHPDKDP_OBECCOPBADO<PKKLIJLIKGF>__);
    if (!bVar1) {
      pSVar2 = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this = NLPJLHOEAOE__JNFIBDBHNOA(pSVar2,(MethodInfo *)0x0);
      if (__this != (IGFGDDANEPE_o *)0x0) {
        EDEIFHGMBFA = IGFGDDANEPE__LGIMDOAMCNG(__this,(MethodInfo *)0x0);
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
        pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
          EBDDELGICGB = ACHLOMELAJE__EOEAKGGDBFH(pAVar3,(MethodInfo *)0x0);
          IGFGDDANEPE__IHPKFKLKPPP(__this,LDAIPGBJEOG,EDEIFHGMBFA,EBDDELGICGB,(MethodInfo *)0x0);
          pSVar4 = (__this->fields).DMLGJFCNNJF;
          if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
            pSVar4 = (System_Xml_XmlNode_o *)
                     (*(pSVar4->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar4,StringLiteral_5703/*"Enchantments"*/,
                                (pSVar4->klass->vtable)._51_get_Item.method);
            IGFGDDANEPE__LPLGJMMAKJG(__this,pSVar4,true,(MethodInfo *)0x0);
            if (DAT_04565b7d == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04565b7d = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
              CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar3,false,(MethodInfo *)0x0);
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar2 = System_String__Concat
                         (StringLiteral_6860/*"GivePerksToItem: cant find userItem '"*/,(IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,
                          StringLiteral_802/*"'"*/,(MethodInfo *)0x0);
      goto LAB_0360e1f4;
    }
    puVar5 = &StringLiteral_6861/*"GivePerksToItem: enchantments is empty"*/;
  }
  pSVar2 = (System_String_o *)*puVar5;
LAB_0360e1f4:
  KFJJHMDIFIG__ONCJPMNKDIM<object>(pSVar2,Method_KFJJHMDIFIG_ONCJPMNKDIM<AMIINPEKKFB>__);
  return;
}


// ===== private static bool LCJGGKADBPI(HOOAAGABMBL IKKAMAMLIKA, bool OFKBEIFPFMN = True)  [RVA 0x350E9FC]
// AMIINPEKKFB$$LCJGGKADBPI @ RVA 0x350E9FC

bool AMIINPEKKFB__LCJGGKADBPI(HOOAAGABMBL_o *IKKAMAMLIKA,bool OFKBEIFPFMN,MethodInfo *method)

{
  int32_t iVar1;
  GGHCLMEFIGO_o *pGVar2;
  IGFGDDANEPE_o *pIVar3;
  IGFGDDANEPE_o *__this;
  ACHLOMELAJE_o *pAVar4;
  long lVar5;
  System_Xml_XmlNode_o *GGDPPDFOEOH;
  System_String_o *KGLJICLJHEL;
  long lVar6;
  
  if ((DAT_045688f8 & 1) == 0) {
    FUN_01bab630(&IGFGDDANEPE_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_8095/*"Item"*/);
    FUN_01bab630(&StringLiteral_19217/*"item_notification"*/);
    DAT_045688f8 = 1;
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
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar4 != (ACHLOMELAJE_o *)0x0) &&
     (pGVar2 = (pAVar4->fields).OIDPLCLELEN, pGVar2 != (GGHCLMEFIGO_o *)0x0)) {
    pIVar3 = GGHCLMEFIGO__JNFIBDBHNOA(pGVar2,IKKAMAMLIKA,(MethodInfo *)0x0);
    if (pIVar3 != (IGFGDDANEPE_o *)0x0) {
LAB_0360ed2c:
      return pIVar3 == (IGFGDDANEPE_o *)0x0;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b87 == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b87 = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
      lVar6 = (IKKAMAMLIKA->fields)._LAOFJOMPFDL_k__BackingField;
      lVar5 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar4 != (ACHLOMELAJE_o *)0x0) {
        iVar1 = ACHLOMELAJE__EOEAKGGDBFH(pAVar4,(MethodInfo *)0x0);
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar4 != (ACHLOMELAJE_o *)0x0) {
          GGDPPDFOEOH = (pAVar4->fields).LNPJFGHNPFN;
          KGLJICLJHEL = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
          __this = (IGFGDDANEPE_o *)thunk_FUN_01bda818(IGFGDDANEPE_TypeInfo);
          IGFGDDANEPE___ctor(__this,iVar1,GGDPPDFOEOH,KGLJICLJHEL,false,0,-1,lVar6 + lVar5,-1,true,
                             StringLiteral_8095/*"Item"*/,(MethodInfo *)0x0);
          if (__this != (IGFGDDANEPE_o *)0x0) {
            IGFGDDANEPE__CLIDHHJIGOC(__this,IKKAMAMLIKA,(MethodInfo *)0x0);
            IGFGDDANEPE__JIIEJGCOACC(__this,false,(MethodInfo *)0x0);
            IGFGDDANEPE__PHAGOINEABA(__this,(MethodInfo *)0x0);
            if (DAT_04565b7d == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04565b7d = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if ((pAVar4 != (ACHLOMELAJE_o *)0x0) &&
               (pGVar2 = (pAVar4->fields).OIDPLCLELEN, pGVar2 != (GGHCLMEFIGO_o *)0x0)) {
              GGHCLMEFIGO__FIFBDNADAAL(pGVar2,__this,false,(MethodInfo *)0x0);
              if (DAT_04565b7d == '\0') {
                FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                DAT_04565b7d = '\x01';
              }
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
              if (pAVar4 != (ACHLOMELAJE_o *)0x0) {
                iVar1 = ACHLOMELAJE__EOEAKGGDBFH(pAVar4,(MethodInfo *)0x0);
                IGFGDDANEPE__GIIJHCLHFDK(__this,iVar1,(MethodInfo *)0x0);
                if (OFKBEIFPFMN) {
                  EDFDANKEBGF__ENELBCPGGJN((MethodInfo *)0x0);
                }
                if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                MGNPHCAAEIO__IMMLLGHIPLE(StringLiteral_19217/*"item_notification"*/,__this,(MethodInfo *)0x0);
                goto LAB_0360ed2c;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void DNGFJEFIACC(HOOAAGABMBL IKKAMAMLIKA, IGFGDDANEPE ENHJPOHLMCL, bool OFKBEIFPFMN = True)  [RVA 0x3510420]
// AMIINPEKKFB$$DNGFJEFIACC @ RVA 0x3510420

void AMIINPEKKFB__DNGFJEFIACC
               (HOOAAGABMBL_o *IKKAMAMLIKA,IGFGDDANEPE_o *ENHJPOHLMCL,bool OFKBEIFPFMN,
               MethodInfo *method)

{
  GGHCLMEFIGO_o *__this;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar1;
  ACHLOMELAJE_o *pAVar2;
  
  if ((DAT_045688f9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Count__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045688f9 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b87 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 03610494 to 037104bb has its CatchHandler @ 03610694 */
    DAT_04565b87 = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if ((IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) && (ENHJPOHLMCL != (IGFGDDANEPE_o *)0x0)) {
    IGFGDDANEPE__DOOKHLFKCAI
              (ENHJPOHLMCL,
               NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM +
               (IKKAMAMLIKA->fields)._LAOFJOMPFDL_k__BackingField,(MethodInfo *)0x0);
    IGFGDDANEPE__FDAILKOHIKF
              (ENHJPOHLMCL,(IKKAMAMLIKA->fields)._HCHGENFJLHA_k__BackingField,(MethodInfo *)0x0);
                    /* try { // try from 036104f0 to 0371051b has its CatchHandler @ 03610690 */
    IGFGDDANEPE__JIIEJGCOACC(ENHJPOHLMCL,true,(MethodInfo *)0x0);
    pSVar1 = (ENHJPOHLMCL->fields).PAPANCDPPIF;
    if (pSVar1 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
      if ((pSVar1->fields)._size == 0) {
        IGFGDDANEPE__PHAGOINEABA(ENHJPOHLMCL,(MethodInfo *)0x0);
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 03610524 to 0371056b has its CatchHandler @ 0361069c */
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar2 != (ACHLOMELAJE_o *)0x0) &&
         (__this = (pAVar2->fields).OIDPLCLELEN, __this != (GGHCLMEFIGO_o *)0x0)) {
        GGHCLMEFIGO__FIFBDNADAAL(__this,ENHJPOHLMCL,true,(MethodInfo *)0x0);
        if (OFKBEIFPFMN) {
          EDFDANKEBGF__ENELBCPGGJN((MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool NLJKKOINGGE(HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x3511274]
// AMIINPEKKFB$$NLJKKOINGGE @ RVA 0x3511274

/* WARNING: Type propagation algorithm not settling */

bool AMIINPEKKFB__NLJKKOINGGE(HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  bool bVar1;
  GGHCLMEFIGO_o *__this;
  IGFGDDANEPE_o *__this_00;
  int64_t iVar2;
  int64_t iVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar4;
  HOOAAGABMBL_o *IHGFKLOLPOK;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_80;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  
                    /* try { // try from 03611284 to 0371128b has its CatchHandler @ 03611374 */
                    /* try { // try from 0361128c to 0371131f has its CatchHandler @ 03610fa4 */
  if ((DAT_045688fa & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045688fa = 1;
    method = extraout_x1;
  }
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
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
    pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar4 == (ACHLOMELAJE_o *)0x0) ||
       (__this = (pAVar4->fields).OIDPLCLELEN, __this == (GGHCLMEFIGO_o *)0x0)) goto LAB_03611514;
                    /* try { // try from 03611320 to 03711327 has its CatchHandler @ 0361138c */
    method_00 = (MethodInfo *)0x0;
    __this_00 = GGHCLMEFIGO__JNFIBDBHNOA(__this,IKKAMAMLIKA,(MethodInfo *)0x0);
                    /* try { // try from 03611328 to 0371132b has its CatchHandler @ 03611384 */
    if (__this_00 == (IGFGDDANEPE_o *)0x0) {
      return false;
    }
                    /* try { // try from 0361132c to 0371132f has its CatchHandler @ 03611380 */
                    /* try { // try from 03611330 to 03711333 has its CatchHandler @ 0361136c */
                    /* try { // try from 03611334 to 03711337 has its CatchHandler @ 03611368 */
    iVar2 = IGFGDDANEPE__OMMIKNKEKJN(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 03611338 to 0371133b has its CatchHandler @ 03611360 */
                    /* try { // try from 0361133c to 0371133f has its CatchHandler @ 0361135c */
                    /* try { // try from 03611340 to 03711343 has its CatchHandler @ 03611358 */
                    /* try { // try from 03611344 to 03711347 has its CatchHandler @ 03610fa4 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03611348 to 0371134b has its CatchHandler @ 03611354 */
                    /* try { // try from 0361134c to 037113af has its CatchHandler @ 03610fa4 */
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
                    /* catch() { ... } // from try @ 03611348 with catch @ 03611354 */
                    /* catch() { ... } // from try @ 03611340 with catch @ 03611358 */
    if (DAT_04565b87 == '\0') {
                    /* catch() { ... } // from try @ 0361133c with catch @ 0361135c */
                    /* catch() { ... } // from try @ 03611338 with catch @ 03611360 */
                    /* catch() { ... } // from try @ 03611268 with catch @ 03611364 */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 03611334 with catch @ 03611368 */
                    /* catch() { ... } // from try @ 03611330 with catch @ 0361136c */
      DAT_04565b87 = '\x01';
    }
                    /* catch() { ... } // from try @ 03611218 with catch @ 03611370 */
                    /* catch() { ... } // from try @ 03611284 with catch @ 03611374 */
                    /* catch() { ... } // from try @ 03611234 with catch @ 03611378 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03611250 with catch @ 0361137c */
      thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 0361132c with catch @ 03611380 */
    }
                    /* catch() { ... } // from try @ 03611328 with catch @ 03611384 */
                    /* catch() { ... } // from try @ 036111e4 with catch @ 03611388 */
                    /* catch() { ... } // from try @ 03611320 with catch @ 0361138c */
                    /* catch() { ... } // from try @ 03611154 with catch @ 03611390 */
    if (NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM < iVar2) {
                    /* catch() { ... } // from try @ 036110f8 with catch @ 03611394 */
                    /* catch() { ... } // from try @ 03611188 with catch @ 03611398 */
      bVar1 = IGFGDDANEPE__DABHOGHGNBB(__this_00,(MethodInfo *)0x0);
      if (bVar1) {
        IHGFKLOLPOK = (__this_00->fields).LFPOIAJDMBK;
        if (IHGFKLOLPOK == (HOOAAGABMBL_o *)0x0) {
          return false;
        }
                    /* try { // try from 036113b0 to 037113b3 has its CatchHandler @ 036113c0 */
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* catch() { ... } // from try @ 036113b0 with catch @ 036113c0 */
        if (DAT_04565b7d == '\0') {
                    /* try { // try from 036113c8 to 0371142f has its CatchHandler @ 03611444 */
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar4 == (ACHLOMELAJE_o *)0x0) {
LAB_03611514:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar2 = ACHLOMELAJE__HEHFNBKGJLP(pAVar4,(MethodInfo *)0x0);
        local_60.fields.hiddenValue =
             (IHGFKLOLPOK->fields)._BGAELGPOEHE_k__BackingField.fields.hiddenValue;
        local_60.fields.currentCryptoKey =
             (IHGFKLOLPOK->fields)._BGAELGPOEHE_k__BackingField.fields.currentCryptoKey;
        local_60.fields.fakeValueActive =
             (IHGFKLOLPOK->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValueActive;
        local_60.fields.inited = (IHGFKLOLPOK->fields)._BGAELGPOEHE_k__BackingField.fields.inited;
        local_60.fields._26_6_ =
             *(undefined6 *)&(IHGFKLOLPOK->fields)._BGAELGPOEHE_k__BackingField.fields.field_0x1a;
        local_60.fields.fakeValue =
             (IHGFKLOLPOK->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValue;
        iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                          (&local_60,(MethodInfo *)0x0);
        if (iVar3 <= iVar2) {
          AMIINPEKKFB__KCJJEDBFGKF(__this_00,IHGFKLOLPOK,method_00);
                    /* try { // try from 03611430 to 0371143b has its CatchHandler @ 03610fa4 */
          EDFDANKEBGF__ENELBCPGGJN((MethodInfo *)0x0);
          return true;
        }
      }
      else {
                    /* try { // try from 0361143c to 03711443 has its CatchHandler @ 03611444 */
                    /* catch() { ... } // from try @ 036113c8 with catch @ 03611444
                       catch() { ... } // from try @ 0361143c with catch @ 03611444 */
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
        if (pAVar4 == (ACHLOMELAJE_o *)0x0) goto LAB_03611514;
        iVar2 = ACHLOMELAJE__HEHFNBKGJLP(pAVar4,(MethodInfo *)0x0);
        local_80.fields.hiddenValue =
             (IKKAMAMLIKA->fields)._BGAELGPOEHE_k__BackingField.fields.hiddenValue;
        local_80.fields.currentCryptoKey =
             (IKKAMAMLIKA->fields)._BGAELGPOEHE_k__BackingField.fields.currentCryptoKey;
        local_80.fields.fakeValueActive =
             (IKKAMAMLIKA->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValueActive;
        local_80.fields.inited = (IKKAMAMLIKA->fields)._BGAELGPOEHE_k__BackingField.fields.inited;
        local_80.fields._26_6_ =
             *(undefined6 *)&(IKKAMAMLIKA->fields)._BGAELGPOEHE_k__BackingField.fields.field_0x1a;
        local_80.fields.fakeValue =
             (IKKAMAMLIKA->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValue;
        iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                          (&local_80,(MethodInfo *)0x0);
        if (iVar3 <= iVar2) {
          AMIINPEKKFB__KCJJEDBFGKF(__this_00,IKKAMAMLIKA,method_00);
          EDFDANKEBGF__HKPLJCDJKMB((MethodInfo *)0x0);
          return true;
                    /* try { // try from 03611510 to 03711637 has its CatchHandler @ 03611510
                       catch() { ... } // from try @ 03611510 with catch @ 03611510
                       catch() { ... } // from try @ 0361167c with catch @ 03611510
                       catch() { ... } // from try @ 036116b0 with catch @ 03611510
                       catch() { ... } // from try @ 036116e0 with catch @ 03611510
                       catch() { ... } // from try @ 03611710 with catch @ 03611510 */
        }
      }
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      MGNPHCAAEIO__EHEMFMCGKKK(IKKAMAMLIKA,3,(MethodInfo *)0x0);
    }
  }
  return false;
}


// ===== public static void HALEOPCMJGM(IGFGDDANEPE ENHJPOHLMCL)  [RVA 0x3511908]
// AMIINPEKKFB$$HALEOPCMJGM @ RVA 0x3511908

void AMIINPEKKFB__HALEOPCMJGM(IGFGDDANEPE_o *ENHJPOHLMCL,MethodInfo *method)

{
  int32_t EDEIFHGMBFA;
  uint uVar1;
  long lVar2;
  bool bVar3;
  int32_t EBDDELGICGB;
  KBCOFHAJOCK_o *__this;
  PLCCJCFAFKA_o *pPVar4;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  PKKLIJLIKGF_o *__this_00;
  System_Collections_Generic_List_PKKLIJLIKGF__o *AEFIPJLKAFI;
  HOOAAGABMBL_o *pHVar5;
  ACHLOMELAJE_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x2;
  DOPEEDABNEK_o *pDVar6;
  PKKLIJLIKGF_array *pPVar7;
  System_String_o *pSVar8;
  
  if ((DAT_045688fb & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2905);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2906);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 03611954 to 0371195b has its CatchHandler @ 03611ab0 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
                    /* try { // try from 03611974 to 0371197b has its CatchHandler @ 03611aac */
    FUN_01bab630(&System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 03611990 to 03711997 has its CatchHandler @ 03611a00 */
    FUN_01bab630(&PKKLIJLIKGF_TypeInfo);
    DAT_045688fb = 1;
    method = extraout_x1;
  }
                    /* try { // try from 036119a8 to 037119b3 has its CatchHandler @ 036119f8 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
    method = extraout_x1_01;
  }
                    /* try { // try from 036119d4 to 037119db has its CatchHandler @ 03611aa4 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pDVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
                    /* try { // try from 036119f0 to 037119f3 has its CatchHandler @ 036119fc */
                    /* try { // try from 036119f4 to 03711a0f has its CatchHandler @ 03611858 */
                    /* catch() { ... } // from try @ 036119a8 with catch @ 036119f8 */
  if (((pDVar6 != (DOPEEDABNEK_o *)0x0) && (ENHJPOHLMCL != (IGFGDDANEPE_o *)0x0)) &&
     (__this = (pDVar6->fields)._GMODBKFPHPN_k__BackingField, __this != (KBCOFHAJOCK_o *)0x0)) {
                    /* catch() { ... } // from try @ 036119f0 with catch @ 036119fc */
                    /* catch() { ... } // from try @ 03611990 with catch @ 03611a00 */
    pPVar4 = KBCOFHAJOCK__CBEELEAJKIN(__this,(ENHJPOHLMCL->fields).NPFMOEOIEKM,in_x2);
    if (pPVar4 == (PLCCJCFAFKA_o *)0x0) {
                    /* try { // try from 03611ac0 to 03711ac3 has its CatchHandler @ 03611af0 */
      return;
    }
    pSVar8 = (pPVar4->fields).HMIMGDGJDIC;
                    /* try { // try from 03611a10 to 03711a13 has its CatchHandler @ 03611a90 */
                    /* try { // try from 03611a14 to 03711a5f has its CatchHandler @ 03611858 */
    bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar8,(MethodInfo *)0x0);
    if (bVar3) {
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2905,
                 (MethodInfo *)0x0);
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03611a60 to 03711a7b has its CatchHandler @ 03611b14 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2906,
                 (MethodInfo *)0x0);
      pSVar8 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
                    /* try { // try from 03611a7c to 03711a83 has its CatchHandler @ 03611aa8 */
                    /* try { // try from 03611a84 to 03711a87 has its CatchHandler @ 03611aa0 */
                    /* try { // try from 03611a88 to 03711a8b has its CatchHandler @ 03611a9c */
                    /* try { // try from 03611a8c to 03711abf has its CatchHandler @ 03611858 */
                    /* catch() { ... } // from try @ 03611a10 with catch @ 03611a90 */
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
                    /* catch() { ... } // from try @ 03611a88 with catch @ 03611a9c */
                    /* catch() { ... } // from try @ 03611a84 with catch @ 03611aa0 */
                    /* catch() { ... } // from try @ 036119d4 with catch @ 03611aa4 */
                    /* catch() { ... } // from try @ 03611a7c with catch @ 03611aa8 */
                    /* catch() { ... } // from try @ 03611974 with catch @ 03611aac */
                    /* catch() { ... } // from try @ 03611954 with catch @ 03611ab0 */
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
      return;
    }
                    /* try { // try from 03611ac4 to 03711af7 has its CatchHandler @ 03611858 */
    __this_00 = (PKKLIJLIKGF_o *)thunk_FUN_01bda818(PKKLIJLIKGF_TypeInfo);
    PKKLIJLIKGF___ctor(__this_00,pSVar8,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03611ac0 with catch @ 03611af0 */
    AEFIPJLKAFI = (System_Collections_Generic_List_PKKLIJLIKGF__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
                    /* try { // try from 03611af8 to 03711aff has its CatchHandler @ 03611b14 */
                    /* try { // try from 03611b00 to 03711b0b has its CatchHandler @ 03611858 */
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)AEFIPJLKAFI,
               Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
    lVar2 = Method_System_Collections_Generic_List<PKKLIJLIKGF>_Add__;
    if (AEFIPJLKAFI != (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
                    /* try { // try from 03611b0c to 03711b13 has its CatchHandler @ 03611b14 */
                    /* catch() { ... } // from try @ 03611a60 with catch @ 03611b14
                       catch() { ... } // from try @ 03611af8 with catch @ 03611b14
                       catch() { ... } // from try @ 03611b0c with catch @ 03611b14 */
                    /* try { // try from 03611b18 to 03711c47 has its CatchHandler @ 03611b18
                       catch() { ... } // from try @ 03611b18 with catch @ 03611b18
                       catch() { ... } // from try @ 03611d84 with catch @ 03611b18
                       catch() { ... } // from try @ 03611e28 with catch @ 03611b18
                       catch() { ... } // from try @ 03611e30 with catch @ 03611b18
                       catch() { ... } // from try @ 03611ee4 with catch @ 03611b18 */
      pPVar7 = (AEFIPJLKAFI->fields)._items;
      (AEFIPJLKAFI->fields)._version = (AEFIPJLKAFI->fields)._version + 1;
      if (pPVar7 != (PKKLIJLIKGF_array *)0x0) {
        uVar1 = (AEFIPJLKAFI->fields)._size;
        if (uVar1 < (uint)pPVar7->max_length) {
          (AEFIPJLKAFI->fields)._size = uVar1 + 1;
          pPVar7->m_Items[(int)uVar1] = __this_00;
          thunk_FUN_01c20e04(pPVar7->m_Items + (int)uVar1,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)AEFIPJLKAFI,
                     (Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        pHVar5 = IGFGDDANEPE__JPNNODJPOCL(ENHJPOHLMCL,false,(MethodInfo *)0x0);
        if (pHVar5 != (HOOAAGABMBL_o *)0x0) {
          EDEIFHGMBFA = (pHVar5->fields)._JDEHPJEIOCI_k__BackingField;
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
          __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (__this_01 != (ACHLOMELAJE_o *)0x0) {
            EBDDELGICGB = ACHLOMELAJE__EOEAKGGDBFH(__this_01,(MethodInfo *)0x0);
            IGFGDDANEPE__JJPJJDHOFLE
                      (ENHJPOHLMCL,AEFIPJLKAFI,EDEIFHGMBFA,EBDDELGICGB,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool KBOOALOJLKH(HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x3511C0C]
// AMIINPEKKFB$$KBOOALOJLKH @ RVA 0x3511C0C

bool AMIINPEKKFB__KBOOALOJLKH(HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *pCVar1;
  bool bVar2;
  int32_t CJNHFNHJHPE;
  ACHLOMELAJE_o *pAVar3;
  int64_t iVar4;
  int64_t iVar5;
  NFGLEDADCGL_o *__this;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  MethodInfo *method_01;
  System_String_o *pSVar6;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar7;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_90;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_70;
  
  if ((DAT_045688fc & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* try { // try from 03611c48 to 03711c6f has its CatchHandler @ 03611e48 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_14511/*"UnlimitedEnergy"*/);
    FUN_01bab630(&StringLiteral_10232/*"PerkReset"*/);
    FUN_01bab630(&StringLiteral_4921/*"Currency"*/);
    DAT_045688fc = 1;
    method = extraout_x1;
  }
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    return false;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
                    /* try { // try from 03611ca4 to 03711ccf has its CatchHandler @ 03611e44 */
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
                    /* try { // try from 03611cd8 to 03711d1f has its CatchHandler @ 03611e50 */
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
    iVar4 = ACHLOMELAJE__HEHFNBKGJLP(pAVar3,(MethodInfo *)0x0);
    pCVar1 = &(IKKAMAMLIKA->fields)._AHMCDBKNKAJ_k__BackingField;
    local_70.fields.hiddenValue =
         (IKKAMAMLIKA->fields)._AHMCDBKNKAJ_k__BackingField.fields.hiddenValue;
    local_70.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
    local_70.fields.fakeValueActive =
         (IKKAMAMLIKA->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValueActive;
    local_70.fields.inited = (IKKAMAMLIKA->fields)._AHMCDBKNKAJ_k__BackingField.fields.inited;
    local_70.fields._26_6_ =
         *(undefined6 *)&(IKKAMAMLIKA->fields)._AHMCDBKNKAJ_k__BackingField.fields.field_0x1a;
    local_70.fields.fakeValue = (IKKAMAMLIKA->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValue;
    iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_70,(MethodInfo *)0x0)
    ;
    if (iVar4 < iVar5) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      MGNPHCAAEIO__EHEMFMCGKKK(IKKAMAMLIKA,3,(MethodInfo *)0x0);
      return false;
    }
                    /* try { // try from 03611d60 to 03711d83 has its CatchHandler @ 03611e3c */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
                    /* try { // try from 03611d84 to 03711e17 has its CatchHandler @ 03611b18 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
      iVar4 = ACHLOMELAJE__HEHFNBKGJLP(pAVar3,(MethodInfo *)0x0);
      local_90.fields.hiddenValue =
           (IKKAMAMLIKA->fields)._AHMCDBKNKAJ_k__BackingField.fields.hiddenValue;
      local_90.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
      local_90.fields.fakeValueActive =
           (IKKAMAMLIKA->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValueActive;
      local_90.fields.inited = (IKKAMAMLIKA->fields)._AHMCDBKNKAJ_k__BackingField.fields.inited;
      local_90.fields._26_6_ =
           *(undefined6 *)&(IKKAMAMLIKA->fields)._AHMCDBKNKAJ_k__BackingField.fields.field_0x1a;
      local_90.fields.fakeValue =
           (IKKAMAMLIKA->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValue;
      iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                        (&local_90,(MethodInfo *)0x0);
      bVar2 = AMIINPEKKFB__KMJPPCLIEDG(IKKAMAMLIKA,true,false,in_x3);
      if (!bVar2) {
        return false;
      }
      pSVar6 = (IKKAMAMLIKA->fields)._DKODBGOHKGH_k__BackingField;
      bVar2 = System_String__op_Equality(pSVar6,StringLiteral_10232/*"PerkReset"*/,(MethodInfo *)0x0);
      if (bVar2) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
                    /* try { // try from 03611e18 to 03711e1f has its CatchHandler @ 03611e40 */
                    /* try { // try from 03611e20 to 03711e27 has its CatchHandler @ 03611e4c */
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 03611e28 to 03711e2b has its CatchHandler @ 03611b18 */
          DAT_04565b7d = '\x01';
        }
                    /* try { // try from 03611e2c to 03711e2f has its CatchHandler @ 03611e38 */
                    /* try { // try from 03611e30 to 03711e5f has its CatchHandler @ 03611b18 */
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03611e2c with catch @ 03611e38
                        */
          thunk_FUN_01ba7564();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03611d60 with catch @ 03611e3c
                        */
        }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03611e18 with catch @ 03611e40
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03611ca4 with catch @ 03611e44
                        */
        pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03611c48 with catch @ 03611e48
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03611e20 with catch @ 03611e4c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03611cd8 with catch @ 03611e50
                        */
        if ((pAVar3 == (ACHLOMELAJE_o *)0x0) ||
           (__this = (pAVar3->fields).CKJAGLDEMAE, __this == (NFGLEDADCGL_o *)0x0))
        goto LAB_036120e0;
        NFGLEDADCGL__JHJPKAJCJHF(__this,(MethodInfo *)0x0);
      }
      else {
                    /* try { // try from 03611e60 to 03711e63 has its CatchHandler @ 03611e74 */
                    /* catch() { ... } // from try @ 03611e60 with catch @ 03611e74 */
        bVar2 = System_String__op_Equality(pSVar6,StringLiteral_4921/*"Currency"*/,(MethodInfo *)0x0);
        if (bVar2) {
                    /* try { // try from 03611e7c to 03711ee3 has its CatchHandler @ 03611ef8 */
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
          pSVar6 = (IKKAMAMLIKA->fields)._PGINAEHGANC_k__BackingField;
          pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          CJNHFNHJHPE = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                  ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                   (IKKAMAMLIKA->fields)._OJGPBEFJPKN_k__BackingField.fields,
                                   (MethodInfo *)0x0);
          if (pAVar3 == (ACHLOMELAJE_o *)0x0) goto LAB_036120e0;
                    /* try { // try from 03611ee4 to 03711eef has its CatchHandler @ 03611b18 */
          ACHLOMELAJE__GHLNGBDFENI(pAVar3,pSVar6,CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* try { // try from 03611ef0 to 03711ef7 has its CatchHandler @ 03611ef8 */
        }
        else {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03611e7c with catch @ 03611ef8
                       catch(type#2 @ 00000000) { ... } // from try @ 03611ef0 with catch @ 03611ef8
                        */
          bVar2 = System_String__op_Equality(pSVar6,StringLiteral_14511/*"UnlimitedEnergy"*/,(MethodInfo *)0x0);
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
            pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (pAVar3 == (ACHLOMELAJE_o *)0x0) goto LAB_036120e0;
            (pAVar3->fields).MMOJIJHAJJL = true;
            if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            MGNPHCAAEIO__LGONLBLHOFN((MethodInfo *)0x0);
            if (DAT_04565b84 == '\0') {
              FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
              DAT_04565b84 = '\x01';
            }
            pNVar7 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                     _JPDNDPEAJAL_k__BackingField;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar2 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar2) {
              if (DAT_04565b84 == '\0') {
                FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
                DAT_04565b84 = '\x01';
              }
              pNVar7 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                       _JPDNDPEAJAL_k__BackingField;
              if (pNVar7 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_036120e0;
              Nekki_SF2_GUI_Menu_MainMenu__UpdateEnergyView(pNVar7,(MethodInfo *)0x0);
            }
          }
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
      pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
        method_01 = (MethodInfo *)0x0;
        ACHLOMELAJE__OGPHHGFFKHD(pAVar3,iVar4 - iVar5,10,false,(MethodInfo *)0x0);
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
          CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar3,false,(MethodInfo *)0x0);
          AMIINPEKKFB__BDMBCINIFFB(IKKAMAMLIKA,1,false,method_01);
          AMIINPEKKFB__AMGIHEOPMEK(IKKAMAMLIKA,method_00);
          return true;
        }
      }
    }
  }
LAB_036120e0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool CNDGBHMOMJB(HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x35120E4]
// AMIINPEKKFB$$CNDGBHMOMJB @ RVA 0x35120E4

bool AMIINPEKKFB__CNDGBHMOMJB(HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  bool bVar1;
  ACHLOMELAJE_o *pAVar2;
  int64_t iVar3;
  int64_t iVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  MethodInfo *method_01;
  
  if ((DAT_045688fd & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045688fd = 1;
    method = extraout_x1;
  }
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 03612318 to 0371231b has its CatchHandler @ 0361258c */
    return false;
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
                    /* try { // try from 03612174 to 037122fb has its CatchHandler @ 03612174
                       catch() { ... } // from try @ 03612174 with catch @ 03612174
                       catch() { ... } // from try @ 036124c8 with catch @ 03612174
                       catch() { ... } // from try @ 036124f4 with catch @ 03612174
                       catch() { ... } // from try @ 0361257c with catch @ 03612174
                       catch() { ... } // from try @ 036125cc with catch @ 03612174
                       catch() { ... } // from try @ 03612610 with catch @ 03612174 */
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
    iVar3 = ACHLOMELAJE__HEHFNBKGJLP(pAVar2,(MethodInfo *)0x0);
    iVar4 = HOOAAGABMBL__MNKCHHFDEGH(IKKAMAMLIKA,(MethodInfo *)0x0);
    if (iVar3 < iVar4) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      MGNPHCAAEIO__EHEMFMCGKKK(IKKAMAMLIKA,3,(MethodInfo *)0x0);
      return false;
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
      iVar3 = ACHLOMELAJE__HEHFNBKGJLP(pAVar2,(MethodInfo *)0x0);
      iVar4 = HOOAAGABMBL__MNKCHHFDEGH(IKKAMAMLIKA,(MethodInfo *)0x0);
      bVar1 = AMIINPEKKFB__KMJPPCLIEDG(IKKAMAMLIKA,true,true,in_x3);
      if (!bVar1) {
        return false;
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
        method_01 = (MethodInfo *)0x0;
        ACHLOMELAJE__OGPHHGFFKHD(pAVar2,iVar3 - iVar4,10,false,(MethodInfo *)0x0);
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
          CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar2,false,(MethodInfo *)0x0);
                    /* try { // try from 036122fc to 03712303 has its CatchHandler @ 036125b4 */
          AMIINPEKKFB__BDMBCINIFFB(IKKAMAMLIKA,1,false,method_01);
          AMIINPEKKFB__AMGIHEOPMEK(IKKAMAMLIKA,method_00);
          return true;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void IEJBJDHAELB(HOOAAGABMBL IKKAMAMLIKA, Action<BKKPAKHJDKB> BLMFLPJJMPF)  [RVA 0x3512328]
// AMIINPEKKFB$$IEJBJDHAELB @ RVA 0x3512328

void AMIINPEKKFB__IEJBJDHAELB
               (HOOAAGABMBL_o *IKKAMAMLIKA,System_Action_BKKPAKHJDKB__o *BLMFLPJJMPF,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this;
  System_Action_BKKPAKHJDKB__o *BLMFLPJJMPF_00;
  MethodInfo *method_00;
  
                    /* try { // try from 0361232c to 03712347 has its CatchHandler @ 036125b8 */
  if ((DAT_045688fe & 1) == 0) {
                    /* try { // try from 03612350 to 0371236f has its CatchHandler @ 036125a0 */
    FUN_01bab630(&System_Action<BKKPAKHJDKB>_TypeInfo);
    FUN_01bab630(&Method_AMIINPEKKFB_DBJKKCAJDLA_KOEDHGDHOIC__);
    FUN_01bab630(&AMIINPEKKFB_DBJKKCAJDLA_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045688fe = 1;
  }
                    /* try { // try from 03612388 to 03712393 has its CatchHandler @ 036125a4 */
  __this = (Il2CppObject *)thunk_FUN_01bda818(AMIINPEKKFB_DBJKKCAJDLA_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this[1].klass = (Il2CppClass *)BLMFLPJJMPF;
  thunk_FUN_01c20e04(__this + 1,BLMFLPJJMPF);
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 036123b4 to 037123bf has its CatchHandler @ 03612594 */
    BLMFLPJJMPF_00 =
         (System_Action_BKKPAKHJDKB__o *)thunk_FUN_01bda818(System_Action<BKKPAKHJDKB>_TypeInfo);
                    /* try { // try from 036123d4 to 037123db has its CatchHandler @ 036124dc */
    System_Action<object>___ctor();
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 036123f8 to 037123fb has its CatchHandler @ 036124cc */
                    /* try { // try from 036123fc to 03712407 has its CatchHandler @ 036124d4 */
                    /* try { // try from 03612410 to 03712487 has its CatchHandler @ 036124e0 */
    bVar1 = MGNPHCAAEIO__IAGKBFCKFKB(IKKAMAMLIKA,0x14,1,BLMFLPJJMPF_00,true,(MethodInfo *)0x0);
    if (bVar1) {
      AMIINPEKKFB__AMGIHEOPMEK(IKKAMAMLIKA,method_00);
      return;
    }
  }
  return;
}

