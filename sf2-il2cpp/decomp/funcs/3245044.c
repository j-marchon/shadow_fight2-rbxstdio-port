// CHDGOFBHAFI$$OJOMBBENIHM @ RVA 0x3245044

void CHDGOFBHAFI__OJOMBBENIHM(CHDGOFBHAFI_o *__this,bool AEDMPPIEKKP,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  int32_t iVar3;
  AJOGJBFNELI_o *pAVar4;
  CNLGMNIEGFG_o *pCVar5;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar6;
  NODLJPNGNBG_o *pNVar7;
  NGOFOPOGBMJ_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  CHDGOFBHAFI_o *pCVar8;
  EEGDOGKBLNG_o *pEVar9;
  AKOMJPINHEN_o *__this_02;
  NDPMLPGANCI_o *__this_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  AADKBCFCLKK_o *pAVar10;
  KDADMJGPAOM_o *pKVar11;
  DNELIPCHKLK_o *pDVar12;
  System_Action_CHDGOFBHAFI_DCENIHNBCAA__o *pSVar13;
  ACHLOMELAJE_o *pAVar14;
  LPAPAMPGDFN_o *pLVar15;
  long lVar16;
  PKHMIGFEJCL_o *pPVar17;
  System_String_o **ppSVar18;
  
  if ((DAT_045670b3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NGOFOPOGBMJ_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_14949);
    FUN_01bab630(&StringLiteral_20401);
    FUN_01bab630(&StringLiteral_8676);
    FUN_01bab630(&StringLiteral_10478);
    FUN_01bab630(&StringLiteral_1);
    DAT_045670b3 = 1;
  }
  pAVar10 = (__this->fields).AABMLCNHHPN;
  if (pAVar10 == (AADKBCFCLKK_o *)0x0) {
    return;
  }
  lVar16 = (pAVar10->fields).AMKHEHFFAKJ;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar4 = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
  if (pAVar4 != (AJOGJBFNELI_o *)0x0) {
    iVar3 = AJOGJBFNELI__OAACOOCKAHA(pAVar4,(MethodInfo *)0x0);
    if (lVar16 == iVar3) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_10478,(MethodInfo *)0x0);
      return;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar4 = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
    pAVar10 = (__this->fields).AABMLCNHHPN;
    if ((pAVar10 != (AADKBCFCLKK_o *)0x0) && (pAVar4 != (AJOGJBFNELI_o *)0x0)) {
      AJOGJBFNELI__NADKOHFMNLK(pAVar4,(int32_t)(pAVar10->fields).AMKHEHFFAKJ,(MethodInfo *)0x0);
      pAVar10 = (__this->fields).AABMLCNHHPN;
      if ((pAVar10 != (AADKBCFCLKK_o *)0x0) &&
         (pKVar11 = (pAVar10->fields).LHFLMBNKPHF, pKVar11 != (KDADMJGPAOM_o *)0x0)) {
        iVar3 = (pKVar11->fields).IILCHFKCEEH;
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pCVar5 = MGNPHCAAEIO__MJDCGINJMOP(iVar3,false,(MethodInfo *)0x0);
        pNVar6 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if (((pNVar6 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
            (pCVar5 != (CNLGMNIEGFG_o *)0x0)) &&
           (pPVar17 = (pNVar6->fields).QuestParameters, pPVar17 != (PKHMIGFEJCL_o *)0x0)) {
          (pPVar17->fields).NMHCLFFOMJH = (pCVar5->fields).super.KOILJHHCIEE;
          thunk_FUN_01c20e04();
          pDVar12 = (pCVar5->fields).super.KOILJHHCIEE;
          if (pDVar12 != (DNELIPCHKLK_o *)0x0) {
            (pPVar17->fields).EICOIEGEFAF = (pDVar12->fields).GJFJPLHCBKJ;
            thunk_FUN_01c20e04();
            pAVar10 = (__this->fields).AABMLCNHHPN;
            if ((pAVar10 != (AADKBCFCLKK_o *)0x0) &&
               (pKVar11 = (pAVar10->fields).LHFLMBNKPHF, pKVar11 != (KDADMJGPAOM_o *)0x0)) {
              (pPVar17->fields).OILECKFDMDB = (pKVar11->fields).IILCHFKCEEH;
              pNVar7 = CHDGOFBHAFI__AFHLHFMLNEO
                                 ((System_Collections_Generic_IList_NODLJPNGNBG__o *)
                                  (pAVar10->fields).MPAIPMANDEO,method_00);
              if (pNVar7 != (NODLJPNGNBG_o *)0x0) {
                puVar1 = &StringLiteral_8676;
                if ((pNVar7->fields).PMMFPJJOPKE != (ICBMOMGINFH_o *)0x0) {
                  puVar1 = &StringLiteral_14949;
                }
                ppSVar18 = &(pPVar17->fields).LOLFFJGLKLD;
                *ppSVar18 = (System_String_o *)*puVar1;
                thunk_FUN_01c20e04(ppSVar18);
                bVar2 = OOBBAGLCFPF__FLMDOPMDKID((__this->fields).AABMLCNHHPN,(MethodInfo *)0x0);
                if ((bVar2) &&
                   (bVar2 = OOBBAGLCFPF__LJEHOIFPLJK((__this->fields).AABMLCNHHPN,(MethodInfo *)0x0)
                   , !bVar2)) {
                  __this_00 = (NGOFOPOGBMJ_o *)thunk_FUN_01bda818(NGOFOPOGBMJ_TypeInfo);
                  NGOFOPOGBMJ___ctor(__this_00,(MethodInfo *)0x0);
                  pAVar10 = (__this->fields).AABMLCNHHPN;
                  if ((pAVar10 == (AADKBCFCLKK_o *)0x0) || (__this_00 == (NGOFOPOGBMJ_o *)0x0))
                  goto LAB_03345428;
                  (__this_00->fields).GDKPGIBMFPA = (pAVar10->fields).AMKHEHFFAKJ;
                  __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                  if (__this_01 == (KKLJIDJBFEI_o *)0x0) goto LAB_03345428;
                  KDPDBGNOFEN__KLNMLOOCAAO
                            ((KDPDBGNOFEN_o *)__this_01,StringLiteral_20401,
                             (Google_Protobuf_IMessage_o *)__this_00,
                             (System_Action_KEFHDOHHHML__o *)0x0,0.0,(Il2CppObject *)0x0,
                             (MethodInfo *)0x0);
                }
                if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pCVar8 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                if (pCVar8 != (CHDGOFBHAFI_o *)0x0) {
                  CHDGOFBHAFI__ANJLFIBGDHP(pCVar8,method_01);
                  pEVar9 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                  if (pEVar9 != (EEGDOGKBLNG_o *)0x0) {
                    EEGDOGKBLNG__JJBFCLBGNBO(pEVar9,0,(MethodInfo *)0x0);
                    pEVar9 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                    if (pEVar9 != (EEGDOGKBLNG_o *)0x0) {
                      EEGDOGKBLNG__FKAKMNIANAK(pEVar9,2,(MethodInfo *)0x0);
                      pCVar8 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                      if (pCVar8 != (CHDGOFBHAFI_o *)0x0) {
                        pSVar13 = (pCVar8->fields).FELKMAJFHIE;
                        (pCVar8->fields).CMDMECMFCIK = 0;
                        if (pSVar13 != (System_Action_CHDGOFBHAFI_DCENIHNBCAA__o *)0x0) {
                          (*(code *)(pSVar13->fields).super.super.invoke_impl)
                                    ((pSVar13->fields).super.super.method_code,0,
                                     (pSVar13->fields).super.super.method);
                          __this_02 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
                          if (__this_02 != (AKOMJPINHEN_o *)0x0) {
                            AKOMJPINHEN__KHFOCHBBBLH(__this_02,2,(MethodInfo *)0x0);
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
                            pAVar14 = NLPJLHOEAOE_TypeInfo->static_fields->
                                      _EDIEPEOIMDF_k__BackingField;
                            if ((pAVar14 != (ACHLOMELAJE_o *)0x0) &&
                               (pLVar15 = (pAVar14->fields).LMCDOMHENMC,
                               pLVar15 != (LPAPAMPGDFN_o *)0x0)) {
                              if ((pLVar15->fields).AMIMEMOELHE != 0x32) {
                                __this_03 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                                if (__this_03 == (NDPMLPGANCI_o *)0x0) goto LAB_03345428;
                                NDPMLPGANCI__KJGGEPNHOBK(__this_03,(MethodInfo *)0x0);
                              }
                              if (!AEDMPPIEKKP) {
                                return;
                              }
                              pNVar6 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance
                                                 ((MethodInfo *)0x0);
                              if (pNVar6 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                                Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests
                                          (pNVar6,0x24,(MethodInfo *)0x0);
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
LAB_03345428:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

