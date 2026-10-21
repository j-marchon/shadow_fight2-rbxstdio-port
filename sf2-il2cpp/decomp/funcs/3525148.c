// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$Init @ RVA 0x3525148

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  System_String_o **ppSVar1;
  CJFBGEEIPBA_o **ppCVar2;
  NLFLMJPNOLF_c *pNVar3;
  bool bVar4;
  int32_t iVar5;
  int64_t iVar6;
  EEGDOGKBLNG_o *__this_00;
  int64_t iVar7;
  EEOMEMBBGNA_o *pEVar8;
  System_Action_NLFLMJPNOLF__o *CJNHFNHJHPE;
  System_Action_long__o *CJNHFNHJHPE_00;
  OHDDKGHEEPA_o *__this_01;
  CNLGMNIEGFG_o *pCVar9;
  PJKHAJKEHEL_o *pPVar10;
  Nekki_SF2_GUI_LabelAlias_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  System_Action_OJEHKJHEBID__o *CJNHFNHJHPE_01;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable_o *__this_04;
  LabelButton_o *pLVar11;
  UnityEngine_Events_UnityAction_o *pUVar12;
  System_String_o *str1;
  System_String_o *pSVar13;
  Il2CppObject *pIVar14;
  MethodInfo *method_00;
  Google_Protobuf_Collections_RepeatedField_long__o *pGVar15;
  NLFLMJPNOLF_o *pNVar16;
  NLFLMJPNOLF_o **ppNVar17;
  UnityEngine_Events_UnityEvent_o *pUVar18;
  Nekki_SF2_GUI_ResolutionImage_o *__this_05;
  CJFBGEEIPBA_o *pCVar19;
  
  if ((DAT_045689f7 & 1) == 0) {
    FUN_01bab630(&System_Action<NLFLMJPNOLF>_TypeInfo);
    FUN_01bab630(&System_Action<OJEHKJHEBID>_TypeInfo);
    FUN_01bab630(&System_Action<long>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_DHMEHBNHNJO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_FJIFDGEPKBH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_GHOCNBJIEEN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_JNCKDHJJBPM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_KBKPMHNOJON__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_PCJKJOMCGNH__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLFLMJPNOLF_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_3312);
    FUN_01bab630(&StringLiteral_4403);
    FUN_01bab630(&StringLiteral_4401);
    FUN_01bab630(&StringLiteral_17837);
    DAT_045689f7 = 1;
  }
  pNVar3 = NLFLMJPNOLF_TypeInfo;
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
    (__this->fields).PMHMLJDMHFP = (NLFLMJPNOLF_o *)0x0;
    pIVar14 = (Il2CppObject *)0x0;
  }
  else {
    pNVar16 = (NLFLMJPNOLF_o *)IMMNELPBGIF;
    if (IMMNELPBGIF->klass != (Il2CppClass *)NLFLMJPNOLF_TypeInfo) {
      pNVar16 = (NLFLMJPNOLF_o *)0x0;
    }
    (__this->fields).PMHMLJDMHFP = pNVar16;
    pIVar14 = IMMNELPBGIF;
    if (IMMNELPBGIF->klass != (Il2CppClass *)pNVar3) {
      pIVar14 = (Il2CppObject *)0x0;
    }
  }
  ppNVar17 = &(__this->fields).PMHMLJDMHFP;
  thunk_FUN_01c20e04(ppNVar17,pIVar14);
  pSVar13 = StringLiteral_4403;
  if (*ppNVar17 == (NLFLMJPNOLF_o *)0x0) {
    if (IMMNELPBGIF == (Il2CppObject *)0x0) {
      str1 = (System_String_o *)0x0;
    }
    else {
      str1 = (System_String_o *)
             (*IMMNELPBGIF->klass->vtable[3].methodPtr)
                       (IMMNELPBGIF,IMMNELPBGIF->klass->vtable[3].method);
    }
    pSVar13 = System_String__Concat(pSVar13,str1,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar13,(MethodInfo *)0x0);
    return;
  }
  (__this->fields).PLNOPJFFELC = 0;
  pGVar15 = ((*ppNVar17)->fields).MABPCBMOECE;
  if (pGVar15 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) goto LAB_03625738;
  (__this->fields).NDOHFCNNKFA = (pGVar15->fields).count;
  ppSVar1 = &(__this->fields).IHCBLFFMIIC;
  (__this->fields).IHCBLFFMIIC = StringLiteral_3312;
  thunk_FUN_01c20e04(ppSVar1);
  pNVar16 = (__this->fields).PMHMLJDMHFP;
  (__this->fields).BMFEDOFHEFE = false;
  bVar4 = false;
  if (pNVar16 != (NLFLMJPNOLF_o *)0x0) {
    pGVar15 = (pNVar16->fields).MABPCBMOECE;
    if (pGVar15 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) goto LAB_03625738;
    iVar6 = Google_Protobuf_Collections_RepeatedField<long>__get_Item
                      (pGVar15,0,Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 == (EEGDOGKBLNG_o *)0x0) goto LAB_03625738;
    iVar7 = EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
    bVar4 = iVar6 == iVar7;
  }
  (__this->fields).DNFCMDCBGHC = bVar4;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar8 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  if (pEVar8 != (EEOMEMBBGNA_o *)0x0) {
    ppCVar2 = &(__this->fields).ECLPCNFNJCP;
    (__this->fields).ECLPCNFNJCP = (pEVar8->fields).GMNJEBCECDA;
    thunk_FUN_01c20e04(ppCVar2);
    pCVar19 = (__this->fields).ECLPCNFNJCP;
    CJNHFNHJHPE = (System_Action_NLFLMJPNOLF__o *)
                  thunk_FUN_01bda818(System_Action<NLFLMJPNOLF>_TypeInfo);
    System_Action<object>___ctor();
    if (pCVar19 != (CJFBGEEIPBA_o *)0x0) {
      CJFBGEEIPBA__APAKFIKINCF(pCVar19,CJNHFNHJHPE,(MethodInfo *)0x0);
      pCVar19 = (__this->fields).ECLPCNFNJCP;
      CJNHFNHJHPE_00 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
      System_Action<long>___ctor();
      if (pCVar19 != (CJFBGEEIPBA_o *)0x0) {
        CJFBGEEIPBA__EHJDAGPJFAB(pCVar19,CJNHFNHJHPE_00,(MethodInfo *)0x0);
        pCVar19 = *ppCVar2;
        if (pCVar19 != (CJFBGEEIPBA_o *)0x0) {
          __this_01 = CJFBGEEIPBA__NKGMFCALKAM(pCVar19,*ppNVar17,(MethodInfo *)0x0);
          if (__this_01 != (OHDDKGHEEPA_o *)0x0) {
            iVar5 = OHDDKGHEEPA__NLMMJCACKPC(__this_01,(MethodInfo *)0x0);
            (__this->fields).PLNOPJFFELC = iVar5;
            (__this->fields).IHCBLFFMIIC = (__this_01->fields).super.FHPNAJENHNG;
            thunk_FUN_01c20e04(ppSVar1);
            pNVar16 = (__this->fields).PMHMLJDMHFP;
            if (pNVar16 == (NLFLMJPNOLF_o *)0x0) goto LAB_03625738;
            __this_05 = (__this->fields)._bossAvatar;
            iVar5 = (pNVar16->fields).IILCHFKCEEH;
            if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pCVar9 = MGNPHCAAEIO__MJDCGINJMOP(iVar5,false,(MethodInfo *)0x0);
            if (((pCVar9 == (CNLGMNIEGFG_o *)0x0) ||
                (pPVar10 = MGNPHCAAEIO__DDHNCKDHKAC
                                     ((pCVar9->fields).super.MECHOBPGHFJ,(MethodInfo *)0x0),
                pPVar10 == (PJKHAJKEHEL_o *)0x0)) ||
               (__this_05 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) goto LAB_03625738;
            Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                      (__this_05,(pPVar10->fields).NILOEHGNJNL,(MethodInfo *)0x0);
            __this_02 = (__this->fields)._hardModeText;
            if ((__this_02 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
               (__this_03 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
               __this_03 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03625738;
            UnityEngine_GameObject__SetActive
                      (__this_03,(__this_01->fields)._DNENMENCFFI_k__BackingField == 1,
                       (MethodInfo *)0x0);
          }
          Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__GIENGNEGHPJ
                    ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *)__this,
                     (__this->fields).IHCBLFFMIIC,StringLiteral_9679,StringLiteral_3640,0,
                     (MethodInfo *)0x0);
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pEVar8 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
          CJNHFNHJHPE_01 =
               (System_Action_OJEHKJHEBID__o *)
               thunk_FUN_01bda818(System_Action<OJEHKJHEBID>_TypeInfo);
          System_Action<object>___ctor();
          if (pEVar8 != (EEOMEMBBGNA_o *)0x0) {
            EEOMEMBBGNA__MFDOCMJONOH(pEVar8,CJNHFNHJHPE_01,(MethodInfo *)0x0);
            __this_04 = (__this->fields)._tablePlayers;
            if (__this_04 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyTable__Init
                        (__this_04,(__this->fields)._scroll,(__this->fields).PMHMLJDMHFP,
                         (__this->fields)._cellPrefab,(MethodInfo *)0x0);
              pLVar11 = (__this->fields)._cancelButton;
              if (pLVar11 != (LabelButton_o *)0x0) {
                LabelButton__set_Alias(pLVar11,StringLiteral_3640,(MethodInfo *)0x0);
                pLVar11 = (__this->fields)._cancelButton;
                if (pLVar11 != (LabelButton_o *)0x0) {
                  pUVar18 = (UnityEngine_Events_UnityEvent_o *)
                            (pLVar11->fields).super.super.super.m_OnClick;
                  pUVar12 = (UnityEngine_Events_UnityAction_o *)
                            thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                  UnityEngine_Events_UnityAction___ctor();
                  if (pUVar18 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    UnityEngine_Events_UnityEvent__AddListener(pUVar18,pUVar12,(MethodInfo *)0x0);
                    pLVar11 = (__this->fields)._leaveButton;
                    if (pLVar11 != (LabelButton_o *)0x0) {
                      LabelButton__set_Alias(pLVar11,StringLiteral_17837,(MethodInfo *)0x0);
                      pLVar11 = (__this->fields)._leaveButton;
                      if (pLVar11 != (LabelButton_o *)0x0) {
                        pUVar18 = (UnityEngine_Events_UnityEvent_o *)
                                  (pLVar11->fields).super.super.super.m_OnClick;
                        pUVar12 = (UnityEngine_Events_UnityAction_o *)
                                  thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                        UnityEngine_Events_UnityAction___ctor();
                        if (pUVar18 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                          UnityEngine_Events_UnityEvent__AddListener
                                    (pUVar18,pUVar12,(MethodInfo *)0x0);
                          pLVar11 = (__this->fields)._raidButton;
                          if (pLVar11 != (LabelButton_o *)0x0) {
                            LabelButton__set_Alias(pLVar11,StringLiteral_4401,(MethodInfo *)0x0);
                            pLVar11 = (__this->fields)._raidButton;
                            if (pLVar11 != (LabelButton_o *)0x0) {
                              pUVar18 = (UnityEngine_Events_UnityEvent_o *)
                                        (pLVar11->fields).super.super.super.m_OnClick;
                              pUVar12 = (UnityEngine_Events_UnityAction_o *)
                                        thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                              UnityEngine_Events_UnityAction___ctor();
                              if (pUVar18 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                UnityEngine_Events_UnityEvent__AddListener
                                          (pUVar18,pUVar12,(MethodInfo *)0x0);
                                Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__BEGNFALPJKP
                                          (__this,method_00);
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
LAB_03625738:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

