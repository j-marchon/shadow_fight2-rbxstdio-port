// PNPNPCKGHEO$$IKDPMKOIDMP @ RVA 0x306ADB8

/* WARNING: Removing unreachable block (ram,0x0316b228) */
/* WARNING: Removing unreachable block (ram,0x0316b29c) */
/* WARNING: Removing unreachable block (ram,0x0316b4f8) */

void PNPNPCKGHEO__IKDPMKOIDMP(PNPNPCKGHEO_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  PLIIGOCLJDL_o *pPVar6;
  EEOMEMBBGNA_o *__this_00;
  IBMLPPNMDCI_o *BBEGIKHKBID;
  HCKCBFOGMMJ_o *pHVar7;
  EEGDOGKBLNG_o *__this_01;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_02;
  System_Collections_Generic_IEnumerator_T__o *pSVar8;
  VirtualInvokeData *pVVar9;
  long lVar10;
  CFEJGBOOCOG_o *pCVar11;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar12;
  JMDPBFOCHHP_o *pJVar13;
  System_String_o *pSVar14;
  GCIFMNHADDF_o *pGVar15;
  System_Action_BaseDialog__o *pSVar16;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  KKGHPKOFEHM_o *pKVar17;
  System_Collections_Generic_IEnumerator_T__c *pSVar18;
  CFEJGBOOCOG_c *pCVar19;
  JMDPBFOCHHP_AEJBILHMFDB_o *pJVar20;
  ulong uVar21;
  int32_t *piVar22;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar23;
  MainMenuRaidRatingPanel_o *__this_03;
  System_String_o **ppSVar24;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *x;
  System_String_o **ppSVar25;
  undefined8 *puVar26;
  int iVar27;
  undefined1 auVar28 [16];
  
  if ((DAT_04565f2e & 1) == 0) {
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
    FUN_01bab630(&CFEJGBOOCOG_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<PIADCKMDDAK>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_PNPNPCKGHEO_LANNHNJHOLM__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_8265);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_22500);
    FUN_01bab630(&StringLiteral_8266);
    FUN_01bab630(&StringLiteral_8264);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_21870);
    DAT_04565f2e = 1;
    method = extraout_x1;
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,method);
    DAT_04565b84 = '\x01';
  }
  pNVar23 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if (DAT_04565b84 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
      DAT_04565b84 = '\x01';
    }
    pNVar23 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    if (pNVar23 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_0316b4f0;
    __this_03 = *(MainMenuRaidRatingPanel_o **)&(pNVar23->fields)._MaterialsMoveDuration;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar5) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pPVar6 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
      if ((pPVar6 == (PLIIGOCLJDL_o *)0x0) ||
         ((pPVar6->fields)._KDMKAMFOEAI_k__BackingField = true,
         __this_03 == (MainMenuRaidRatingPanel_o *)0x0)) goto LAB_0316b4f0;
      MainMenuRaidRatingPanel__SetBtnTop100IsFlashing(__this_03,true,(MethodInfo *)0x0);
    }
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  if (__this_00 != (EEOMEMBBGNA_o *)0x0) {
    BBEGIKHKBID = EEOMEMBBGNA__MDJLMHOCDCF(__this_00,(MethodInfo *)0x0);
    pHVar7 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
    if (pHVar7 != (HCKCBFOGMMJ_o *)0x0) {
      HCKCBFOGMMJ__AHKEBCAMMDL(pHVar7,BBEGIKHKBID,(MethodInfo *)0x0);
      pHVar7 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
      if (pHVar7 != (HCKCBFOGMMJ_o *)0x0) {
        HCKCBFOGMMJ__CGADNHMLNNJ
                  (pHVar7,BBEGIKHKBID,(System_Action_LFELBGMCDHD__o *)0x0,(MethodInfo *)0x0);
        __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        pKVar17 = (__this->fields).JOPKMLHKKEE;
        if ((pKVar17 != (KKGHPKOFEHM_o *)0x0) && (__this_01 != (EEGDOGKBLNG_o *)0x0)) {
          EEGDOGKBLNG__JOMFHMDCMNG(__this_01,(pKVar17->fields).OPHCNELIOLD,(MethodInfo *)0x0);
          pPVar6 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
          if (pPVar6 != (PLIIGOCLJDL_o *)0x0) {
            PLIIGOCLJDL__CMIAHPINBOM(pPVar6,(MethodInfo *)0x0);
            pPVar6 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
            if (pPVar6 != (PLIIGOCLJDL_o *)0x0) {
              PLIIGOCLJDL__LFMNOABBINL(pPVar6,(MethodInfo *)0x0);
              JJPNLEPEAFM__DAKAIKCCOKD((MethodInfo *)0x0);
              (__this->fields).ECIBAPAHFLM = StringLiteral_8266;
              thunk_FUN_01c20e04();
              ppSVar24 = &(__this->fields).EBCALIJLIFB;
              *ppSVar24 = StringLiteral_1;
              thunk_FUN_01c20e04(ppSVar24);
              (__this->fields).DHJJLAIADIP = StringLiteral_9679;
              thunk_FUN_01c20e04();
              ppSVar25 = &(__this->fields).AIBNCPJMIPF;
              *ppSVar25 = StringLiteral_1;
              thunk_FUN_01c20e04(ppSVar25);
              pKVar17 = (__this->fields).JOPKMLHKKEE;
              if ((pKVar17 != (KKGHPKOFEHM_o *)0x0) &&
                 (__this_02 = (pKVar17->fields).NNDJCFCJGMO,
                 __this_02 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)) {
                pSVar8 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                                   ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,
                                    Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_GetEnumerator__
                                   );
                if (pSVar8 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                iVar27 = 0;
                do {
                  pSVar18 = pSVar8->klass;
                  uVar1._0_1_ = (pSVar18->_2).rank;
                  uVar1._1_1_ = (pSVar18->_2).minimumAlignment;
                  uVar21 = (ulong)uVar1;
                  if (uVar21 != 0) {
                    piVar22 = &((pSVar18->_1).interfaceOffsets)->offset;
                    do {
                      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
                          (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                        pVVar9 = pSVar18->vtable + *piVar22;
                        goto LAB_0316b140;
                      }
                      uVar21 = uVar21 - 1;
                      piVar22 = piVar22 + 4;
                    } while (uVar21 != 0);
                  }
                  pVVar9 = (VirtualInvokeData *)
                           FUN_01b81914(pSVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_0316b140:
                  uVar21 = (*pVVar9->methodPtr)(pSVar8,pVVar9->method);
                  if ((uVar21 & 1) == 0) {
                    if (pSVar8 == (System_Collections_Generic_IEnumerator_T__o *)0x0)
                    goto LAB_0316b21c;
                    pSVar18 = pSVar8->klass;
                    uVar3._0_1_ = (pSVar18->_2).rank;
                    uVar3._1_1_ = (pSVar18->_2).minimumAlignment;
                    uVar21 = (ulong)uVar3;
                    if (uVar21 == 0) goto LAB_0316b1f4;
                    piVar22 = &((pSVar18->_1).interfaceOffsets)->offset;
                    goto LAB_0316b1dc;
                  }
                  pSVar18 = pSVar8->klass;
                  uVar2._0_1_ = (pSVar18->_2).rank;
                  uVar2._1_1_ = (pSVar18->_2).minimumAlignment;
                  uVar21 = (ulong)uVar2;
                  if (uVar21 != 0) {
                    piVar22 = &((pSVar18->_1).interfaceOffsets)->offset;
                    do {
                      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
                          (Il2CppClass *)
                          System_Collections_Generic_IEnumerator<PIADCKMDDAK>_TypeInfo) {
                        pVVar9 = pSVar18->vtable + *piVar22;
                        goto LAB_0316b19c;
                      }
                      uVar21 = uVar21 - 1;
                      piVar22 = piVar22 + 4;
                    } while (uVar21 != 0);
                  }
                  pVVar9 = (VirtualInvokeData *)
                           FUN_01b81914(pSVar8,
                                        System_Collections_Generic_IEnumerator<PIADCKMDDAK>_TypeInfo
                                        ,0);
LAB_0316b19c:
                  lVar10 = (*pVVar9->methodPtr)(pSVar8,pVVar9->method);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  iVar27 = *(int *)(lVar10 + 0x20) + iVar27;
                } while( true );
              }
            }
          }
        }
      }
    }
  }
  goto LAB_0316b4f0;
  while( true ) {
    uVar21 = uVar21 - 1;
    piVar22 = piVar22 + 4;
    if (uVar21 == 0) break;
LAB_0316b1dc:
    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
        (Il2CppClass *)System_IDisposable_TypeInfo) {
      pVVar9 = pSVar18->vtable + *piVar22;
      goto LAB_0316b210;
    }
  }
