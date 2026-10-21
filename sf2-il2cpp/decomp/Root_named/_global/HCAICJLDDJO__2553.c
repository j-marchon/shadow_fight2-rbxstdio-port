// TypeDefIndex 2553
// Namespace: 
// public static class HCAICJLDDJO
// Fields:

// ===== public static void MPOLDGKHPMF(HPPDIEDAKEC HONPNKFABKF, string JHDEDPMNOOJ)  [RVA 0x339A268]
// HCAICJLDDJO$$MPOLDGKHPMF @ RVA 0x339A268

void HCAICJLDDJO__MPOLDGKHPMF(int32_t HONPNKFABKF,System_String_o *JHDEDPMNOOJ,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  int32_t ELHAJJAHLHM;
  int iVar4;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar5;
  FFHKCJAOPLI_o *__this;
  Item_o *__this_00;
  System_Collections_Generic_IList_HOOAAGABMBL__o *pSVar6;
  VirtualInvokeData *pVVar7;
  HOOAAGABMBL_o **ppHVar8;
  NDPMLPGANCI_o *__this_01;
  PKHMIGFEJCL_o *pPVar9;
  System_Collections_Generic_IList_HOOAAGABMBL__c *pSVar10;
  ulong uVar11;
  int32_t *piVar12;
  
                    /* try { // try from 0349a278 to 0359a27f has its CatchHandler @ 0349a2e8 */
  if ((DAT_04567c72 & 1) == 0) {
                    /* try { // try from 0349a288 to 0359a29f has its CatchHandler @ 0349a2e4 */
    FUN_01bab630(&FFHKCJAOPLI_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_ICollection<HOOAAGABMBL>_TypeInfo);
                    /* try { // try from 0349a2a0 to 0359a2ff has its CatchHandler @ 0349a1c4 */
    FUN_01bab630(&System_Collections_Generic_IList<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567c72 = 1;
  }
  pNVar5 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar5 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) ||
     (pPVar9 = (pNVar5->fields).QuestParameters, pPVar9 == (PKHMIGFEJCL_o *)0x0)) goto LAB_0349a4f0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0349a288 with catch @ 0349a2e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0349a278 with catch @ 0349a2e8
                        */
  ELHAJJAHLHM = MMOGKBGEPGM__GFLCMDMEOBN((pPVar9->fields).CHFDDNODLGP,(MethodInfo *)0x0);
                    /* try { // try from 0349a300 to 0359a303 has its CatchHandler @ 0349a32c */
                    /* try { // try from 0349a304 to 0359a33b has its CatchHandler @ 0349a1c4 */
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GameUtils_TypeInfo);
  }
  GameUtils__BIFPGEGFDLK(ELHAJJAHLHM,HONPNKFABKF,(MethodInfo *)0x0);
  __this = (FFHKCJAOPLI_o *)thunk_FUN_01bda818(FFHKCJAOPLI_TypeInfo);
                    /* catch() { ... } // from try @ 0349a300 with catch @ 0349a32c */
                    /* try { // try from 0349a33c to 0359a343 has its CatchHandler @ 0349a358 */
                    /* try { // try from 0349a344 to 0359a34f has its CatchHandler @ 0349a1c4 */
  FFHKCJAOPLI___ctor(__this,HONPNKFABKF,(HOOAAGABMBL_o *)0x0,(System_String_o *)0x0,
                     (System_String_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 0349a350 to 0359a357 has its CatchHandler @ 0349a358 */
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(JHDEDPMNOOJ,(MethodInfo *)0x0);
  if (!bVar3) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0349a33c with catch @ 0349a358
                       catch(type#2 @ 00000000) { ... } // from try @ 0349a350 with catch @ 0349a358
                        */
    if (HONPNKFABKF == 8) {
      if (__this == (FFHKCJAOPLI_o *)0x0) goto LAB_0349a4f0;
      ppHVar8 = (HOOAAGABMBL_o **)&(__this->fields).JNNGDLLCHAG;
      *ppHVar8 = (HOOAAGABMBL_o *)JHDEDPMNOOJ;
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
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
      if ((__this_00 == (Item_o *)0x0) ||
         (pSVar6 = Item__FEHJLBEGAPO(__this_00,JHDEDPMNOOJ,(MethodInfo *)0x0),
         pSVar6 == (System_Collections_Generic_IList_HOOAAGABMBL__o *)0x0)) goto LAB_0349a4f0;
      pSVar10 = pSVar6->klass;
      uVar1._0_1_ = (pSVar10->_2).rank;
      uVar1._1_1_ = (pSVar10->_2).minimumAlignment;
      uVar11 = (ulong)uVar1;
      if (uVar11 != 0) {
        piVar12 = &((pSVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_ICollection<HOOAAGABMBL>_TypeInfo) {
            pVVar7 = pSVar10->vtable + *piVar12;
            goto LAB_0349a434;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      pVVar7 = (VirtualInvokeData *)
               FUN_01b81914(pSVar6,System_Collections_Generic_ICollection<HOOAAGABMBL>_TypeInfo,0);
LAB_0349a434:
      iVar4 = (*pVVar7->methodPtr)(pSVar6,pVVar7->method);
      if (iVar4 < 1) goto LAB_0349a4c0;
      pSVar10 = pSVar6->klass;
      uVar2._0_1_ = (pSVar10->_2).rank;
      uVar2._1_1_ = (pSVar10->_2).minimumAlignment;
      uVar11 = (ulong)uVar2;
      if (uVar11 != 0) {
        piVar12 = &((pSVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IList<HOOAAGABMBL>_TypeInfo) {
            pVVar7 = pSVar10->vtable + *piVar12;
            goto LAB_0349a49c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      pVVar7 = (VirtualInvokeData *)
               FUN_01b81914(pSVar6,System_Collections_Generic_IList<HOOAAGABMBL>_TypeInfo,0);
LAB_0349a49c:
      JHDEDPMNOOJ = (System_String_o *)(*pVVar7->methodPtr)(pSVar6,0,pVVar7->method);
      if (__this == (FFHKCJAOPLI_o *)0x0) goto LAB_0349a4f0;
      ppHVar8 = &(__this->fields).CJLNOJMBNPN;
      *ppHVar8 = (HOOAAGABMBL_o *)JHDEDPMNOOJ;
    }
    thunk_FUN_01c20e04(ppHVar8,JHDEDPMNOOJ);
  }
LAB_0349a4c0:
  __this_01 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_01 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__EKPAFDJIAGI
              (__this_01,4,(Il2CppObject *)__this,(System_Action_object__o *)0x0,true,
               (MethodInfo *)0x0);
    return;
  }
LAB_0349a4f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool AEFGCHDNCDG(IGFGDDANEPE ENHJPOHLMCL)  [RVA 0x339A4F4]
// HCAICJLDDJO$$AEFGCHDNCDG @ RVA 0x339A4F4

bool HCAICJLDDJO__AEFGCHDNCDG(IGFGDDANEPE_o *ENHJPOHLMCL,MethodInfo *method)

{
  bool bVar1;
  int64_t iVar2;
  
  if ((DAT_04567c73 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567c73 = 1;
  }
  if (ENHJPOHLMCL == (IGFGDDANEPE_o *)0x0) {
    bVar1 = false;
  }
  else {
    iVar2 = IGFGDDANEPE__OMMIKNKEKJN(ENHJPOHLMCL,(MethodInfo *)0x0);
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
    if (NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM < iVar2) {
      bVar1 = IGFGDDANEPE__DABHOGHGNBB(ENHJPOHLMCL,(MethodInfo *)0x0);
      return bVar1;
    }
    bVar1 = true;
  }
  return bVar1;
}


// ===== public static bool INONOLJEDEA(HOOAAGABMBL IKKAMAMLIKA, IGFGDDANEPE ENHJPOHLMCL)  [RVA 0x339A5CC]
// HCAICJLDDJO$$INONOLJEDEA @ RVA 0x339A5CC

bool HCAICJLDDJO__INONOLJEDEA
               (HOOAAGABMBL_o *IKKAMAMLIKA,IGFGDDANEPE_o *ENHJPOHLMCL,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = false;
  if ((IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) && (ENHJPOHLMCL == (IGFGDDANEPE_o *)0x0)) {
    bVar1 = 0 < (IKKAMAMLIKA->fields)._LAOFJOMPFDL_k__BackingField;
  }
  return bVar1;
}


// ===== public static bool LKBMNAHLCEK(IGFGDDANEPE ENHJPOHLMCL)  [RVA 0x339A5EC]
// HCAICJLDDJO$$LKBMNAHLCEK @ RVA 0x339A5EC

bool HCAICJLDDJO__LKBMNAHLCEK(IGFGDDANEPE_o *ENHJPOHLMCL,MethodInfo *method)

{
  bool bVar1;
  int64_t iVar2;
  
  if ((DAT_04567c74 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567c74 = 1;
  }
  if (ENHJPOHLMCL == (IGFGDDANEPE_o *)0x0) {
    bVar1 = false;
  }
  else {
    iVar2 = IGFGDDANEPE__OMMIKNKEKJN(ENHJPOHLMCL,(MethodInfo *)0x0);
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
    bVar1 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM < iVar2;
  }
  return bVar1;
}


// ===== public static int IEALNGPAPAF(HOOAAGABMBL ANMFBABEMFD)  [RVA 0x339A6A0]
// HCAICJLDDJO$$IEALNGPAPAF @ RVA 0x339A6A0

int32_t HCAICJLDDJO__IEALNGPAPAF(HOOAAGABMBL_o *ANMFBABEMFD,MethodInfo *method)

{
  Il2CppObject *__this;
  bool bVar1;
  int32_t DPCEFBCDHPA;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *NKCMBEFHFII;
  DEKKGJNMFEB_o *__this_01;
  System_Collections_Generic_List_GGLKHCAIGDI__o *__this_02;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  Roster_o *pAVar2;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567c75 & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567c75 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  iVar3 = 0;
  if (ANMFBABEMFD != (HOOAAGABMBL_o *)0x0) {
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
    if ((pAVar2 == (Roster_o *)0x0) ||
       (__this_00 = (pAVar2->fields).OIDPLCLELEN, __this_00 == (GGHCLMEFIGO_o *)0x0)) {
LAB_0349a874:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    NKCMBEFHFII = GGHCLMEFIGO__JNFIBDBHNOA(__this_00,ANMFBABEMFD,(MethodInfo *)0x0);
    if (NKCMBEFHFII == (IGFGDDANEPE_o *)0x0) {
      iVar3 = 0;
    }
    else {
      if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
      if ((__this_01 == (DEKKGJNMFEB_o *)0x0) ||
         (__this_02 = DEKKGJNMFEB__NFKLPHNDMNO(__this_01,NKCMBEFHFII,(MethodInfo *)0x0),
         __this_02 == (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0)) goto LAB_0349a874;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this_02,
                 Method_System_Collections_Generic_List<GGLKHCAIGDI>_GetEnumerator__);
      iVar3 = 0;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_MoveNext__
                          );
        __this = local_48.fields._current;
        if (!bVar1) break;
        if ((GGLKHCAIGDI_o *)local_48.fields._current == (GGLKHCAIGDI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = GGLKHCAIGDI__DDAKFOBLNJL
                          ((GGLKHCAIGDI_o *)local_48.fields._current,NKCMBEFHFII,(MethodInfo *)0x0);
        if (bVar1) {
          DPCEFBCDHPA = IGFGDDANEPE__LGIMDOAMCNG(NKCMBEFHFII,(MethodInfo *)0x0);
          bVar1 = GGLKHCAIGDI__EJOADHBJICP
                            ((GGLKHCAIGDI_o *)__this,NKCMBEFHFII,DPCEFBCDHPA,(MethodInfo *)0x0);
          iVar3 = iVar3 + (uint)bVar1;
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_Dispose__)
      ;
    }
  }
  return iVar3;
}


// ===== public static void IOJJNFJDFEJ(out bool MCBMGKBJOON, out bool FCPLINEFDIO, HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x339A8FC]
// HCAICJLDDJO$$IOJJNFJDFEJ @ RVA 0x339A8FC

void HCAICJLDDJO__IOJJNFJDFEJ
               (bool *MCBMGKBJOON,bool *FCPLINEFDIO,HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  System_String_o **ppSVar1;
  DDMHMABAHHD_Fields *pDVar2;
  bool bVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  DDMHMABAHHD_o *pDVar6;
  RaidConfig_o *__this;
  RaidConfig_HJLEKMDIDPO_o *pJVar7;
  PlayerData_o *pEVar8;
  Roster_o *pAVar9;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *ENHJPOHLMCL;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  System_String_o *b;
  MethodInfo *method_01;
  System_String_o *DIIDFLPOBMC;
  
  if ((DAT_04567c76 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_5562/*"EQUIPMENT"*/);
    FUN_01bab630(&StringLiteral_3107/*"AscensionTicket"*/);
    FUN_01bab630(&StringLiteral_6981/*"HORN"*/);
    FUN_01bab630(&StringLiteral_10876/*"RaidItemPack"*/);
    FUN_01bab630(&StringLiteral_8722/*"MISSILE"*/);
    FUN_01bab630(&StringLiteral_10045/*"POTION"*/);
    FUN_01bab630(&StringLiteral_10823/*"RaidConsumable"*/);
    DAT_04567c76 = 1;
  }
  *MCBMGKBJOON = false;
  *FCPLINEFDIO = false;
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
    bVar3 = System_String__op_Equality
                      ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,
                       (MethodInfo *)0x0);
    method_00 = extraout_x1;
    if ((bVar3) ||
       (bVar3 = System_String__op_Equality
                          ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10823/*"RaidConsumable"*/,
                           (MethodInfo *)0x0), method_00 = extraout_x1_00, bVar3)) {
      pDVar6 = HCAICJLDDJO__PEENAMDLAKO(IKKAMAMLIKA,method_00);
      ppSVar1 = &(IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
      pDVar2 = (DDMHMABAHHD_Fields *)ppSVar1;
      if (pDVar6 != (DDMHMABAHHD_o *)0x0) {
        pDVar2 = &pDVar6->fields;
      }
      DIIDFLPOBMC = pDVar2->_COIPKAKHDFP_k__BackingField;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (__this == (RaidConfig_o *)0x0) goto LAB_0349ac98;
      pJVar7 = RaidConfig__FPPDGOEOJCH(__this,DIIDFLPOBMC,(MethodInfo *)0x0);
      if (pJVar7 == (RaidConfig_HJLEKMDIDPO_o *)0x0) {
        bVar3 = System_String__op_Inequality(DIIDFLPOBMC,StringLiteral_3107/*"AscensionTicket"*/,(MethodInfo *)0x0);
        if (bVar3) {
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
          if (pAVar9 == (Roster_o *)0x0) goto LAB_0349ac98;
          iVar5 = Roster__FCPIAEEKGEL(pAVar9,DIIDFLPOBMC,(MethodInfo *)0x0);
          bVar3 = 0 < iVar5;
        }
        else {
          bVar3 = false;
        }
        *FCPLINEFDIO = bVar3;
        *MCBMGKBJOON = true;
        return;
      }
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar8 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar8 == (PlayerData_o *)0x0) goto LAB_0349ac98;
      iVar5 = PlayerData__OHCGFHJNEGO(pEVar8,*ppSVar1,(MethodInfo *)0x0);
      *MCBMGKBJOON = 0 < iVar5;
      bVar3 = System_String__op_Equality
                        ((pJVar7->fields).BGHFADDGPAD,StringLiteral_8722/*"MISSILE"*/,(MethodInfo *)0x0);
      if (bVar3) {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pEVar8 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (pEVar8 == (PlayerData_o *)0x0) goto LAB_0349ac98;
        b = (pEVar8->fields).JHMMCCKCFFH;
      }
      else {
        bVar3 = System_String__op_Equality
                          ((pJVar7->fields).BGHFADDGPAD,StringLiteral_10045/*"POTION"*/,(MethodInfo *)0x0);
        if (bVar3) {
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pEVar8 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          if (pEVar8 == (PlayerData_o *)0x0) goto LAB_0349ac98;
          b = (pEVar8->fields).NBLJHMNHDAE;
        }
        else {
          bVar3 = System_String__op_Equality
                            ((pJVar7->fields).BGHFADDGPAD,StringLiteral_6981/*"HORN"*/,(MethodInfo *)0x0);
          if (!bVar3) {
            bVar3 = System_String__op_Equality
                              ((pJVar7->fields).BGHFADDGPAD,StringLiteral_5562/*"EQUIPMENT"*/,(MethodInfo *)0x0);
            if (!bVar3) {
              return;
            }
            *FCPLINEFDIO = false;
            return;
          }
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pEVar8 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          if (pEVar8 == (PlayerData_o *)0x0) goto LAB_0349ac98;
          b = (pEVar8->fields).IHLHMKHJPCC;
        }
      }
      bVar4 = System_String__op_Equality(DIIDFLPOBMC,b,(MethodInfo *)0x0);
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
      if ((pAVar9 == (Roster_o *)0x0) ||
         (__this_00 = (pAVar9->fields).OIDPLCLELEN, __this_00 == (GGHCLMEFIGO_o *)0x0)) {
LAB_0349ac98:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      ENHJPOHLMCL = GGHCLMEFIGO__JNFIBDBHNOA(__this_00,IKKAMAMLIKA,(MethodInfo *)0x0);
      if (ENHJPOHLMCL == (IGFGDDANEPE_o *)0x0) {
        return;
      }
      bVar3 = HCAICJLDDJO__AEFGCHDNCDG(ENHJPOHLMCL,method_01);
      *MCBMGKBJOON = bVar3;
      bVar4 = (ENHJPOHLMCL->fields).OFIKEBGDMBE;
    }
    *FCPLINEFDIO = bVar4;
  }
  return;
}


// ===== public static bool HDHHJBFCPJK(bool PHBEFCPEHCD, HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x339AD98]
// HCAICJLDDJO$$HDHHJBFCPJK @ RVA 0x339AD98

bool HCAICJLDDJO__HDHHJBFCPJK(bool PHBEFCPEHCD,HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  RaidConfig_o *__this;
  RaidConfig_FNILDHLJBBJ_o *pJVar6;
  System_Collections_Generic_List_DDMHMABAHHD__o *pSVar7;
  Il2CppObject *pIVar8;
  Item_o *__this_00;
  HOOAAGABMBL_o *pHVar9;
  Il2CppClass *KGLJICLJHEL;
  System_String_o *str1;
  System_String_o *pSVar10;
  
  if ((DAT_04567c77 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1535);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1536);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1537);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1538);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1539);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1540);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1541);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1542);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1543);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1544);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567c77 = 1;
  }
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) goto LAB_0349b244;
  pSVar10 = (IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField;
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1535,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1536,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  bVar2 = System_String__op_Equality(pSVar10,pSVar5,(MethodInfo *)0x0);
  if (bVar2) {
    bVar1 = (FAIJGJCCKJC_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (IKKAMAMLIKA->klass->_2).naturalAligment) &&
       ((IKKAMAMLIKA->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)FAIJGJCCKJC_TypeInfo)) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if ((IKKAMAMLIKA[1].klass == (HOOAAGABMBL_c *)0x0) || (__this == (RaidConfig_o *)0x0))
      goto LAB_0349b244;
      pJVar6 = RaidConfig__OJOIAONADNG
                         (__this,((IKKAMAMLIKA[1].klass)->_1).this_arg.data,(MethodInfo *)0x0);
      if (pJVar6 == (RaidConfig_FNILDHLJBBJ_o *)0x0) {
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1537,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1538,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        if (IKKAMAMLIKA[1].klass == (HOOAAGABMBL_c *)0x0) goto LAB_0349b244;
        str1 = ((IKKAMAMLIKA[1].klass)->_1).this_arg.data;
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1539,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1540,
                   (MethodInfo *)0x0);
        pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat(pSVar5,str1,pSVar10,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
      }
      else {
        pSVar7 = (pJVar6->fields).GFBNJPMOEKD;
        if (pSVar7 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) goto LAB_0349b244;
        if ((pSVar7->fields)._size == 1) {
          pIVar8 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar7,0,
                              Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
          if (pIVar8 == (Il2CppObject *)0x0) goto LAB_0349b244;
          if (*(int *)&pIVar8[1].monitor < 2) {
            pSVar7 = (pJVar6->fields).GFBNJPMOEKD;
            if ((pSVar7 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) ||
               (pIVar8 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar7,0,
                                    Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__),
               pIVar8 == (Il2CppObject *)0x0)) {
LAB_0349b244:
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            KGLJICLJHEL = pIVar8[1].klass;
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
            }
            if (DAT_04563eaa == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04563eaa = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
            if (__this_00 == (Item_o *)0x0) goto LAB_0349b244;
            pHVar9 = Item__CKKIPBAIEMN
                               (__this_00,(System_String_o *)KGLJICLJHEL,(MethodInfo *)0x0);
            if (pHVar9 != (HOOAAGABMBL_o *)0x0) {
              pSVar10 = (pHVar9->fields)._DKODBGOHKGH_k__BackingField;
              pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar3,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1541,
                         (MethodInfo *)0x0);
              pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar4,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1542,
                         (MethodInfo *)0x0);
              pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
              bVar2 = System_String__op_Inequality(pSVar10,pSVar5,(MethodInfo *)0x0);
              if (!bVar2) {
                return PHBEFCPEHCD;
              }
              pSVar10 = (pHVar9->fields)._DKODBGOHKGH_k__BackingField;
              pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar3,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1543,
                         (MethodInfo *)0x0);
              pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar4,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1544,
                         (MethodInfo *)0x0);
              pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
              bVar2 = System_String__op_Inequality(pSVar10,pSVar5,(MethodInfo *)0x0);
              if (!bVar2) {
                return PHBEFCPEHCD;
              }
            }
          }
        }
      }
      PHBEFCPEHCD = false;
    }
  }
  return PHBEFCPEHCD;
}


