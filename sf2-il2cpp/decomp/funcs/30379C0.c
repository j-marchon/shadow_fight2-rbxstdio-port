// LJNJDFEAIOH$$.ctor @ RVA 0x30379C0

void LJNJDFEAIOH___ctor(LJNJDFEAIOH_o *__this,
                       Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *MIJCJJCICDA,
                       AADKBCFCLKK_o *DKMMBMBMJBO,MethodInfo *method)

{
  int32_t KLFKDPIOMIE;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_IEnumerator__o **ppSVar1;
  System_Collections_Generic_List_long__o *__this_01;
  System_Collections_Generic_List_long__o **ppSVar2;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *pNVar3;
  KKLJIDJBFEI_o *pKVar4;
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
    FUN_01bab630(&StringLiteral_20399);
    FUN_01bab630(&StringLiteral_20480);
    FUN_01bab630(&StringLiteral_20481);
    FUN_01bab630(&StringLiteral_20396);
    FUN_01bab630(&StringLiteral_20397);
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
      LJNJDFEAIOH__IGLJNCEHFOI(__this,DKMMBMBMJBO,pMVar8);
      pKVar4 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                    /* try { // try from 03137bdc to 03237be7 has its CatchHandler @ 03137e38 */
      pSVar5 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (pKVar4 != (KKLJIDJBFEI_o *)0x0) {
                    /* try { // try from 03137bfc to 03237c07 has its CatchHandler @ 03137e2c */
        KKLJIDJBFEI__HKAALOKPBPG(pKVar4,pSVar5,(MethodInfo *)0x0);
        pKVar4 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        pSVar5 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pKVar4 != (KKLJIDJBFEI_o *)0x0) {
          KKLJIDJBFEI__KGJHOLAEPAI(pKVar4,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 03137c54 to 03237c87 has its CatchHandler @ 03137f24 */
          pKVar4 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
          if (pKVar4 != (KKLJIDJBFEI_o *)0x0) {
            pDVar10 = (pKVar4->fields).super.FNHOHLGNHGN;
            pSVar6 = (System_Action_KEFHDOHHHML__o *)
                     thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
                    /* try { // try from 03137c88 to 03237cc7 has its CatchHandler @ 03137ae0 */
            System_Action<object>___ctor();
            if (pDVar10 != (DCHAJIMIFHP_o *)0x0) {
              DCHAJIMIFHP__MPFFOIIBAKO(pDVar10,StringLiteral_20399,pSVar6,(MethodInfo *)0x0);
              pKVar4 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
              if (pKVar4 != (KKLJIDJBFEI_o *)0x0) {
                pDVar10 = (pKVar4->fields).super.FNHOHLGNHGN;
                    /* try { // try from 03137cc8 to 03237ccf has its CatchHandler @ 03137e18 */
                pSVar6 = (System_Action_KEFHDOHHHML__o *)
                         thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
                System_Action<object>___ctor();
                if (pDVar10 != (DCHAJIMIFHP_o *)0x0) {
                    /* try { // try from 03137cfc to 03237d03 has its CatchHandler @ 03137e44 */
                  DCHAJIMIFHP__MPFFOIIBAKO(pDVar10,StringLiteral_20480,pSVar6,(MethodInfo *)0x0);
                  pKVar4 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                  if (pKVar4 != (KKLJIDJBFEI_o *)0x0) {
                    pDVar10 = (pKVar4->fields).super.FNHOHLGNHGN;
                    pSVar6 = (System_Action_KEFHDOHHHML__o *)
                             thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
                    /* try { // try from 03137d20 to 03237d2b has its CatchHandler @ 03137e28 */
                    System_Action<object>___ctor();
                    if (pDVar10 != (DCHAJIMIFHP_o *)0x0) {
                    /* try { // try from 03137d40 to 03237d4b has its CatchHandler @ 03137e34 */
                      DCHAJIMIFHP__MPFFOIIBAKO(pDVar10,StringLiteral_20481,pSVar6,(MethodInfo *)0x0)
                      ;
                      pKVar4 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                      if (pKVar4 != (KKLJIDJBFEI_o *)0x0) {
                        pDVar10 = (pKVar4->fields).super.FNHOHLGNHGN;
                        pSVar6 = (System_Action_KEFHDOHHHML__o *)
                                 thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
                        System_Action<object>___ctor();
                        if (pDVar10 != (DCHAJIMIFHP_o *)0x0) {
                    /* try { // try from 03137d98 to 03237dcb has its CatchHandler @ 03137e40 */
                          DCHAJIMIFHP__MPFFOIIBAKO
                                    (pDVar10,StringLiteral_20397,pSVar6,(MethodInfo *)0x0);
                          pKVar4 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                          if (pKVar4 != (KKLJIDJBFEI_o *)0x0) {
                            pDVar10 = (pKVar4->fields).super.FNHOHLGNHGN;
                            pSVar6 = (System_Action_KEFHDOHHHML__o *)
                                     thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
                            System_Action<object>___ctor();
                            if (pDVar10 != (DCHAJIMIFHP_o *)0x0) {
                    /* try { // try from 03137de0 to 03237de7 has its CatchHandler @ 03137e1c */
                    /* try { // try from 03137e08 to 03237e0b has its CatchHandler @ 03137e3c */
                              DCHAJIMIFHP__MPFFOIIBAKO
                                        (pDVar10,StringLiteral_20396,pSVar6,(MethodInfo *)0x0);
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
                                    LJNJDFEAIOH__APOKKNPGGNP(__this,method_00);
                                    LJNJDFEAIOH__HFBLMGCOOHJ
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

