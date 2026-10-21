// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$GIENGNEGHPJ @ RVA 0x32555E8

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__GIENGNEGHPJ
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_SidePanel_o *pNVar2;
  Nekki_SF2_GUI_SidePanelScroll_o *pNVar3;
  System_Action_o *pSVar4;
  AKOMJPINHEN_o *pAVar5;
  GCIFMNHADDF_o *__this_00;
  System_Action_BaseDialog__o *CJNHFNHJHPE;
  KKLJIDJBFEI_o *pKVar6;
  FKDLCJJOGIP_o *pFVar7;
  EEOMEMBBGNA_o *pEVar8;
  System_Action_MGDJPGGPDJI__o *CJNHFNHJHPE_00;
  System_Action_NLFLMJPNOLF__o *CJNHFNHJHPE_01;
  System_Action_long__o *CJNHFNHJHPE_02;
  CHDGOFBHAFI_o *pCVar9;
  System_Action_CHDGOFBHAFI_DCENIHNBCAA__o *CJNHFNHJHPE_03;
  UnityEngine_Events_UnityAction_T0__o *call;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *pMVar10;
  Nekki_SF2_GUI_SidePanelScroll_o **ppNVar11;
  CJFBGEEIPBA_o *pCVar12;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *pNVar13;
  UnityEngine_Events_UnityEvent_bool__o *__this_02;
  Nekki_SF2_GUI_Dialogs_Raids_ChatContent_o *x;
  Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton_o *pNVar14;
  Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *pNVar15;
  Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o *pNVar16;
  UnityEngine_Object_o *pUVar17;
  
  if ((DAT_04567161 & 1) == 0) {
    FUN_01bab630(&System_Action<NLFLMJPNOLF>_TypeInfo);
    FUN_01bab630(&System_Action<MGDJPGGPDJI>_TypeInfo);
    FUN_01bab630(&System_Action<CHDGOFBHAFI_DCENIHNBCAA>_TypeInfo);
    FUN_01bab630(&System_Action<long>_TypeInfo);
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_BHLHBBKAFHH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_EMABOKFDKFO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_GDPFPAHLCJM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_GJBIHHLINEG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_IEFPBGKNKFH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_IOFNONPFCDB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_JOEGAINPJCI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_OAJGFHDGJBK__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_POIOFMEMHBP__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<bool>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<bool>_AddListener__);
    FUN_01bab630(&WideScreenController_TypeInfo);
    FUN_01bab630(&StringLiteral_9216);
    FUN_01bab630(&StringLiteral_10813);
    FUN_01bab630(&StringLiteral_14092);
    DAT_04567161 = 1;
  }
  pNVar2 = (__this->fields)._sidePanel;
  if (pNVar2 == (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) goto LAB_0335601c;
  pNVar3 = Nekki_SF2_GUI_Shop_SidePanel__TryGetSidePanelScroll(pNVar2,(MethodInfo *)0x0);
  ppNVar11 = &(__this->fields).PGOJBPBDODE;
  *ppNVar11 = pNVar3;
  thunk_FUN_01c20e04(ppNVar11,pNVar3);
  pNVar2 = (__this->fields)._sidePanel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
LAB_03355914:
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_9216,(MethodInfo *)0x0);
  }
  else {
    x = (__this->fields)._chatContent;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) goto LAB_03355914;
    pNVar14 = (__this->fields)._btnHandle;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    if (bVar1) goto LAB_03355914;
    pNVar15 = (__this->fields)._clanChatViewController;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    if (bVar1) goto LAB_03355914;
    pNVar16 = (__this->fields)._raidBattleChatViewController;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    if (bVar1) goto LAB_03355914;
    pUVar17 = (UnityEngine_Object_o *)(__this->fields)._chatMessageViewPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality(pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) goto LAB_03355914;
    pUVar17 = (UnityEngine_Object_o *)(__this->fields)._clanJoinInfoViewPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality(pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) goto LAB_03355914;
    pUVar17 = (UnityEngine_Object_o *)(__this->fields)._clanQuickRaidAccessViewPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality(pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) goto LAB_03355914;
    pUVar17 = (UnityEngine_Object_o *)(__this->fields)._missingConnectionViewPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality(pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) goto LAB_03355914;
    pNVar3 = *ppNVar11;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) goto LAB_03355914;
  }
  pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  WideScreenController__add_UpdateEvent(pSVar4,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__GJBIHHLINEG(__this,method_00);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar5 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
  if (pAVar5 != (AKOMJPINHEN_o *)0x0) {
    pNVar14 = (__this->fields)._btnHandle;
    (__this->fields).LMANLFKJNKN = (pAVar5->fields).LMANLFKJNKN;
    if (pNVar14 != (Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton__Init(pNVar14,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__MEIAHIJOJEA(__this,method_01);
      __this_00 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
      CJNHFNHJHPE = (System_Action_BaseDialog__o *)
                    thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_00 != (GCIFMNHADDF_o *)0x0) {
        GCIFMNHADDF__EOAPHMAFKKP(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
        pKVar6 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pKVar6 != (KKLJIDJBFEI_o *)0x0) {
          KKLJIDJBFEI__KGJHOLAEPAI(pKVar6,pSVar4,(MethodInfo *)0x0);
          pKVar6 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
          pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          if (pKVar6 != (KKLJIDJBFEI_o *)0x0) {
            KKLJIDJBFEI__PJOBAFCNJAM(pKVar6,pSVar4,(MethodInfo *)0x0);
            pKVar6 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
            pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            if (pKVar6 != (KKLJIDJBFEI_o *)0x0) {
              KKLJIDJBFEI__HKAALOKPBPG(pKVar6,pSVar4,(MethodInfo *)0x0);
              pFVar7 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
              pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
              System_Action___ctor();
              if (pFVar7 != (FKDLCJJOGIP_o *)0x0) {
                FKDLCJJOGIP__ALADOEDCONI(pFVar7,pSVar4,(MethodInfo *)0x0);
                pFVar7 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
                pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                System_Action___ctor();
                    /* try { // try from 03355b48 to 03455c03 has its CatchHandler @ 03355b48
                       catch() { ... } // from try @ 03355b48 with catch @ 03355b48
                       catch() { ... } // from try @ 03355c68 with catch @ 03355b48
                       catch() { ... } // from try @ 03355ca8 with catch @ 03355b48
                       catch() { ... } // from try @ 03355ce0 with catch @ 03355b48
                       catch() { ... } // from try @ 03355d10 with catch @ 03355b48 */
                if (pFVar7 != (FKDLCJJOGIP_o *)0x0) {
                  FKDLCJJOGIP__AJLLLOFFOHF(pFVar7,pSVar4,(MethodInfo *)0x0);
                  pEVar8 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                  pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                  System_Action___ctor();
                  if (pEVar8 != (EEOMEMBBGNA_o *)0x0) {
                    EEOMEMBBGNA__LLNDCMBPEJP(pEVar8,pSVar4,(MethodInfo *)0x0);
                    pEVar8 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                    pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    System_Action___ctor();
                    if (pEVar8 != (EEOMEMBBGNA_o *)0x0) {
                      EEOMEMBBGNA__EMKEMHIPNOF(pEVar8,pSVar4,(MethodInfo *)0x0);
                      pEVar8 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                      CJNHFNHJHPE_00 =
                           (System_Action_MGDJPGGPDJI__o *)
                           thunk_FUN_01bda818(System_Action<MGDJPGGPDJI>_TypeInfo);
                    /* try { // try from 03355c04 to 03455c0b has its CatchHandler @ 03355cc4 */
                      System_Action<object>___ctor();
                      if (pEVar8 != (EEOMEMBBGNA_o *)0x0) {
                        EEOMEMBBGNA__DEGNMFHGAFB(pEVar8,CJNHFNHJHPE_00,(MethodInfo *)0x0);
                    /* try { // try from 03355c2c to 03455c37 has its CatchHandler @ 03355cb0 */
                        pEVar8 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                        if (pEVar8 != (EEOMEMBBGNA_o *)0x0) {
                          pCVar12 = (pEVar8->fields).GMNJEBCECDA;
                    /* try { // try from 03355c48 to 03455c4b has its CatchHandler @ 03355cac */
                          CJNHFNHJHPE_01 =
                               (System_Action_NLFLMJPNOLF__o *)
                               thunk_FUN_01bda818(System_Action<NLFLMJPNOLF>_TypeInfo);
                    /* try { // try from 03355c4c to 03455c5b has its CatchHandler @ 03355cbc */
                    /* try { // try from 03355c5c to 03455c67 has its CatchHandler @ 03355cc0 */
                          System_Action<object>___ctor();
                          if (pCVar12 != (CJFBGEEIPBA_o *)0x0) {
                    /* try { // try from 03355c68 to 03455c9f has its CatchHandler @ 03355b48 */
                            CJFBGEEIPBA__LIKOAKDJPJI(pCVar12,CJNHFNHJHPE_01,(MethodInfo *)0x0);
                            pEVar8 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                            if (pEVar8 != (EEOMEMBBGNA_o *)0x0) {
                              pCVar12 = (pEVar8->fields).GMNJEBCECDA;
                              CJNHFNHJHPE_02 =
                                   (System_Action_long__o *)
                                   thunk_FUN_01bda818(System_Action<long>_TypeInfo);
                    /* try { // try from 03355ca0 to 03455ca3 has its CatchHandler @ 03355cb8 */
                    /* try { // try from 03355ca4 to 03455ca7 has its CatchHandler @ 03355cb4 */
                    /* try { // try from 03355ca8 to 03455cdb has its CatchHandler @ 03355b48 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03355c48 with catch @ 03355cac
                        */
                              System_Action<long>___ctor();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03355c2c with catch @ 03355cb0
                        */
                              if (pCVar12 != (CJFBGEEIPBA_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03355ca4 with catch @ 03355cb4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03355ca0 with catch @ 03355cb8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03355c4c with catch @ 03355cbc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03355c5c with catch @ 03355cc0
                        */
                                CJFBGEEIPBA__EHJDAGPJFAB(pCVar12,CJNHFNHJHPE_02,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03355c04 with catch @ 03355cc4
                        */
                                pCVar9 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                                pSVar4 = (System_Action_o *)
                                         thunk_FUN_01bda818(System_Action_TypeInfo);
                                pMVar10 = 
                                Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_POIOFMEMHBP__;
                    /* try { // try from 03355cdc to 03455cdf has its CatchHandler @ 03355d00 */
                    /* try { // try from 03355ce0 to 03455d07 has its CatchHandler @ 03355b48 */
                                System_Action___ctor();
                                if (pCVar9 != (CHDGOFBHAFI_o *)0x0) {
                                  CHDGOFBHAFI__HMBJHHDACKC(pCVar9,pSVar4,pMVar10);
                    /* catch() { ... } // from try @ 03355cdc with catch @ 03355d00 */
                                  pCVar9 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                    /* try { // try from 03355d08 to 03455d0f has its CatchHandler @ 03355d24 */
                    /* try { // try from 03355d10 to 03455d1b has its CatchHandler @ 03355b48 */
                                  pSVar4 = (System_Action_o *)
                                           thunk_FUN_01bda818(System_Action_TypeInfo);
                                  pMVar10 = 
                                  Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_POIOFMEMHBP__;
                    /* try { // try from 03355d1c to 03455d23 has its CatchHandler @ 03355d24 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03355d08 with catch @ 03355d24
                       catch(type#2 @ 00000000) { ... } // from try @ 03355d1c with catch @ 03355d24
                        */
                                  System_Action___ctor();
                                  if (pCVar9 != (CHDGOFBHAFI_o *)0x0) {
                                    CHDGOFBHAFI__LCMOGMIIEIN(pCVar9,pSVar4,pMVar10);
                                    pCVar9 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                                    CJNHFNHJHPE_03 =
                                         (System_Action_CHDGOFBHAFI_DCENIHNBCAA__o *)
                                         thunk_FUN_01bda818(
                                                  System_Action<CHDGOFBHAFI_DCENIHNBCAA>_TypeInfo);
                                    pMVar10 = 
                                    Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_JOEGAINPJCI__;
                                    System_Action<Int32Enum>___ctor();
                                    if (pCVar9 != (CHDGOFBHAFI_o *)0x0) {
                                      CHDGOFBHAFI__ENIDGKKPNAO(pCVar9,CJNHFNHJHPE_03,pMVar10);
                                      pAVar5 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
                                      if (pAVar5 != (AKOMJPINHEN_o *)0x0) {
                                        AKOMJPINHEN__CNCFBMNAIMG
                                                  (pAVar5,(EKMDOGKFEBJ_o *)__this,(MethodInfo *)0x0)
                                        ;
                    /* try { // try from 03355db0 to 03455f3f has its CatchHandler @ 03355db0
                       catch() { ... } // from try @ 03355db0 with catch @ 03355db0
                       catch() { ... } // from try @ 03355fe8 with catch @ 03355db0
                       catch() { ... } // from try @ 033560d4 with catch @ 03355db0
                       catch() { ... } // from try @ 0335617c with catch @ 03355db0 */
                                        pSVar4 = (System_Action_o *)
                                                 thunk_FUN_01bda818(System_Action_TypeInfo);
                                        System_Action___ctor();
                                        if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished ==
                                            0) {
                                          thunk_FUN_01ba7564();
                                        }
                                        Nekki_Utils_GlobalTimer__add_OnTick
                                                  (pSVar4,(MethodInfo *)0x0);
                                        pNVar15 = (__this->fields)._clanChatViewController;
                                        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                                          thunk_FUN_01ba7564();
                                        }
                                        bVar1 = UnityEngine_Object__op_Inequality
                                                          ((UnityEngine_Object_o *)pNVar15,
                                                           (UnityEngine_Object_o *)0x0,
                                                           (MethodInfo *)0x0);
                                        if (bVar1) {
                                          pNVar15 = (__this->fields)._clanChatViewController;
                                          if (pNVar15 ==
                                              (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o
                                               *)0x0) goto LAB_0335601c;
                                          pNVar13 = (pNVar15->fields).super._tabButton;
                                          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0)
                                          {
                                            thunk_FUN_01ba7564();
                                          }
                                          bVar1 = UnityEngine_Object__op_Inequality
                                                            ((UnityEngine_Object_o *)pNVar13,
                                                             (UnityEngine_Object_o *)0x0,
                                                             (MethodInfo *)0x0);
                                          if (bVar1) {
                                            pNVar15 = (__this->fields)._clanChatViewController;
                                            if ((pNVar15 ==
                                                 (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o
                                                  *)0x0) ||
                                               (pNVar13 = (pNVar15->fields).super._tabButton,
                                               pNVar13 ==
                                               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *)0x0)
                                               ) goto LAB_0335601c;
                                            Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                                                      ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar13,
                                                       StringLiteral_14092,StringLiteral_10813,
                                                       (MethodInfo *)0x0);
                                            pNVar15 = (__this->fields)._clanChatViewController;
                                            if ((pNVar15 ==
                                                 (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o
                                                  *)0x0) ||
                                               (pNVar13 = (pNVar15->fields).super._tabButton,
                                               pNVar13 ==
                                               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *)0x0)
                                               ) goto LAB_0335601c;
                                            Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                                                      ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar13,
                                                       StringLiteral_14092,StringLiteral_10813,
                                                       (MethodInfo *)0x0);
                                          }
                                        }
                                        pNVar16 = (__this->fields)._raidBattleChatViewController;
                                        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                                          thunk_FUN_01ba7564();
                                        }
                                        bVar1 = UnityEngine_Object__op_Inequality
                                                          ((UnityEngine_Object_o *)pNVar16,
                                                           (UnityEngine_Object_o *)0x0,
                                                           (MethodInfo *)0x0);
                                        if (bVar1) {
                                          pNVar16 = (__this->fields)._raidBattleChatViewController;
                                          if (pNVar16 ==
                                              (Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o
                                               *)0x0) goto LAB_0335601c;
                                          pNVar13 = (pNVar16->fields).super._tabButton;
                                          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0)
                                          {
                                            thunk_FUN_01ba7564();
                                          }
                                          bVar1 = UnityEngine_Object__op_Inequality
                                                            ((UnityEngine_Object_o *)pNVar13,
                                                             (UnityEngine_Object_o *)0x0,
                                                             (MethodInfo *)0x0);
                                          if (bVar1) {
                                            pNVar16 = (__this->fields)._raidBattleChatViewController
                                            ;
                                            if ((pNVar16 ==
                                                 (Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o
                                                  *)0x0) ||
                                               (pNVar13 = (pNVar16->fields).super._tabButton,
                                               pNVar13 ==
                                               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *)0x0)
                                               ) goto LAB_0335601c;
                                            Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                                                      ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar13,
                                                       StringLiteral_14092,StringLiteral_10813,
                                                       (MethodInfo *)0x0);
                                            pNVar16 = (__this->fields)._raidBattleChatViewController
                                            ;
                                            if ((pNVar16 ==
                                                 (Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o
                                                  *)0x0) ||
                                               (pNVar13 = (pNVar16->fields).super._tabButton,
                                               pNVar13 ==
                                               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *)0x0)
                                               ) goto LAB_0335601c;
                                            Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                                                      ((Nekki_SF2_GUI_ResolutionButton_o *)pNVar13,
                                                       StringLiteral_14092,StringLiteral_10813,
                                                       (MethodInfo *)0x0);
                                          }
                                        }
                                        pNVar2 = (__this->fields)._sidePanel;
                                        if (pNVar2 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) {
                    /* try { // try from 03355f40 to 03455f67 has its CatchHandler @ 033560e8 */
                                          Nekki_SF2_GUI_Shop_SidePanel__Init
                                                    (pNVar2,(Nekki_SF2_GUI_Shop_SidePanelContent_o *
                                                            )(__this->fields)._chatContent,false,
                                                     (MethodInfo *)0x0);
                                          pNVar2 = (__this->fields)._sidePanel;
                                          if (pNVar2 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) {
                                            __this_02 = (UnityEngine_Events_UnityEvent_bool__o *)
                                                        (pNVar2->fields)._OnMove;
                                            call = (UnityEngine_Events_UnityAction_T0__o *)
                                                   thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction<bool>_TypeInfo);
                                            UnityEngine_Events_UnityAction<bool>___ctor();
                                            if (__this_02 !=
                                                (UnityEngine_Events_UnityEvent_bool__o *)0x0) {
                    /* try { // try from 03355fa0 to 03455fc7 has its CatchHandler @ 033560e4 */
                                              UnityEngine_Events_UnityEvent<bool>__AddListener
                                                        (__this_02,call,
                                                                                                                  
                                                  Method_UnityEngine_Events_UnityEvent<bool>_AddListener__
                                                  );
                                              Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__HEMCHIANOBD
                                                        (__this,method_02);
                                              Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__NFEHJDIAOOD
                                                        (__this,method_03);
                                              pNVar3 = (__this->fields).PGOJBPBDODE;
                                              bVar1 = 
                                                  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CanOpenChat
                                                            (__this_01,method_04);
                                              if (pNVar3 != (Nekki_SF2_GUI_SidePanelScroll_o *)0x0)
                                              {
                                                *(byte *)&(pNVar3->fields).JNFBDGALDJJ = ~bVar1 & 1;
                    /* try { // try from 03355fcc to 03455fd7 has its CatchHandler @ 033560ec */
                                                pNVar3 = (__this->fields).PGOJBPBDODE;
                    /* try { // try from 03355fd8 to 03455fe7 has its CatchHandler @ 033560e0 */
                                                pSVar4 = (System_Action_o *)
                                                         thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 03355fe8 to 034560cf has its CatchHandler @ 03355db0 */
                                                System_Action___ctor();
                                                if (pNVar3 != (Nekki_SF2_GUI_SidePanelScroll_o *)0x0
                                                   ) {
                                                  Nekki_SF2_GUI_SidePanelScroll__add_OnIgnored_OnBeginDrag
                                                            (pNVar3,pSVar4,(MethodInfo *)0x0);
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
              }
            }
          }
        }
      }
    }
  }
LAB_0335601c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

