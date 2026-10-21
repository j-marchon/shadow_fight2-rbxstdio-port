// Nekki.SF2.GUI.Shop.ShopScene$$CLNAOMIIBLH @ RVA 0x34325F4

void Nekki_SF2_GUI_Shop_ShopScene__CLNAOMIIBLH
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar1;
  UnityEngine_Events_UnityAction_T0__o *pUVar2;
  UnityEngine_Events_UnityAction_o *call;
  System_Action_IGFGDDANEPE__o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_HFEIKHEIFDE_o *__this_00;
  KKLJIDJBFEI_o *pKVar3;
  System_Action_o *pSVar4;
  MCEIBCKPIAD_o *pMVar5;
  System_Action_FAIJGJCCKJC__o *pSVar6;
  EEGDOGKBLNG_o *__this_01;
  System_Action_IList_PIADCKMDDAK___o *CJNHFNHJHPE_00;
  ACHLOMELAJE_o *pAVar7;
  System_Action_BNKBGIIJNLF__o *CJNHFNHJHPE_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *pNVar8;
  Nekki_SF2_GUI_Common_PaymentUI_o *pNVar9;
  GGHCLMEFIGO_o *pGVar10;
  Nekki_SF2_GUI_Shop_ItemsPanel_NCKBCCJJHGI_o *__this_02;
  Nekki_SF2_GUI_Shop_ItemsPanel_BINPIFNIONG_o *__this_03;
  UnityEngine_Events_UnityEvent_o *pUVar11;
  GGHCLMEFIGO_OENHIHPIEPH_o *__this_04;
  
  if ((DAT_04568179 & 1) == 0) {
    FUN_01bab630(&System_Action<IGFGDDANEPE>_TypeInfo);
    FUN_01bab630(&System_Action<BNKBGIIJNLF>_TypeInfo);
    FUN_01bab630(&System_Action<IList<PIADCKMDDAK>>_TypeInfo);
    FUN_01bab630(&System_Action<FAIJGJCCKJC>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_CLNAOMIIBLH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_AFLOKAHKLFA__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_BNIAIFODLJK__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_BNKPDJFNJKP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_CJDBBCECPGF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_DAGJHIAIOML__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_EGMHFFODCKH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_EICMBDFALCN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_LCCGFCCNEGC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_LFHIAJBBKGC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_OMAPCIJEBOP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_PLCCEAFLBOM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_RefreshItems__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<TableViewCell>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<List<IGFGDDANEPE>>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<TableViewCell>_RemoveListener__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<HOOAAGABMBL>_RemoveListener__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<List<IGFGDDANEPE>>_RemoveListener__);
    DAT_04568179 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Shop_ShopScene__GNOBOBBEEAH(__this,method);
  Nekki_SF2_GUI_Shop_ShopScene__StopCoroutine_ReloadActiveItemsAndRefresh(__this,method_00);
  Nekki_SF2_GUI_Shop_ShopScene__StopCoroutine_ReloadRaidItemPackSliderDelayed(__this,method_01);
  Nekki_SF2_GUI_Shop_ShopScene__JLHIDOEJFCC(__this,method_02);
  pNVar1 = (__this->fields)._ItemsPanel;
  if (pNVar1 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
    Nekki_SF2_GUI_Shop_ItemsPanel__RememberSelection(pNVar1,(HOOAAGABMBL_o *)0x0,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._ItemsPanel;
    if (pNVar1 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
      __this_02 = (pNVar1->fields)._OnItemSelected;
      pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<HOOAAGABMBL>_TypeInfo);
      UnityEngine_Events_UnityAction<object>___ctor();
      if (__this_02 != (Nekki_SF2_GUI_Shop_ItemsPanel_NCKBCCJJHGI_o *)0x0) {
        UnityEngine_Events_UnityEvent<object>__RemoveListener
                  ((UnityEngine_Events_UnityEvent_T0__o *)__this_02,pUVar2,
                   Method_UnityEngine_Events_UnityEvent<HOOAAGABMBL>_RemoveListener__);
        pNVar1 = (__this->fields)._ItemsPanel;
        if (pNVar1 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
          __this_03 = (pNVar1->fields)._OnItemDoubleClick;
          pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction<TableViewCell>_TypeInfo);
          UnityEngine_Events_UnityAction<object>___ctor();
          if (__this_03 != (Nekki_SF2_GUI_Shop_ItemsPanel_BINPIFNIONG_o *)0x0) {
            UnityEngine_Events_UnityEvent<object>__RemoveListener
                      ((UnityEngine_Events_UnityEvent_T0__o *)__this_03,pUVar2,
                       Method_UnityEngine_Events_UnityEvent<TableViewCell>_RemoveListener__);
            pNVar1 = (__this->fields)._ItemsPanel;
            if (pNVar1 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
              pUVar11 = (pNVar1->fields)._OnDragBegin;
              call = (UnityEngine_Events_UnityAction_o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
              UnityEngine_Events_UnityAction___ctor();
              if (pUVar11 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__RemoveListener(pUVar11,call,(MethodInfo *)0x0);
                pNVar1 = (__this->fields)._ItemsPanel;
                if (pNVar1 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
                  Nekki_SF2_GUI_Shop_ItemsPanel__Free(pNVar1,(MethodInfo *)0x0);
                  (__this->fields).ReloadActiveItemsAndRefreshCallback = (System_Action_o *)0x0;
                  thunk_FUN_01c20e04(&(__this->fields).ReloadActiveItemsAndRefreshCallback,0);
                  CJNHFNHJHPE = (System_Action_IGFGDDANEPE__o *)
                                thunk_FUN_01bda818(System_Action<IGFGDDANEPE>_TypeInfo);
                  System_Action<object>___ctor();
                  if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  DEKKGJNMFEB__LMPMABKEFBE(CJNHFNHJHPE,(MethodInfo *)0x0);
                  pNVar8 = (__this->fields)._ForgePanel;
                  if ((pNVar8 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) &&
                     (__this_00 = (pNVar8->fields)._OnRecipeSelected,
                     __this_00 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_HFEIKHEIFDE_o *)0x0)) {
                    UnityEngine_Events_UnityEventBase__RemoveAllListeners
                              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
                    pNVar9 = (__this->fields).AGKBOPBINNE;
                    if ((pNVar9 != (Nekki_SF2_GUI_Common_PaymentUI_o *)0x0) &&
                       (pUVar11 = (pNVar9->fields)._OnProductsUpdateEvent,
                       pUVar11 != (UnityEngine_Events_UnityEvent_o *)0x0)) {
                      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                                ((UnityEngine_Events_UnityEventBase_o *)pUVar11,(MethodInfo *)0x0);
                      pKVar3 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                      pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                      System_Action___ctor();
                      if (pKVar3 != (KKLJIDJBFEI_o *)0x0) {
                        KKLJIDJBFEI__PILMCAFCLMN(pKVar3,pSVar4,(MethodInfo *)0x0);
                        pKVar3 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                        pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                        System_Action___ctor();
                        if (pKVar3 != (KKLJIDJBFEI_o *)0x0) {
                          KKLJIDJBFEI__PILMCAFCLMN(pKVar3,pSVar4,(MethodInfo *)0x0);
                          pKVar3 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                          pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                          System_Action___ctor();
                          if (pKVar3 != (KKLJIDJBFEI_o *)0x0) {
                            KKLJIDJBFEI__JGNHEIICALL(pKVar3,pSVar4,(MethodInfo *)0x0);
                            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                              thunk_FUN_01ba7564();
                            }
                            pMVar5 = HJPEKDOPBHN__IOMECNCIENO((MethodInfo *)0x0);
                            pSVar6 = (System_Action_FAIJGJCCKJC__o *)
                                     thunk_FUN_01bda818(System_Action<FAIJGJCCKJC>_TypeInfo);
                            System_Action<object>___ctor();
                            if (pMVar5 != (MCEIBCKPIAD_o *)0x0) {
                              MCEIBCKPIAD__JPOHHBPJMON(pMVar5,pSVar6,(MethodInfo *)0x0);
                              pMVar5 = HJPEKDOPBHN__IOMECNCIENO((MethodInfo *)0x0);
                              pSVar6 = (System_Action_FAIJGJCCKJC__o *)
                                       thunk_FUN_01bda818(System_Action<FAIJGJCCKJC>_TypeInfo);
                              System_Action<object>___ctor();
                              if (pMVar5 != (MCEIBCKPIAD_o *)0x0) {
                                MCEIBCKPIAD__JHHCEIDPANF(pMVar5,pSVar6,(MethodInfo *)0x0);
                                __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                                CJNHFNHJHPE_00 =
                                     (System_Action_IList_PIADCKMDDAK___o *)
                                     thunk_FUN_01bda818(System_Action<IList<PIADCKMDDAK>>_TypeInfo);
                                System_Action<object>___ctor();
                                if (__this_01 != (EEGDOGKBLNG_o *)0x0) {
                                  EEGDOGKBLNG__GFFGLIEOPGO
                                            (__this_01,CJNHFNHJHPE_00,(MethodInfo *)0x0);
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
                                  if (NLPJLHOEAOE_TypeInfo->static_fields->
                                      _EDIEPEOIMDF_k__BackingField != (ACHLOMELAJE_o *)0x0) {
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
                                    pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->
                                             _EDIEPEOIMDF_k__BackingField;
                                    if (pAVar7 == (ACHLOMELAJE_o *)0x0) goto LAB_03532ccc;
                                    CIOBNDOOGIM__BHFGGAKKJKP
                                              ((CIOBNDOOGIM_o *)pAVar7,false,(MethodInfo *)0x0);
                                  }
                                  pAVar7 = (__this->fields).OKNKKHGBECG;
                                  if ((pAVar7 != (ACHLOMELAJE_o *)0x0) &&
                                     (pGVar10 = (pAVar7->fields).OIDPLCLELEN,
                                     pGVar10 != (GGHCLMEFIGO_o *)0x0)) {
                                    __this_04 = (pGVar10->fields).LNPBODFAFII;
                                    pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
                                             thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction<List<IGFGDDANEPE>>_TypeInfo
                                                  );
                                    UnityEngine_Events_UnityAction<object>___ctor();
                                    if (__this_04 != (GGHCLMEFIGO_OENHIHPIEPH_o *)0x0) {
                                      UnityEngine_Events_UnityEvent<object>__RemoveListener
                                                ((UnityEngine_Events_UnityEvent_T0__o *)__this_04,
                                                 pUVar2,
                                                 Method_UnityEngine_Events_UnityEvent<List<IGFGDDANEPE>>_RemoveListener__
                                                );
                                      pAVar7 = (__this->fields).OKNKKHGBECG;
                                      CJNHFNHJHPE_01 =
                                           (System_Action_BNKBGIIJNLF__o *)
                                           thunk_FUN_01bda818(System_Action<BNKBGIIJNLF>_TypeInfo);
                                      System_Action<object>___ctor();
                                      if (pAVar7 != (ACHLOMELAJE_o *)0x0) {
                                        ACHLOMELAJE__LJDDDMFPMDF
                                                  (pAVar7,CJNHFNHJHPE_01,(MethodInfo *)0x0);
                                        pAVar7 = (__this->fields).OKNKKHGBECG;
                                        pSVar4 = (System_Action_o *)
                                                 thunk_FUN_01bda818(System_Action_TypeInfo);
                                        System_Action___ctor();
                                        if (pAVar7 != (ACHLOMELAJE_o *)0x0) {
                                          ACHLOMELAJE__FPKPJODDINL(pAVar7,pSVar4,(MethodInfo *)0x0);
                                          (__this->fields).OKNKKHGBECG = (ACHLOMELAJE_o *)0x0;
                                          thunk_FUN_01c20e04(&(__this->fields).OKNKKHGBECG,0);
                                          Nekki_SF2_GUI_Scene<object>__CLNAOMIIBLH
                                                    ((Nekki_SF2_GUI_Scene_T__o *)__this,
                                                                                                          
                                                  Method_Nekki_SF2_GUI_Scene<ShopScene>_CLNAOMIIBLH__
                                                  );
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
LAB_03532ccc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