LAB_0316b1f4:
  pVVar9 = (VirtualInvokeData *)FUN_01b81914(pSVar8,System_IDisposable_TypeInfo,0);
LAB_0316b210:
  (*pVVar9->methodPtr)(pSVar8,pVVar9->method);
LAB_0316b21c:
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0316b240 to 0326b423 has its CatchHandler @ 0316b240
                       catch() { ... } // from try @ 0316b240 with catch @ 0316b240
                       catch() { ... } // from try @ 0316b464 with catch @ 0316b240
                       catch() { ... } // from try @ 0316b500 with catch @ 0316b240
                       catch() { ... } // from try @ 0316b530 with catch @ 0316b240 */
    thunk_FUN_01ba7564();
  }
  pCVar11 = IFAMAAGNCBJ__OBKGLDJEIDN((MethodInfo *)0x0);
  if (pCVar11 != (CFEJGBOOCOG_o *)0x0) {
    pCVar19 = pCVar11->klass;
    uVar4._0_1_ = (pCVar19->_2).rank;
    uVar4._1_1_ = (pCVar19->_2).minimumAlignment;
    uVar21 = (ulong)uVar4;
    if (uVar21 != 0) {
      piVar22 = &((pCVar19->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
            (Il2CppClass *)CFEJGBOOCOG_TypeInfo) {
          pVVar9 = pCVar19->vtable + (*piVar22 + 1);
          goto LAB_0316b2c4;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    pVVar9 = (VirtualInvokeData *)FUN_01b81914(pCVar11,CFEJGBOOCOG_TypeInfo,1);
LAB_0316b2c4:
    auVar28 = (*pVVar9->methodPtr)(pCVar11,pVVar9->method);
    method_00 = auVar28._8_8_;
    if (auVar28._0_8_ != 0) {
      if (*(char *)(auVar28._0_8_ + 0x40) != '\0') {
LAB_0316b30c:
        PNPNPCKGHEO__KKAHPNPCKCG(__this,method_00);
        return;
      }
      pNVar12 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (pNVar12 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
        bVar5 = Nekki_SF2_Core_Quests_QuestsManager__ExistsQuestsWithActOrShowVideoAction
                          (pNVar12,(MethodInfo *)0x0);
        if (bVar5) {
          KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_21870,(MethodInfo *)0x0);
          method_00 = extraout_x1_00;
          goto LAB_0316b30c;
        }
        pNVar12 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if (pNVar12 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
          if (iVar27 < 1) {
            Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests(pNVar12,0x28,(MethodInfo *)0x0);
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pJVar13 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
            if ((pJVar13 == (JMDPBFOCHHP_o *)0x0) ||
               (pJVar20 = (pJVar13->fields)._JMEOCLFDHMM_k__BackingField,
               pJVar20 == (JMDPBFOCHHP_AEJBILHMFDB_o *)0x0)) goto LAB_0316b4f0;
            puVar26 = &StringLiteral_8264;
          }
          else {
            Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests(pNVar12,0x27,(MethodInfo *)0x0);
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pJVar13 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
            if ((pJVar13 == (JMDPBFOCHHP_o *)0x0) ||
               (pJVar20 = (pJVar13->fields)._JMEOCLFDHMM_k__BackingField,
               pJVar20 == (JMDPBFOCHHP_AEJBILHMFDB_o *)0x0)) goto LAB_0316b4f0;
            puVar26 = (undefined8 *)&StringLiteral_8265;
          }
          pSVar14 = System_Int32__ToString((int)pJVar20 + 0x10,(MethodInfo *)0x0);
          pSVar14 = System_String__Concat
                              ((System_String_o *)*puVar26,pSVar14,StringLiteral_22500,
                               (MethodInfo *)0x0);
          (__this->fields).EBCALIJLIFB = pSVar14;
          thunk_FUN_01c20e04(ppSVar24,pSVar14);
          (__this->fields).DPHJDBBAJBJ = true;
          pGVar15 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
          if (pGVar15 != (GCIFMNHADDF_o *)0x0) {
            x = (pGVar15->fields)._AOOFDKJAALA_k__BackingField;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
            }
                    /* try { // try from 0316b424 to 0326b42b has its CatchHandler @ 0316b4e0 */
            bVar5 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar5) {
              PNPNPCKGHEO__FANFDKHEMJD(__this,method_01);
              return;
            }
                    /* try { // try from 0316b44c to 0326b463 has its CatchHandler @ 0316b4e4 */
            pGVar15 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 0316b464 to 0326b4fb has its CatchHandler @ 0316b240 */
            pSVar16 = (System_Action_BaseDialog__o *)
                      thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
            System_Action<object>___ctor();
            if (pGVar15 != (GCIFMNHADDF_o *)0x0) {
              GCIFMNHADDF__JNDNMPDMDGB(pGVar15,pSVar16,(MethodInfo *)0x0);
              pGVar15 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
              pSVar16 = (System_Action_BaseDialog__o *)
                        thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
              System_Action<object>___ctor();
              if (pGVar15 != (GCIFMNHADDF_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0316b424 with catch @ 0316b4e0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0316b44c with catch @ 0316b4e4
                        */
                GCIFMNHADDF__EOAPHMAFKKP(pGVar15,pSVar16,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0316b4f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

