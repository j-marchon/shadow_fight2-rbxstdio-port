// MainMenuRaidRatingPanel$$DKLDHKNAEBO @ RVA 0x32BD6D8

void MainMenuRaidRatingPanel__DKLDHKNAEBO(MainMenuRaidRatingPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionButton_o *pNVar1;
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar2;
  UnityEngine_Events_UnityAction_o *pUVar3;
  PLIIGOCLJDL_o *pPVar4;
  KKLJIDJBFEI_o *pKVar5;
  System_Action_KEFHDOHHHML__o *EKDIECDFOIO;
  System_Action_JCFJFJCKLKG__o *CJNHFNHJHPE;
  EEOMEMBBGNA_o *__this_00;
  System_Action_OJEHKJHEBID__o *CJNHFNHJHPE_00;
  Il2CppObject *IMMNELPBGIF;
  MethodInfo *method_00;
  MethodInfo *pMVar6;
  SFButton_o *pSVar7;
  System_String_o **ppSVar8;
  UnityEngine_Events_UnityEvent_o *pUVar9;
  DCHAJIMIFHP_o *__this_01;
  undefined4 local_34;
  
  if ((DAT_045674aa & 1) == 0) {
    FUN_01bab630(&System_Action<JCFJFJCKLKG>_TypeInfo);
    FUN_01bab630(&System_Action<OJEHKJHEBID>_TypeInfo);
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_MainMenuRaidRatingPanel_AKPDIPJLNGK__);
    FUN_01bab630(&Method_MainMenuRaidRatingPanel_DDOLHNHBCIO__);
    FUN_01bab630(&Method_MainMenuRaidRatingPanel_KCGCNFGADFD__);
    FUN_01bab630(&Method_MainMenuRaidRatingPanel_KFBJGJHEIHC__);
    FUN_01bab630(&Method_MainMenuRaidRatingPanel_LIJCCLDLFKN__);
    FUN_01bab630(&Method_MainMenuRaidRatingPanel_LLBKAMIEBAH__);
    FUN_01bab630(&Method_MainMenuRaidRatingPanel_NLBPEFENJIK__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_13890);
    FUN_01bab630(&StringLiteral_20479);
    FUN_01bab630(&StringLiteral_13889);
    FUN_01bab630(&StringLiteral_14092);
    FUN_01bab630(&StringLiteral_1);
    DAT_045674aa = 1;
  }
  (__this->fields).EGOLDJCOBFF = false;
  (__this->fields).AAKJNHODIMO = 0;
  (__this->fields).EBKCENPDEIE = 0;
  *(undefined8 *)((long)&(__this->fields).EBKCENPDEIE + 1) = 0;
  ppSVar8 = &(__this->fields).ELBBBIIBIKM;
  *ppSVar8 = StringLiteral_1;
  thunk_FUN_01c20e04(ppSVar8);
  pNVar1 = (__this->fields)._btnTop100;
  (__this->fields).PCNECANPJMO = 0;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
              (pNVar1,StringLiteral_14092,StringLiteral_13889,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._btnTop100;
    if ((pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
       (pUVar2 = (pNVar1->fields).super.super.m_OnClick,
       pUVar2 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)pUVar2,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._btnTop100;
      if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
        pUVar9 = (UnityEngine_Events_UnityEvent_o *)(pNVar1->fields).super.super.m_OnClick;
        pUVar3 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar9 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(pUVar9,pUVar3,(MethodInfo *)0x0);
          pNVar1 = (__this->fields)._btnTop100;
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pPVar4 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
          if ((pPVar4 != (PLIIGOCLJDL_o *)0x0) &&
             (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0)) {
            SFButton__set_IsFlashing
                      ((SFButton_o *)pNVar1,(pPVar4->fields)._KDMKAMFOEAI_k__BackingField,
                       (MethodInfo *)0x0);
            pNVar1 = (__this->fields)._btnLeague;
            if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
              Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                        (pNVar1,StringLiteral_14092,StringLiteral_13890,(MethodInfo *)0x0);
              pNVar1 = (__this->fields)._btnLeague;
              if ((pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
                 (pUVar2 = (pNVar1->fields).super.super.m_OnClick,
                 pUVar2 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
                UnityEngine_Events_UnityEventBase__RemoveAllListeners
                          ((UnityEngine_Events_UnityEventBase_o *)pUVar2,(MethodInfo *)0x0);
                pNVar1 = (__this->fields)._btnLeague;
                if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                  pUVar9 = (UnityEngine_Events_UnityEvent_o *)(pNVar1->fields).super.super.m_OnClick
                  ;
                  pUVar3 = (UnityEngine_Events_UnityAction_o *)
                           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                  UnityEngine_Events_UnityAction___ctor();
                  if (pUVar9 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    pMVar6 = (MethodInfo *)0x0;
                    UnityEngine_Events_UnityEvent__AddListener(pUVar9,pUVar3,(MethodInfo *)0x0);
                    pKVar5 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                    if (pKVar5 != (KKLJIDJBFEI_o *)0x0) {
                      if ((pKVar5->fields).super._MGGBEPKMPCF_k__BackingField != false) {
                        local_34 = 0;
                        thunk_FUN_01bda448(int_TypeInfo,&local_34);
                        MainMenuRaidRatingPanel__NLBPEFENJIK(__this,IMMNELPBGIF,pMVar6);
                      }
                      MainMenuRaidRatingPanel__SetClanVisible(__this,false,pMVar6);
                      pSVar7 = (__this->fields)._btnClan;
                      if (pSVar7 != (SFButton_o *)0x0) {
                        pUVar9 = (UnityEngine_Events_UnityEvent_o *)(pSVar7->fields).super.m_OnClick
                        ;
                        pUVar3 = (UnityEngine_Events_UnityAction_o *)
                                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                        UnityEngine_Events_UnityAction___ctor();
                        if (pUVar9 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                          pMVar6 = (MethodInfo *)0x0;
                          UnityEngine_Events_UnityEvent__AddListener
                                    (pUVar9,pUVar3,(MethodInfo *)0x0);
                          pKVar5 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                          if (pKVar5 != (KKLJIDJBFEI_o *)0x0) {
                            if ((pKVar5->fields).super._MGGBEPKMPCF_k__BackingField != false) {
                              MainMenuRaidRatingPanel__KFBJGJHEIHC
                                        (__this,(OJEHKJHEBID_o *)0x0,pMVar6);
                            }
                            pNVar1 = (__this->fields)._btnDan;
                            if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                              pUVar9 = (UnityEngine_Events_UnityEvent_o *)
                                       (pNVar1->fields).super.super.m_OnClick;
                              pUVar3 = (UnityEngine_Events_UnityAction_o *)
                                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                              UnityEngine_Events_UnityAction___ctor();
                              if (pUVar9 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                UnityEngine_Events_UnityEvent__AddListener
                                          (pUVar9,pUVar3,(MethodInfo *)0x0);
                                MainMenuRaidRatingPanel__AIFHOHIMLFM(__this,method_00);
                                pKVar5 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                                if (pKVar5 != (KKLJIDJBFEI_o *)0x0) {
                                  __this_01 = (pKVar5->fields).super.FNHOHLGNHGN;
                                  EKDIECDFOIO = (System_Action_KEFHDOHHHML__o *)
                                                thunk_FUN_01bda818(
                                                  System_Action<KEFHDOHHHML>_TypeInfo);
                                  System_Action<object>___ctor();
                                  if (__this_01 != (DCHAJIMIFHP_o *)0x0) {
                                    DCHAJIMIFHP__MPFFOIIBAKO
                                              (__this_01,StringLiteral_20479,EKDIECDFOIO,
                                               (MethodInfo *)0x0);
                                    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                                      thunk_FUN_01ba7564();
                                    }
                                    pPVar4 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
                                    CJNHFNHJHPE = (System_Action_JCFJFJCKLKG__o *)
                                                  thunk_FUN_01bda818(
                                                  System_Action<JCFJFJCKLKG>_TypeInfo);
                                    System_Action<object>___ctor();
                                    if (pPVar4 != (PLIIGOCLJDL_o *)0x0) {
                                      PLIIGOCLJDL__JODJMGAGEFG(pPVar4,CJNHFNHJHPE,(MethodInfo *)0x0)
                                      ;
                                      __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                                      CJNHFNHJHPE_00 =
                                           (System_Action_OJEHKJHEBID__o *)
                                           thunk_FUN_01bda818(System_Action<OJEHKJHEBID>_TypeInfo);
                                      System_Action<object>___ctor();
                                      if (__this_00 != (EEOMEMBBGNA_o *)0x0) {
                                        EEOMEMBBGNA__MFDOCMJONOH
                                                  (__this_00,CJNHFNHJHPE_00,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