// ===== public static bool MINAKLNNDBL(HOOAAGABMBL ANMFBABEMFD, bool MHKEJNCJFFM = False)  [RVA 0x339B248]
// HCAICJLDDJO$$MINAKLNNDBL @ RVA 0x339B248

bool HCAICJLDDJO__MINAKLNNDBL(HOOAAGABMBL_o *ANMFBABEMFD,bool MHKEJNCJFFM,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  GGHCLMEFIGO_o *__this;
  IGFGDDANEPE_o *__this_00;
  Roster_o *pAVar3;
  
  if ((DAT_04567c78 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567c78 = 1;
  }
  if (ANMFBABEMFD == (HOOAAGABMBL_o *)0x0) {
    bVar1 = false;
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
    pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar3 == (Roster_o *)0x0) ||
       (__this = (pAVar3->fields).OIDPLCLELEN, __this == (GGHCLMEFIGO_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = GGHCLMEFIGO__JNFIBDBHNOA(__this,ANMFBABEMFD,(MethodInfo *)0x0);
    bVar1 = __this_00 != (IGFGDDANEPE_o *)0x0;
    if ((__this_00 != (IGFGDDANEPE_o *)0x0) && (MHKEJNCJFFM)) {
      iVar2 = IGFGDDANEPE__LDJLMEFOMLG(__this_00,(MethodInfo *)0x0);
      bVar1 = 0 < iVar2;
    }
  }
  return bVar1;
}


// ===== public static bool OLKMIPIPMIG(IGFGDDANEPE ENHJPOHLMCL)  [RVA 0x339B330]
// HCAICJLDDJO$$OLKMIPIPMIG @ RVA 0x339B330

bool HCAICJLDDJO__OLKMIPIPMIG(IGFGDDANEPE_o *ENHJPOHLMCL,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = false;
  if (ENHJPOHLMCL != (IGFGDDANEPE_o *)0x0) {
    if ((ENHJPOHLMCL->fields).GOJELHDHCDP == false) {
      return false;
    }
    bVar1 = (ENHJPOHLMCL->fields).IIPJCIFKCIH == false;
  }
  return bVar1;
}


// ===== public static DDMHMABAHHD PEENAMDLAKO(HOOAAGABMBL IHGFKLOLPOK)  [RVA 0x339AC9C]
// HCAICJLDDJO$$PEENAMDLAKO @ RVA 0x339AC9C

DDMHMABAHHD_o * HCAICJLDDJO__PEENAMDLAKO(HOOAAGABMBL_o *IHGFKLOLPOK,MethodInfo *method)

{
  byte bVar1;
  RaidConfig_o *__this;
  RaidConfig_FNILDHLJBBJ_o *pJVar2;
  System_Collections_Generic_List_DDMHMABAHHD__o *__this_00;
  DDMHMABAHHD_o *pDVar3;
  MethodInfo *extraout_x1;
  System_String_o *HAEPFHOGAIM;
  
  if ((DAT_04567c79 & 1) == 0) {
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
    DAT_04567c79 = 1;
    method = extraout_x1;
  }
  if (IHGFKLOLPOK != (HOOAAGABMBL_o *)0x0) {
    bVar1 = (FAIJGJCCKJC_TypeInfo->_2).naturalAligment;
    if (((bVar1 <= (IHGFKLOLPOK->klass->_2).naturalAligment) &&
        ((IHGFKLOLPOK->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
         (Il2CppClass *)FAIJGJCCKJC_TypeInfo)) && (IHGFKLOLPOK[1].klass != (HOOAAGABMBL_c *)0x0)) {
      HAEPFHOGAIM = ((IHGFKLOLPOK[1].klass)->_1).this_arg.data;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
      }
      __this = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (__this != (RaidConfig_o *)0x0) {
        pJVar2 = RaidConfig__OJOIAONADNG(__this,HAEPFHOGAIM,(MethodInfo *)0x0);
        if (pJVar2 == (RaidConfig_FNILDHLJBBJ_o *)0x0) {
          return (DDMHMABAHHD_o *)0x0;
        }
        if ((pJVar2->fields).HNGIBIJJKAP == false) {
          return (DDMHMABAHHD_o *)0x0;
        }
        __this_00 = (pJVar2->fields).GFBNJPMOEKD;
        if (__this_00 != (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) {
          pDVar3 = (DDMHMABAHHD_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,0,
                              Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
          return pDVar3;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return (DDMHMABAHHD_o *)0x0;
}

