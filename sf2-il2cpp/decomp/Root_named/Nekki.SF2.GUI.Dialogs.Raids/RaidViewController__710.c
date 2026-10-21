// Original name: Nekki.SF2.GUI.Dialogs.Raids.RaidViewController  (obfuscated LJNJDFEAIOH)
// TypeDefIndex 710
// Namespace: 
// public class RaidViewController
// Fields:
//   private static float LBFAFGHJJLP; // 0x0
//   private static bool GDAKHPBBPAE; // 0x4
//   private int EIMPNFFLONC; // 0x10
//   private readonly RaidViewContainer PDEAGAFHDFI; // 0x18
//   private AADKBCFCLKK IHODMKCBNKJ; // 0x20
//   private bool NAJFBIBIHDM; // 0x28
//   private readonly List<IEnumerator> GEFEAGGHDNK; // 0x30
//   private List<long> OLPNGMAGBGA; // 0x38

// ===== public void .ctor(RaidViewContainer MIJCJJCICDA, AADKBCFCLKK DKMMBMBMJBO)  [RVA 0x30379C0]
// RaidViewController$$.ctor @ RVA 0x30379C0

void RaidViewController___ctor(RaidViewController_o *__this,
                       Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *MIJCJJCICDA,
                       AADKBCFCLKK_o *DKMMBMBMJBO,MethodInfo *method)

{
  int32_t KLFKDPIOMIE;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_IEnumerator__o **ppSVar1;
  System_Collections_Generic_List_long__o *__this_01;
  System_Collections_Generic_List_long__o **ppSVar2;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *pNVar3;
  SFRequestSender_o *pKVar4;
  System_Action_o *pSVar5;
  System_Action_KEFHDOHHHML__o *pSVar6;
  System_Action_RaidViewContainer__o *pSVar7;
  MethodInfo *method_00;
  MethodInfo *pMVar8;
  KDADMJGPAOM_o *pKVar9;
  DCHAJIMIFHP_o *pDVar10;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o **ppNVar11;
  
                    /* try { // try from 031379c0 to 032379c3 has its CatchHandler @ 031379cc */
                    /* try { // try from 031379c4 to 032379cf has its CatchHandler @ 03137948 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031379c0 with catch @ 031379cc
                        */
  if ((DAT_04565d5d & 1) == 0) {
    FUN_01bab630(&System_Action<RaidViewContainer>_TypeInfo);
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_LJNJDFEAIOH_AMNGGHHKGMP__);
    FUN_01bab630(&Method_LJNJDFEAIOH_CKNOFAMLBDE__);
    FUN_01bab630(&Method_LJNJDFEAIOH_DNMKNNNIOJB__);
    FUN_01bab630(&Method_LJNJDFEAIOH_ECOKPPHJIIH__);
    FUN_01bab630(&Method_LJNJDFEAIOH_FLMOFGGDLJJ__);
    FUN_01bab630(&Method_LJNJDFEAIOH_GHBOCMOKNBB__);
    FUN_01bab630(&Method_LJNJDFEAIOH_JGLGAMMLMGF__);
    FUN_01bab630(&Method_LJNJDFEAIOH_LKBMEILOMKO__);
    FUN_01bab630(&Method_LJNJDFEAIOH_MDFHMNAMALM__);
    FUN_01bab630(&Method_LJNJDFEAIOH_NKIFNICEBFF__);
    FUN_01bab630(&Method_System_Collections_Generic_List<long>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEnumerator>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IEnumerator>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<long>_TypeInfo);
                    /* try { // try from 03137ae0 to 03237bbb has its CatchHandler @ 03137ae0
                       catch() { ... } // from try @ 03137ae0 with catch @ 03137ae0
                       catch() { ... } // from try @ 03137c88 with catch @ 03137ae0
                       catch() { ... } // from try @ 03137e18 with catch @ 03137ae0
                       catch() { ... } // from try @ 03137e80 with catch @ 03137ae0
                       catch() { ... } // from try @ 03137eb0 with catch @ 03137ae0
                       catch() { ... } // from try @ 03137f1c with catch @ 03137ae0
                       catch() { ... } // from try @ 03137f40 with catch @ 03137ae0
                       catch() { ... } // from try @ 03137f80 with catch @ 03137ae0 */
    FUN_01bab630(&StringLiteral_20399/*"raid_battle_finish_round_event"*/);
    FUN_01bab630(&StringLiteral_20480/*"refresh_player_event"*/);
    FUN_01bab630(&StringLiteral_20481/*"refresh_raid_player_event"*/);
    FUN_01bab630(&StringLiteral_20396/*"raid_battle_expire_event"*/);
    FUN_01bab630(&StringLiteral_20397/*"raid_battle_finish_event"*/);
    DAT_04565d5d = 1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IEnumerator>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<IEnumerator>__ctor__);
  ppSVar1 = &(__this->fields).GEFEAGGHDNK;
  *ppSVar1 = (System_Collections_Generic_List_IEnumerator__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_long__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<long>_TypeInfo);
  System_Collections_Generic_List<long>___ctor
            (__this_01,Method_System_Collections_Generic_List<long>__ctor__);
  ppSVar2 = &(__this->fields).OLPNGMAGBGA;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppNVar11 = &(__this->fields).PDEAGAFHDFI;
  *ppNVar11 = MIJCJJCICDA;
  thunk_FUN_01c20e04(ppNVar11,MIJCJJCICDA);
  (__this->fields).NAJFBIBIHDM = false;
  if ((DKMMBMBMJBO != (AADKBCFCLKK_o *)0x0) &&
     (pKVar9 = (DKMMBMBMJBO->fields).LHFLMBNKPHF, pKVar9 != (KDADMJGPAOM_o *)0x0)) {
    KLFKDPIOMIE = (pKVar9->fields).IILCHFKCEEH;
    pNVar3 = (__this->fields).PDEAGAFHDFI;
    (__this->fields).EIMPNFFLONC = KLFKDPIOMIE;
    if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
      pMVar8 = (MethodInfo *)0x0;
      Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__SetBossID(pNVar3,KLFKDPIOMIE,(MethodInfo *)0x0)
      ;
                    /* try { // try from 03137bbc to 03237bc3 has its CatchHandler @ 03137f20 */
      RaidViewController__IGLJNCEHFOI(__this,DKMMBMBMJBO,pMVar8);
      pKVar4 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
                    /* try { // try from 03137bdc to 03237be7 has its CatchHandler @ 03137e38 */
      pSVar5 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (pKVar4 != (SFRequestSender_o *)0x0) {
                    /* try { // try from 03137bfc to 03237c07 has its CatchHandler @ 03137e2c */
        SFRequestSender__HKAALOKPBPG(pKVar4,pSVar5,(MethodInfo *)0x0);
        pKVar4 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
        pSVar5 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pKVar4 != (SFRequestSender_o *)0x0) {
          SFRequestSender__KGJHOLAEPAI(pKVar4,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 03137c54 to 03237c87 has its CatchHandler @ 03137f24 */
          pKVar4 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
          if (pKVar4 != (SFRequestSender_o *)0x0) {
            pDVar10 = (pKVar4->fields).super.FNHOHLGNHGN;
            pSVar6 = (System_Action_KEFHDOHHHML__o *)
                     thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
                    /* try { // try from 03137c88 to 03237cc7 has its CatchHandler @ 03137ae0 */
            System_Action<object>___ctor();
            if (pDVar10 != (DCHAJIMIFHP_o *)0x0) {
              DCHAJIMIFHP__MPFFOIIBAKO(pDVar10,StringLiteral_20399/*"raid_battle_finish_round_event"*/,pSVar6,(MethodInfo *)0x0);
              pKVar4 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
              if (pKVar4 != (SFRequestSender_o *)0x0) {
                pDVar10 = (pKVar4->fields).super.FNHOHLGNHGN;
                    /* try { // try from 03137cc8 to 03237ccf has its CatchHandler @ 03137e18 */
                pSVar6 = (System_Action_KEFHDOHHHML__o *)
                         thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
                System_Action<object>___ctor();
                if (pDVar10 != (DCHAJIMIFHP_o *)0x0) {
                    /* try { // try from 03137cfc to 03237d03 has its CatchHandler @ 03137e44 */
                  DCHAJIMIFHP__MPFFOIIBAKO(pDVar10,StringLiteral_20480/*"refresh_player_event"*/,pSVar6,(MethodInfo *)0x0);
                  pKVar4 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
                  if (pKVar4 != (SFRequestSender_o *)0x0) {
                    pDVar10 = (pKVar4->fields).super.FNHOHLGNHGN;
                    pSVar6 = (System_Action_KEFHDOHHHML__o *)
                             thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
                    /* try { // try from 03137d20 to 03237d2b has its CatchHandler @ 03137e28 */
                    System_Action<object>___ctor();
                    if (pDVar10 != (DCHAJIMIFHP_o *)0x0) {
                    /* try { // try from 03137d40 to 03237d4b has its CatchHandler @ 03137e34 */
                      DCHAJIMIFHP__MPFFOIIBAKO(pDVar10,StringLiteral_20481/*"refresh_raid_player_event"*/,pSVar6,(MethodInfo *)0x0)
                      ;
                      pKVar4 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
                      if (pKVar4 != (SFRequestSender_o *)0x0) {
                        pDVar10 = (pKVar4->fields).super.FNHOHLGNHGN;
                        pSVar6 = (System_Action_KEFHDOHHHML__o *)
                                 thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
                        System_Action<object>___ctor();
                        if (pDVar10 != (DCHAJIMIFHP_o *)0x0) {
                    /* try { // try from 03137d98 to 03237dcb has its CatchHandler @ 03137e40 */
                          DCHAJIMIFHP__MPFFOIIBAKO
                                    (pDVar10,StringLiteral_20397/*"raid_battle_finish_event"*/,pSVar6,(MethodInfo *)0x0);
                          pKVar4 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
                          if (pKVar4 != (SFRequestSender_o *)0x0) {
                            pDVar10 = (pKVar4->fields).super.FNHOHLGNHGN;
                            pSVar6 = (System_Action_KEFHDOHHHML__o *)
                                     thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
                            System_Action<object>___ctor();
                            if (pDVar10 != (DCHAJIMIFHP_o *)0x0) {
                    /* try { // try from 03137de0 to 03237de7 has its CatchHandler @ 03137e1c */
                    /* try { // try from 03137e08 to 03237e0b has its CatchHandler @ 03137e3c */
                              DCHAJIMIFHP__MPFFOIIBAKO
                                        (pDVar10,StringLiteral_20396/*"raid_battle_expire_event"*/,pSVar6,(MethodInfo *)0x0);
                    /* try { // try from 03137e0c to 03237e0f has its CatchHandler @ 03137e30 */
                    /* try { // try from 03137e10 to 03237e17 has its CatchHandler @ 03137e1c */
                              pNVar3 = (__this->fields).PDEAGAFHDFI;
                              pSVar7 = (System_Action_RaidViewContainer__o *)
                                       thunk_FUN_01bda818(System_Action<RaidViewContainer>_TypeInfo)
                              ;
                    /* catch() { ... } // from try @ 03137cc8 with catch @ 03137e18
                       try { // try from 03137e18 to 03237e5f has its CatchHandler @ 03137ae0 */
                    /* catch() { ... } // from try @ 03137de0 with catch @ 03137e1c
                       catch() { ... } // from try @ 03137e10 with catch @ 03137e1c */
                    /* catch() { ... } // from try @ 03137d20 with catch @ 03137e28 */
                              System_Action<object>___ctor();
                    /* catch() { ... } // from try @ 03137bfc with catch @ 03137e2c */
                              if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0)
                              {
                    /* catch() { ... } // from try @ 03137e0c with catch @ 03137e30 */
                    /* catch() { ... } // from try @ 03137d40 with catch @ 03137e34 */
                    /* catch() { ... } // from try @ 03137bdc with catch @ 03137e38 */
                    /* catch() { ... } // from try @ 03137e08 with catch @ 03137e3c */
                    /* catch() { ... } // from try @ 03137d98 with catch @ 03137e40 */
                    /* catch() { ... } // from try @ 03137cfc with catch @ 03137e44 */
                                Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__add_OnFightBtnClick
                                          (pNVar3,pSVar7,(MethodInfo *)0x0);
                                pNVar3 = (__this->fields).PDEAGAFHDFI;
                                pSVar7 = (System_Action_RaidViewContainer__o *)
                                         thunk_FUN_01bda818(
                                                  System_Action<RaidViewContainer>_TypeInfo);
                    /* try { // try from 03137e60 to 03237e63 has its CatchHandler @ 03137f08 */
                                System_Action<object>___ctor();
                                if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0
                                   ) {
                    /* try { // try from 03137e78 to 03237e7f has its CatchHandler @ 03137f94 */
                    /* try { // try from 03137e80 to 03237e97 has its CatchHandler @ 03137ae0 */
                                  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__add_OnExitBtnClick
                                            (pNVar3,pSVar7,(MethodInfo *)0x0);
                                  pNVar3 = (__this->fields).PDEAGAFHDFI;
                                  pSVar7 = (System_Action_RaidViewContainer__o *)
                                           thunk_FUN_01bda818(
                                                  System_Action<RaidViewContainer>_TypeInfo);
                    /* try { // try from 03137e98 to 03237eaf has its CatchHandler @ 03137f14 */
                                  System_Action<object>___ctor();
                                  if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)
                                                0x0) {
                    /* try { // try from 03137eb0 to 03237eef has its CatchHandler @ 03137ae0 */
                                    pMVar8 = (MethodInfo *)0x0;
                                    Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__add_OnForceClose
                                              (pNVar3,pSVar7,(MethodInfo *)0x0);
                                    RaidViewController__APOKKNPGGNP(__this,method_00);
                                    RaidViewController__HFBLMGCOOHJ
                                              (__this,(__this->fields).IHODMKCBNKJ,pMVar8);
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


// ===== private void KGKDFGCGHPC()  [RVA 0x30382DC]
// RaidViewController$$KGKDFGCGHPC @ RVA 0x30382DC

void RaidViewController__KGKDFGCGHPC(RaidViewController_o *__this,MethodInfo *method)

{
  SFRequestSender_o *__this_00;
  MethodInfo *in_x3;
  AADKBCFCLKK_o *pAVar1;
  PGICCMFLDPI_o *pPVar2;
  long lVar3;
  
  pAVar1 = (__this->fields).IHODMKCBNKJ;
  if (pAVar1 != (AADKBCFCLKK_o *)0x0) {
    pPVar2 = (pAVar1->fields).FAEDHKAJJNK;
    if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
      return;
    }
    lVar3 = (pPVar2->fields).GDKPGIBMFPA;
    __this_00 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
    if ((__this_00 != (SFRequestSender_o *)0x0) &&
       (pPVar2 = SFRequestSender__MPBLBEGCAKP(__this_00,(MethodInfo *)0x0),
       pPVar2 != (PGICCMFLDPI_o *)0x0)) {
      lVar3 = lVar3 - (pPVar2->fields).GDKPGIBMFPA;
      RaidViewController__HMCHGDKEHHE(__this,0x1e,lVar3,in_x3);
      RaidViewController__HMCHGDKEHHE(__this,5,lVar3,in_x3);
      RaidViewController__HMCHGDKEHHE(__this,1,lVar3,in_x3);
      RaidViewController__HMCHGDKEHHE(__this,0,lVar3,in_x3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HFBLMGCOOHJ(AADKBCFCLKK IIPPMAOIKHB)  [RVA 0x3038150]
// RaidViewController$$HFBLMGCOOHJ @ RVA 0x3038150

void RaidViewController__HFBLMGCOOHJ(RaidViewController_o *__this,AADKBCFCLKK_o *IIPPMAOIKHB,MethodInfo *method)

{
  int iVar1;
  IBMLPPNMDCI_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *__this_01;
  Il2CppObject *pIVar2;
  HCKCBFOGMMJ_o *__this_02;
  System_Action_LFELBGMCDHD__o *BLMFLPJJMPF;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_03;
  int index;
  
  if ((DAT_04565d5e & 1) == 0) {
    FUN_01bab630(&System_Action<LFELBGMCDHD>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    FUN_01bab630(&Method_LJNJDFEAIOH_NKLNDGMMAAH__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Item__);
    DAT_04565d5e = 1;
  }
  __this_00 = (IBMLPPNMDCI_o *)thunk_FUN_01bda818(IBMLPPNMDCI_TypeInfo);
  IBMLPPNMDCI___ctor(__this_00,(MethodInfo *)0x0);
  if ((IIPPMAOIKHB != (AADKBCFCLKK_o *)0x0) &&
     (__this_01 = (IIPPMAOIKHB->fields).MPAIPMANDEO,
     __this_01 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0)) {
    iVar1 = (__this_01->fields).count;
    if (iVar1 < 1) {
LAB_0313825c:
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
      BLMFLPJJMPF = (System_Action_LFELBGMCDHD__o *)
                    thunk_FUN_01bda818(System_Action<LFELBGMCDHD>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_02 != (HCKCBFOGMMJ_o *)0x0) {
        HCKCBFOGMMJ__EFCMPBGIEGJ(__this_02,__this_00,BLMFLPJJMPF,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      index = 0;
      do {
        pIVar2 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,index,
                            Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Item__
                           );
        if (((__this_00 == (IBMLPPNMDCI_o *)0x0) || (pIVar2 == (Il2CppObject *)0x0)) ||
           (__this_03 = (__this_00->fields).EHBNKDHKJNI,
           __this_03 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) break;
        Google_Protobuf_Collections_RepeatedField<long>__Add
                  (__this_03,(int64_t)pIVar2[1].monitor,
                   Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
        index = index + 1;
        if (iVar1 == index) goto LAB_0313825c;
        __this_01 = (IIPPMAOIKHB->fields).MPAIPMANDEO;
      } while (__this_01 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NKIFNICEBFF(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x30384E4]
// RaidViewController$$NKIFNICEBFF @ RVA 0x30384E4

void RaidViewController__NKIFNICEBFF(RaidViewController_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  AADKBCFCLKK_o *DKMMBMBMJBO;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *pNVar1;
  
  if ((DAT_04565d5f & 1) == 0) {
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<AADKBCFCLKK>__);
    DAT_04565d5f = 1;
  }
  pNVar1 = (__this->fields).PDEAGAFHDFI;
  if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
    if ((pNVar1->fields)._BOGAKJOFOEK_k__BackingField != false) {
      return;
    }
    if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
      DKMMBMBMJBO = (AADKBCFCLKK_o *)
                    KEFHDOHHHML__PFNEPJAFEDF<object>
                              (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<AADKBCFCLKK>__);
      RaidViewController__IGLJNCEHFOI(__this,DKMMBMBMJBO,method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AMNGGHHKGMP(RaidViewContainer IMMNELPBGIF)  [RVA 0x3038560]
// RaidViewController$$AMNGGHHKGMP @ RVA 0x3038560

void RaidViewController__AMNGGHHKGMP
               (RaidViewController_o *__this,Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *IMMNELPBGIF,
               MethodInfo *method)

{
  RaidManager_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *IMMNELPBGIF_00;
  MethodInfo *method_00;
  
  if ((DAT_04565d60 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565d60 = 1;
    IMMNELPBGIF = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,IMMNELPBGIF);
  }
  __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (__this_00 != (RaidManager_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    RaidManager__OJOMBBENIHM(__this_00,true,(MethodInfo *)0x0);
    RaidViewController__CKNOFAMLBDE(__this,IMMNELPBGIF_00,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MCGAMEJDDNG(PGICCMFLDPI MCKAKKCPIJD)  [RVA 0x303860C]
// RaidViewController$$MCGAMEJDDNG @ RVA 0x303860C

void RaidViewController__MCGAMEJDDNG(RaidViewController_o *__this,PGICCMFLDPI_o *MCKAKKCPIJD,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_00;
  
  if ((MCKAKKCPIJD != (PGICCMFLDPI_o *)0x0) &&
     (__this_00 = (__this->fields).PDEAGAFHDFI,
     __this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0)) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__UpdateCooldownFinishTime
              (__this_00,(MCKAKKCPIJD->fields).GDKPGIBMFPA,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OJOMBBENIHM()  [RVA 0x3038630]
// RaidViewController$$OJOMBBENIHM @ RVA 0x3038630

void RaidViewController__OJOMBBENIHM(RaidViewController_o *__this,MethodInfo *method)

{
  int32_t length;
  ushort uVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  SFRequestSender_o *pKVar4;
  System_Action_o *pSVar5;
  DCHAJIMIFHP_o *__this_00;
  System_Action_RaidViewContainer__o *pSVar6;
  System_Collections_Generic_List_object__o *__this_01;
  PBAKFOBIHEG_o *pPVar7;
  VirtualInvokeData *pVVar8;
  PBAKFOBIHEG_c *pPVar9;
  System_Collections_Generic_List_IEnumerator__o *pSVar10;
  ulong uVar11;
  int32_t *piVar12;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *pNVar13;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04565d61 & 1) == 0) {
    FUN_01bab630(&System_Action<RaidViewContainer>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEnumerator>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEnumerator>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEnumerator>_get_Current__);
    FUN_01bab630(&Method_LJNJDFEAIOH_AMNGGHHKGMP__);
    FUN_01bab630(&Method_LJNJDFEAIOH_CKNOFAMLBDE__);
    FUN_01bab630(&Method_LJNJDFEAIOH_DNMKNNNIOJB__);
    FUN_01bab630(&Method_LJNJDFEAIOH_GHBOCMOKNBB__);
    FUN_01bab630(&Method_LJNJDFEAIOH_MDFHMNAMALM__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEnumerator>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEnumerator>_GetEnumerator__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04565d61 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pKVar4 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
  pSVar5 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pKVar4 != (SFRequestSender_o *)0x0) {
    SFRequestSender__JGNHEIICALL(pKVar4,pSVar5,(MethodInfo *)0x0);
    pKVar4 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
    pSVar5 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pKVar4 != (SFRequestSender_o *)0x0) {
      SFRequestSender__PILMCAFCLMN(pKVar4,pSVar5,(MethodInfo *)0x0);
      pKVar4 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
      if ((pKVar4 != (SFRequestSender_o *)0x0) &&
         (__this_00 = (pKVar4->fields).super.FNHOHLGNHGN, __this_00 != (DCHAJIMIFHP_o *)0x0)) {
        DCHAJIMIFHP__GMNFJKHEJLO(__this_00,(Il2CppObject *)__this,(MethodInfo *)0x0);
        pNVar13 = (__this->fields).PDEAGAFHDFI;
        pSVar6 = (System_Action_RaidViewContainer__o *)
                 thunk_FUN_01bda818(System_Action<RaidViewContainer>_TypeInfo);
        System_Action<object>___ctor();
        if (pNVar13 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__remove_OnFightBtnClick
                    (pNVar13,pSVar6,(MethodInfo *)0x0);
          pNVar13 = (__this->fields).PDEAGAFHDFI;
          pSVar6 = (System_Action_RaidViewContainer__o *)
                   thunk_FUN_01bda818(System_Action<RaidViewContainer>_TypeInfo);
          System_Action<object>___ctor();
          if (pNVar13 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
            Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__remove_OnExitBtnClick
                      (pNVar13,pSVar6,(MethodInfo *)0x0);
            pNVar13 = (__this->fields).PDEAGAFHDFI;
            pSVar6 = (System_Action_RaidViewContainer__o *)
                     thunk_FUN_01bda818(System_Action<RaidViewContainer>_TypeInfo);
            System_Action<object>___ctor();
            if (pNVar13 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__remove_OnForceClose
                        (pNVar13,pSVar6,(MethodInfo *)0x0);
              __this_01 = (System_Collections_Generic_List_object__o *)(__this->fields).GEFEAGGHDNK;
              if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
                System_Collections_Generic_List<object>__GetEnumerator
                          (&local_78,__this_01,
                           Method_System_Collections_Generic_List<IEnumerator>_GetEnumerator__);
                local_60.fields._index = local_78.fields._index;
                local_60.fields._version = local_78.fields._version;
                local_60.fields._list = local_78.fields._list;
                local_60.fields._current = local_78.fields._current;
                    /* try { // try from 031388bc to 03238937 has its CatchHandler @ 031388bc
                       catch() { ... } // from try @ 031388bc with catch @ 031388bc
                       catch() { ... } // from try @ 031389e8 with catch @ 031388bc
                       catch() { ... } // from try @ 03138a28 with catch @ 031388bc
                       catch() { ... } // from try @ 03138a38 with catch @ 031388bc
                       catch() { ... } // from try @ 03138a74 with catch @ 031388bc
                       catch() { ... } // from try @ 03138a9c with catch @ 031388bc */
                while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                         (&local_60,
                                          Method_System_Collections_Generic_List_Enumerator<IEnumerator>_MoveNext__
                                         ), pIVar2 = local_60.fields._current, bVar3) {
                  pPVar7 = CoroutineManager__get_Current((MethodInfo *)0x0);
                  if (pPVar7 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pPVar9 = pPVar7->klass;
                  uVar1._0_1_ = (pPVar9->_2).rank;
                  uVar1._1_1_ = (pPVar9->_2).minimumAlignment;
                  uVar11 = (ulong)uVar1;
                  if (uVar11 != 0) {
                    piVar12 = &((pPVar9->_1).interfaceOffsets)->offset;
                    do {
                      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                        pVVar8 = pPVar9->vtable + (*piVar12 + 1);
                        goto LAB_0313892c;
                      }
                      uVar11 = uVar11 - 1;
                      piVar12 = piVar12 + 4;
                    } while (uVar11 != 0);
                  }
                  pVVar8 = (VirtualInvokeData *)FUN_01b81914(pPVar7,PBAKFOBIHEG_TypeInfo,1);
LAB_0313892c:
                    /* try { // try from 03138938 to 0323893f has its CatchHandler @ 03138a50 */
                  (*pVVar8->methodPtr)(pPVar7,pIVar2,pVVar8->method);
                }
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<IEnumerator>_Dispose__)
                ;
                pSVar10 = (__this->fields).GEFEAGGHDNK;
                    /* try { // try from 03138950 to 0323895b has its CatchHandler @ 03138a40 */
                if (pSVar10 != (System_Collections_Generic_List_IEnumerator__o *)0x0) {
                  length = (pSVar10->fields)._size;
                    /* try { // try from 03138960 to 0323896b has its CatchHandler @ 03138a44 */
                  (pSVar10->fields)._size = 0;
                  (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
                  if (0 < length) {
                    System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,length,
                                        (MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MHJKLCKMFMO(KDADMJGPAOM NHKCCGPADIJ)  [RVA 0x3038A08]
// RaidViewController$$MHJKLCKMFMO @ RVA 0x3038A08

void RaidViewController__MHJKLCKMFMO(RaidViewController_o *__this,KDADMJGPAOM_o *NHKCCGPADIJ,MethodInfo *method)

{
  uint MKNBFGPHPEE;
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  RaidManager_o *__this_00;
  AADKBCFCLKK_o *pAVar4;
  KDADMJGPAOM_o **ppKVar5;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_01;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *pNVar6;
  float fVar7;
  
                    /* try { // try from 03138a14 to 03238a27 has its CatchHandler @ 03138a38 */
                    /* try { // try from 03138a28 to 03238a2f has its CatchHandler @ 031388bc */
                    /* try { // try from 03138a30 to 03238a33 has its CatchHandler @ 03138a54 */
  if ((DAT_04565d62 & 1) == 0) {
                    /* try { // try from 03138a34 to 03238a37 has its CatchHandler @ 03138a58 */
                    /* catch() { ... } // from try @ 03138a14 with catch @ 03138a38
                       try { // try from 03138a38 to 03238a6f has its CatchHandler @ 031388bc */
                    /* catch() { ... } // from try @ 031389b4 with catch @ 03138a3c */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* catch() { ... } // from try @ 03138950 with catch @ 03138a40 */
                    /* catch() { ... } // from try @ 03138960 with catch @ 03138a44 */
                    /* catch() { ... } // from try @ 031389b8 with catch @ 03138a48 */
    FUN_01bab630(&RaidViewController_TypeInfo);
                    /* catch() { ... } // from try @ 03138998 with catch @ 03138a4c */
                    /* catch() { ... } // from try @ 03138938 with catch @ 03138a50 */
                    /* catch() { ... } // from try @ 03138a30 with catch @ 03138a54 */
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
                    /* catch() { ... } // from try @ 031389e0 with catch @ 03138a58
                       catch() { ... } // from try @ 03138a34 with catch @ 03138a58 */
    FUN_01bab630(&StringLiteral_17850/*"dlgWarning"*/);
    FUN_01bab630(&StringLiteral_8316/*"LackOfDamageMessage"*/);
                    /* try { // try from 03138a70 to 03238a73 has its CatchHandler @ 03138a90 */
                    /* try { // try from 03138a74 to 03238a93 has its CatchHandler @ 031388bc */
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565d62 = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03138a70 with catch @ 03138a90 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03138a94 to 03238a9b has its CatchHandler @ 03138ab0 */
  __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                    /* try { // try from 03138a9c to 03238aa7 has its CatchHandler @ 031388bc */
  if (__this_00 != (RaidManager_o *)0x0) {
                    /* try { // try from 03138aa8 to 03238aaf has its CatchHandler @ 03138ab0 */
    RaidManager__MHJKLCKMFMO(__this_00,NHKCCGPADIJ,(MethodInfo *)0x0);
    pAVar4 = (__this->fields).IHODMKCBNKJ;
                    /* catch() { ... } // from try @ 03138a94 with catch @ 03138ab0
                       catch() { ... } // from try @ 03138aa8 with catch @ 03138ab0 */
    if (pAVar4 != (AADKBCFCLKK_o *)0x0) {
      ppKVar5 = &(pAVar4->fields).LHFLMBNKPHF;
      *ppKVar5 = NHKCCGPADIJ;
      thunk_FUN_01c20e04(ppKVar5,NHKCCGPADIJ);
      pNVar6 = (__this->fields).PDEAGAFHDFI;
      if ((RaidViewController_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (pNVar6 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
        fVar7 = RaidViewController_TypeInfo->static_fields->LBFAFGHJJLP;
        MKNBFGPHPEE = 0x80000000;
        if (fVar7 != INFINITY) {
          MKNBFGPHPEE = (int)fVar7;
        }
        method_00 = (MethodInfo *)(ulong)MKNBFGPHPEE;
        Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__UpdateBoss
                  (pNVar6,NHKCCGPADIJ,MKNBFGPHPEE,(MethodInfo *)0x0);
        RaidViewController__OAPADFFJJCH(__this,(__this->fields).IHODMKCBNKJ,method_00);
        if (RaidViewController_TypeInfo->static_fields->LBFAFGHJJLP <= 0.0) {
          if (NHKCCGPADIJ != (KDADMJGPAOM_o *)0x0) goto LAB_03138c80;
        }
        else if (NHKCCGPADIJ != (KDADMJGPAOM_o *)0x0) {
          if ((NHKCCGPADIJ->fields).PDGEHKCPGDK < 1) {
            __this_01 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
            if (__this_01 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_03138cc0;
            Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests(__this_01,0x25,(MethodInfo *)0x0);
            bVar2 = OOBBAGLCFPF__IGOCIGBDBEI((__this->fields).IHODMKCBNKJ,(MethodInfo *)0x0);
            if (bVar2) {
              DialogsOpener__JNDPLPKDPCP
                        (StringLiteral_17850/*"dlgWarning"*/,StringLiteral_8316/*"LackOfDamageMessage"*/,StringLiteral_9679/*"OK"*/,StringLiteral_1/*""*/,
                         (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1/*""*/,true,true,
                         true,true,(MethodInfo *)0x0);
            }
          }
          else {
            iVar3 = OOBBAGLCFPF__CGAMEAEGLCA((__this->fields).IHODMKCBNKJ,(MethodInfo *)0x0);
            if (iVar3 < 1) {
              bVar2 = true;
            }
            else {
              bVar2 = 0.5 < (float)(NHKCCGPADIJ->fields).PDGEHKCPGDK / (float)iVar3;
            }
            if ((RaidViewController_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (bVar2) {
                    /* try { // try from 03138c34 to 03238d3f has its CatchHandler @ 03138c34
                       catch() { ... } // from try @ 03138c34 with catch @ 03138c34
                       catch() { ... } // from try @ 03138d50 with catch @ 03138c34
                       catch() { ... } // from try @ 03138dac with catch @ 03138c34
                       catch() { ... } // from try @ 03138df0 with catch @ 03138c34 */
              RaidViewController_TypeInfo->static_fields->GDAKHPBBPAE = true;
            }
            else if ((RaidViewController_TypeInfo->static_fields->GDAKHPBBPAE != false) &&
                    (bVar2 = OOBBAGLCFPF__IGOCIGBDBEI
                                       ((__this->fields).IHODMKCBNKJ,(MethodInfo *)0x0), bVar2)) {
              pNVar6 = (__this->fields).PDEAGAFHDFI;
              if (pNVar6 == (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0)
              goto LAB_03138cc0;
              Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__ShowNotEnoughDamageHint
                        (pNVar6,(MethodInfo *)0x0);
              if ((RaidViewController_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              RaidViewController_TypeInfo->static_fields->GDAKHPBBPAE = false;
            }
          }
LAB_03138c80:
          iVar1 = (NHKCCGPADIJ->fields).PDGEHKCPGDK;
          if ((RaidViewController_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          RaidViewController_TypeInfo->static_fields->LBFAFGHJJLP = (float)iVar1;
          (__this->fields).EIMPNFFLONC = (NHKCCGPADIJ->fields).IILCHFKCEEH;
          return;
        }
      }
    }
  }
LAB_03138cc0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LKBMEILOMKO(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3038DC4]
// RaidViewController$$LKBMEILOMKO @ RVA 0x3038DC4

void RaidViewController__LKBMEILOMKO(RaidViewController_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  NODLJPNGNBG_o *pNVar2;
  RaidManager_o *__this_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *pNVar3;
  
                    /* try { // try from 03138dd8 to 03238de7 has its CatchHandler @ 03138de8 */
  if ((DAT_04565d63 & 1) == 0) {
                    /* catch() { ... } // from try @ 03138d94 with catch @ 03138de8
                       catch() { ... } // from try @ 03138dd8 with catch @ 03138de8 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 03138dec to 03238def has its CatchHandler @ 03138df8 */
                    /* try { // try from 03138df0 to 03238dfb has its CatchHandler @ 03138c34 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03138dec with catch @ 03138df8
                        */
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<NODLJPNGNBG>__);
    FUN_01bab630(&StringLiteral_10987/*"RaidViewController::OnRefreshRaidPlayerEvent failed"*/);
    DAT_04565d63 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_10987/*"RaidViewController::OnRefreshRaidPlayerEvent failed"*/,(MethodInfo *)0x0);
      return;
    }
    pNVar3 = (__this->fields).PDEAGAFHDFI;
    if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
      if ((pNVar3->fields)._BOGAKJOFOEK_k__BackingField != false) {
        return;
      }
      pNVar2 = (NODLJPNGNBG_o *)
               KEFHDOHHHML__PFNEPJAFEDF<object>
                         (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<NODLJPNGNBG>__);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
      }
      __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
      if (__this_00 != (RaidManager_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        pNVar2 = RaidManager__GKJIBPANAGN(__this_00,pNVar2,(MethodInfo *)0x0);
        RaidViewController__KBAHEGDFCBI(__this,pNVar2,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FLMOFGGDLJJ(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3038F88]
// RaidViewController$$FLMOFGGDLJJ @ RVA 0x3038F88

void RaidViewController__FLMOFGGDLJJ(RaidViewController_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_00;
  
  __this_00 = (__this->fields).PDEAGAFHDFI;
  if (__this_00 == (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((__this_00->fields)._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__OnRaidExpire(__this_00,(MethodInfo *)0x0);
  return;
}


// ===== private void ADLBPEEGLGL(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3038FB4]
// RaidViewController$$ADLBPEEGLGL @ RVA 0x3038FB4

void RaidViewController__ADLBPEEGLGL(RaidViewController_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  RaidManager_o *__this_00;
  long lVar3;
  undefined8 *puVar4;
  CPNHNIKFGFB_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_02;
  MethodInfo *method_00;
  int32_t CEOLOKFCKIG;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_04565d64 & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&ODEIOKOJGDM_TypeInfo);
    DAT_04565d64 = 1;
  }
  (__this->fields).NAJFBIBIHDM = false;
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar2 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (bVar2) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
      if (__this_00 != (RaidManager_o *)0x0) {
        RaidManager__IEMLFDPOMMD(__this_00,(MethodInfo *)0x0);
        lVar3 = *(long *)(Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__ + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01b81620();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01b81620();
        }
        plVar7 = (long *)**(undefined8 **)(lVar3 + 0xb8);
        if (plVar7 != (long *)0x0) {
          lVar3 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(ODEIOKOJGDM_c **)(piVar6 + -2) == ODEIOKOJGDM_TypeInfo) {
                puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_03139114;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_01b81914(plVar7,ODEIOKOJGDM_TypeInfo,0);
LAB_03139114:
          method_00 = (MethodInfo *)puVar4[1];
          (*(code *)*puVar4)(plVar7,0);
          RaidViewController__ELDPIJPEGIL(__this,IDCGLBOIAFJ,method_00);
          return;
        }
      }
    }
    else {
      iVar1 = (IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField;
      __this_01 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_01 != (CPNHNIKFGFB_o *)0x0) {
        CEOLOKFCKIG = 0x29c8;
        if (iVar1 != 1) {
          CEOLOKFCKIG = 0x2714;
        }
        CPNHNIKFGFB__DIGPCFKCCBK(__this_01,CEOLOKFCKIG,(MethodInfo *)0x0);
        __this_02 = (__this->fields).PDEAGAFHDFI;
        if (__this_02 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__SetButtonsEnabled
                    (__this_02,true,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static CNLGMNIEGFG APFDLGPHDBN(AADKBCFCLKK DKMMBMBMJBO, int MOLGLNLBAIB)  [RVA 0x303928C]
// RaidViewController$$APFDLGPHDBN @ RVA 0x303928C

CNLGMNIEGFG_o *
RaidViewController__APFDLGPHDBN(AADKBCFCLKK_o *DKMMBMBMJBO,int32_t MOLGLNLBAIB,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  CNLGMNIEGFG_o *__this;
  System_Collections_Generic_List_PJKHAJKEHEL__o *__this_00;
  CNLGMNIEGFG_FKKOIBADKGP_o *pCVar3;
  KDADMJGPAOM_o *pKVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar5;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04565d65 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelParameters>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelParameters>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ModelParameters>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelParameters>_GetEnumerator__);
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04565d65 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  bVar2 = OOBBAGLCFPF__IFFNMNFGOII(DKMMBMBMJBO,(MethodInfo *)0x0);
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GameUtils_TypeInfo);
  }
  __this = GameUtils__MJDCGINJMOP(MOLGLNLBAIB,bVar2,(MethodInfo *)0x0);
  if (((__this != (CNLGMNIEGFG_o *)0x0) &&
      (pCVar3 = (__this->fields).BOOKHNOMHGM, pCVar3 != (CNLGMNIEGFG_FKKOIBADKGP_o *)0x0)) &&
     ((pCVar3->fields).LPHHIMJHGEF = bVar2, DKMMBMBMJBO != (AADKBCFCLKK_o *)0x0)) {
    pKVar4 = (DKMMBMBMJBO->fields).LHFLMBNKPHF;
    if (pKVar4 != (KDADMJGPAOM_o *)0x0) {
      CNLGMNIEGFG__HFNDKACEADO(__this,(float)(pKVar4->fields).PDGEHKCPGDK,(MethodInfo *)0x0);
      __this_00 = (__this->fields).super.MECHOBPGHFJ;
      if (__this_00 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) goto LAB_031393fc;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<ModelParameters>_GetEnumerator__);
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<ModelParameters>_MoveNext__
                          );
        pIVar1 = local_48.fields._current;
        if (!bVar2) break;
        pKVar4 = (DKMMBMBMJBO->fields).LHFLMBNKPHF;
        if (pKVar4 == (KDADMJGPAOM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((pKVar4->fields).IOJIABMGMGB,(MethodInfo *)0x0);
        if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)((long)&pIVar1[0x21].monitor + 4) =
             CVar5;
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<ModelParameters>_Dispose__)
      ;
    }
    return __this;
  }
LAB_031393fc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GHBOCMOKNBB()  [RVA 0x3039480]
// RaidViewController$$GHBOCMOKNBB @ RVA 0x3039480

void RaidViewController__GHBOCMOKNBB(RaidViewController_o *__this,MethodInfo *method)

{
  SFRequestSender_o *pKVar1;
  System_Action_o *CJNHFNHJHPE;
  NDPMLPGANCI_o *__this_00;
  NGOFOPOGBMJ_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  AADKBCFCLKK_o *pAVar2;
  
  if ((DAT_04565d66 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_LJNJDFEAIOH_FHJKIMLIDMP__);
    FUN_01bab630(&Method_LJNJDFEAIOH_GHBOCMOKNBB__);
    FUN_01bab630(&NGOFOPOGBMJ_TypeInfo);
    FUN_01bab630(&StringLiteral_20400/*"raid_battle_get_info"*/);
    DAT_04565d66 = 1;
  }
  pKVar1 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pKVar1 != (SFRequestSender_o *)0x0) {
    SFRequestSender__PILMCAFCLMN(pKVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__PHFCKPKDMBK(__this_00,true,true,(MethodInfo *)0x0);
      pKVar1 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
      __this_01 = (NGOFOPOGBMJ_o *)thunk_FUN_01bda818(NGOFOPOGBMJ_TypeInfo);
      NGOFOPOGBMJ___ctor(__this_01,(MethodInfo *)0x0);
      pAVar2 = (__this->fields).IHODMKCBNKJ;
      if ((pAVar2 != (AADKBCFCLKK_o *)0x0) && (__this_01 != (NGOFOPOGBMJ_o *)0x0)) {
        (__this_01->fields).GDKPGIBMFPA = (pAVar2->fields).AMKHEHFFAKJ;
        BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                      thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
        System_Action<object>___ctor();
        if (pKVar1 != (SFRequestSender_o *)0x0) {
          KDPDBGNOFEN__KLNMLOOCAAO
                    ((KDPDBGNOFEN_o *)pKVar1,StringLiteral_20400/*"raid_battle_get_info"*/,
                     (Google_Protobuf_IMessage_o *)__this_01,BLMFLPJJMPF,0.0,(Il2CppObject *)0x0,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BHCEMNBGKGA()  [RVA 0x3039600]
// RaidViewController$$BHCEMNBGKGA @ RVA 0x3039600

void RaidViewController__BHCEMNBGKGA(RaidViewController_o *__this,MethodInfo *method)

{
  NDPMLPGANCI_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  Roster_o *pAVar1;
  LPAPAMPGDFN_o *pLVar2;
  
  if ((DAT_04565d67 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565d67 = 1;
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
  pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar1 != (Roster_o *)0x0) &&
     (pLVar2 = (pAVar1->fields).LMCDOMHENMC, pLVar2 != (LPAPAMPGDFN_o *)0x0)) {
    if ((pLVar2->fields).AMIMEMOELHE == 0x32) {
      return;
    }
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__KJGGEPNHOBK(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void FLHCPMBEGMD(int OICBCFGIIOA)  [RVA 0x30396C0]
// RaidViewController$$FLHCPMBEGMD @ RVA 0x30396C0

void RaidViewController__FLHCPMBEGMD(int32_t OICBCFGIIOA,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  System_String_o *pSVar6;
  VirtualInvokeData *pVVar7;
  ChatManager_o *__this;
  Il2CppClass *pIVar8;
  long lVar9;
  ulong uVar10;
  int32_t *piVar11;
  undefined8 uVar12;
  int32_t local_24;
  
  local_24 = OICBCFGIIOA;
  if ((DAT_04565d68 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_17850/*"dlgWarning"*/);
    FUN_01bab630(&StringLiteral_16983/*"chatClosing"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_16982/*"chatClosed"*/);
    DAT_04565d68 = 1;
  }
  pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar5 = Method_System_Array_Empty<string>__;
  if (OICBCFGIIOA < 1) {
    lVar9 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar9 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar9 = *(long *)(lVar5 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01b81620();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01b81620();
    }
    uVar3 = StringLiteral_16982/*"chatClosed"*/;
    if (pIVar4 == (Il2CppObject *)0x0) goto LAB_031399b4;
    pIVar8 = pIVar4->klass;
    uVar12 = **(undefined8 **)(lVar5 + 0xb8);
    uVar2._0_1_ = (pIVar8->_2).rank;
    uVar2._1_1_ = (pIVar8->_2).minimumAlignment;
    uVar10 = (ulong)uVar2;
    if (uVar10 != 0) {
      piVar11 = &((pIVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar7 = pIVar8->vtable + (*piVar11 + 0xc);
          goto LAB_031398f8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031398f8:
    pSVar6 = (System_String_o *)(*pVVar7->methodPtr)(pIVar4,uVar3,uVar12,pVVar7->method);
    DialogsOpener__OOOIOMHJONP
              (StringLiteral_17850/*"dlgWarning"*/,pSVar6,StringLiteral_9679/*"OK"*/,StringLiteral_1/*""*/,
               (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1/*""*/,true,true,true,
               (MethodInfo *)0x0);
  }
  else {
    lVar5 = FUN_01bab718(string___TypeInfo,1);
    pSVar6 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
    if (lVar5 == 0) goto LAB_031399b4;
    if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    *(System_String_o **)(lVar5 + 0x20) = pSVar6;
    thunk_FUN_01c20e04();
    uVar3 = StringLiteral_16983/*"chatClosing"*/;
    if (pIVar4 == (Il2CppObject *)0x0) goto LAB_031399b4;
    pIVar8 = pIVar4->klass;
    uVar1._0_1_ = (pIVar8->_2).rank;
    uVar1._1_1_ = (pIVar8->_2).minimumAlignment;
    uVar10 = (ulong)uVar1;
    if (uVar10 != 0) {
      piVar11 = &((pIVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar7 = pIVar8->vtable + (*piVar11 + 0xc);
          goto LAB_031398cc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031398cc:
    pSVar6 = (System_String_o *)(*pVVar7->methodPtr)(pIVar4,uVar3,lVar5,pVVar7->method);
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
  if (__this != (ChatManager_o *)0x0) {
    ChatManager__GJAEDMLMJIK(__this,pSVar6,2,true,(MethodInfo *)0x0);
    return;
  }
LAB_031399b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HMCHGDKEHHE(int OICBCFGIIOA, long ECLENFDGNKL)  [RVA 0x3038374]
// RaidViewController$$HMCHGDKEHHE @ RVA 0x3038374

void RaidViewController__HMCHGDKEHHE
               (RaidViewController_o *__this,int32_t OICBCFGIIOA,int64_t ECLENFDGNKL,MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  RaidViewController_o *__this_00;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  Il2CppObject *item;
  RaidViewController_c *pLVar6;
  System_Object_array *pSVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_Generic_List_object__o *__this_01;
  
  if ((DAT_04565d69 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IEnumerator>_Add__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04565d69 = 1;
  }
  if (ECLENFDGNKL <= OICBCFGIIOA * 60000) {
    return;
  }
  __this_01 = (System_Collections_Generic_List_object__o *)(__this->fields).GEFEAGGHDNK;
  __this_00 = (RaidViewController_o *)CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar4 = RaidViewController__NANCBNHCOBH(__this_00,ECLENFDGNKL - OICBCFGIIOA * 60000,OICBCFGIIOA,method);
  if (__this_00 != (RaidViewController_o *)0x0) {
    pLVar6 = __this_00->klass;
    uVar1._0_1_ = (pLVar6->_2).rank;
    uVar1._1_1_ = (pLVar6->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pLVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar5 = &(pLVar6->vtable)._0_Equals + *piVar9;
          goto LAB_03138454;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(__this_00,PBAKFOBIHEG_TypeInfo,0);
LAB_03138454:
    item = (Il2CppObject *)(*pVVar5->methodPtr)(__this_00,pSVar4,1,pVVar5->method);
    lVar3 = Method_System_Collections_Generic_List<IEnumerator>_Add__;
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar7 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pSVar7 != (System_Object_array *)0x0) {
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pSVar7->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          pSVar7->m_Items[(int)uVar2] = item;
          thunk_FUN_01c20e04();
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_01,item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private GKLPDMLELJF LDFPGIIGDHK(long JNNGPPKMPFD)  [RVA 0x3039A2C]
// RaidViewController$$LDFPGIIGDHK @ RVA 0x3039A2C

GKLPDMLELJF_o *
RaidViewController__LDFPGIIGDHK(RaidViewController_o *__this,int64_t JNNGPPKMPFD,MethodInfo *method)

{
  int32_t iVar1;
  GKLPDMLELJF_o *__this_00;
  System_String_o *pSVar2;
  MethodInfo_27F86F8 *in_x3;
  System_Collections_Generic_List_long__o *pSVar3;
  System_Nullable_long__o __this_01;
  undefined8 local_50;
  int64_t iStack_48;
  int32_t local_34;
  
  if ((DAT_04565d6a & 1) == 0) {
    FUN_01bab630(&GKLPDMLELJF_TypeInfo);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<long>_get_Count__);
    FUN_01bab630(&Method_System_Nullable<long>__ctor__);
    FUN_01bab630(&StringLiteral_6270/*"FakePlayer"*/);
    DAT_04565d6a = 1;
  }
  local_34 = 0;
  __this_00 = (GKLPDMLELJF_o *)thunk_FUN_01bda818(GKLPDMLELJF_TypeInfo);
  GKLPDMLELJF___ctor(__this_00,(MethodInfo *)0x0);
  local_50 = 0;
  iStack_48 = 0;
  __this_01.fields.value = 0;
  __this_01.fields._0_8_ = &local_50;
  System_Nullable<long>___ctor(__this_01,Method_System_Nullable<long>__ctor__,in_x3);
  if (__this_00 != (GKLPDMLELJF_o *)0x0) {
    (__this_00->fields).ADEIKPGDIPM.fields.value = iStack_48;
    *(undefined8 *)&(__this_00->fields).ADEIKPGDIPM.fields = local_50;
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = LIIFLGALGNK__HLMBDJOGONJ(1,7,(MethodInfo *)0x0);
    (__this_00->fields).PEBHLKLGDBM = iVar1;
    pSVar3 = (__this->fields).OLPNGMAGBGA;
    if (pSVar3 != (System_Collections_Generic_List_long__o *)0x0) {
      local_34 = (pSVar3->fields)._size;
      pSVar2 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat(StringLiteral_6270/*"FakePlayer"*/,pSVar2,(MethodInfo *)0x0);
      GKLPDMLELJF__GCAEKDKFFKK(__this_00,pSVar2,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).OLPNGMAGBGA;
      if (pSVar3 != (System_Collections_Generic_List_long__o *)0x0) {
        local_34 = (pSVar3->fields)._size;
        pSVar2 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
        pSVar2 = System_String__Concat(StringLiteral_6270/*"FakePlayer"*/,pSVar2,(MethodInfo *)0x0);
        GKLPDMLELJF__OFDBFMLANAH(__this_00,pSVar2,(MethodInfo *)0x0);
        (__this_00->fields).ANAJGHJEEOC = JNNGPPKMPFD;
        (__this_00->fields).PFJPLCAIGJH = 2;
        return __this_00;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private NODLJPNGNBG NCJGMHLDGGN(long JNNGPPKMPFD, bool BJKGBDLIDNB, int GDKMGCCMKIE = 0)  [RVA 0x3039BB8]
// RaidViewController$$NCJGMHLDGGN @ RVA 0x3039BB8

NODLJPNGNBG_o *
RaidViewController__NCJGMHLDGGN
          (RaidViewController_o *__this,int64_t JNNGPPKMPFD,bool BJKGBDLIDNB,int32_t GDKMGCCMKIE,
          MethodInfo *method)

{
  NODLJPNGNBG_o *__this_00;
  
  if ((DAT_04565d6b & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&NODLJPNGNBG_TypeInfo);
    DAT_04565d6b = 1;
  }
  __this_00 = (NODLJPNGNBG_o *)thunk_FUN_01bda818(NODLJPNGNBG_TypeInfo);
  NODLJPNGNBG___ctor(__this_00,(MethodInfo *)0x0);
  if (BJKGBDLIDNB) {
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    GDKMGCCMKIE = LIIFLGALGNK__HLMBDJOGONJ(0,100,(MethodInfo *)0x0);
  }
  if (__this_00 != (NODLJPNGNBG_o *)0x0) {
    (__this_00->fields).LINGIJDCLLC = GDKMGCCMKIE;
    (__this_00->fields).ANAJGHJEEOC = JNNGPPKMPFD;
    (__this_00->fields).PFJPLCAIGJH = 1;
    (__this_00->fields).DMFDEJEDMPO = true;
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FHJKIMLIDMP(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3039C78]
// RaidViewController$$FHJKIMLIDMP @ RVA 0x3039C78

void RaidViewController__FHJKIMLIDMP(RaidViewController_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  NDPMLPGANCI_o *__this_00;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *pNVar3;
  
  if ((DAT_04565d6c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<OJHLANCHFPC>__);
    FUN_01bab630(&StringLiteral_10986/*"RaidViewController::OnGetBattleInfo: failed"*/);
    DAT_04565d6c = 1;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    method_00 = (MethodInfo *)0x1;
    NDPMLPGANCI__PHFCKPKDMBK(__this_00,false,true,(MethodInfo *)0x0);
    if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
      bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
      if (!bVar1) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_10986/*"RaidViewController::OnGetBattleInfo: failed"*/,(MethodInfo *)0x0);
        return;
      }
      pNVar3 = (__this->fields).PDEAGAFHDFI;
      if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
        if ((pNVar3->fields)._BOGAKJOFOEK_k__BackingField != false) {
          return;
        }
        pIVar2 = KEFHDOHHHML__PFNEPJAFEDF<object>
                           (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<OJHLANCHFPC>__);
        if (pIVar2 != (Il2CppObject *)0x0) {
          RaidViewController__IGLJNCEHFOI(__this,pIVar2[1].monitor,method_00);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OOIHMJGLOHF(RaidPlayersRoll DCPPLPKKOGF, List<GKLPDMLELJF> KIFIMBGOPFG, int DPJIDNBJIBG, DateTime PJHOLDOLLCN, int LINBBAKAFCP)  [RVA 0x3039D70]
// RaidViewController$$OOIHMJGLOHF @ RVA 0x3039D70

void RaidViewController__OOIHMJGLOHF
               (RaidViewController_o *__this,Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *DCPPLPKKOGF,
               System_Collections_Generic_List_GKLPDMLELJF__o *KIFIMBGOPFG,int32_t DPJIDNBJIBG,
               System_DateTime_o PJHOLDOLLCN,int32_t LINBBAKAFCP,MethodInfo *method)

{
  IFFFKKMMKFO_o *__this_00;
  System_String_array *values;
  System_String_o *pSVar1;
  GKLPDMLELJF_o *pGVar2;
  GKLPDMLELJF_o *__this_01;
  int32_t local_54;
  int64_t local_50;
  int32_t local_48;
  int32_t iStack_44;
  System_DateTime_Fields SStack_38;
  
  local_48 = LINBBAKAFCP;
  iStack_44 = DPJIDNBJIBG;
  SStack_38 = PJHOLDOLLCN.fields._dateData;
  if ((DAT_04565d6d & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GKLPDMLELJF>_get_Item__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_18333/*"fp"*/);
    FUN_01bab630(&StringLiteral_1100/*")"*/);
    FUN_01bab630(&StringLiteral_391/*" dmg="*/);
    FUN_01bab630(&StringLiteral_220/*" ("*/);
    __this = (RaidViewController_o *)FUN_01bab630(&StringLiteral_1377/*"."*/);
    DAT_04565d6d = 1;
  }
  local_50 = 0;
  local_54 = 0;
  if (((KIFIMBGOPFG != (System_Collections_Generic_List_GKLPDMLELJF__o *)0x0) &&
      (__this = (RaidViewController_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)KIFIMBGOPFG,DPJIDNBJIBG,
                           Method_System_Collections_Generic_List<GKLPDMLELJF>_get_Item__),
      DCPPLPKKOGF != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *)0x0)) &&
     (__this_00 = Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__GetPlayerCellInfoForTest
                            (DCPPLPKKOGF,(GKLPDMLELJF_o *)__this,(MethodInfo *)0x0),
     __this = (RaidViewController_o *)0x0, __this_00 != (IFFFKKMMKFO_o *)0x0)) {
    IFFFKKMMKFO__OEHLOKAPCJP(__this_00,PJHOLDOLLCN,(MethodInfo *)0x0);
    (__this_00->fields).JOAHABGBLEF = (float)LINBBAKAFCP;
    __this_01 = (__this_00->fields)._IPNPNPOLCFO_k__BackingField;
    values = (System_String_array *)FUN_01bab718(string___TypeInfo,0xb);
    __this = (RaidViewController_o *)0x0;
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = StringLiteral_18333/*"fp"*/;
        thunk_FUN_01c20e04(values->m_Items);
        pSVar1 = System_Int32__ToString((int32_t)&iStack_44,(MethodInfo *)0x0);
        if (1 < (uint)values->max_length) {
          values->m_Items[1] = pSVar1;
          thunk_FUN_01c20e04(values->m_Items + 1,pSVar1);
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = StringLiteral_167/*" "*/;
            __this = (RaidViewController_o *)thunk_FUN_01c20e04();
            pGVar2 = (__this_00->fields)._IPNPNPOLCFO_k__BackingField;
            if (pGVar2 == (GKLPDMLELJF_o *)0x0) goto LAB_0313a0d0;
            local_50 = (pGVar2->fields).ANAJGHJEEOC;
            pSVar1 = System_Int64__ToString((int64_t)&local_50,(MethodInfo *)0x0);
            if (3 < (uint)values->max_length) {
              values->m_Items[3] = pSVar1;
              thunk_FUN_01c20e04(values->m_Items + 3,pSVar1);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = StringLiteral_391/*" dmg="*/;
                thunk_FUN_01c20e04(values->m_Items + 4);
                pSVar1 = System_Int32__ToString((int32_t)&local_48,(MethodInfo *)0x0);
                if (5 < (uint)values->max_length) {
                  values->m_Items[5] = pSVar1;
                  thunk_FUN_01c20e04(values->m_Items + 5,pSVar1);
                  if (6 < (uint)values->max_length) {
                    values->m_Items[6] = StringLiteral_220/*" ("*/;
                    thunk_FUN_01c20e04();
                    if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    local_54 = System_DateTime__get_Second
                                         ((System_DateTime_o)&SStack_38,(MethodInfo *)0x0);
                    pSVar1 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
                    if (7 < (uint)values->max_length) {
                      values->m_Items[7] = pSVar1;
                      thunk_FUN_01c20e04(values->m_Items + 7,pSVar1);
                      if (8 < (uint)values->max_length) {
                        values->m_Items[8] = StringLiteral_1377/*"."*/;
                        thunk_FUN_01c20e04(values->m_Items + 8);
                        local_54 = System_DateTime__get_Millisecond
                                             ((System_DateTime_o)&SStack_38,(MethodInfo *)0x0);
                        pSVar1 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
                        if (9 < (uint)values->max_length) {
                          values->m_Items[9] = pSVar1;
                          thunk_FUN_01c20e04(values->m_Items + 9,pSVar1);
                          if (10 < (uint)values->max_length) {
                            values->m_Items[10] = StringLiteral_1100/*")"*/;
                            thunk_FUN_01c20e04();
                    /* try { // try from 0313a09c to 0323a0cb has its CatchHandler @ 0313a09c
                       catch() { ... } // from try @ 0313a09c with catch @ 0313a09c
                       catch() { ... } // from try @ 0313a168 with catch @ 0313a09c
                       catch() { ... } // from try @ 0313a19c with catch @ 0313a09c
                       catch() { ... } // from try @ 0313a1f8 with catch @ 0313a09c */
                            __this = (RaidViewController_o *)
                                     System_String__Concat(values,(MethodInfo *)0x0);
                            if (__this_01 != (GKLPDMLELJF_o *)0x0) {
                              GKLPDMLELJF__OFDBFMLANAH
                                        (__this_01,(System_String_o *)__this,(MethodInfo *)0x0);
                              return;
                            }
                            goto LAB_0313a0d0;
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
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0313a0cc to 0323a0d7 has its CatchHandler @ 0313a168 */
      FUN_01bab8d0();
    }
  }
LAB_0313a0d0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private void KNNGEFCLLDP(object IMMNELPBGIF)  [RVA 0x303A0D4]
// RaidViewController$$KNNGEFCLLDP @ RVA 0x303A0D4

void RaidViewController__KNNGEFCLLDP(RaidViewController_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  RaidPaymentService_o *__this_00;
  MEPKDDGONGE_o *__this_01;
  PlayerData_o *pEVar3;
  Google_Protobuf_Collections_RepeatedField_string__o *pGVar4;
  SFRequestSender_o *__this_02;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_03;
  System_String_o *pSVar5;
  
                    /* try { // try from 0313a0dc to 0323a167 has its CatchHandler @ 0313a16c */
  if ((DAT_04565d6e & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_LJNJDFEAIOH_ADLBPEEGLGL__);
    FUN_01bab630(&Method_LJNJDFEAIOH_ELDPIJPEGIL__);
    FUN_01bab630(&MEPKDDGONGE_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<string>_Add__);
    FUN_01bab630(&StringLiteral_20406/*"raid_battle_start_round"*/);
    DAT_04565d6e = 1;
  }
  bVar1 = FIKENOMMMBH__OLAIMOFPEIL(true,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0313a0cc with catch @ 0313a168
                       try { // try from 0313a168 to 0323a183 has its CatchHandler @ 0313a09c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0313a0dc with catch @ 0313a16c
                        */
  if ((!bVar1) || ((__this->fields).NAJFBIBIHDM != false)) {
    return;
  }
                    /* try { // try from 0313a184 to 0323a19b has its CatchHandler @ 0313a1f0 */
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
LAB_0313a2ac:
    __this_01 = (MEPKDDGONGE_o *)thunk_FUN_01bda818(MEPKDDGONGE_TypeInfo);
    MEPKDDGONGE___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 == (MEPKDDGONGE_o *)0x0) goto LAB_0313a3d8;
    (__this_01->fields).CCCDGBNPNOD = 0;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (pEVar3 == (PlayerData_o *)0x0) goto LAB_0313a3d8;
    pSVar5 = (pEVar3->fields).PDHCLFKCAAE;
    pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (pEVar3 == (PlayerData_o *)0x0) goto LAB_0313a3d8;
    iVar2 = PlayerData__OHCGFHJNEGO(pEVar3,pSVar5,(MethodInfo *)0x0);
    bVar1 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
    if ((!bVar1) && (0 < iVar2)) {
      pGVar4 = (__this_01->fields).IECICFJIDPO;
      if (pGVar4 == (Google_Protobuf_Collections_RepeatedField_string__o *)0x0) goto LAB_0313a3d8;
      Google_Protobuf_Collections_RepeatedField<object>__Add
                ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar4,(Il2CppObject *)pSVar5,
                 Method_Google_Protobuf_Collections_RepeatedField<string>_Add__);
    }
    __this_02 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
    BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                  thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
  }
  else {
    if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0313a19c to 0323a1df has its CatchHandler @ 0313a09c */
      thunk_FUN_01ba7564();
    }
    iVar2 = System_Convert__ToInt32(IMMNELPBGIF,(MethodInfo *)0x0);
    if (iVar2 == 0) goto LAB_0313a2ac;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
    if (__this_00 == (RaidPaymentService_o *)0x0) goto LAB_0313a3d8;
                    /* try { // try from 0313a1e0 to 0323a1ef has its CatchHandler @ 0313a1f0 */
    bVar1 = RaidPaymentService__MIBNBHKOIEI(__this_00,iVar2,true,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
                    /* catch() { ... } // from try @ 0313a184 with catch @ 0313a1f0
                       catch() { ... } // from try @ 0313a1e0 with catch @ 0313a1f0 */
                    /* try { // try from 0313a1f4 to 0323a1f7 has its CatchHandler @ 0313a200 */
                    /* try { // try from 0313a1f8 to 0323a203 has its CatchHandler @ 0313a09c */
    __this_01 = (MEPKDDGONGE_o *)thunk_FUN_01bda818(MEPKDDGONGE_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0313a1f4 with catch @ 0313a200
                        */
    MEPKDDGONGE___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 == (MEPKDDGONGE_o *)0x0) goto LAB_0313a3d8;
    (__this_01->fields).CCCDGBNPNOD = iVar2;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (pEVar3 == (PlayerData_o *)0x0) goto LAB_0313a3d8;
    pSVar5 = (pEVar3->fields).PDHCLFKCAAE;
    pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (pEVar3 == (PlayerData_o *)0x0) goto LAB_0313a3d8;
    iVar2 = PlayerData__OHCGFHJNEGO(pEVar3,pSVar5,(MethodInfo *)0x0);
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar5,(MethodInfo *)0x0);
    if ((!bVar1) && (0 < iVar2)) {
      pGVar4 = (__this_01->fields).IECICFJIDPO;
      if (pGVar4 == (Google_Protobuf_Collections_RepeatedField_string__o *)0x0) goto LAB_0313a3d8;
      Google_Protobuf_Collections_RepeatedField<object>__Add
                ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar4,(Il2CppObject *)pSVar5,
                 Method_Google_Protobuf_Collections_RepeatedField<string>_Add__);
    }
    __this_02 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
    BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                  thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
  }
  System_Action<object>___ctor();
  if (__this_02 != (SFRequestSender_o *)0x0) {
    KDPDBGNOFEN__KLNMLOOCAAO
              ((KDPDBGNOFEN_o *)__this_02,StringLiteral_20406/*"raid_battle_start_round"*/,
               (Google_Protobuf_IMessage_o *)__this_01,BLMFLPJJMPF,0.0,(Il2CppObject *)0x0,
               (MethodInfo *)0x0);
    __this_03 = (__this->fields).PDEAGAFHDFI;
    (__this->fields).NAJFBIBIHDM = true;
    if (__this_03 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__SetButtonsEnabled
                (__this_03,false,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0313a3d8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KBAHEGDFCBI(NODLJPNGNBG OGFALADNBHC)  [RVA 0x3038EE0]
// RaidViewController$$KBAHEGDFCBI @ RVA 0x3038EE0

void RaidViewController__KBAHEGDFCBI(RaidViewController_o *__this,NODLJPNGNBG_o *OGFALADNBHC,MethodInfo *method)

{
  HCKCBFOGMMJ_o *__this_00;
  GKLPDMLELJF_o *HEHMPFLAEGE;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *pNVar1;
  
  if ((DAT_04565d6f & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565d6f = 1;
  }
  pNVar1 = (__this->fields).PDEAGAFHDFI;
  if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
    if ((pNVar1->fields)._BOGAKJOFOEK_k__BackingField != false) {
      return;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
    if ((OGFALADNBHC != (NODLJPNGNBG_o *)0x0) && (__this_00 != (HCKCBFOGMMJ_o *)0x0)) {
      HEHMPFLAEGE = HCKCBFOGMMJ__LLEJFHJIBHC
                              (__this_00,(OGFALADNBHC->fields).ANAJGHJEEOC,(MethodInfo *)0x0);
      if (HEHMPFLAEGE == (GKLPDMLELJF_o *)0x0) {
        return;
      }
      pNVar1 = (__this->fields).PDEAGAFHDFI;
      if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
        Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__InsertPlayer
                  (pNVar1,OGFALADNBHC,HEHMPFLAEGE,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x303A3DC]
// RaidViewController$$.cctor @ RVA 0x303A3DC

void RaidViewController___cctor(MethodInfo *method)

{
  RaidViewController_StaticFields *pLVar1;
  
  if ((DAT_04565d70 & 1) == 0) {
    FUN_01bab630(&RaidViewController_TypeInfo);
    DAT_04565d70 = 1;
  }
  pLVar1 = RaidViewController_TypeInfo->static_fields;
  pLVar1->LBFAFGHJJLP = 100.0;
  pLVar1->GDAKHPBBPAE = true;
  return;
}


// ===== private void HDMPAKAHHJG(AADKBCFCLKK IIPPMAOIKHB)  [RVA 0x303A430]
// RaidViewController$$HDMPAKAHHJG @ RVA 0x303A430

void RaidViewController__HDMPAKAHHJG(RaidViewController_o *__this,AADKBCFCLKK_o *IIPPMAOIKHB,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *__this_00;
  NODLJPNGNBG_o *OGFALADNBHC;
  MethodInfo *method_00;
  int index;
  
  if ((DAT_04565d71 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Item__);
    DAT_04565d71 = 1;
  }
  if ((IIPPMAOIKHB != (AADKBCFCLKK_o *)0x0) &&
     (__this_00 = (IIPPMAOIKHB->fields).MPAIPMANDEO,
     __this_00 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0)) {
    iVar1 = (__this_00->fields).count;
    if (iVar1 < 1) {
      return;
    }
    index = 0;
    do {
      method_00 = Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Item__;
      OGFALADNBHC = (NODLJPNGNBG_o *)
                    Google_Protobuf_Collections_RepeatedField<object>__get_Item
                              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,index,
                               (MethodInfo_295F6AC *)
                               Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_get_Item__
                              );
      RaidViewController__KBAHEGDFCBI(__this,OGFALADNBHC,method_00);
      if (iVar1 + -1 == index) {
        return;
      }
      __this_00 = (IIPPMAOIKHB->fields).MPAIPMANDEO;
      index = index + 1;
    } while (__this_00 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CPMHIEJENLD(AADKBCFCLKK DKMMBMBMJBO)  [RVA 0x303A4D4]
// RaidViewController$$CPMHIEJENLD @ RVA 0x303A4D4

void RaidViewController__CPMHIEJENLD(RaidViewController_o *__this,AADKBCFCLKK_o *DKMMBMBMJBO,MethodInfo *method)

{
  bool bVar1;
  int64_t iVar2;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *pNVar3;
  
  iVar2 = OOBBAGLCFPF__ACNOPBOADGE(DKMMBMBMJBO,(MethodInfo *)0x0);
  bVar1 = OOBBAGLCFPF__FLMDOPMDKID(DKMMBMBMJBO,(MethodInfo *)0x0);
  pNVar3 = (__this->fields).PDEAGAFHDFI;
  if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
    if (bVar1) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__SetRaidEndedState
                (pNVar3,false,(MethodInfo *)0x0);
      return;
    }
    Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__UpdateTimer
              (pNVar3,(int)(SUB168(SEXT816(iVar2) * SEXT816(0x20c49ba5e353f7cf),8) >> 7) -
                      (SUB164(SEXT816(iVar2) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f),
               (MethodInfo *)0x0);
    pNVar3 = (__this->fields).PDEAGAFHDFI;
    bVar1 = OOBBAGLCFPF__IFFNMNFGOII(DKMMBMBMJBO,(MethodInfo *)0x0);
    if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__SetTimerVisible
                (pNVar3,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DNGIFOCGGCN(int OGPGLGPMEPD, float LFJGFLNMBMC)  [RVA 0x303A584]
// RaidViewController$$DNGIFOCGGCN @ RVA 0x303A584

void RaidViewController__DNGIFOCGGCN
               (RaidViewController_o *__this,int32_t OGPGLGPMEPD,float LFJGFLNMBMC,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *pNVar1;
  
  pNVar1 = (__this->fields).PDEAGAFHDFI;
  if ((pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) &&
     (__this_00 = (pNVar1->fields)._raidPlayersRoll,
     __this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *)0x0)) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__ScrollToItem
              (__this_00,OGPGLGPMEPD,LFJGFLNMBMC,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NKLNDGMMAAH(object IMMNELPBGIF)  [RVA 0x303A5A8]
// RaidViewController$$NKLNDGMMAAH @ RVA 0x303A5A8

void RaidViewController__NKLNDGMMAAH(RaidViewController_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  RaidViewController__HDMPAKAHHJG(__this,(__this->fields).IHODMKCBNKJ,method);
  return;
}


// ===== private void JGLGAMMLMGF(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x303A5B0]
// RaidViewController$$JGLGAMMLMGF @ RVA 0x303A5B0

void RaidViewController__JGLGAMMLMGF(RaidViewController_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  GKLPDMLELJF_o *HEHMPFLAEGE;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_00;
  
  if ((DAT_04565d72 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<GKLPDMLELJF>__);
    FUN_01bab630(&StringLiteral_20021/*"onRefreshPlayerEvent fail"*/);
    DAT_04565d72 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_20021/*"onRefreshPlayerEvent fail"*/,(MethodInfo *)0x0);
      return;
    }
    __this_00 = (__this->fields).PDEAGAFHDFI;
    if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
      if ((__this_00->fields)._BOGAKJOFOEK_k__BackingField != false) {
        return;
      }
      HEHMPFLAEGE = (GKLPDMLELJF_o *)
                    KEFHDOHHHML__PFNEPJAFEDF<object>
                              (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<GKLPDMLELJF>__);
      Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__UpdateInsertedPlayer
                (__this_00,HEHMPFLAEGE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MDFHMNAMALM(RaidViewContainer IMMNELPBGIF)  [RVA 0x303A68C]
// RaidViewController$$MDFHMNAMALM @ RVA 0x303A68C

void RaidViewController__MDFHMNAMALM
               (RaidViewController_o *__this,Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *IMMNELPBGIF,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  CNLGMNIEGFG_o *pCVar4;
  FCBPECGCJLN_o *__this_00;
  int64_t iVar5;
  OHDDKGHEEPA_o **ppOVar6;
  Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *__this_01;
  System_Action_T__o *IELDNEAAPBE;
  MethodInfo *method_00;
  OHDDKGHEEPA_o *__this_02;
  AADKBCFCLKK_o *DKMMBMBMJBO;
  
  if ((DAT_04565d73 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&FCBPECGCJLN_TypeInfo);
    FUN_01bab630(&Method_LJNJDFEAIOH_KNNGEFCLLDP__);
    FUN_01bab630(&RaidViewController_TypeInfo);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    DAT_04565d73 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)IMMNELPBGIF,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (!bVar2) {
    DKMMBMBMJBO = (__this->fields).IHODMKCBNKJ;
    iVar3 = (__this->fields).EIMPNFFLONC;
    if ((RaidViewController_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar4 = RaidViewController__APFDLGPHDBN(DKMMBMBMJBO,iVar3,method_00);
    if (pCVar4 == (CNLGMNIEGFG_o *)0x0) {
LAB_0313a920:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_02 = (OHDDKGHEEPA_o *)(pCVar4->fields).super.IFJLLGPGMHM;
    if (__this_02 != (OHDDKGHEEPA_o *)0x0) {
      bVar1 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
      if ((bVar1 <= (__this_02->klass->_2).naturalAligment) &&
         ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)OHDDKGHEEPA_TypeInfo)) {
        __this_00 = (FCBPECGCJLN_o *)thunk_FUN_01bda818(FCBPECGCJLN_TypeInfo);
        FCBPECGCJLN___ctor(__this_00,(MethodInfo *)0x0);
        iVar5 = OOBBAGLCFPF__ACNOPBOADGE((__this->fields).IHODMKCBNKJ,(MethodInfo *)0x0);
        if (__this_00 != (FCBPECGCJLN_o *)0x0) {
          (__this_00->fields).CFGEFEGPPEI = iVar5;
          (__this_00->fields).IGMDDJFPIJL = (__this->fields).IHODMKCBNKJ;
          thunk_FUN_01c20e04();
          ppOVar6 = &(__this_00->fields).MIFNFJDIPBL;
          *ppOVar6 = __this_02;
          thunk_FUN_01c20e04(ppOVar6,__this_02);
          __this_01 = (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *)
                      DialogsOpener__FONHJEMPEEC(__this_00,(MethodInfo *)0x0);
          if (__this_01 != (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *)0x0) {
            bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_TypeInfo->_2).
                    naturalAligment;
            if (((__this_01->klass->_2).naturalAligment < bVar1) ||
               ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(__this_01);
            }
          }
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar2 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (bVar2) {
            return;
          }
          if (((__this_02 != (OHDDKGHEEPA_o *)0x0) &&
              (iVar3 = OHDDKGHEEPA__MFPFLDMMJII(__this_02,(MethodInfo *)0x0),
              __this_01 != (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *)0x0)) &&
             (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__SetBtnFightValueBorders_MS
                        (__this_01,0,(long)(iVar3 * 1000),(MethodInfo *)0x0),
             IMMNELPBGIF != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0)) {
            iVar5 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__GetCooldownFinishTime
                              (IMMNELPBGIF,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__UpdateCooldownFinishTime
                      (__this_01,iVar5,(MethodInfo *)0x0);
            IELDNEAAPBE = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
            System_Action<object>___ctor();
            Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                      ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this_01,1,IELDNEAAPBE,
                       Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
            return;
          }
        }
        goto LAB_0313a920;
      }
    }
  }
  return;
}


// ===== private void ECOKPPHJIIH(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x303A92C]
// RaidViewController$$ECOKPPHJIIH @ RVA 0x303A92C

void RaidViewController__ECOKPPHJIIH(RaidViewController_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *pNVar3;
  
  if ((DAT_04565d74 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<OJFPEINHCDP>__);
    FUN_01bab630(&StringLiteral_20000/*"onBattleFinishRoundEvent fail"*/);
    DAT_04565d74 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_20000/*"onBattleFinishRoundEvent fail"*/,(MethodInfo *)0x0);
      return;
    }
    pNVar3 = (__this->fields).PDEAGAFHDFI;
    if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
      if ((pNVar3->fields)._BOGAKJOFOEK_k__BackingField != false) {
        return;
      }
      pIVar2 = KEFHDOHHHML__PFNEPJAFEDF<object>
                         (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<OJFPEINHCDP>__);
      if (pIVar2 != (Il2CppObject *)0x0) {
        RaidViewController__MHJKLCKMFMO(__this,(KDADMJGPAOM_o *)pIVar2[2].klass,method);
        RaidViewController__KBAHEGDFCBI(__this,pIVar2[1].monitor,method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DLHAPMJGHKJ(int DFIBGGDJPLM, bool BJKGBDLIDNB)  [RVA 0x303AA18]
// RaidViewController$$DLHAPMJGHKJ @ RVA 0x303AA18

void RaidViewController__DLHAPMJGHKJ
               (RaidViewController_o *__this,int32_t DFIBGGDJPLM,bool BJKGBDLIDNB,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  RaidViewController_o *__this_00;
  NODLJPNGNBG_o *OGFALADNBHC;
  GKLPDMLELJF_o *HEHMPFLAEGE;
  System_Collections_Generic_List_long__o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *pMVar3;
  MethodInfo *in_x4;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_02;
  System_Int64_array *pSVar4;
  MethodInfo *pMVar5;
  
  pMVar5 = (MethodInfo *)(ulong)(uint)DFIBGGDJPLM;
  pMVar3 = pMVar5;
  if ((DAT_04565d75 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<long>_Add__);
    DAT_04565d75 = 1;
    pMVar3 = extraout_x1;
  }
  if (0 < DFIBGGDJPLM) {
    do {
      __this_00 = (RaidViewController_o *)RaidViewController__APABHPNCNHF(__this,pMVar3);
      pMVar3 = (MethodInfo *)(ulong)BJKGBDLIDNB;
      OGFALADNBHC = RaidViewController__NCJGMHLDGGN(__this_00,(int64_t)__this_00,BJKGBDLIDNB,0,in_x4);
      HEHMPFLAEGE = RaidViewController__LDFPGIIGDHK(__this,(int64_t)__this_00,pMVar3);
      __this_02 = (__this->fields).PDEAGAFHDFI;
      if (__this_02 == (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
LAB_0313ab24:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__InsertPlayer
                (__this_02,OGFALADNBHC,HEHMPFLAEGE,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<long>_Add__;
      __this_01 = (__this->fields).OLPNGMAGBGA;
      if (__this_01 == (System_Collections_Generic_List_long__o *)0x0) goto LAB_0313ab24;
      pSVar4 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pSVar4 == (System_Int64_array *)0x0) goto LAB_0313ab24;
      uVar1 = (__this_01->fields)._size;
      if (uVar1 < (uint)pSVar4->max_length) {
        (__this_01->fields)._size = uVar1 + 1;
        pSVar4->m_Items[(int)uVar1] = (int64_t)__this_00;
        pMVar3 = extraout_x1_00;
      }
      else {
        System_Collections_Generic_List<long>__AddWithResize
                  (__this_01,(int64_t)__this_00,
                   *(MethodInfo_26CC7E4 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        pMVar3 = extraout_x1_01;
      }
      uVar1 = (int)pMVar5 - 1;
      pMVar5 = (MethodInfo *)(ulong)uVar1;
    } while (uVar1 != 0);
  }
  return;
}


// ===== private IEnumerator NANCBNHCOBH(long FNHHIEKCLPI, int OICBCFGIIOA)  [RVA 0x30399BC]
// RaidViewController$$NANCBNHCOBH @ RVA 0x30399BC

System_Collections_IEnumerator_o *
RaidViewController__NANCBNHCOBH
          (RaidViewController_o *__this,int64_t FNHHIEKCLPI,int32_t OICBCFGIIOA,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((DAT_04565d76 & 1) == 0) {
    FUN_01bab630(&RaidViewController_JKABJMLCHEL_TypeInfo);
    DAT_04565d76 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(RaidViewController_JKABJMLCHEL_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)FNHHIEKCLPI;
  *(int32_t *)&__this_00[2].monitor = OICBCFGIIOA;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== private long APABHPNCNHF()  [RVA 0x303AB28]
// RaidViewController$$APABHPNCNHF @ RVA 0x303AB28

int64_t RaidViewController__APABHPNCNHF(RaidViewController_o *__this,MethodInfo *method)

{
  long OGPGLGPMEPD;
  bool bVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_00;
  
  if ((DAT_04565d77 & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    DAT_04565d77 = 1;
  }
  while( true ) {
    do {
      if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = LIIFLGALGNK__HLMBDJOGONJ(0x7fffffff,(MethodInfo *)0x0);
      OGPGLGPMEPD = (long)iVar2 + 0x3fffffffffffffff;
    } while (OGPGLGPMEPD < 0);
    __this_00 = (__this->fields).PDEAGAFHDFI;
    if (__this_00 == (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) break;
    bVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__HasPlayer
                      (__this_00,OGPGLGPMEPD,(MethodInfo *)0x0);
    if (!bVar1) {
      return OGPGLGPMEPD;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ELDPIJPEGIL(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x303913C]
// RaidViewController$$ELDPIJPEGIL @ RVA 0x303913C

void RaidViewController__ELDPIJPEGIL(RaidViewController_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  int32_t MOLGLNLBAIB;
  bool bVar1;
  NDPMLPGANCI_o *__this_00;
  RaidManager_o *__this_01;
  CNLGMNIEGFG_o *FBFPLEFCDOK;
  CPNHNIKFGFB_o *__this_02;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_03;
  MethodInfo *method_00;
  AADKBCFCLKK_o *DKMMBMBMJBO;
  
  if ((DAT_04565d78 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&RaidViewController_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04565d78 = 1;
  }
  (__this->fields).NAJFBIBIHDM = false;
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (bVar1) {
      __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 != (NDPMLPGANCI_o *)0x0) {
        NDPMLPGANCI__KJGGEPNHOBK(__this_00,(MethodInfo *)0x0);
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_01 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
        if (__this_01 != (RaidManager_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          RaidManager__PNLACGIDHPI(__this_01,2,(MethodInfo *)0x0);
          DKMMBMBMJBO = (__this->fields).IHODMKCBNKJ;
          MOLGLNLBAIB = (__this->fields).EIMPNFFLONC;
          if ((RaidViewController_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          FBFPLEFCDOK = RaidViewController__APFDLGPHDBN(DKMMBMBMJBO,MOLGLNLBAIB,method_00);
          if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(GameUtils_TypeInfo);
          }
          GameUtils__EEGOPNGLBMJ
                    ((FightList_o *)FBFPLEFCDOK,false,(OOMHDDBCBJP_o *)0x0,true,true,false,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      __this_02 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_02 != (CPNHNIKFGFB_o *)0x0) {
        CPNHNIKFGFB__DIGPCFKCCBK(__this_02,0x29c8,(MethodInfo *)0x0);
        __this_03 = (__this->fields).PDEAGAFHDFI;
        if (__this_03 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__SetButtonsEnabled
                    (__this_03,true,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DNMKNNNIOJB()  [RVA 0x303ABEC]
// RaidViewController$$DNMKNNNIOJB @ RVA 0x303ABEC

void RaidViewController__DNMKNNNIOJB(RaidViewController_o *__this,MethodInfo *method)

{
  RaidManager_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *IMMNELPBGIF;
  MethodInfo *method_00;
  
  if ((DAT_04565d79 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565d79 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (__this_00 != (RaidManager_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    RaidManager__OJOMBBENIHM(__this_00,false,(MethodInfo *)0x0);
    RaidViewController__CKNOFAMLBDE(__this,IMMNELPBGIF,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OAPADFFJJCH(AADKBCFCLKK IIPPMAOIKHB)  [RVA 0x3038CC4]
// RaidViewController$$OAPADFFJJCH @ RVA 0x3038CC4

void RaidViewController__OAPADFFJJCH(RaidViewController_o *__this,AADKBCFCLKK_o *IIPPMAOIKHB,MethodInfo *method)

{
  bool bVar1;
  NODLJPNGNBG_o *pNVar2;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_00;
  DialogsManager_o *__this_01;
  UnityEngine_Object_o *x;
  undefined8 uVar3;
  UnityEngine_Object_c *pUVar4;
  
  if ((DAT_04565d7a & 1) == 0) {
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<RaidBuyConsumablesDialog>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565d7a = 1;
  }
  bVar1 = OOBBAGLCFPF__FLMDOPMDKID(IIPPMAOIKHB,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if (((IIPPMAOIKHB != (AADKBCFCLKK_o *)0x0) &&
      (pNVar2 = RaidManager__AFHLHFMLNEO
                          ((System_Collections_Generic_IList_NODLJPNGNBG__o *)
                           (IIPPMAOIKHB->fields).MPAIPMANDEO,(MethodInfo *)0x0),
      pNVar2 != (NODLJPNGNBG_o *)0x0)) &&
     (__this_00 = (__this->fields).PDEAGAFHDFI,
     __this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0)) {
                    /* try { // try from 03138d40 to 03238d4f has its CatchHandler @ 03138d7c */
    Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__SetRaidEndedState
              (__this_00,(pNVar2->fields).PMMFPJJOPKE != (ICBMOMGINFH_o *)0x0,(MethodInfo *)0x0);
    __this_01 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_01 != (DialogsManager_o *)0x0) {
                    /* try { // try from 03138d50 to 03238d93 has its CatchHandler @ 03138c34 */
      x = (UnityEngine_Object_o *)
          DialogsManager__BFJGHKKGOJC<object>
                    (__this_01,Method_GCIFMNHADDF_BFJGHKKGOJC<RaidBuyConsumablesDialog>__);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03138d40 with catch @ 03138d7c
                        */
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
                    /* try { // try from 03138d94 to 03238dab has its CatchHandler @ 03138de8 */
      if (x != (UnityEngine_Object_o *)0x0) {
        pUVar4 = x->klass;
        uVar3._0_4_ = pUVar4[1]._2.static_fields_size;
        uVar3._4_4_ = pUVar4[1]._2.thread_static_fields_size;
                    /* try { // try from 03138dac to 03238dd7 has its CatchHandler @ 03138c34 */
                    /* WARNING: Could not recover jumptable at 0x03138db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)&pUVar4[1]._2.element_size)(x,uVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BIFIGDCAHGN()  [RVA 0x303AC5C]
// RaidViewController$$BIFIGDCAHGN @ RVA 0x303AC5C

void RaidViewController__BIFIGDCAHGN(RaidViewController_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_GKLPDMLELJF__o *KIFIMBGOPFG;
  RaidViewController_o *__this_00;
  NODLJPNGNBG_o *OGFALADNBHC;
  GKLPDMLELJF_o *HEHMPFLAEGE;
  System_Collections_Generic_List_long__o *__this_01;
  System_DateTime_o PJHOLDOLLCN;
  RaidViewController_o *__this_02;
  RaidViewController_o *__this_03;
  RaidViewController_o *__this_04;
  RaidViewController_o *__this_05;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *pMVar3;
  MethodInfo *in_x4;
  MethodInfo *in_x6;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *pNVar4;
  System_Int64_array *pSVar5;
  GKLPDMLELJF_array *pGVar6;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *DCPPLPKKOGF;
  int iVar7;
  System_DateTime_Fields local_58;
  
  if ((DAT_04565d7b & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GKLPDMLELJF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<long>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GKLPDMLELJF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<GKLPDMLELJF>_TypeInfo);
    DAT_04565d7b = 1;
    method = extraout_x1;
  }
  local_58._dateData = 0;
  KIFIMBGOPFG = (System_Collections_Generic_List_GKLPDMLELJF__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<GKLPDMLELJF>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)KIFIMBGOPFG,
             Method_System_Collections_Generic_List<GKLPDMLELJF>__ctor__);
  iVar7 = 5;
  pMVar3 = extraout_x1_00;
  do {
    __this_00 = (RaidViewController_o *)RaidViewController__APABHPNCNHF(__this,pMVar3);
    pMVar3 = (MethodInfo *)0x0;
    OGFALADNBHC = RaidViewController__NCJGMHLDGGN(__this_00,(int64_t)__this_00,false,500,in_x4);
    HEHMPFLAEGE = RaidViewController__LDFPGIIGDHK(__this,(int64_t)__this_00,pMVar3);
    pNVar4 = (__this->fields).PDEAGAFHDFI;
    if (pNVar4 == (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) goto LAB_0313aee8;
    Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__InsertPlayer
              (pNVar4,OGFALADNBHC,HEHMPFLAEGE,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<long>_Add__;
    __this_01 = (__this->fields).OLPNGMAGBGA;
    if (__this_01 == (System_Collections_Generic_List_long__o *)0x0) goto LAB_0313aee8;
    pSVar5 = (__this_01->fields)._items;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pSVar5 == (System_Int64_array *)0x0) goto LAB_0313aee8;
    uVar1 = (__this_01->fields)._size;
    if (uVar1 < (uint)pSVar5->max_length) {
      (__this_01->fields)._size = uVar1 + 1;
      pSVar5->m_Items[(int)uVar1] = (int64_t)__this_00;
    }
    else {
      System_Collections_Generic_List<long>__AddWithResize
                (__this_01,(int64_t)__this_00,
                 *(MethodInfo_26CC7E4 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    lVar2 = Method_System_Collections_Generic_List<GKLPDMLELJF>_Add__;
    if (KIFIMBGOPFG == (System_Collections_Generic_List_GKLPDMLELJF__o *)0x0) goto LAB_0313aee8;
    pGVar6 = (KIFIMBGOPFG->fields)._items;
    (KIFIMBGOPFG->fields)._version = (KIFIMBGOPFG->fields)._version + 1;
    if (pGVar6 == (GKLPDMLELJF_array *)0x0) goto LAB_0313aee8;
    uVar1 = (KIFIMBGOPFG->fields)._size;
    if (uVar1 < (uint)pGVar6->max_length) {
      (KIFIMBGOPFG->fields)._size = uVar1 + 1;
      pGVar6->m_Items[(int)uVar1] = HEHMPFLAEGE;
      thunk_FUN_01c20e04(pGVar6->m_Items + (int)uVar1,HEHMPFLAEGE);
      pMVar3 = extraout_x1_01;
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)KIFIMBGOPFG,
                 (Il2CppObject *)HEHMPFLAEGE,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      pMVar3 = extraout_x1_02;
    }
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  pNVar4 = (__this->fields).PDEAGAFHDFI;
  if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
    DCPPLPKKOGF = (pNVar4->fields)._raidPlayersRoll;
    if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_58._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
    PJHOLDOLLCN = System_DateTime__AddSeconds((System_DateTime_o)&local_58,1.0,(MethodInfo *)0x0);
    RaidViewController__OOIHMJGLOHF
              ((RaidViewController_o *)PJHOLDOLLCN.fields._dateData,DCPPLPKKOGF,KIFIMBGOPFG,0,
               (System_DateTime_o)local_58._dateData,500,in_x6);
    RaidViewController__OOIHMJGLOHF
              (__this_02,DCPPLPKKOGF,KIFIMBGOPFG,1,(System_DateTime_o)local_58._dateData,0x1f5,in_x6
              );
    RaidViewController__OOIHMJGLOHF(__this_03,DCPPLPKKOGF,KIFIMBGOPFG,2,PJHOLDOLLCN,500,in_x6);
    RaidViewController__OOIHMJGLOHF(__this_04,DCPPLPKKOGF,KIFIMBGOPFG,3,PJHOLDOLLCN,0x1f5,in_x6);
    RaidViewController__OOIHMJGLOHF(__this_05,DCPPLPKKOGF,KIFIMBGOPFG,4,PJHOLDOLLCN,0x1f5,in_x6);
    return;
  }
LAB_0313aee8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CKNOFAMLBDE(RaidViewContainer IMMNELPBGIF)  [RVA 0x30385D0]
// RaidViewController$$CKNOFAMLBDE @ RVA 0x30385D0

void RaidViewController__CKNOFAMLBDE
               (RaidViewController_o *__this,Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *IMMNELPBGIF,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_00;
  MethodInfo *method_00;
  
  RaidViewController__BHCEMNBGKGA(__this,(MethodInfo *)IMMNELPBGIF);
  RaidViewController__OJOMBBENIHM(__this,method_00);
  __this_00 = (__this->fields).PDEAGAFHDFI;
  if (__this_00 == (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((__this_00->fields)._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__Close(__this_00,(MethodInfo *)0x0);
  return;
}


// ===== private void APOKKNPGGNP()  [RVA 0x3037FE8]
// RaidViewController$$APOKKNPGGNP @ RVA 0x3037FE8

void RaidViewController__APOKKNPGGNP(RaidViewController_o *__this,MethodInfo *method)

{
  bool bVar1;
  NDPMLPGANCI_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this_01;
  ChatManager_o *__this_02;
  
  if ((DAT_04565d7c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10988/*"RaidViewController::SetupChat: chat was not created"*/);
    DAT_04565d7c = 1;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__DHMIJAAHPEI(__this_00,(MethodInfo *)0x0);
    if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_10988/*"RaidViewController::SetupChat: chat was not created"*/,(MethodInfo *)0x0);
      return;
    }
    if (__this_01 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CreateChatChannel
                (__this_01,2,true,(MethodInfo *)0x0);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
      if (__this_02 != (ChatManager_o *)0x0) {
        ChatManager__MCAIDEFDJHF(__this_02,(__this->fields).IHODMKCBNKJ,(MethodInfo *)0x0);
        NDPMLPGANCI__NPDADBCINPL(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IGLJNCEHFOI(AADKBCFCLKK DKMMBMBMJBO)  [RVA 0x3037EE4]
// RaidViewController$$IGLJNCEHFOI @ RVA 0x3037EE4

void RaidViewController__IGLJNCEHFOI(RaidViewController_o *__this,AADKBCFCLKK_o *DKMMBMBMJBO,MethodInfo *method)

{
  AADKBCFCLKK_o **ppAVar1;
  RaidManager_o *pCVar2;
  PlayerData_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
                    /* try { // try from 03137ef0 to 03237eff has its CatchHandler @ 03137f14 */
                    /* try { // try from 03137f00 to 03237f1b has its CatchHandler @ 03137f94 */
                    /* catch() { ... } // from try @ 03137e60 with catch @ 03137f08 */
  if ((DAT_04565d7d & 1) == 0) {
                    /* catch() { ... } // from try @ 03137e98 with catch @ 03137f14
                       catch() { ... } // from try @ 03137ef0 with catch @ 03137f14 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 03137f1c to 03237f3b has its CatchHandler @ 03137ae0 */
    DAT_04565d7d = 1;
  }
                    /* catch() { ... } // from try @ 03137bbc with catch @ 03137f20 */
  ppAVar1 = &(__this->fields).IHODMKCBNKJ;
                    /* catch() { ... } // from try @ 03137c54 with catch @ 03137f24 */
  *ppAVar1 = DKMMBMBMJBO;
  thunk_FUN_01c20e04(ppAVar1,DKMMBMBMJBO);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03137f3c to 03237f3f has its CatchHandler @ 03137f68 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03137f40 to 03237f77 has its CatchHandler @ 03137ae0 */
  pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (pCVar2 != (RaidManager_o *)0x0) {
    RaidManager__PNLACGIDHPI(pCVar2,1,(MethodInfo *)0x0);
    if (DKMMBMBMJBO == (AADKBCFCLKK_o *)0x0) {
      return;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03137f3c with catch @ 03137f68 */
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 != (PlayerData_o *)0x0) {
                    /* try { // try from 03137f78 to 03237f7f has its CatchHandler @ 03137f94 */
                    /* try { // try from 03137f80 to 03237f8b has its CatchHandler @ 03137ae0 */
      PlayerData__JJBFCLBGNBO(__this_00,(DKMMBMBMJBO->fields).AMKHEHFFAKJ,(MethodInfo *)0x0);
      pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                    /* try { // try from 03137f8c to 03237f93 has its CatchHandler @ 03137f94 */
      if (pCVar2 != (RaidManager_o *)0x0) {
                    /* catch() { ... } // from try @ 03137e78 with catch @ 03137f94
                       catch() { ... } // from try @ 03137f00 with catch @ 03137f94
                       catch() { ... } // from try @ 03137f78 with catch @ 03137f94
                       catch() { ... } // from try @ 03137f8c with catch @ 03137f94 */
        method_01 = (MethodInfo *)0x0;
        RaidManager__KDLABEFIDFG(pCVar2,DKMMBMBMJBO,(MethodInfo *)0x0);
        RaidViewController__OAPADFFJJCH(__this,DKMMBMBMJBO,method_01);
        RaidViewController__MHJKLCKMFMO(__this,(DKMMBMBMJBO->fields).LHFLMBNKPHF,method_01);
        RaidViewController__CPMHIEJENLD(__this,DKMMBMBMJBO,method_01);
        RaidViewController__KGKDFGCGHPC(__this,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

