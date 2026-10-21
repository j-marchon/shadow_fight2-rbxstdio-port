// TypeDefIndex 2856
// Namespace: Nekki.SF2.GUI.Shop
// public class ShopScene : Scene<ShopScene>
// Fields:
//   public static int ForceSlowRenderFramesLong; // 0x0
//   public static int ForceSlowRenderFramesShort; // 0x4
//   private Vector2 _WeaponImageSize; // 0x90
//   private Vector2 _ArmorImageSize; // 0x98
//   private Vector2 _HelmetImageSize; // 0xA0
//   private Vector2 _RangedImageSize; // 0xA8
//   private Vector2 _MagicImageSize; // 0xB0
//   private Vector2 _PaymentImageSize; // 0xB8
//   private Vector2 _RaidImageSize; // 0xC0
//   private Vector2 _FreeImageSize; // 0xC8
//   private GameObject _PanelsContainer; // 0xD0
//   private float FBBJFCLGAJE; // 0xD8
//   private float _ForgeModeX; // 0xDC
//   private float _ChangeModeDuration; // 0xE0
//   private SidePanel _ItemInfo; // 0xE8
//   private SidePanel _ItemParameters; // 0xF0
//   private Graphic[] _ItemParameters_additionalRootGraphics; // 0xF8
//   private SidePanel _ItemProperties; // 0x100
//   private Graphic[] _ItemProperties_additionalRootGraphics; // 0x108
//   private ForgePanel _ForgePanel; // 0x110
//   private LabelAlias _NoItemsMessage; // 0x118
//   private LabelButton _BtnLoadRaid; // 0x120
//   private LabelButton _TryItemButton; // 0x128
//   private LabelButton _RestorePurchasesButton; // 0x130
//   private LabelButton _ForgeButton; // 0x138
//   private Indicator _EnchantmentsIndicator; // 0x140
//   private ModelContainer _ModelContainer; // 0x148
//   private CanvasGroup _ShopUIGroup; // 0x150
//   private GameObject _InfoPanelContentPrefab; // 0x158
//   private GameObject _ParametersPanelContentPrefab; // 0x160
//   private GameObject _PropertiesPanelContentPrefab; // 0x168
//   private GameObject _CheatsPanelPrefab; // 0x170
//   private ItemsPanel _ItemsPanel; // 0x178
//   private SpriteRendererQuality _Background; // 0x180
//   private float _HintAnimationDelay; // 0x188
//   private float _HintAnimationDuration; // 0x18C
//   private MainMenu CCKIFMALFBA; // 0x190
//   private ShopBottomPanel GJIPOBCNEPG; // 0x198
//   private CheatsPanel OJKJMHEEAGN; // 0x1A0
//   private PaymentUI AGKBOPBINNE; // 0x1A8
//   private IEnumerator GBPDKLANGLP; // 0x1B0
//   public Action ReloadActiveItemsAndRefreshCallback; // 0x1B8
//   private IEnumerator IMJDKMADNGL; // 0x1C0
//   private DBNKANLBEFF HLKBICFHFJM; // 0x1C8
//   private int FIBCDHMGBIL; // 0x1CC
//   private List<HOOAAGABMBL> CAFKGACOEBL; // 0x1D0
//   private List<HOOAAGABMBL> HDHLOAOBOIA; // 0x1D8
//   private List<HOOAAGABMBL> CDGAHKJEMHM; // 0x1E0
//   private List<HOOAAGABMBL> CBGOPJALHHB; // 0x1E8
//   private List<HOOAAGABMBL> LAPBNMPGIEH; // 0x1F0
//   private List<HOOAAGABMBL> NHJBNMACENA; // 0x1F8
//   private List<HOOAAGABMBL> FALDFPJGOMB; // 0x200
//   private List<HOOAAGABMBL> EPKOHJKLMIJ; // 0x208
//   private Sequence OOIFAHNCKAO; // 0x210
//   private POIJDKLHHKO AIAODGKGPEI; // 0x218
//   private FBBNEILNOKK IPNBNGGHNLL; // 0x21C
//   private int FGODAMMODMJ; // 0x220
//   private FFHKCJAOPLI GLGDPPHDDAJ; // 0x228
//   private ACHLOMELAJE OKNKKHGBECG; // 0x230

// ===== public void RandomizeObscuredVars()  [RVA 0x34322AC]
// Nekki.SF2.GUI.Shop.ShopScene$$RandomizeObscuredVars @ RVA 0x34322AC

void Nekki_SF2_GUI_Shop_ShopScene__RandomizeObscuredVars
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_Fights_ModelContainer_o *__this_00;
  
  __this_00 = (__this->fields)._ModelContainer;
  if (__this_00 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
    Nekki_SF2_Core_Fights_ModelContainer__RandomizeObscuredVars(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ScrollToItemByName(HPPDIEDAKEC HONPNKFABKF, string CNIELFLIKJB)  [RVA 0x34322C8]
// Nekki.SF2.GUI.Shop.ShopScene$$ScrollToItemByName @ RVA 0x34322C8

void Nekki_SF2_GUI_Shop_ShopScene__ScrollToItemByName
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,int32_t HONPNKFABKF,
               System_String_o *CNIELFLIKJB,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ItemsPanel_o *__this_00;
  
  Nekki_SF2_GUI_Shop_ShopScene__GoToSlider(__this,HONPNKFABKF,true,method);
  __this_00 = (__this->fields)._ItemsPanel;
  if (__this_00 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
    Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem(__this_00,CNIELFLIKJB,0.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RefreshItems()  [RVA 0x3432394]
// Nekki.SF2.GUI.Shop.ShopScene$$RefreshItems @ RVA 0x3432394

void Nekki_SF2_GUI_Shop_ShopScene__RefreshItems
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ItemsPanel_o *__this_00;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields)._ItemsPanel;
  if (__this_00 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
    Nekki_SF2_GUI_Shop_ItemsPanel__UpdateScrollItems(__this_00,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Shop_ShopScene__UpdateNewItemsCounters(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void CLNAOMIIBLH()  [RVA 0x34325F4]
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


// ===== public void OnRestorePurchasesButtonClick()  [RVA 0x3432FB8]
// Nekki.SF2.GUI.Shop.ShopScene$$OnRestorePurchasesButtonClick @ RVA 0x3432FB8

void Nekki_SF2_GUI_Shop_ShopScene__OnRestorePurchasesButtonClick
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_PaymentUI_o *__this_00;
  
  __this_00 = (__this->fields).AGKBOPBINNE;
  if (__this_00 != (Nekki_SF2_GUI_Common_PaymentUI_o *)0x0) {
    Nekki_SF2_GUI_Common_PaymentUI__RestorePurchases(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JFCGHINAKCH()  [RVA 0x3432FD4]
// Nekki.SF2.GUI.Shop.ShopScene$$JFCGHINAKCH @ RVA 0x3432FD4

void Nekki_SF2_GUI_Shop_ShopScene__JFCGHINAKCH
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *__this_00;
  Nekki_SF2_GUI_Shop_ShopBottomPanel_o *__this_01;
  System_Action_o *CPECAEHDDDB;
  int32_t HONPNKFABKF;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  FFHKCJAOPLI_o *pFVar2;
  ACHLOMELAJE_o *pAVar3;
  LPAPAMPGDFN_o *pLVar4;
  
  if ((DAT_0456817a & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_CJDBBCECPGF__);
    DAT_0456817a = 1;
  }
  pFVar2 = (__this->fields).GLGDPPHDDAJ;
  if (pFVar2 == (FFHKCJAOPLI_o *)0x0) {
    Nekki_SF2_GUI_Shop_ShopScene__GoToSlider(__this,1,false,in_x3);
    __this_01 = (__this->fields).GJIPOBCNEPG;
    if (__this_01 != (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *)0x0) {
      HONPNKFABKF = 1;
LAB_035330c4:
      Nekki_SF2_GUI_Shop_ShopBottomPanel__ScrollOnStartTo(__this_01,HONPNKFABKF,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    method_00 = (MethodInfo *)0x0;
    Nekki_SF2_GUI_Shop_ShopScene__GoToSlider(__this,(pFVar2->fields).HPPDIEDAKEC,false,in_x3);
    pFVar2 = (__this->fields).GLGDPPHDDAJ;
    if (pFVar2 != (FFHKCJAOPLI_o *)0x0) {
      if (((pFVar2->fields).HPPDIEDAKEC == 8) &&
         ((pFVar2->fields).CJLNOJMBNPN == (HOOAAGABMBL_o *)0x0)) {
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
        if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField !=
            (ACHLOMELAJE_o *)0x0) {
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
          if ((pAVar3 == (ACHLOMELAJE_o *)0x0) ||
             (pLVar4 = (pAVar3->fields).LMCDOMHENMC, pLVar4 == (LPAPAMPGDFN_o *)0x0))
          goto LAB_035331c4;
          if (0 < (pLVar4->fields).AMIMEMOELHE) {
            CPECAEHDDDB = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            method_00 = Method_Nekki_SF2_GUI_Shop_ShopScene_CJDBBCECPGF__;
            System_Action___ctor();
            Nekki_SF2_GUI_Shop_ShopScene__GFFNHPFGAFJ(__this,CPECAEHDDDB,method_00);
          }
        }
      }
      else {
        __this_00 = (__this->fields)._ItemsPanel;
        if (__this_00 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035331c4;
        method_00 = (MethodInfo *)0x0;
        Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem
                  (__this_00,(pFVar2->fields).CJLNOJMBNPN,0.0,(MethodInfo *)0x0);
      }
      pFVar2 = (__this->fields).GLGDPPHDDAJ;
      if (pFVar2 != (FFHKCJAOPLI_o *)0x0) {
        bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pFVar2->fields).NBAFFAONHFO,(MethodInfo *)0x0);
        if (!bVar1) {
          pFVar2 = (__this->fields).GLGDPPHDDAJ;
          if (pFVar2 == (FFHKCJAOPLI_o *)0x0) goto LAB_035331c4;
          Nekki_SF2_GUI_Shop_ShopScene__OpenForgeAndSetRecipe
                    (__this,(pFVar2->fields).NBAFFAONHFO,method_00);
        }
        pFVar2 = (__this->fields).GLGDPPHDDAJ;
        if ((pFVar2 != (FFHKCJAOPLI_o *)0x0) &&
           (__this_01 = (__this->fields).GJIPOBCNEPG,
           __this_01 != (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *)0x0)) {
          HONPNKFABKF = (pFVar2->fields).HPPDIEDAKEC;
          goto LAB_035330c4;
        }
      }
    }
  }
LAB_035331c4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JINDJMBNDGM(HOOAAGABMBL CNDPGGAFHEA)  [RVA 0x343340C]
// Nekki.SF2.GUI.Shop.ShopScene$$JINDJMBNDGM @ RVA 0x343340C

void Nekki_SF2_GUI_Shop_ShopScene__JINDJMBNDGM
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,HOOAAGABMBL_o *CNDPGGAFHEA,MethodInfo *method
               )

{
  undefined8 *puVar1;
  int iVar2;
  Nekki_SF2_GUI_Shop_SidePanel_o *pNVar3;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar4;
  
  if ((DAT_0456817b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Count__);
    FUN_01bab630(&StringLiteral_12038/*"ShopPieces.Right_flag_properties_none"*/);
    FUN_01bab630(&StringLiteral_12037/*"ShopPieces.Right_flag_properties"*/);
    FUN_01bab630(&StringLiteral_12034/*"ShopPieces.Left_flag_properties"*/);
    FUN_01bab630(&StringLiteral_12035/*"ShopPieces.Left_flag_properties_none"*/);
    DAT_0456817b = 1;
  }
  if (CNDPGGAFHEA == (HOOAAGABMBL_o *)0x0) {
    return;
  }
  pSVar4 = (CNDPGGAFHEA->fields)._GJPBKHJCFBE_k__BackingField;
  if ((pSVar4 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) &&
     (pNVar3 = (__this->fields)._ItemProperties, pNVar3 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0)) {
    iVar2 = (pSVar4->fields)._size;
    puVar1 = &StringLiteral_12037/*"ShopPieces.Right_flag_properties"*/;
    if (iVar2 < 1) {
      puVar1 = &StringLiteral_12038/*"ShopPieces.Right_flag_properties_none"*/;
    }
    Nekki_SF2_GUI_Shop_SidePanel__set_OpenImage(pNVar3,(System_String_o *)*puVar1,(MethodInfo *)0x0)
    ;
    pNVar3 = (__this->fields)._ItemProperties;
    if (pNVar3 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) {
      puVar1 = &StringLiteral_12034/*"ShopPieces.Left_flag_properties"*/;
      if (iVar2 < 1) {
        puVar1 = &StringLiteral_12035/*"ShopPieces.Left_flag_properties_none"*/;
      }
      Nekki_SF2_GUI_Shop_SidePanel__set_CloseImage
                (pNVar3,(System_String_o *)*puVar1,(MethodInfo *)0x0);
      __this_00 = Nekki_SF2_GUI_Shop_ShopScene__get_PropertiesPanelContent(__this,method_00);
      if (__this_00 != (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *)0x0) {
        Nekki_SF2_GUI_Shop_PropertiesPanelContent__set_ItemInfo
                  (__this_00,CNDPGGAFHEA,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateModelIfNeed(HOOAAGABMBL CAIFMHMOEEP)  [RVA 0x343355C]
// Nekki.SF2.GUI.Shop.ShopScene$$UpdateModelIfNeed @ RVA 0x343355C

void Nekki_SF2_GUI_Shop_ShopScene__UpdateModelIfNeed
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,HOOAAGABMBL_o *CAIFMHMOEEP,MethodInfo *method
               )

{
  bool bVar1;
  MethodInfo *in_x3;
  ACHLOMELAJE_o *pAVar2;
  Nekki_SF2_Core_Fights_ModelContainer_o *__this_00;
  
  if ((DAT_0456817c & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456817c = 1;
  }
  __this_00 = (__this->fields)._ModelContainer;
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
  if ((pAVar2 != (ACHLOMELAJE_o *)0x0) &&
     (__this_00 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0)) {
    bVar1 = Nekki_SF2_Core_Fights_ModelContainer__IsItemDiffer
                      (__this_00,(pAVar2->fields).MFLNIMCFPDK,(MethodInfo *)0x0);
    if (bVar1) {
      Nekki_SF2_GUI_Shop_ShopScene__FJHEDBMBEFI(__this,CAIFMHMOEEP,4,in_x3);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IMJPAHJCLHK()  [RVA 0x3433898]
// Nekki.SF2.GUI.Shop.ShopScene$$IMJPAHJCLHK @ RVA 0x3433898

void Nekki_SF2_GUI_Shop_ShopScene__IMJPAHJCLHK
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ItemsPanel_o *__this_00;
  HOOAAGABMBL_o *CNDPGGAFHEA;
  MethodInfo *in_x2;
  
  __this_00 = (__this->fields)._ItemsPanel;
  if (__this_00 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  CNDPGGAFHEA = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(__this_00,(MethodInfo *)0x0);
  if (CNDPGGAFHEA != (HOOAAGABMBL_o *)0x0) {
    Nekki_SF2_GUI_Shop_ShopScene__OAJODMIPLPF(__this,CNDPGGAFHEA,in_x2);
    return;
  }
  return;
}


// ===== private void OAJODMIPLPF(HOOAAGABMBL CNDPGGAFHEA)  [RVA 0x34338D0]
// Nekki.SF2.GUI.Shop.ShopScene$$OAJODMIPLPF @ RVA 0x34338D0

void Nekki_SF2_GUI_Shop_ShopScene__OAJODMIPLPF
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,HOOAAGABMBL_o *CNDPGGAFHEA,MethodInfo *method
               )

{
  Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this_00;
  
  if (CNDPGGAFHEA == (HOOAAGABMBL_o *)0x0) {
    return;
  }
  __this_00 = Nekki_SF2_GUI_Shop_ShopScene__get_InfoPanelContent(__this,(MethodInfo *)CNDPGGAFHEA);
  if (__this_00 != (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0) {
    Nekki_SF2_GUI_Shop_InfoPanelContent__set_ItemInfo(__this_00,CNDPGGAFHEA,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DAGJHIAIOML(IList<PIADCKMDDAK> HBHPFKJMGCK)  [RVA 0x3433958]
// Nekki.SF2.GUI.Shop.ShopScene$$DAGJHIAIOML @ RVA 0x3433958

void Nekki_SF2_GUI_Shop_ShopScene__DAGJHIAIOML
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,
               System_Collections_Generic_IList_PIADCKMDDAK__o *HBHPFKJMGCK,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ItemsPanel_o *__this_00;
  HOOAAGABMBL_o *CNDPGGAFHEA;
  
  __this_00 = (__this->fields)._ItemsPanel;
  if (__this_00 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  CNDPGGAFHEA = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(__this_00,(MethodInfo *)0x0);
  if (CNDPGGAFHEA != (HOOAAGABMBL_o *)0x0) {
    Nekki_SF2_GUI_Shop_ShopScene__OAJODMIPLPF(__this,CNDPGGAFHEA,method);
    return;
  }
  return;
}


// ===== private bool ALKCCLEIKCF()  [RVA 0x343395C]
// Nekki.SF2.GUI.Shop.ShopScene$$ALKCCLEIKCF @ RVA 0x343395C

bool Nekki_SF2_GUI_Shop_ShopScene__ALKCCLEIKCF
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ACHLOMELAJE_o *pAVar2;
  
  if ((DAT_0456817d & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456817d = 1;
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
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
    if ((pAVar2->fields).EANIPGPKLOA == false) {
      bVar1 = false;
    }
    else {
      bVar1 = (uint)(__this->fields).AIAODGKGPEI < 5;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DGFADJKJNMM()  [RVA 0x3433A0C]
// Nekki.SF2.GUI.Shop.ShopScene$$DGFADJKJNMM @ RVA 0x3433A0C

void Nekki_SF2_GUI_Shop_ShopScene__DGFADJKJNMM
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Shop_SidePanel_o *pNVar1;
  
  pNVar1 = (__this->fields)._ItemProperties;
  if (((pNVar1 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) &&
      (__this_00 = (pNVar1->fields)._MoveButton, __this_00 != (UnityEngine_UI_Button_o *)0x0)) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Shop_ShopScene__FMBFAPGPDPF(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public HPPDIEDAKEC get_CurrentSliderType()  [RVA 0x3433AB8]
// Nekki.SF2.GUI.Shop.ShopScene$$get_CurrentSliderType @ RVA 0x3433AB8

int32_t Nekki_SF2_GUI_Shop_ShopScene__get_CurrentSliderType
                  (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = BKBFFEJEBAI__PPENGKDOGFE((__this->fields).AIAODGKGPEI,(MethodInfo *)0x0);
  return iVar1;
}


// ===== public void HideUI()  [RVA 0x3433AC4]
// Nekki.SF2.GUI.Shop.ShopScene$$HideUI @ RVA 0x3433AC4

void Nekki_SF2_GUI_Shop_ShopScene__HideUI(Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  UnityEngine_CanvasGroup_o *__this_00;
  CLMJPODNPKB_o *pCVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *extraout_x1;
  CLMJPODNPKB_c *pCVar5;
  ulong uVar6;
  int32_t *piVar7;
  Nekki_SF2_GUI_SpriteRendererQuality_o *__this_01;
  
  if ((DAT_0456817e & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&CLMJPODNPKB_TypeInfo);
    DAT_0456817e = 1;
    method = extraout_x1;
  }
  if ((__this->fields).AIAODGKGPEI - 1U < 2) {
    return;
  }
  __this_01 = (__this->fields)._Background;
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BHEDGAKGKPO_TypeInfo,method);
  }
  if (__this_01 != (Nekki_SF2_GUI_SpriteRendererQuality_o *)0x0) {
    Nekki_SF2_GUI_SpriteRendererQuality__ChangeColor
              (__this_01,
               (UnityEngine_Color_o)(BHEDGAKGKPO_TypeInfo->static_fields->IDLNHECBHND).fields,
               (MethodInfo *)0x0);
    DG_Tweening_DOTweenModuleUI__DOFade((__this->fields)._ShopUIGroup,0.0,0.7,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._ShopUIGroup;
    if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
      UnityEngine_CanvasGroup__set_blocksRaycasts(__this_00,false,(MethodInfo *)0x0);
      bVar2 = Nekki_SF2_GUI_Common_HintCanvas__IsInstanceExists((MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      pCVar3 = Nekki_SF2_GUI_Common_HintCanvas__get_Instance((MethodInfo *)0x0);
      if (pCVar3 != (CLMJPODNPKB_o *)0x0) {
        pCVar5 = pCVar3->klass;
        uVar1._0_1_ = (pCVar5->_2).rank;
        uVar1._1_1_ = (pCVar5->_2).minimumAlignment;
        uVar6 = (ulong)uVar1;
        if (uVar6 != 0) {
          piVar7 = &((pCVar5->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
                (Il2CppClass *)CLMJPODNPKB_TypeInfo) {
              pVVar4 = pCVar5->vtable + (*piVar7 + 2);
              goto LAB_03533bfc;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        pVVar4 = (VirtualInvokeData *)FUN_01b81914(pCVar3,CLMJPODNPKB_TypeInfo,2);
LAB_03533bfc:
                    /* WARNING: Could not recover jumptable at 0x03533c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pVVar4->methodPtr)(pCVar3,pVVar4->method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ScrollToItem(HPPDIEDAKEC HONPNKFABKF, HOOAAGABMBL ANMFBABEMFD)  [RVA 0x3433C3C]
// Nekki.SF2.GUI.Shop.ShopScene$$ScrollToItem @ RVA 0x3433C3C

void Nekki_SF2_GUI_Shop_ShopScene__ScrollToItem
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,int32_t HONPNKFABKF,
               HOOAAGABMBL_o *ANMFBABEMFD,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ItemsPanel_o *__this_00;
  
  Nekki_SF2_GUI_Shop_ShopScene__GoToSlider(__this,HONPNKFABKF,true,method);
  __this_00 = (__this->fields)._ItemsPanel;
  if (__this_00 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
    Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem(__this_00,ANMFBABEMFD,0.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AFLOKAHKLFA()  [RVA 0x3433C78]
// Nekki.SF2.GUI.Shop.ShopScene$$AFLOKAHKLFA @ RVA 0x3433C78

void Nekki_SF2_GUI_Shop_ShopScene__AFLOKAHKLFA
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o **ppDVar1;
  ushort uVar2;
  bool bVar3;
  CLMJPODNPKB_o *pCVar4;
  VirtualInvokeData *pVVar5;
  DG_Tweening_Sequence_o *t;
  CLMJPODNPKB_c *pCVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_04568192 & 1) == 0) {
    FUN_01bab630(&CLMJPODNPKB_TypeInfo);
    DAT_04568192 = 1;
  }
  bVar3 = Nekki_SF2_GUI_Common_HintCanvas__IsInstanceExists((MethodInfo *)0x0);
  if (bVar3) {
    pCVar4 = Nekki_SF2_GUI_Common_HintCanvas__get_Instance((MethodInfo *)0x0);
    if (pCVar4 == (CLMJPODNPKB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pCVar6 = pCVar4->klass;
    uVar2._0_1_ = (pCVar6->_2).rank;
    uVar2._1_1_ = (pCVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
      piVar8 = &((pCVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)CLMJPODNPKB_TypeInfo) {
          pVVar5 = pCVar6->vtable + (*piVar8 + 2);
          goto LAB_03532f6c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pCVar4,CLMJPODNPKB_TypeInfo,2);
LAB_03532f6c:
    (*pVVar5->methodPtr)(pCVar4,pVVar5->method);
  }
  t = (__this->fields).OOIFAHNCKAO;
  if (t != (DG_Tweening_Sequence_o *)0x0) {
    ppDVar1 = &(__this->fields).OOIFAHNCKAO;
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)t,false,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}


// ===== private void OMHIOGJACDI()  [RVA 0x3433C7C]
// Nekki.SF2.GUI.Shop.ShopScene$$OMHIOGJACDI @ RVA 0x3433C7C

void Nekki_SF2_GUI_Shop_ShopScene__OMHIOGJACDI
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar1;
  HOOAAGABMBL_o *ANMFBABEMFD;
  System_Collections_Generic_List_HOOAAGABMBL__o *BCECKFJCLKB;
  MethodInfo *in_x2;
  
  pNVar1 = (__this->fields)._ItemsPanel;
  if (pNVar1 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
    ANMFBABEMFD = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._ItemsPanel;
    if (pNVar1 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
      BCECKFJCLKB = Nekki_SF2_GUI_Shop_ShopScene__IPLFLFGPEEC
                              (__this,(__this->fields).AIAODGKGPEI,in_x2);
      Nekki_SF2_GUI_Shop_ItemsPanel__UpdateScrollItems(pNVar1,BCECKFJCLKB,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._ItemsPanel;
      if (pNVar1 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
        Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem(pNVar1,ANMFBABEMFD,0.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EGMHFFODCKH()  [RVA 0x3433D54]
// Nekki.SF2.GUI.Shop.ShopScene$$EGMHFFODCKH @ RVA 0x3433D54

void Nekki_SF2_GUI_Shop_ShopScene__EGMHFFODCKH
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Shop_ShopScene__PEMHHDNNKAO(__this,false,in_x2);
  return;
}


// ===== public void StopCoroutine_ReloadActiveItemsAndRefresh()  [RVA 0x3432D3C]
// Nekki.SF2.GUI.Shop.ShopScene$$StopCoroutine_ReloadActiveItemsAndRefresh @ RVA 0x3432D3C

void Nekki_SF2_GUI_Shop_ShopScene__StopCoroutine_ReloadActiveItemsAndRefresh
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  PBAKFOBIHEG_o *pPVar3;
  VirtualInvokeData *pVVar4;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_0456817f & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456817f = 1;
  }
  pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar3 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar5 = pPVar3->klass;
  pSVar8 = (__this->fields).GBPDKLANGLP;
  uVar2._0_1_ = (pPVar5->_2).rank;
  uVar2._1_1_ = (pPVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar2;
  ppSVar1 = &(__this->fields).GBPDKLANGLP;
  if (uVar6 != 0) {
    piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar4 = pPVar5->vtable + (*piVar7 + 1);
        goto LAB_03532dd8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,1);
LAB_03532dd8:
  (*pVVar4->methodPtr)(pPVar3,pSVar8,pVVar4->method);
  *ppSVar1 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  return;
}


// ===== public void .ctor()  [RVA 0x3433E38]
// Nekki.SF2.GUI.Shop.ShopScene$$.ctor @ RVA 0x3433E38

void Nekki_SF2_GUI_Shop_ShopScene___ctor(Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568180 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>__ctor__);
    DAT_04568180 = 1;
    method = extraout_x1;
  }
  (__this->fields)._ArmorImageSize.fields = (UnityEngine_Vector2_Fields)0x4430000044428000;
  (__this->fields)._WeaponImageSize.fields = (UnityEngine_Vector2_Fields)0x4397000044428000;
  (__this->fields)._RangedImageSize.fields = (UnityEngine_Vector2_Fields)0x4397000044428000;
  (__this->fields)._HelmetImageSize.fields = (UnityEngine_Vector2_Fields)0x4430800044428000;
  (__this->fields)._PaymentImageSize.fields = (UnityEngine_Vector2_Fields)0x43fa000044278000;
  (__this->fields)._MagicImageSize.fields = (UnityEngine_Vector2_Fields)0x442a800044428000;
  (__this->fields)._FreeImageSize.fields = (UnityEngine_Vector2_Fields)0x43fa000044278000;
  (__this->fields)._RaidImageSize.fields = (UnityEngine_Vector2_Fields)0x43fa000044278000;
  (__this->fields)._ChangeModeDuration = 1.0;
  (__this->fields)._HintAnimationDelay = 2.0;
  (__this->fields)._HintAnimationDuration = 5.0;
  pSVar1 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  (__this->fields).CAFKGACOEBL = pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).CAFKGACOEBL,pSVar1);
  pSVar1 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  (__this->fields).HDHLOAOBOIA = pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).HDHLOAOBOIA,pSVar1);
  pSVar1 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  (__this->fields).CDGAHKJEMHM = pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).CDGAHKJEMHM,pSVar1);
  pSVar1 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  (__this->fields).CBGOPJALHHB = pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).CBGOPJALHHB,pSVar1);
  pSVar1 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  (__this->fields).LAPBNMPGIEH = pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).LAPBNMPGIEH,pSVar1);
  pSVar1 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  (__this->fields).NHJBNMACENA = pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).NHJBNMACENA,pSVar1);
  pSVar1 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  (__this->fields).FALDFPJGOMB = pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).FALDFPJGOMB,pSVar1);
  pSVar1 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  (__this->fields).EPKOHJKLMIJ = pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).EPKOHJKLMIJ,pSVar1);
  (__this->fields).AIAODGKGPEI = 8;
  Nekki_SF2_GUI_Scene<object>___ctor
            ((Nekki_SF2_GUI_Scene_T__o *)__this,Method_Nekki_SF2_GUI_Scene<ShopScene>__ctor__);
  return;
}


// ===== public void ReloadActiveItemsAndRefreshDelayed()  [RVA 0x3434014]
// Nekki.SF2.GUI.Shop.ShopScene$$ReloadActiveItemsAndRefreshDelayed @ RVA 0x3434014

void Nekki_SF2_GUI_Shop_ShopScene__ReloadActiveItemsAndRefreshDelayed
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  PBAKFOBIHEG_o *pPVar3;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_04568181 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04568181 = 1;
  }
  if ((__this->fields).GBPDKLANGLP != (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar4 = Nekki_SF2_GUI_Shop_ShopScene__KMEOPJBEJAA(__this,method_00);
  if (pPVar3 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar6 = pPVar3->klass;
  ppSVar1 = &(__this->fields).GBPDKLANGLP;
  uVar2._0_1_ = (pPVar6->_2).rank;
  uVar2._1_1_ = (pPVar6->_2).minimumAlignment;
  uVar7 = (ulong)uVar2;
  if (uVar7 != 0) {
    piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar5 = pPVar6->vtable + *piVar8;
        goto LAB_035340c8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,0);
LAB_035340c8:
  pSVar4 = (System_Collections_IEnumerator_o *)(*pVVar5->methodPtr)(pPVar3,pSVar4,1,pVVar5->method);
  *ppSVar1 = pSVar4;
  thunk_FUN_01c20e04(ppSVar1,pSVar4);
  return;
}


// ===== private void HAIAOFHBGAP(PerksPanel EODPHEMEFIP, bool MNPLAGPNGCO = True)  [RVA 0x3434164]
// Nekki.SF2.GUI.Shop.ShopScene$$HAIAOFHBGAP @ RVA 0x3434164

/* WARNING: Removing unreachable block (ram,0x035344e8) */

void Nekki_SF2_GUI_Shop_ShopScene__HAIAOFHBGAP
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,Nekki_SF2_GUI_Shop_PerksPanel_o *EODPHEMEFIP,
               bool MNPLAGPNGCO,MethodInfo *method)

{
  DG_Tweening_Sequence_o **ppDVar1;
  Il2CppObject *__this_00;
  DG_Tweening_Sequence_o *pDVar2;
  undefined8 *puVar3;
  long *plVar4;
  Il2CppObject *pIVar5;
  DG_Tweening_TweenCallback_o *callback;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  Il2CppClass *pIVar10;
  
  if ((DAT_04568182 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ShopScene_EMIGONDJCIG_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<PerkUI>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<PerkUI>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_LEPDJNAKHII_JGNLNAKOIBF__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ShopScene_LEPDJNAKHII_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    DAT_04568182 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_ShopScene_EMIGONDJCIG_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    pIVar5 = __this_00 + 1;
    pIVar5->klass = (Il2CppClass *)EODPHEMEFIP;
    thunk_FUN_01c20e04(pIVar5,EODPHEMEFIP);
    if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar2 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
    ppDVar1 = &(__this->fields).OOIFAHNCKAO;
    (__this->fields).OOIFAHNCKAO = pDVar2;
    thunk_FUN_01c20e04(ppDVar1,pDVar2);
    if (MNPLAGPNGCO) {
      DG_Tweening_TweenSettingsExtensions__AppendInterval
                ((__this->fields).OOIFAHNCKAO,(__this->fields)._HintAnimationDelay,(MethodInfo *)0x0
                );
    }
    if ((pIVar5->klass != (Il2CppClass *)0x0) &&
       (pIVar10 = (pIVar5->klass->_1).element_class, pIVar10 != (Il2CppClass *)0x0)) {
      pvVar6 = (pIVar10->_1).image;
      uVar8 = (ulong)*(ushort *)((long)pvVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)((long)pvVar6 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerable_PerkUI__c **)(piVar9 + -2) ==
              System_Collections_Generic_IEnumerable<PerkUI>_TypeInfo) {
            puVar3 = (undefined8 *)((long)pvVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_035342e8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01b81914(pIVar10,System_Collections_Generic_IEnumerable<PerkUI>_TypeInfo,0);
LAB_035342e8:
      plVar4 = (long *)(*(code *)*puVar3)(pIVar10,puVar3[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar7 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_03534368;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_03534368:
        uVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if ((uVar8 & 1) == 0) {
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar7 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 == 0) goto LAB_03534494;
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_0353447c;
        }
        pIVar5 = (Il2CppObject *)
                 thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_ShopScene_LEPDJNAKHII_TypeInfo);
        System_Object___ctor(pIVar5,(MethodInfo *)0x0);
        if (pIVar5 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar5[1].monitor = __this_00;
        thunk_FUN_01c20e04(&pIVar5[1].monitor,__this_00);
        lVar7 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_PerkUI__c **)(piVar9 + -2) ==
                System_Collections_Generic_IEnumerator<PerkUI>_TypeInfo) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_035343f4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)
                 FUN_01b81914(plVar4,System_Collections_Generic_IEnumerator<PerkUI>_TypeInfo,0);
LAB_035343f4:
        pIVar10 = (Il2CppClass *)(*(code *)*puVar3)(plVar4,puVar3[1]);
        pIVar5[1].klass = pIVar10;
        thunk_FUN_01c20e04();
        pDVar2 = *ppDVar1;
        callback = (DG_Tweening_TweenCallback_o *)
                   thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
        DG_Tweening_TweenCallback___ctor();
        DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar2,callback,(MethodInfo *)0x0);
        DG_Tweening_TweenSettingsExtensions__AppendInterval
                  ((__this->fields).OOIFAHNCKAO,(__this->fields)._HintAnimationDuration,
                   (MethodInfo *)0x0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_0353447c:
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_035344b0;
    }
  }
LAB_03534494:
  puVar3 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_035344b0:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


// ===== private void NGPKPKEGFCD()  [RVA 0x34345C8]
// Nekki.SF2.GUI.Shop.ShopScene$$NGPKPKEGFCD @ RVA 0x34345C8

void Nekki_SF2_GUI_Shop_ShopScene__NGPKPKEGFCD
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Shop_SidePanel_o *pNVar1;
  
  pNVar1 = (__this->fields)._ItemProperties;
  if (((pNVar1 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) &&
      (__this_00 = (pNVar1->fields)._MoveButton, __this_00 != (UnityEngine_UI_Button_o *)0x0)) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Shop_ShopScene__FMBFAPGPDPF(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ALOBOKCKGLP()  [RVA 0x3434608]
// Nekki.SF2.GUI.Shop.ShopScene$$ALOBOKCKGLP @ RVA 0x3434608

void Nekki_SF2_GUI_Shop_ShopScene__ALOBOKCKGLP
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *__this_00;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  GGHCLMEFIGO_o *__this_01;
  IGFGDDANEPE_o *pIVar3;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar4;
  PKHMIGFEJCL_ELHOKIPELBO_o *pPVar5;
  ACHLOMELAJE_o *pAVar6;
  GGLKHCAIGDI_o *pGVar7;
  AMJMGFCCAKN_o *IKKAMAMLIKA_00;
  PKHMIGFEJCL_o *pPVar8;
  
  if ((DAT_04568183 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568183 = 1;
  }
  __this_00 = (__this->fields)._ItemsPanel;
  if (__this_00 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035347d4;
  IKKAMAMLIKA = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(__this_00,(MethodInfo *)0x0);
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
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
    pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar6 == (ACHLOMELAJE_o *)0x0) ||
       (__this_01 = (pAVar6->fields).OIDPLCLELEN, __this_01 == (GGHCLMEFIGO_o *)0x0))
    goto LAB_035347d4;
    pIVar3 = GGHCLMEFIGO__JNFIBDBHNOA(__this_01,IKKAMAMLIKA,(MethodInfo *)0x0);
    if (pIVar3 == (IGFGDDANEPE_o *)0x0) {
      bVar1 = 0;
      IKKAMAMLIKA_00 = (AMJMGFCCAKN_o *)0x0;
    }
    else {
      IKKAMAMLIKA_00 = (pIVar3->fields).HJLEJIJKJKD;
      if (IKKAMAMLIKA_00 == (AMJMGFCCAKN_o *)0x0) {
        bVar1 = 0;
      }
      else {
        pNVar4 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if ((((pNVar4 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) ||
             (pPVar8 = (pNVar4->fields).QuestParameters, pPVar8 == (PKHMIGFEJCL_o *)0x0)) ||
            (pIVar3 = (IKKAMAMLIKA_00->fields).MNELBNHIKGH, pIVar3 == (IGFGDDANEPE_o *)0x0)) ||
           (pPVar5 = (pPVar8->fields).BJJFDMHOBNB, pPVar5 == (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0))
        goto LAB_035347d4;
        (pPVar5->fields).BMGMGAAPFGO = (pIVar3->fields).NPFMOEOIEKM;
        thunk_FUN_01c20e04();
        pGVar7 = (IKKAMAMLIKA_00->fields).PHAGOJCOMPN;
        if ((pGVar7 == (GGLKHCAIGDI_o *)0x0) ||
           (pPVar5 = (pPVar8->fields).BJJFDMHOBNB, pPVar5 == (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0))
        goto LAB_035347d4;
        (pPVar5->fields).JDKKCDBDNLB = (pGVar7->fields)._COIPKAKHDFP_k__BackingField;
        thunk_FUN_01c20e04();
        pPVar5 = (pPVar8->fields).BJJFDMHOBNB;
        if (pPVar5 == (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0) goto LAB_035347d4;
        (pPVar5->fields).HDGEOJGHEOE = (IKKAMAMLIKA_00->fields).CJKLJJIMECK;
        (pPVar5->fields).GOKNIOJFFBG = StringLiteral_1/*""*/;
        thunk_FUN_01c20e04();
        bVar1 = 1;
      }
    }
    pNVar4 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar4 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
LAB_035347d4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar4,0x1b,(MethodInfo *)0x0)
    ;
    if ((bool)(bVar1 & !bVar2)) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      MGNPHCAAEIO__IAGKBFCKFKB
                ((HOOAAGABMBL_o *)IKKAMAMLIKA_00,0x12,1,(System_Action_BKKPAKHJDKB__o *)0x0,true,
                 (MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// ===== private void LCCGFCCNEGC(List<IGFGDDANEPE> FLLGMBGJAIA)  [RVA 0x34347D8]
// Nekki.SF2.GUI.Shop.ShopScene$$LCCGFCCNEGC @ RVA 0x34347D8

void Nekki_SF2_GUI_Shop_ShopScene__LCCGFCCNEGC
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,
               System_Collections_Generic_List_IGFGDDANEPE__o *FLLGMBGJAIA,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar1;
  HOOAAGABMBL_o *CNDPGGAFHEA;
  
  pNVar1 = (__this->fields)._ItemsPanel;
  if (pNVar1 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
    CNDPGGAFHEA = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(pNVar1,(MethodInfo *)0x0);
    if (CNDPGGAFHEA != (HOOAAGABMBL_o *)0x0) {
      Nekki_SF2_GUI_Shop_ShopScene__OAJODMIPLPF(__this,CNDPGGAFHEA,method);
    }
    pNVar1 = (__this->fields)._ItemsPanel;
    if (pNVar1 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
      Nekki_SF2_GUI_Shop_ItemsPanel__UpdateScrollItems(pNVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IsFreeItemsAvailable()  [RVA 0x3434818]
// Nekki.SF2.GUI.Shop.ShopScene$$get_IsFreeItemsAvailable @ RVA 0x3434818

bool Nekki_SF2_GUI_Shop_ShopScene__get_IsFreeItemsAvailable
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04568184 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    DAT_04568184 = 1;
  }
  pSVar1 = (__this->fields).EPKOHJKLMIJ;
  if (pSVar1 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    return 0 < (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public PropertiesPanelContent get_PropertiesPanelContent()  [RVA 0x3433504]
// Nekki.SF2.GUI.Shop.ShopScene$$get_PropertiesPanelContent @ RVA 0x3433504

Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *
Nekki_SF2_GUI_Shop_ShopScene__get_PropertiesPanelContent
          (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_SidePanelContent_o *__this_00;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *pNVar1;
  undefined8 uVar2;
  Nekki_SF2_GUI_Shop_SidePanel_o *pNVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_04568185 & 1) == 0) {
    auVar4 = FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_SidePanelContent_As<PropertiesPanelContent>__);
    DAT_04568185 = 1;
  }
  uVar2 = auVar4._0_8_;
  pNVar3 = (__this->fields)._ItemProperties;
  if ((pNVar3 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) &&
     (__this_00 = (pNVar3->fields).LJBNCINMIIP, uVar2 = 0,
     __this_00 != (Nekki_SF2_GUI_Shop_SidePanelContent_o *)0x0)) {
    pNVar1 = (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *)
             Nekki_SF2_GUI_Shop_SidePanelContent__As<object>
                       (__this_00,
                        Method_Nekki_SF2_GUI_Shop_SidePanelContent_As<PropertiesPanelContent>__);
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2,auVar4._8_8_);
}


// ===== public void ReloadActiveItemsAndRefresh()  [RVA 0x3434868]
// Nekki.SF2.GUI.Shop.ShopScene$$ReloadActiveItemsAndRefresh @ RVA 0x3434868

void Nekki_SF2_GUI_Shop_ShopScene__ReloadActiveItemsAndRefresh
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  bool bVar2;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar3;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  System_Action_o *pSVar4;
  
  Nekki_SF2_GUI_Shop_ShopScene__FHKMIFJBPEN(__this,method);
  pNVar3 = (__this->fields)._ItemsPanel;
  if (pNVar3 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
    Nekki_SF2_GUI_Shop_ItemsPanel__RememberSelection(pNVar3,(HOOAAGABMBL_o *)0x0,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
      Nekki_SF2_GUI_Shop_ItemsPanel__UpdateScrollItems(pNVar3,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._ItemsPanel;
      if (pNVar3 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
        Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToLastSelection(pNVar3,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Shop_ShopScene__Refresh(__this,method_00);
        bVar2 = Nekki_SF2_GUI_Shop_ShopScene__FJFHCNJBHEP(__this,method_01);
        __this_01 = (__this->fields)._NoItemsMessage;
        if ((__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (__this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(__this_00,(bool)(~bVar2 & 1),(MethodInfo *)0x0);
          pSVar4 = (__this->fields).ReloadActiveItemsAndRefreshCallback;
          if (pSVar4 != (System_Action_o *)0x0) {
            ppSVar1 = &(__this->fields).ReloadActiveItemsAndRefreshCallback;
            (*(code *)(pSVar4->fields).super.super.invoke_impl)
                      ((pSVar4->fields).super.super.method_code,(pSVar4->fields).super.super.method)
            ;
            *ppSVar1 = (System_Action_o *)0x0;
            thunk_FUN_01c20e04(ppSVar1,0);
            return;
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AGODCLONCBM()  [RVA 0x3434F78]
// Nekki.SF2.GUI.Shop.ShopScene$$AGODCLONCBM @ RVA 0x3434F78

void Nekki_SF2_GUI_Shop_ShopScene__AGODCLONCBM
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this_00;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *target;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_TweenCallback_o *action;
  
  if ((DAT_04568186 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_NGPKPKEGFCD__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    DAT_04568186 = 1;
  }
  __this_00 = (__this->fields)._ForgePanel;
  if (__this_00 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) {
    Nekki_SF2_GUI_Shop_Forge_ForgePanel__Open(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields).CCKIFMALFBA;
    if (__this_01 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
      Nekki_SF2_GUI_Menu_MainMenu__SetForgeViewMode(__this_01,true,(MethodInfo *)0x0);
      __this_02 = (__this->fields)._PanelsContainer;
      if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
        target = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
        t = DG_Tweening_ShortcutExtensions__DOLocalMoveX
                      (target,(__this->fields)._ForgeModeX,(__this->fields)._ChangeModeDuration,
                       false,(MethodInfo *)0x0);
        action = (DG_Tweening_TweenCallback_o *)
                 thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
        DG_Tweening_TweenCallback___ctor();
        DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                  ((Il2CppObject *)t,action,
                   Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                  );
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GFFNHPFGAFJ(Action CPECAEHDDDB)  [RVA 0x34331C8]
// Nekki.SF2.GUI.Shop.ShopScene$$GFFNHPFGAFJ @ RVA 0x34331C8

void Nekki_SF2_GUI_Shop_ShopScene__GFFNHPFGAFJ
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,System_Action_o *CPECAEHDDDB,
               MethodInfo *method)

{
  FKDLCJJOGIP_o *pFVar1;
  KKLJIDJBFEI_o *pKVar2;
  System_Action_o *pSVar3;
  
  if ((DAT_04568187 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_PLCCEAFLBOM__);
    DAT_04568187 = 1;
  }
  pFVar1 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pFVar1 != (FKDLCJJOGIP_o *)0x0) {
    if ((pFVar1->fields)._MEAPCEHFFHD_k__BackingField != false) {
      Nekki_SF2_GUI_Shop_ShopScene__PEMHHDNNKAO(__this,true,method);
      if (CPECAEHDDDB != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0353324c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(CPECAEHDDDB->fields).super.super.invoke_impl)
                  ((CPECAEHDDDB->fields).super.super.method_code,
                   (CPECAEHDDDB->fields).super.super.method);
        return;
      }
      return;
    }
    pKVar2 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pKVar2 != (KKLJIDJBFEI_o *)0x0) {
      KKLJIDJBFEI__PILMCAFCLMN(pKVar2,pSVar3,(MethodInfo *)0x0);
      pKVar2 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (pKVar2 != (KKLJIDJBFEI_o *)0x0) {
        KKLJIDJBFEI__KGJHOLAEPAI(pKVar2,pSVar3,(MethodInfo *)0x0);
        if (CPECAEHDDDB != (System_Action_o *)0x0) {
          pKVar2 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
          if (pKVar2 == (KKLJIDJBFEI_o *)0x0) goto LAB_0353334c;
          KKLJIDJBFEI__PILMCAFCLMN(pKVar2,CPECAEHDDDB,(MethodInfo *)0x0);
          pKVar2 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
          if (pKVar2 == (KKLJIDJBFEI_o *)0x0) goto LAB_0353334c;
          KKLJIDJBFEI__KGJHOLAEPAI(pKVar2,CPECAEHDDDB,(MethodInfo *)0x0);
        }
        pFVar1 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pFVar1 != (FKDLCJJOGIP_o *)0x0) {
          FKDLCJJOGIP__LGBOGFICFPF(pFVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0353334c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HELIEIDCGNM(HOOAAGABMBL CNDPGGAFHEA)  [RVA 0x3435060]
// Nekki.SF2.GUI.Shop.ShopScene$$HELIEIDCGNM @ RVA 0x3435060

void Nekki_SF2_GUI_Shop_ShopScene__HELIEIDCGNM
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,HOOAAGABMBL_o *CNDPGGAFHEA,MethodInfo *method
               )

{
  bool bVar1;
  int iVar2;
  Il2CppObject *__this_00;
  undefined8 *puVar3;
  DG_Tweening_TweenCallback_o *action;
  HOOAAGABMBL_o *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  DG_Tweening_Sequence_o *t;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *pNVar8;
  void **ppvVar9;
  long *plVar10;
  
  if ((DAT_04568188 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_EKBJDMFHOME_JJAPLLEBOHJ__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ShopScene_EKBJDMFHOME_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyCollection<PerkUI>_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_OnComplete<Sequence>__);
    DAT_04568188 = 1;
    CNDPGGAFHEA = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_ShopScene_EKBJDMFHOME_TypeInfo,CNDPGGAFHEA);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    Nekki_SF2_GUI_Shop_ShopScene__JLHIDOEJFCC(__this,method_00);
    pNVar4 = (__this->fields)._ItemsPanel;
    if (pNVar4 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
      pNVar8 = (pNVar4->fields).HCMDPJADLOL;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      pNVar4 = (__this->fields)._ItemsPanel;
      if ((pNVar4 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) &&
         (pNVar8 = (pNVar4->fields).HCMDPJADLOL,
         pNVar8 != (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0)) {
        ppvVar9 = &__this_00[1].monitor;
        *ppvVar9 = (pNVar8->fields)._perksPanel;
        thunk_FUN_01c20e04(ppvVar9);
        if ((*ppvVar9 != (void *)0x0) &&
           (plVar10 = *(long **)((long)*ppvVar9 + 0x40), plVar10 != (long *)0x0)) {
          lVar5 = *plVar10;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(System_Collections_Generic_IReadOnlyCollection_PerkUI__c **)(piVar7 + -2) ==
                  System_Collections_Generic_IReadOnlyCollection<PerkUI>_TypeInfo) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_035351c0;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)
                   FUN_01b81914(plVar10,
                                System_Collections_Generic_IReadOnlyCollection<PerkUI>_TypeInfo,0);
LAB_035351c0:
          iVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
          if (iVar2 == 0) {
            return;
          }
          Nekki_SF2_GUI_Shop_ShopScene__HAIAOFHBGAP(__this,__this_00[1].monitor,true,in_x3);
          t = (__this->fields).OOIFAHNCKAO;
          action = (DG_Tweening_TweenCallback_o *)
                   thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
          DG_Tweening_TweenCallback___ctor();
          DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                    ((Il2CppObject *)t,action,
                     Method_DG_Tweening_TweenSettingsExtensions_OnComplete<Sequence>__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BNIAIFODLJK(TableViewCell IKKAMAMLIKA)  [RVA 0x3435248]
// Nekki.SF2.GUI.Shop.ShopScene$$BNIAIFODLJK @ RVA 0x3435248

void Nekki_SF2_GUI_Shop_ShopScene__BNIAIFODLJK
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,Nekki_SF2_GUI_TableViewCell_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar3;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *y;
  
  if ((DAT_04568189 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568189 = 1;
  }
  pNVar3 = (__this->fields)._ItemsPanel;
  if (pNVar3 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
    y = (pNVar3->fields).HCMDPJADLOL;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)IKKAMAMLIKA,(UnityEngine_Object_o *)y,
                       (MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    uVar1 = (__this->fields).AIAODGKGPEI;
    if ((uVar1 < 5) || (uVar1 == 6)) {
      Nekki_SF2_GUI_Shop_ShopScene__OnTryItemButtonClick(__this,method_00);
      return;
    }
    __this_00 = Nekki_SF2_GUI_Shop_ShopScene__get_InfoPanelContent(__this,method_00);
    if (__this_00 != (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0) {
      Nekki_SF2_GUI_Shop_InfoPanelContent__PaymentOrFreeDoubleClickBuy(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CJDBBCECPGF()  [RVA 0x3435784]
// Nekki.SF2.GUI.Shop.ShopScene$$CJDBBCECPGF @ RVA 0x3435784

void Nekki_SF2_GUI_Shop_ShopScene__CJDBBCECPGF
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Il2CppObject *ANMFBABEMFD;
  bool bVar1;
  bool bVar2;
  System_String_o *__this_00;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *__this_01;
  FFHKCJAOPLI_o *pFVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_02;
  System_String_o *__this_03;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_0456818a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_5699/*"EnchantChest"*/);
    DAT_0456818a = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  pFVar3 = (__this->fields).GLGDPPHDDAJ;
  if ((pFVar3 == (FFHKCJAOPLI_o *)0x0) ||
     (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pFVar3->fields).JNNGDLLCHAG,(MethodInfo *)0x0), bVar1)) {
    return;
  }
  pFVar3 = (__this->fields).GLGDPPHDDAJ;
  if ((pFVar3 != (FFHKCJAOPLI_o *)0x0) &&
     (__this_03 = (pFVar3->fields).JNNGDLLCHAG, __this_03 != (System_String_o *)0x0)) {
    bVar1 = System_String__StartsWith(__this_03,StringLiteral_5699/*"EnchantChest"*/,(MethodInfo *)0x0);
    __this_02 = (__this->fields).FALDFPJGOMB;
    if (__this_02 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)__this_02,
                 Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      do {
        do {
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_50,
                             Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                            );
          ANMFBABEMFD = local_50.fields._current;
          if (!bVar2) goto LAB_035358cc;
          if ((HOOAAGABMBL_o *)local_50.fields._current == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar2 = System_String__op_Equality
                            (((HOOAAGABMBL_Fields *)((long)local_50.fields._current + 0x10))->
                             _COIPKAKHDFP_k__BackingField,__this_03,(MethodInfo *)0x0);
          if (bVar2) goto LAB_035358b4;
        } while (!bVar1);
        __this_00 = ((HOOAAGABMBL_Fields *)((long)ANMFBABEMFD + 0x10))->_COIPKAKHDFP_k__BackingField
        ;
        if (__this_00 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = System_String__StartsWith(__this_00,__this_03,(MethodInfo *)0x0);
      } while (!bVar2);
LAB_035358b4:
      __this_01 = (__this->fields)._ItemsPanel;
      if (__this_01 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem
                (__this_01,(HOOAAGABMBL_o *)ANMFBABEMFD,0.0,(MethodInfo *)0x0);
LAB_035358cc:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__)
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_Mode(DBNKANLBEFF CJNHFNHJHPE)  [RVA 0x343598C]
// Nekki.SF2.GUI.Shop.ShopScene$$set_Mode @ RVA 0x343598C

void Nekki_SF2_GUI_Shop_ShopScene__set_Mode
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  bool_conflict bVar1;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *pNVar2;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar3;
  Nekki_SF2_GUI_Shop_SidePanel_o *pNVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_UI_Button_o *__this_00;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Sequence_o *s;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  undefined8 *puVar7;
  
  method_00 = (MethodInfo *)(ulong)(uint)CJNHFNHJHPE;
  if ((DAT_0456818b & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_AGODCLONCBM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_DGFADJKJNMM__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_OnComplete<Sequence>__);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    FUN_01bab630(&StringLiteral_12043/*"ShopScene ShopMode set, but not inited"*/);
    DAT_0456818b = 1;
    method_00 = extraout_x1;
  }
  if ((__this->fields).super.DHKAODBNGNJ == false) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_12043/*"ShopScene ShopMode set, but not inited"*/,(MethodInfo *)0x0);
    return;
  }
  if ((__this->fields).HLKBICFHFJM == CJNHFNHJHPE) {
    return;
  }
  (__this->fields).HLKBICFHFJM = CJNHFNHJHPE;
  if (CJNHFNHJHPE == 1) {
    pNVar4 = (__this->fields)._ItemProperties;
    if (pNVar4 == (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) goto LAB_03535c68;
    bVar1 = (pNVar4->fields).DBNELADJPIJ;
    Nekki_SF2_GUI_Shop_SidePanel__set_EnableScrolling(pNVar4,false,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._ItemProperties;
    if (((pNVar4 == (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) ||
        (__this_00 = (pNVar4->fields)._MoveButton, __this_00 == (UnityEngine_UI_Button_o *)0x0)) ||
       (pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03535c68;
    UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
    if (bVar1 == false) {
      pNVar4 = (__this->fields)._ItemProperties;
      if (pNVar4 == (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) goto LAB_03535c68;
      Nekki_SF2_GUI_Shop_SidePanel__SetOpen
                (pNVar4,true,(__this->fields)._ChangeModeDuration * 0.5,(MethodInfo *)0x0);
      if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      s = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      t = (DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *)
          DG_Tweening_TweenSettingsExtensions__AppendInterval
                    (s,(__this->fields)._ChangeModeDuration * 0.1,(MethodInfo *)0x0);
      action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
      ;
      DG_Tweening_TweenCallback___ctor();
      puVar7 = &Method_DG_Tweening_TweenSettingsExtensions_OnComplete<Sequence>__;
    }
    else {
      pNVar2 = (__this->fields)._ForgePanel;
      if (pNVar2 == (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) goto LAB_03535c68;
      Nekki_SF2_GUI_Shop_Forge_ForgePanel__Open(pNVar2,(MethodInfo *)0x0);
      pNVar3 = (__this->fields).CCKIFMALFBA;
      if (pNVar3 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_03535c68;
      Nekki_SF2_GUI_Menu_MainMenu__SetForgeViewMode(pNVar3,true,(MethodInfo *)0x0);
      pUVar5 = (__this->fields)._PanelsContainer;
      if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto LAB_03535c68;
      pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
      t = DG_Tweening_ShortcutExtensions__DOLocalMoveX
                    (pUVar6,(__this->fields)._ForgeModeX,(__this->fields)._ChangeModeDuration,false,
                     (MethodInfo *)0x0);
      action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
      ;
      DG_Tweening_TweenCallback___ctor();
      puVar7 = &
               Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
      ;
    }
    DG_Tweening_TweenSettingsExtensions__OnComplete<object>
              ((Il2CppObject *)t,action,(MethodInfo_1F87FE4 *)*puVar7);
    method_00 = extraout_x1_01;
  }
  else if (CJNHFNHJHPE == 0) {
    pNVar2 = (__this->fields)._ForgePanel;
    if (pNVar2 == (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) goto LAB_03535c68;
    Nekki_SF2_GUI_Shop_Forge_ForgePanel__Close(pNVar2,(MethodInfo *)0x0);
    pNVar3 = (__this->fields).CCKIFMALFBA;
    if (pNVar3 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_03535c68;
    Nekki_SF2_GUI_Menu_MainMenu__SetNormalViewMode(pNVar3,true,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Shop_ShopScene__OMHIOGJACDI(__this,method_01);
    pNVar4 = (__this->fields)._ItemProperties;
    if (pNVar4 == (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) goto LAB_03535c68;
    Nekki_SF2_GUI_Shop_SidePanel__set_EnableScrolling(pNVar4,true,(MethodInfo *)0x0);
    pUVar5 = (__this->fields)._PanelsContainer;
    if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto LAB_03535c68;
    pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
    DG_Tweening_ShortcutExtensions__DOLocalMoveX
              (pUVar6,(__this->fields).FBBJFCLGAJE,(__this->fields)._ChangeModeDuration,false,
               (MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
  __this_01 = Nekki_SF2_GUI_Shop_ShopScene__get_PropertiesPanelContent(__this,method_00);
  if (__this_01 != (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *)0x0) {
    Nekki_SF2_GUI_Shop_PropertiesPanelContent__set_Mode
              (__this_01,(__this->fields).HLKBICFHFJM,(MethodInfo *)0x0);
    return;
  }
LAB_03535c68:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private List<HOOAAGABMBL> IPLFLFGPEEC(POIJDKLHHKO HIIGJGLEOFH)  [RVA 0x3433CE4]
// Nekki.SF2.GUI.Shop.ShopScene$$IPLFLFGPEEC @ RVA 0x3433CE4

System_Collections_Generic_List_HOOAAGABMBL__o *
Nekki_SF2_GUI_Shop_ShopScene__IPLFLFGPEEC
          (Nekki_SF2_GUI_Shop_ShopScene_o *__this,int32_t HIIGJGLEOFH,MethodInfo *method)

{
  System_Collections_Generic_List_HOOAAGABMBL__o **ppSVar1;
  
  switch(HIIGJGLEOFH) {
  case 0:
    ppSVar1 = &(__this->fields).CAFKGACOEBL;
    break;
  case 1:
    ppSVar1 = &(__this->fields).HDHLOAOBOIA;
    break;
  case 2:
    ppSVar1 = &(__this->fields).CDGAHKJEMHM;
    break;
  case 3:
    ppSVar1 = &(__this->fields).CBGOPJALHHB;
    break;
  case 4:
    ppSVar1 = &(__this->fields).LAPBNMPGIEH;
    break;
  case 5:
    ppSVar1 = &(__this->fields).NHJBNMACENA;
    break;
  case 6:
    ppSVar1 = &(__this->fields).FALDFPJGOMB;
    break;
  case 7:
    ppSVar1 = &(__this->fields).EPKOHJKLMIJ;
    break;
  default:
    return (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0;
  }
  return *ppSVar1;
}


// ===== public void RemoveAdVideoNotificator()  [RVA 0x3435C6C]
// Nekki.SF2.GUI.Shop.ShopScene$$RemoveAdVideoNotificator @ RVA 0x3435C6C

void Nekki_SF2_GUI_Shop_ShopScene__RemoveAdVideoNotificator
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  ushort uVar1;
  KKEKKPIDGBK_o *pKVar2;
  VirtualInvokeData *pVVar3;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this_00;
  Nekki_SF2_GUI_Shop_ShopBottomPanel_o *__this_01;
  MethodInfo *extraout_x1;
  KKEKKPIDGBK_c *pKVar4;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_0456818c & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    DAT_0456818c = 1;
    method = extraout_x1;
  }
  if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MKFAKELPPAC_TypeInfo,method);
  }
  pKVar2 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pKVar2 != (KKEKKPIDGBK_o *)0x0) {
    pKVar4 = pKVar2->klass;
    uVar1._0_1_ = (pKVar4->_2).rank;
    uVar1._1_1_ = (pKVar4->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pKVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
          pVVar3 = pKVar4->vtable + (*piVar7 + 0x12);
          goto LAB_03535d24;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pKVar2,KKEKKPIDGBK_TypeInfo,0x12);
LAB_03535d24:
    (*pVVar3->methodPtr)(pKVar2,pVVar3->method);
    pNVar5 = (__this->fields)._ItemsPanel;
    if ((pNVar5 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) &&
       (__this_00 = (pNVar5->fields).HCMDPJADLOL,
       __this_00 != (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0)) {
      Nekki_SF2_GUI_Shop_ShopTableViewCell__HideBadge(__this_00,(MethodInfo *)0x0);
      __this_01 = (__this->fields).GJIPOBCNEPG;
      if (__this_01 != (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *)0x0) {
        Nekki_SF2_GUI_Shop_ShopBottomPanel__RemoveFreeSectionNotificator
                  (__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool NGLGCCCLHEH()  [RVA 0x3435300]
// Nekki.SF2.GUI.Shop.ShopScene$$NGLGCCCLHEH @ RVA 0x3435300

bool Nekki_SF2_GUI_Shop_ShopScene__NGLGCCCLHEH
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  uint uVar1;
  
  uVar1 = (__this->fields).AIAODGKGPEI;
  if (uVar1 < 7) {
    return (bool)((byte)(0x5f >> (ulong)(uVar1 & 0x1f)) & 1);
  }
  return false;
}


// ===== private void LJEJIDPLJAA()  [RVA 0x3435D64]
// Nekki.SF2.GUI.Shop.ShopScene$$LJEJIDPLJAA @ RVA 0x3435D64

void Nekki_SF2_GUI_Shop_ShopScene__LJEJIDPLJAA
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_Core_Fights_ModelContainer_o *__this_00;
  
  if ((DAT_0456818d & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_LJEJIDPLJAA__);
    DAT_0456818d = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._ModelContainer;
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
  System_Action___ctor();
  if (__this_00 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
    Nekki_SF2_Core_Fights_ModelContainer__remove_OnTryOnEnd(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0)
    ;
    Nekki_SF2_GUI_Shop_ShopScene__ShowUI(__this,method_00);
    routine = Nekki_SF2_GUI_Shop_ShopScene__HPKHJPDMFGA(__this,method_01);
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GLCEGKANFNO(GGLKHCAIGDI NDLOGJOGFCA)  [RVA 0x3435F24]
// Nekki.SF2.GUI.Shop.ShopScene$$GLCEGKANFNO @ RVA 0x3435F24

void Nekki_SF2_GUI_Shop_ShopScene__GLCEGKANFNO
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,GGLKHCAIGDI_o *NDLOGJOGFCA,MethodInfo *method
               )

{
  Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *pNVar1;
  MethodInfo *method_00;
  
  pNVar1 = Nekki_SF2_GUI_Shop_ShopScene__get_PropertiesPanelContent
                     (__this,(MethodInfo *)NDLOGJOGFCA);
  if (pNVar1 != (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *)0x0) {
    Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshButtons(pNVar1,(MethodInfo *)0x0);
    pNVar1 = Nekki_SF2_GUI_Shop_ShopScene__get_PropertiesPanelContent(__this,method_00);
    if (pNVar1 != (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *)0x0) {
      Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshTimers(pNVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FPBABLHJOMH()  [RVA 0x3435F58]
// Nekki.SF2.GUI.Shop.ShopScene$$FPBABLHJOMH @ RVA 0x3435F58

void Nekki_SF2_GUI_Shop_ShopScene__FPBABLHJOMH
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ShopBottomPanel_o *__this_00;
  LabelButton_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *method_00;
  
  if ((DAT_0456818e & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_EnableAllButtons__);
    DAT_0456818e = 1;
  }
  __this_00 = (__this->fields).GJIPOBCNEPG;
  if (__this_00 != (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *)0x0) {
    Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__EnableAllButtons
              ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this_00,
               Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_EnableAllButtons__);
    __this_01 = (__this->fields)._TryItemButton;
    if ((__this_01 != (LabelButton_o *)0x0) &&
       (__this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_GameObject_o *)0x0)) {
      method_00 = (MethodInfo *)0x0;
      UnityEngine_GameObject__SetActive(__this_02,false,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Shop_ShopScene__ShowSidePanels(__this,false,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void StopCoroutine_ReloadRaidItemPackSliderDelayed()  [RVA 0x3432E04]
// Nekki.SF2.GUI.Shop.ShopScene$$StopCoroutine_ReloadRaidItemPackSliderDelayed @ RVA 0x3432E04

void Nekki_SF2_GUI_Shop_ShopScene__StopCoroutine_ReloadRaidItemPackSliderDelayed
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  PBAKFOBIHEG_o *pPVar3;
  VirtualInvokeData *pVVar4;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_0456818f & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456818f = 1;
  }
  pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar3 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar5 = pPVar3->klass;
  pSVar8 = (__this->fields).IMJDKMADNGL;
  uVar2._0_1_ = (pPVar5->_2).rank;
  uVar2._1_1_ = (pPVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar2;
  ppSVar1 = &(__this->fields).IMJDKMADNGL;
  if (uVar6 != 0) {
    piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar4 = pPVar5->vtable + (*piVar7 + 1);
        goto LAB_03532ea0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,1);
LAB_03532ea0:
  (*pVVar4->methodPtr)(pPVar3,pSVar8,pVVar4->method);
  *ppSVar1 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  return;
}


// ===== public ModelContainer get_ModelContainer()  [RVA 0x343606C]
// Nekki.SF2.GUI.Shop.ShopScene$$get_ModelContainer @ RVA 0x343606C

Nekki_SF2_Core_Fights_ModelContainer_o *
Nekki_SF2_GUI_Shop_ShopScene__get_ModelContainer
          (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  return (__this->fields)._ModelContainer;
}


// ===== private void LFHIAJBBKGC(BNKBGIIJNLF FNLDECDGPBF)  [RVA 0x3436074]
// Nekki.SF2.GUI.Shop.ShopScene$$LFHIAJBBKGC @ RVA 0x3436074

void Nekki_SF2_GUI_Shop_ShopScene__LFHIAJBBKGC
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,BNKBGIIJNLF_o *FNLDECDGPBF,MethodInfo *method
               )

{
  MethodInfo *method_00;
  HBNENINHPGF_o *pHVar1;
  ulong local_28;
  
  if ((DAT_04568190 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<HBNENINHPGF_GKFAEIJNFED>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<HBNENINHPGF_GKFAEIJNFED>__ctor__);
    FUN_01bab630(&Method_System_Nullable<HBNENINHPGF_GKFAEIJNFED>_get_HasValue__);
    DAT_04568190 = 1;
  }
  if ((FNLDECDGPBF != (BNKBGIIJNLF_o *)0x0) &&
     (pHVar1 = (FNLDECDGPBF->fields)._GDNLFJIBAAI_k__BackingField, pHVar1 != (HBNENINHPGF_o *)0x0))
  {
    local_28 = 0;
    System_Nullable<Int32Enum>___ctor
              ((System_Nullable_Int32Enum__o)&local_28,(pHVar1->fields).EAJKEHPLGMP,
               Method_System_Nullable<HBNENINHPGF_GKFAEIJNFED>__ctor__);
    if ((local_28 >> 0x20 == 1) && ((local_28 & 0xff) != 0)) {
      Nekki_SF2_GUI_Shop_ShopScene__Refresh(__this,method_00);
    }
  }
  return;
}


// ===== private void FJHEDBMBEFI(HOOAAGABMBL CAIFMHMOEEP, LJJOOIHCCEP.HEJHMMBJODB LFHPEEKGNDO = 4)  [RVA 0x3433634]
// Nekki.SF2.GUI.Shop.ShopScene$$FJHEDBMBEFI @ RVA 0x3433634

void Nekki_SF2_GUI_Shop_ShopScene__FJHEDBMBEFI
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,HOOAAGABMBL_o *CAIFMHMOEEP,
               int32_t LFHPEEKGNDO,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *__this_00;
  HOOAAGABMBL_o *pHVar2;
  HJNDPNIMBBG_o *__this_01;
  ACHLOMELAJE_o *pAVar3;
  PJKHAJKEHEL_o *pPVar4;
  Nekki_SF2_GUI_Shop_ShopScene_StaticFields *pNVar5;
  OLKKAIFGGAK_o *__this_02;
  Nekki_SF2_Core_Fights_ModelContainer_o *pNVar6;
  UnityEngine_Color_o EFJKPCADGJH;
  
  if ((DAT_04568191 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ShopScene_TypeInfo);
    FUN_01bab630(&StringLiteral_14870/*"Weapon"*/);
    FUN_01bab630(&StringLiteral_8772/*"Magic"*/);
    FUN_01bab630(&StringLiteral_11017/*"Ranged"*/);
    DAT_04568191 = 1;
  }
  pHVar2 = CAIFMHMOEEP;
  if (CAIFMHMOEEP == (HOOAAGABMBL_o *)0x0) {
    __this_00 = (__this->fields)._ItemsPanel;
    if (__this_00 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_03533894;
    pHVar2 = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(__this_00,(MethodInfo *)0x0);
    if (pHVar2 == (HOOAAGABMBL_o *)0x0) {
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
      if ((pAVar3 == (ACHLOMELAJE_o *)0x0) ||
         (pPVar4 = (pAVar3->fields).MFLNIMCFPDK, pPVar4 == (PJKHAJKEHEL_o *)0x0)) goto LAB_03533894;
      pHVar2 = (pPVar4->fields).PEMECEBIJDM;
      if (pHVar2 == (HOOAAGABMBL_o *)0x0) {
        return;
      }
    }
  }
  bVar1 = System_String__op_Equality
                    ((pHVar2->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_14870/*"Weapon"*/,
                     (MethodInfo *)0x0);
  if (((bVar1) ||
      (bVar1 = System_String__op_Equality
                         ((pHVar2->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_8772/*"Magic"*/,
                          (MethodInfo *)0x0), bVar1)) ||
     (bVar1 = System_String__op_Equality
                        ((pHVar2->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_11017/*"Ranged"*/,
                         (MethodInfo *)0x0), bVar1)) {
    pNVar6 = (__this->fields)._ModelContainer;
    if ((Nekki_SF2_GUI_Shop_ShopScene_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pNVar6 == (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) goto LAB_03533894;
    pNVar5 = Nekki_SF2_GUI_Shop_ShopScene_TypeInfo->static_fields;
  }
  else {
    pNVar6 = (__this->fields)._ModelContainer;
    if ((Nekki_SF2_GUI_Shop_ShopScene_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pNVar6 == (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) goto LAB_03533894;
    pNVar5 = (Nekki_SF2_GUI_Shop_ShopScene_StaticFields *)
             &Nekki_SF2_GUI_Shop_ShopScene_TypeInfo->static_fields->ForceSlowRenderFramesShort;
  }
  Nekki_SF2_Core_Fights_ModelContainer__set_ForceSlowFrames
            (pNVar6,pNVar5->ForceSlowRenderFramesLong,(MethodInfo *)0x0);
  pNVar6 = (__this->fields)._ModelContainer;
  if (pNVar6 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
    Nekki_SF2_Core_Fights_ModelContainer__UpdateModel_ItemInfo
              (pNVar6,CAIFMHMOEEP,LFHPEEKGNDO,(pHVar2->fields)._GMPAEDFIIHF_k__BackingField,
               (MethodInfo *)0x0);
    pNVar6 = (__this->fields)._ModelContainer;
    if (pNVar6 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
      __this_02 = (pNVar6->fields).MAODNBMLDEG;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7e == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7e = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_FGIDANNEKFM_k__BackingField;
      if ((__this_01 != (HJNDPNIMBBG_o *)0x0) &&
         (EFJKPCADGJH = HJNDPNIMBBG__EMBBBGLKPNN(__this_01,(MethodInfo *)0x0),
         __this_02 != (OLKKAIFGGAK_o *)0x0)) {
        OLKKAIFGGAK__HLCMLOBHLDA(__this_02,EFJKPCADGJH,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03533894:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JLHIDOEJFCC()  [RVA 0x3432ECC]
// Nekki.SF2.GUI.Shop.ShopScene$$JLHIDOEJFCC @ RVA 0x3432ECC

void Nekki_SF2_GUI_Shop_ShopScene__JLHIDOEJFCC
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o **ppDVar1;
  ushort uVar2;
  bool bVar3;
  CLMJPODNPKB_o *pCVar4;
  VirtualInvokeData *pVVar5;
  DG_Tweening_Sequence_o *t;
  CLMJPODNPKB_c *pCVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_04568192 & 1) == 0) {
    FUN_01bab630(&CLMJPODNPKB_TypeInfo);
    DAT_04568192 = 1;
  }
  bVar3 = Nekki_SF2_GUI_Common_HintCanvas__IsInstanceExists((MethodInfo *)0x0);
  if (bVar3) {
    pCVar4 = Nekki_SF2_GUI_Common_HintCanvas__get_Instance((MethodInfo *)0x0);
    if (pCVar4 == (CLMJPODNPKB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pCVar6 = pCVar4->klass;
    uVar2._0_1_ = (pCVar6->_2).rank;
    uVar2._1_1_ = (pCVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
      piVar8 = &((pCVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)CLMJPODNPKB_TypeInfo) {
          pVVar5 = pCVar6->vtable + (*piVar8 + 2);
          goto LAB_03532f6c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pCVar4,CLMJPODNPKB_TypeInfo,2);
LAB_03532f6c:
    (*pVVar5->methodPtr)(pCVar4,pVVar5->method);
  }
  t = (__this->fields).OOIFAHNCKAO;
  if (t != (DG_Tweening_Sequence_o *)0x0) {
    ppDVar1 = &(__this->fields).OOIFAHNCKAO;
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)t,false,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}


// ===== public void ScrollToItemByName(POIJDKLHHKO BACJDPMBFFE, string CNIELFLIKJB)  [RVA 0x3436118]
// Nekki.SF2.GUI.Shop.ShopScene$$ScrollToItemByName @ RVA 0x3436118

void Nekki_SF2_GUI_Shop_ShopScene__ScrollToItemByName
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,int32_t BACJDPMBFFE,
               System_String_o *CNIELFLIKJB,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ItemsPanel_o *__this_00;
  
  Nekki_SF2_GUI_Shop_ShopScene__set_CurrentSection(__this,BACJDPMBFFE,(MethodInfo *)CNIELFLIKJB);
  __this_00 = (__this->fields)._ItemsPanel;
  if (__this_00 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
    Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem(__this_00,CNIELFLIKJB,0.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool FJFHCNJBHEP()  [RVA 0x3434E78]
// Nekki.SF2.GUI.Shop.ShopScene$$FJFHCNJBHEP @ RVA 0x3434E78

bool Nekki_SF2_GUI_Shop_ShopScene__FJFHCNJBHEP
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  KKLJIDJBFEI_o *pKVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar4;
  bool bVar5;
  
  if ((DAT_04568193 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568193 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._ItemsPanel;
  if ((pNVar3 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) &&
     (pSVar4 = (pNVar3->fields).BAADKBDJJPJ,
     pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) {
    bVar5 = 0 < (pSVar4->fields)._size;
    if ((__this->fields).AIAODGKGPEI == 6) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
      }
      bVar1 = MGNPHCAAEIO__PKNDHONBNIF((MethodInfo *)0x0);
      if (bVar1) {
        pKVar2 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        if (pKVar2 == (KKLJIDJBFEI_o *)0x0) goto LAB_03534f74;
        if ((pKVar2->fields).super._MGGBEPKMPCF_k__BackingField != false) {
          return bVar5;
        }
      }
      pNVar3 = (__this->fields)._ItemsPanel;
      if ((pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) ||
         (pSVar4 = (pNVar3->fields).BAADKBDJJPJ,
         pSVar4 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) goto LAB_03534f74;
      length = (pSVar4->fields)._size;
      (pSVar4->fields)._size = 0;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._ItemsPanel;
        if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_03534f74;
      }
      Nekki_SF2_GUI_Shop_ItemsPanel__UpdateScrollItems(pNVar3,(MethodInfo *)0x0);
      bVar5 = false;
    }
    return bVar5;
  }
LAB_03534f74:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ShowUI()  [RVA 0x3435E14]
// Nekki.SF2.GUI.Shop.ShopScene$$ShowUI @ RVA 0x3435E14

void Nekki_SF2_GUI_Shop_ShopScene__ShowUI(Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_SpriteRendererQuality_o *__this_01;
  
  if ((DAT_04568194 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    DAT_04568194 = 1;
    method = extraout_x1;
  }
  __this_01 = (__this->fields)._Background;
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BHEDGAKGKPO_TypeInfo,method);
  }
  if (__this_01 != (Nekki_SF2_GUI_SpriteRendererQuality_o *)0x0) {
    Nekki_SF2_GUI_SpriteRendererQuality__ChangeColor
              (__this_01,
               (UnityEngine_Color_o)(BHEDGAKGKPO_TypeInfo->static_fields->JMKOGEHDLIC).fields,
               (MethodInfo *)0x0);
    DG_Tweening_DOTweenModuleUI__DOFade((__this->fields)._ShopUIGroup,1.0,0.7,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._ShopUIGroup;
    if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
      UnityEngine_CanvasGroup__set_blocksRaycasts(__this_00,true,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BNBJGGEIIHM(HOOAAGABMBL CNDPGGAFHEA)  [RVA 0x34367CC]
// Nekki.SF2.GUI.Shop.ShopScene$$BNBJGGEIIHM @ RVA 0x34367CC

void Nekki_SF2_GUI_Shop_ShopScene__BNBJGGEIIHM
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,HOOAAGABMBL_o *CNDPGGAFHEA,MethodInfo *method
               )

{
  int32_t CJNHFNHJHPE;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *pNVar1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Common_Indicator_o *pNVar2;
  Nekki_SF2_GUI_Shop_SidePanel_o *pNVar3;
  
  CJNHFNHJHPE = HCAICJLDDJO__IEALNGPAPAF(CNDPGGAFHEA,(MethodInfo *)0x0);
  pNVar2 = (__this->fields)._EnchantmentsIndicator;
  if (pNVar2 != (Nekki_SF2_GUI_Common_Indicator_o *)0x0) {
    Nekki_SF2_GUI_Common_Indicator__set_State(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._ItemProperties;
    if (pNVar3 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) {
      if ((pNVar3->fields).DBNELADJPIJ == false) {
        return;
      }
      pNVar1 = Nekki_SF2_GUI_Shop_ShopScene__get_PropertiesPanelContent(__this,method_00);
      if ((pNVar1 != (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *)0x0) &&
         (pNVar2 = (pNVar1->fields)._EnchantmentsIndicator,
         pNVar2 != (Nekki_SF2_GUI_Common_Indicator_o *)0x0)) {
        Nekki_SF2_GUI_Common_Indicator__set_State(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IEnumerator HPKHJPDMFGA()  [RVA 0x3435EB8]
// Nekki.SF2.GUI.Shop.ShopScene$$HPKHJPDMFGA @ RVA 0x3435EB8

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Shop_ShopScene__HPKHJPDMFGA(Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568195 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ShopScene_NKMIILIGNOA_TypeInfo);
    DAT_04568195 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_ShopScene_NKMIILIGNOA_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== private void GFFNHPFGAFJ()  [RVA 0x3436870]
// Nekki.SF2.GUI.Shop.ShopScene$$GFFNHPFGAFJ @ RVA 0x3436870

void Nekki_SF2_GUI_Shop_ShopScene__GFFNHPFGAFJ
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Shop_ShopScene__GFFNHPFGAFJ(__this,(System_Action_o *)0x0,in_x2);
  return;
}


// ===== private void PBDGFBENHDK(HOOAAGABMBL CNDPGGAFHEA)  [RVA 0x3436878]
// Nekki.SF2.GUI.Shop.ShopScene$$PBDGFBENHDK @ RVA 0x3436878

void Nekki_SF2_GUI_Shop_ShopScene__PBDGFBENHDK
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,HOOAAGABMBL_o *CNDPGGAFHEA,MethodInfo *method
               )

{
  uint uVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  LabelButton_o *pLVar4;
  undefined8 *puVar5;
  bool local_28 [4];
  bool local_24 [4];
  
  if ((DAT_04568196 & 1) == 0) {
    FUN_01bab630(&StringLiteral_16818/*"btnShopEquip"*/);
    FUN_01bab630(&StringLiteral_16820/*"btnShopTry"*/);
    FUN_01bab630(&StringLiteral_16821/*"btnShopUnequip"*/);
    FUN_01bab630(&StringLiteral_10876/*"RaidItemPack"*/);
    DAT_04568196 = 1;
  }
  if (CNDPGGAFHEA == (HOOAAGABMBL_o *)0x0) {
    pLVar4 = (__this->fields)._TryItemButton;
    if ((pLVar4 != (LabelButton_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      pLVar4 = (__this->fields)._RestorePurchasesButton;
      if ((pLVar4 != (LabelButton_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
        pLVar4 = (__this->fields)._ForgeButton;
        if ((pLVar4 != (LabelButton_o *)0x0) &&
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else {
    local_24[0] = false;
    local_28[0] = false;
    HCAICJLDDJO__IOJJNFJDFEJ(local_24,local_28,CNDPGGAFHEA,(MethodInfo *)0x0);
    uVar1 = (__this->fields).AIAODGKGPEI;
    bVar2 = HCAICJLDDJO__HDHHJBFCPJK
                      ((bool)((byte)(0x5f >> (ulong)(uVar1 & 0x1f)) & uVar1 < 7),CNDPGGAFHEA,
                       (MethodInfo *)0x0);
    pLVar4 = (__this->fields)._TryItemButton;
    if ((pLVar4 != (LabelButton_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,bVar2,(MethodInfo *)0x0);
      pLVar4 = (__this->fields)._TryItemButton;
      if (pLVar4 != (LabelButton_o *)0x0) {
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)pLVar4,true,(MethodInfo *)0x0);
        pLVar4 = (__this->fields)._RestorePurchasesButton;
        if (pLVar4 != (LabelButton_o *)0x0) {
          pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0);
          bVar2 = Nekki_SF2_GUI_Shop_ShopScene__GBEFFGHDIFF(__this,method_00);
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar3,bVar2,(MethodInfo *)0x0);
            pLVar4 = (__this->fields)._ForgeButton;
            if (pLVar4 != (LabelButton_o *)0x0) {
              pUVar3 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0);
              bVar2 = Nekki_SF2_GUI_Shop_ShopScene__ALKCCLEIKCF(__this,method_01);
              if ((bVar2) &&
                 (bVar2 = System_String__op_Inequality
                                    ((CNDPGGAFHEA->fields)._GMPAEDFIIHF_k__BackingField,
                                     StringLiteral_10876/*"RaidItemPack"*/,(MethodInfo *)0x0), bVar2)) {
                bVar2 = HCAICJLDDJO__MINAKLNNDBL(CNDPGGAFHEA,true,(MethodInfo *)0x0);
              }
              else {
                bVar2 = false;
              }
              if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__SetActive(pUVar3,bVar2,(MethodInfo *)0x0);
                if (local_28[0] == false) {
                  if ((local_24[0] != false) ||
                     (bVar2 = System_String__op_Equality
                                        ((CNDPGGAFHEA->fields)._GMPAEDFIIHF_k__BackingField,
                                         StringLiteral_10876/*"RaidItemPack"*/,(MethodInfo *)0x0), bVar2)) {
                    pLVar4 = (__this->fields)._TryItemButton;
                    if (pLVar4 != (LabelButton_o *)0x0) {
                      puVar5 = &StringLiteral_16818/*"btnShopEquip"*/;
                      goto LAB_03536a9c;
                    }
                  }
                  else {
                    pLVar4 = (__this->fields)._TryItemButton;
                    if (pLVar4 != (LabelButton_o *)0x0) {
                      puVar5 = &StringLiteral_16820/*"btnShopTry"*/;
LAB_03536a9c:
                      LabelButton__set_Alias(pLVar4,(System_String_o *)*puVar5,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
                else {
                  pLVar4 = (__this->fields)._TryItemButton;
                  if (pLVar4 != (LabelButton_o *)0x0) {
                    puVar5 = &StringLiteral_16821/*"btnShopUnequip"*/;
                    goto LAB_03536a9c;
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


// ===== private void FHKMIFJBPEN()  [RVA 0x343492C]
// Nekki.SF2.GUI.Shop.ShopScene$$FHKMIFJBPEN @ RVA 0x343492C

void Nekki_SF2_GUI_Shop_ShopScene__FHKMIFJBPEN
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_GUI_Shop_ShopScene_o *__this_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar2;
  DOPEEDABNEK_o *pDVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *HPACPFLKHPK;
  
  if ((DAT_04568197 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Clear__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568197 = 1;
  }
  pSVar2 = (__this->fields).CAFKGACOEBL;
  if (pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar2 = (__this->fields).HDHLOAOBOIA;
    if (pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      iVar1 = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      pSVar2 = (__this->fields).CDGAHKJEMHM;
      if (pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
        iVar1 = (pSVar2->fields)._size;
        (pSVar2->fields)._size = 0;
        (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
        if (0 < iVar1) {
          System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
        }
        pSVar2 = (__this->fields).CBGOPJALHHB;
        if (pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
          iVar1 = (pSVar2->fields)._size;
          (pSVar2->fields)._size = 0;
          (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
          if (0 < iVar1) {
            System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0)
            ;
          }
          pSVar2 = (__this->fields).LAPBNMPGIEH;
          if (pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
            iVar1 = (pSVar2->fields)._size;
            (pSVar2->fields)._size = 0;
            (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
            if (0 < iVar1) {
              System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,
                                  (MethodInfo *)0x0);
            }
            pSVar2 = (__this->fields).NHJBNMACENA;
            if (pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
              iVar1 = (pSVar2->fields)._size;
              (pSVar2->fields)._size = 0;
              (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
              if (0 < iVar1) {
                System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,
                                    (MethodInfo *)0x0);
              }
              pSVar2 = (__this->fields).FALDFPJGOMB;
              if (pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                iVar1 = (pSVar2->fields)._size;
                (pSVar2->fields)._size = 0;
                (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
                if (0 < iVar1) {
                  System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,
                                      (MethodInfo *)0x0);
                }
                pSVar2 = (__this->fields).EPKOHJKLMIJ;
                if (pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                  iVar1 = (pSVar2->fields)._size;
                  (pSVar2->fields)._size = 0;
                  (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
                  if (0 < iVar1) {
                    System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,
                                        (MethodInfo *)0x0);
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
                  pDVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
                  if (pDVar3 != (DOPEEDABNEK_o *)0x0) {
                    pSVar2 = (pDVar3->fields).GNCBIPJFEGB;
                    HPACPFLKHPK = (__this->fields).CAFKGACOEBL;
                    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    MGNPHCAAEIO__FHKMIFJBPEN(pSVar2,HPACPFLKHPK,(MethodInfo *)0x0);
                    if (DAT_04563eaa == '\0') {
                      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                      DAT_04563eaa = '\x01';
                    }
                    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    pDVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
                    if (pDVar3 != (DOPEEDABNEK_o *)0x0) {
                      MGNPHCAAEIO__FHKMIFJBPEN
                                ((pDVar3->fields).EIFDIMKJDMN,(__this->fields).HDHLOAOBOIA,
                                 (MethodInfo *)0x0);
                      if (DAT_04563eaa == '\0') {
                        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                        DAT_04563eaa = '\x01';
                      }
                      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      pDVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
                      if (pDVar3 != (DOPEEDABNEK_o *)0x0) {
                        MGNPHCAAEIO__FHKMIFJBPEN
                                  ((pDVar3->fields).JKLDGCJAGCF,(__this->fields).CDGAHKJEMHM,
                                   (MethodInfo *)0x0);
                        if (DAT_04563eaa == '\0') {
                          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                          DAT_04563eaa = '\x01';
                        }
                        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564();
                        }
                        pDVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
                        if (pDVar3 != (DOPEEDABNEK_o *)0x0) {
                          MGNPHCAAEIO__FHKMIFJBPEN
                                    ((pDVar3->fields).DLDBBBCMJOC,(__this->fields).CBGOPJALHHB,
                                     (MethodInfo *)0x0);
                          if (DAT_04563eaa == '\0') {
                            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                            DAT_04563eaa = '\x01';
                          }
                          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                            thunk_FUN_01ba7564();
                          }
                          pDVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField
                          ;
                          if (pDVar3 != (DOPEEDABNEK_o *)0x0) {
                            MGNPHCAAEIO__FHKMIFJBPEN
                                      ((pDVar3->fields).OGOPJDCOPDF,(__this->fields).LAPBNMPGIEH,
                                       (MethodInfo *)0x0);
                            if (DAT_04563eaa == '\0') {
                              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                              DAT_04563eaa = '\x01';
                            }
                            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                              thunk_FUN_01ba7564();
                            }
                            pDVar3 = NLPJLHOEAOE_TypeInfo->static_fields->
                                     _IDHKFPFDECA_k__BackingField;
                            if (pDVar3 != (DOPEEDABNEK_o *)0x0) {
                              MGNPHCAAEIO__FHKMIFJBPEN
                                        ((pDVar3->fields).FDLFEJAEDGA,(__this->fields).NHJBNMACENA,
                                         (MethodInfo *)0x0);
                              if (DAT_04563eaa == '\0') {
                                FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                                DAT_04563eaa = '\x01';
                              }
                              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                                thunk_FUN_01ba7564();
                              }
                              pDVar3 = NLPJLHOEAOE_TypeInfo->static_fields->
                                       _IDHKFPFDECA_k__BackingField;
                              if (pDVar3 != (DOPEEDABNEK_o *)0x0) {
                                MGNPHCAAEIO__FHKMIFJBPEN
                                          ((pDVar3->fields).AGPCBLCIHOM,(__this->fields).NHJBNMACENA
                                           ,(MethodInfo *)0x0);
                                pSVar2 = Nekki_SF2_GUI_Shop_ShopScene__KOPEODKDDDF
                                                   (__this_00,method_00);
                                MGNPHCAAEIO__FHKMIFJBPEN
                                          (pSVar2,(__this->fields).FALDFPJGOMB,(MethodInfo *)0x0);
                                if (DAT_04563eaa == '\0') {
                                  FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                                  DAT_04563eaa = '\x01';
                                }
                                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                                  thunk_FUN_01ba7564();
                                }
                                pDVar3 = NLPJLHOEAOE_TypeInfo->static_fields->
                                         _IDHKFPFDECA_k__BackingField;
                                if (pDVar3 != (DOPEEDABNEK_o *)0x0) {
                                  MGNPHCAAEIO__FHKMIFJBPEN
                                            ((pDVar3->fields).CLNAOMIIBLH,
                                             (__this->fields).EPKOHJKLMIJ,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IKIELNIGEBB()  [RVA 0x3436E94]
// Nekki.SF2.GUI.Shop.ShopScene$$IKIELNIGEBB @ RVA 0x3436E94

void Nekki_SF2_GUI_Shop_ShopScene__IKIELNIGEBB
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar1;
  HOOAAGABMBL_o *CNDPGGAFHEA;
  MethodInfo *in_x2;
  
                    /* try { // try from 03536e9c to 03636ea3 has its CatchHandler @ 0353717c */
  Nekki_SF2_GUI_Shop_ShopScene__UpdateModelIfNeed(__this,(HOOAAGABMBL_o *)0x0,in_x2);
  pNVar1 = (__this->fields)._ItemsPanel;
                    /* try { // try from 03536eac to 03636eb3 has its CatchHandler @ 03537198 */
  if (pNVar1 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
                    /* try { // try from 03536eb4 to 03636ebf has its CatchHandler @ 03537170 */
    Nekki_SF2_GUI_Shop_ItemsPanel__UpdateScrollItems(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._ItemsPanel;
    if (pNVar1 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
                    /* try { // try from 03536ec0 to 03636ecb has its CatchHandler @ 0353715c */
      CNDPGGAFHEA = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(pNVar1,(MethodInfo *)0x0);
      if (CNDPGGAFHEA != (HOOAAGABMBL_o *)0x0) {
        Nekki_SF2_GUI_Shop_ShopScene__BCDNLJLKOCC(__this,CNDPGGAFHEA,in_x2);
        Nekki_SF2_GUI_Shop_ShopScene__OEDCGMAAPLN(__this,CNDPGGAFHEA,in_x2);
                    /* try { // try from 03536ef0 to 03636ef7 has its CatchHandler @ 03537158 */
        Nekki_SF2_GUI_Shop_ShopScene__PBDGFBENHDK(__this,CNDPGGAFHEA,in_x2);
                    /* try { // try from 03536f00 to 03636f07 has its CatchHandler @ 03537168 */
        Nekki_SF2_GUI_Shop_ShopScene__BNBJGGEIIHM(__this,CNDPGGAFHEA,in_x2);
        return;
      }
                    /* try { // try from 03536f08 to 03636f13 has its CatchHandler @ 03537150 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03536f14 to 03636f1b has its CatchHandler @ 03537154 */
  FUN_01bab8c8();
}


// ===== public void TryClearAtlasCacheItemImages()  [RVA 0x3436F70]
// Nekki.SF2.GUI.Shop.ShopScene$$TryClearAtlasCacheItemImages @ RVA 0x3436F70

void Nekki_SF2_GUI_Shop_ShopScene__TryClearAtlasCacheItemImages
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  System_Func_string__bool__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  System_Func_string__bool__o *IMNBAFCEDMA;
  
  if ((DAT_04568198 & 1) == 0) {
    FUN_01bab630(&AMHFFFODDOC_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&System_Func<string,_bool>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_<>c_FAOCMDGMCFC__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ShopScene_<>c_TypeInfo);
    DAT_04568198 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03536fd4 to 03636ff7 has its CatchHandler @ 0353714c */
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  if (EOAOCPLIKOI_TypeInfo->static_fields->ABJLMAOEEEE != false) {
                    /* try { // try from 03536ff8 to 036370ef has its CatchHandler @ 035367a8 */
    if ((Nekki_SF2_GUI_Shop_ShopScene_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method = extraout_x1_01;
    }
    IMNBAFCEDMA = Nekki_SF2_GUI_Shop_ShopScene_<>c_TypeInfo->static_fields->__9__83_0;
    if (IMNBAFCEDMA == (System_Func_string__bool__o *)0x0) {
      if ((Nekki_SF2_GUI_Shop_ShopScene_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      IMNBAFCEDMA = (System_Func_string__bool__o *)
                    thunk_FUN_01bda818(System_Func<string,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      ppSVar1 = &Nekki_SF2_GUI_Shop_ShopScene_<>c_TypeInfo->static_fields->__9__83_0;
      *ppSVar1 = IMNBAFCEDMA;
      thunk_FUN_01c20e04(ppSVar1,IMNBAFCEDMA);
      method = extraout_x1_02;
    }
    if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method = extraout_x1_03;
    }
    AMHFFFODDOC__LLMNJNIKDGK(IMNBAFCEDMA,method);
    UnityEngine_Resources__UnloadUnusedAssets((MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void OnTryItemButtonClick()  [RVA 0x3435324]
// Nekki.SF2.GUI.Shop.ShopScene$$OnTryItemButtonClick @ RVA 0x3435324

void Nekki_SF2_GUI_Shop_ShopScene__OnTryItemButtonClick
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  DDMHMABAHHD_Fields *pDVar1;
  System_String_o *pSVar2;
  bool bVar3;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar4;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  DDMHMABAHHD_o *pDVar5;
  JMDPBFOCHHP_o *__this_00;
  JMDPBFOCHHP_HJLEKMDIDPO_o *pJVar6;
  EEGDOGKBLNG_o *pEVar7;
  GGHCLMEFIGO_o *pGVar8;
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  HOOAAGABMBL_o *CAIFMHMOEEP;
  MethodInfo *extraout_x1_03;
  MethodInfo *method_00;
  MethodInfo *pMVar9;
  ACHLOMELAJE_o *pAVar10;
  System_String_o *DIIDFLPOBMC;
  Nekki_SF2_Core_Fights_ModelContainer_o *__this_01;
  bool local_38 [4];
  bool local_34 [4];
  
  if ((DAT_04568199 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_LJEJIDPLJAA__);
    FUN_01bab630(&StringLiteral_5562/*"EQUIPMENT"*/);
    FUN_01bab630(&StringLiteral_6981/*"HORN"*/);
    FUN_01bab630(&StringLiteral_10876/*"RaidItemPack"*/);
    FUN_01bab630(&StringLiteral_8722/*"MISSILE"*/);
    FUN_01bab630(&StringLiteral_10045/*"POTION"*/);
    FUN_01bab630(&StringLiteral_10823/*"RaidConsumable"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568199 = 1;
  }
  pNVar4 = (__this->fields)._ItemsPanel;
  if (pNVar4 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_03535780;
  IKKAMAMLIKA = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(pNVar4,(MethodInfo *)0x0);
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
    local_34[0] = false;
    local_38[0] = false;
    HCAICJLDDJO__IOJJNFJDFEJ(local_34,local_38,IKKAMAMLIKA,(MethodInfo *)0x0);
    bVar3 = System_String__op_Equality
                      ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,
                       (MethodInfo *)0x0);
    if ((bVar3) ||
       (bVar3 = System_String__op_Equality
                          ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10823/*"RaidConsumable"*/,
                           (MethodInfo *)0x0), bVar3)) {
      pSVar2 = StringLiteral_1/*""*/;
      pDVar5 = HCAICJLDDJO__PEENAMDLAKO(IKKAMAMLIKA,(MethodInfo *)0x0);
      pDVar1 = (DDMHMABAHHD_Fields *)&(IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
      if (pDVar5 != (DDMHMABAHHD_o *)0x0) {
        pDVar1 = &pDVar5->fields;
      }
      DIIDFLPOBMC = pDVar1->_COIPKAKHDFP_k__BackingField;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (__this_00 == (JMDPBFOCHHP_o *)0x0) goto LAB_03535780;
      pJVar6 = JMDPBFOCHHP__FPPDGOEOJCH(__this_00,DIIDFLPOBMC,(MethodInfo *)0x0);
      if (local_38[0] != false) {
        DIIDFLPOBMC = pSVar2;
      }
      pMVar9 = extraout_x1;
      if (pJVar6 != (JMDPBFOCHHP_HJLEKMDIDPO_o *)0x0) {
        bVar3 = System_String__op_Equality
                          ((pJVar6->fields).BGHFADDGPAD,StringLiteral_8722/*"MISSILE"*/,(MethodInfo *)0x0);
        if (bVar3) {
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pEVar7 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          if (pEVar7 == (EEGDOGKBLNG_o *)0x0) goto LAB_03535780;
          EEGDOGKBLNG__BNKOEFAHHIP(pEVar7,DIIDFLPOBMC,true,(MethodInfo *)0x0);
          pMVar9 = extraout_x1_00;
        }
        else {
          bVar3 = System_String__op_Equality
                            ((pJVar6->fields).BGHFADDGPAD,StringLiteral_10045/*"POTION"*/,(MethodInfo *)0x0);
          if (bVar3) {
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pEVar7 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
            if (pEVar7 == (EEGDOGKBLNG_o *)0x0) goto LAB_03535780;
            EEGDOGKBLNG__HOOFGFHMIAB(pEVar7,DIIDFLPOBMC,true,(MethodInfo *)0x0);
            pMVar9 = extraout_x1_01;
          }
          else {
            bVar3 = System_String__op_Equality
                              ((pJVar6->fields).BGHFADDGPAD,StringLiteral_6981/*"HORN"*/,(MethodInfo *)0x0);
            if (bVar3) {
              if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pEVar7 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
              if (pEVar7 == (EEGDOGKBLNG_o *)0x0) goto LAB_03535780;
              EEGDOGKBLNG__JFFOFHJAFGH(pEVar7,DIIDFLPOBMC,true,(MethodInfo *)0x0);
              pMVar9 = extraout_x1_02;
            }
            else {
              System_String__op_Equality
                        ((pJVar6->fields).BGHFADDGPAD,StringLiteral_5562/*"EQUIPMENT"*/,(MethodInfo *)0x0);
              pMVar9 = extraout_x1_03;
            }
          }
        }
      }
      Nekki_SF2_GUI_Shop_ShopScene__IKIELNIGEBB(__this,pMVar9);
    }
    else {
      if ((local_38[0] & local_34[0]) == 0) {
        if ((local_34[0] == false) || (local_38[0] != false)) {
          __this_01 = (__this->fields)._ModelContainer;
          CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          pMVar9 = (MethodInfo *)0x0;
          System_Action___ctor();
          if (__this_01 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
            Nekki_SF2_Core_Fights_ModelContainer__add_OnTryOnEnd
                      (__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Shop_ShopScene__FJHEDBMBEFI(__this,IKKAMAMLIKA,7,pMVar9);
            Nekki_SF2_GUI_Shop_ShopScene__HideUI(__this,method_00);
            return;
          }
          goto LAB_03535780;
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
        pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if ((pAVar10 == (ACHLOMELAJE_o *)0x0) ||
           (pGVar8 = (pAVar10->fields).OIDPLCLELEN, pGVar8 == (GGHCLMEFIGO_o *)0x0))
        goto LAB_03535780;
        pMVar9 = (MethodInfo *)0x1;
        GGHCLMEFIGO__BOEFGIBCIIL(pGVar8,IKKAMAMLIKA,true,(MethodInfo *)0x0);
        pNVar4 = (__this->fields)._ItemsPanel;
        if (pNVar4 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_03535780;
        Nekki_SF2_GUI_Shop_ItemsPanel__UpdateScrollItems(pNVar4,(MethodInfo *)0x0);
        CAIFMHMOEEP = IKKAMAMLIKA;
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
        pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if ((pAVar10 == (ACHLOMELAJE_o *)0x0) ||
           (pGVar8 = (pAVar10->fields).OIDPLCLELEN, pGVar8 == (GGHCLMEFIGO_o *)0x0)) {
LAB_03535780:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pMVar9 = (MethodInfo *)0x1;
        GGHCLMEFIGO__OHLEKAMFNBE(pGVar8,IKKAMAMLIKA,true,(MethodInfo *)0x0);
        pNVar4 = (__this->fields)._ItemsPanel;
        if (pNVar4 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_03535780;
        Nekki_SF2_GUI_Shop_ItemsPanel__UpdateScrollItems(pNVar4,(MethodInfo *)0x0);
        CAIFMHMOEEP = (HOOAAGABMBL_o *)0x0;
      }
      Nekki_SF2_GUI_Shop_ShopScene__UpdateModelIfNeed(__this,CAIFMHMOEEP,pMVar9);
      Nekki_SF2_GUI_Shop_ShopScene__BCDNLJLKOCC(__this,IKKAMAMLIKA,pMVar9);
      Nekki_SF2_GUI_Shop_ShopScene__JINDJMBNDGM(__this,IKKAMAMLIKA,pMVar9);
      Nekki_SF2_GUI_Shop_ShopScene__PBDGFBENHDK(__this,IKKAMAMLIKA,pMVar9);
    }
  }
  return;
}


// ===== public void UpdateNewItemsCounters()  [RVA 0x34323BC]
// Nekki.SF2.GUI.Shop.ShopScene$$UpdateNewItemsCounters @ RVA 0x34323BC

void Nekki_SF2_GUI_Shop_ShopScene__UpdateNewItemsCounters
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Action_HOOAAGABMBL__o **ppSVar2;
  DOPEEDABNEK_o *__this_00;
  Nekki_SF2_GUI_Shop_ShopBottomPanel_o *__this_01;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_02;
  ACHLOMELAJE_o *__this_03;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_04;
  System_Action_HOOAAGABMBL__o *action;
  
  if ((DAT_0456819a & 1) == 0) {
    FUN_01bab630(&System_Action<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_UpdateIndicators__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_ForEach__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_<>c_JAPJJMNLKOH__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ShopScene_<>c_TypeInfo);
    DAT_0456819a = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._ItemsPanel;
  if (pNVar3 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
    __this_04 = (pNVar3->fields).BAADKBDJJPJ;
    if (__this_04 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      if ((Nekki_SF2_GUI_Shop_ShopScene_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Nekki_SF2_GUI_Shop_ShopScene_<>c_TypeInfo,method);
        method = extraout_x1_00;
      }
      action = Nekki_SF2_GUI_Shop_ShopScene_<>c_TypeInfo->static_fields->__9__123_0;
      if (action == (System_Action_HOOAAGABMBL__o *)0x0) {
        if ((Nekki_SF2_GUI_Shop_ShopScene_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(Nekki_SF2_GUI_Shop_ShopScene_<>c_TypeInfo,method);
        }
        action = (System_Action_HOOAAGABMBL__o *)
                 thunk_FUN_01bda818(System_Action<HOOAAGABMBL>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar2 = &Nekki_SF2_GUI_Shop_ShopScene_<>c_TypeInfo->static_fields->__9__123_0;
        *ppSVar2 = action;
        thunk_FUN_01c20e04(ppSVar2,action);
      }
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_04,(System_Action_T__o *)action
                 ,Method_System_Collections_Generic_List<HOOAAGABMBL>_ForEach__);
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
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
    if (__this_00 != (DOPEEDABNEK_o *)0x0) {
      iVar1 = DOPEEDABNEK__JMPINBGBLNI(__this_00,(MethodInfo *)0x0);
      if ((__this->fields).FIBCDHMGBIL == iVar1) {
        return;
      }
      __this_01 = (__this->fields).GJIPOBCNEPG;
      (__this->fields).FIBCDHMGBIL = iVar1;
      if (__this_01 != (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *)0x0) {
        Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__UpdateIndicators
                  ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this_01,
                   Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_UpdateIndicators__);
        __this_02 = (__this->fields).CCKIFMALFBA;
        if (__this_02 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
          Nekki_SF2_GUI_Menu_MainMenu__UpdateNewItems(__this_02,(MethodInfo *)0x0);
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
          __this_03 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (__this_03 != (ACHLOMELAJE_o *)0x0) {
            CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_03,false,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IEnumerator JDPMLOOBKOD()  [RVA 0x3437464]
// Nekki.SF2.GUI.Shop.ShopScene$$JDPMLOOBKOD @ RVA 0x3437464

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Shop_ShopScene__JDPMLOOBKOD(Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456819b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ShopScene_AGBLGHMBIPJ_TypeInfo);
    DAT_0456819b = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_ShopScene_AGBLGHMBIPJ_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public bool get_IsPaidItemsAvailable()  [RVA 0x34374F8]
// Nekki.SF2.GUI.Shop.ShopScene$$get_IsPaidItemsAvailable @ RVA 0x34374F8

bool Nekki_SF2_GUI_Shop_ShopScene__get_IsPaidItemsAvailable
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_0456819c & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    DAT_0456819c = 1;
  }
  pSVar1 = (__this->fields).NHJBNMACENA;
  if (pSVar1 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    return 0 < (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public ParametersPanelContent get_ParametersPanelContent()  [RVA 0x3437548]
// Nekki.SF2.GUI.Shop.ShopScene$$get_ParametersPanelContent @ RVA 0x3437548

Nekki_SF2_GUI_Shop_ParametersPanelContent_o *
Nekki_SF2_GUI_Shop_ShopScene__get_ParametersPanelContent
          (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_SidePanelContent_o *__this_00;
  Nekki_SF2_GUI_Shop_ParametersPanelContent_o *pNVar1;
  undefined8 uVar2;
  Nekki_SF2_GUI_Shop_SidePanel_o *pNVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_0456819d & 1) == 0) {
    auVar4 = FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_SidePanelContent_As<ParametersPanelContent>__);
    DAT_0456819d = 1;
  }
  uVar2 = auVar4._0_8_;
  pNVar3 = (__this->fields)._ItemParameters;
  if ((pNVar3 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) &&
     (__this_00 = (pNVar3->fields).LJBNCINMIIP, uVar2 = 0,
     __this_00 != (Nekki_SF2_GUI_Shop_SidePanelContent_o *)0x0)) {
    pNVar1 = (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *)
             Nekki_SF2_GUI_Shop_SidePanelContent__As<object>
                       (__this_00,
                        Method_Nekki_SF2_GUI_Shop_SidePanelContent_As<ParametersPanelContent>__);
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2,auVar4._8_8_);
}


// ===== public ForgePanel get_ForgePanel()  [RVA 0x34375A0]
// Nekki.SF2.GUI.Shop.ShopScene$$get_ForgePanel @ RVA 0x34375A0

Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *
Nekki_SF2_GUI_Shop_ShopScene__get_ForgePanel
          (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  return (__this->fields)._ForgePanel;
}


// ===== private bool FJLNKLMBKDN()  [RVA 0x34375A8]
// Nekki.SF2.GUI.Shop.ShopScene$$FJLNKLMBKDN @ RVA 0x34375A8

bool Nekki_SF2_GUI_Shop_ShopScene__FJLNKLMBKDN
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *__this_00;
  HOOAAGABMBL_o *pHVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456819e & 1) == 0) {
    FUN_01bab630(&StringLiteral_10876/*"RaidItemPack"*/);
    DAT_0456819e = 1;
    method = extraout_x1;
  }
  bVar1 = Nekki_SF2_GUI_Shop_ShopScene__ALKCCLEIKCF(__this,method);
  if (bVar1) {
    __this_00 = (__this->fields)._ItemsPanel;
    if (__this_00 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pHVar2 = Nekki_SF2_GUI_Shop_ItemsPanel__GetFirstBoughtItem(__this_00,true,(MethodInfo *)0x0);
    if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
      bVar1 = System_String__op_Inequality
                        ((pHVar2->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,
                         (MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== private void BNKPDJFNJKP(IGFGDDANEPE ANMFBABEMFD)  [RVA 0x343762C]
// Nekki.SF2.GUI.Shop.ShopScene$$BNKPDJFNJKP @ RVA 0x343762C

void Nekki_SF2_GUI_Shop_ShopScene__BNKPDJFNJKP
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,IGFGDDANEPE_o *ANMFBABEMFD,MethodInfo *method
               )

{
  if (ANMFBABEMFD != (IGFGDDANEPE_o *)0x0) {
    Nekki_SF2_GUI_Shop_ShopScene__Refresh(__this,(MethodInfo *)ANMFBABEMFD);
    return;
  }
  return;
}


// ===== private bool GBEFFGHDIFF()  [RVA 0x3436AD0]
// Nekki.SF2.GUI.Shop.ShopScene$$GBEFFGHDIFF @ RVA 0x3436AD0

bool Nekki_SF2_GUI_Shop_ShopScene__GBEFFGHDIFF
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  DGGBFKNKEAH_o *pDVar3;
  Nekki_SF2_GUI_Common_PaymentUI_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  if ((__this->fields).AIAODGKGPEI != 5) {
    return false;
  }
  if (DAT_045655e8 == '\0') {
    FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
    DAT_045655e8 = '\x01';
    method = extraout_x1;
  }
  pDVar3 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
  if (pDVar3 != (DGGBFKNKEAH_o *)0x0) {
    iVar2 = (*(pDVar3->klass->vtable)._19_OEPALCOIONF.methodPtr)
                      (pDVar3,(pDVar3->klass->vtable)._19_OEPALCOIONF.method);
    if (iVar2 != 2) {
      return false;
    }
    __this_00 = (__this->fields).AGKBOPBINNE;
    method = extraout_x1_00;
    if (__this_00 != (Nekki_SF2_GUI_Common_PaymentUI_o *)0x0) {
      bVar1 = Nekki_SF2_GUI_Common_PaymentUI__get_IsRestorePurchasesAvailable
                        (__this_00,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void ShowSidePanels(bool CJNHFNHJHPE)  [RVA 0x3435FD4]
// Nekki.SF2.GUI.Shop.ShopScene$$ShowSidePanels @ RVA 0x3435FD4

void Nekki_SF2_GUI_Shop_ShopScene__ShowSidePanels
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_SidePanel_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  bool value;
  
  if (CJNHFNHJHPE) {
    value = 2 < (__this->fields).AIAODGKGPEI - 5U;
  }
  else {
    value = false;
  }
  pNVar1 = (__this->fields)._ItemInfo;
  if ((pNVar1 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._ItemParameters;
    if ((pNVar1 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,value,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._ItemProperties;
      if ((pNVar1 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EICMBDFALCN(HOOAAGABMBL ANMFBABEMFD)  [RVA 0x3437638]
// Nekki.SF2.GUI.Shop.ShopScene$$EICMBDFALCN @ RVA 0x3437638

void Nekki_SF2_GUI_Shop_ShopScene__EICMBDFALCN
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,HOOAAGABMBL_o *ANMFBABEMFD,MethodInfo *method
               )

{
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar1;
  Nekki_SF2_GUI_TableView_o *pNVar2;
  
  pNVar1 = (__this->fields)._ItemsPanel;
  if ((pNVar1 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) &&
     (pNVar2 = (pNVar1->fields)._TableView, pNVar2 != (Nekki_SF2_GUI_TableView_o *)0x0)) {
    if ((pNVar2->fields).IsLockSelection != false) {
      return;
    }
    Nekki_SF2_GUI_Shop_ShopScene__OAJODMIPLPF(__this,ANMFBABEMFD,method);
    Nekki_SF2_GUI_Shop_ShopScene__JINDJMBNDGM(__this,ANMFBABEMFD,method);
    Nekki_SF2_GUI_Shop_ShopScene__BCDNLJLKOCC(__this,ANMFBABEMFD,method);
    Nekki_SF2_GUI_Shop_ShopScene__OEDCGMAAPLN(__this,ANMFBABEMFD,method);
    Nekki_SF2_GUI_Shop_ShopScene__PBDGFBENHDK(__this,ANMFBABEMFD,method);
    Nekki_SF2_GUI_Shop_ShopScene__BNBJGGEIIHM(__this,ANMFBABEMFD,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ItemsPanel get_ItemsPanel()  [RVA 0x34376B8]
// Nekki.SF2.GUI.Shop.ShopScene$$get_ItemsPanel @ RVA 0x34376B8

Nekki_SF2_GUI_Shop_ItemsPanel_o *
Nekki_SF2_GUI_Shop_ShopScene__get_ItemsPanel
          (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  return (__this->fields)._ItemsPanel;
}


// ===== private void FBHPEDGIJFA()  [RVA 0x34376C0]
// Nekki.SF2.GUI.Shop.ShopScene$$FBHPEDGIJFA @ RVA 0x34376C0

void Nekki_SF2_GUI_Shop_ShopScene__FBHPEDGIJFA
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *pNVar1;
  
  pNVar1 = (__this->fields)._ForgePanel;
  if (pNVar1 == (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pNVar1->fields).NBAADNACNDJ != 0) {
    return;
  }
  Nekki_SF2_GUI_Shop_ShopScene__set_Mode(__this,0,in_x2);
  return;
}


// ===== private void PEMHHDNNKAO(bool JIKBAKFCENP)  [RVA 0x3433D5C]
// Nekki.SF2.GUI.Shop.ShopScene$$PEMHHDNNKAO @ RVA 0x3433D5C

void Nekki_SF2_GUI_Shop_ShopScene__PEMHHDNNKAO
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,bool JIKBAKFCENP,MethodInfo *method)

{
  uint length;
  Nekki_SF2_GUI_Shop_ShopScene_o *extraout_x0;
  Nekki_SF2_GUI_Shop_ShopScene_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar1;
  System_Collections_Generic_List_HOOAAGABMBL__o *HPACPFLKHPK;
  undefined1 auVar2 [16];
  
  method_00 = (MethodInfo *)(ulong)JIKBAKFCENP;
  __this_00 = __this;
  if ((DAT_0456819f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Clear__);
    auVar2 = FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    method_00 = auVar2._8_8_;
    __this_00 = auVar2._0_8_;
    DAT_0456819f = 1;
  }
  pSVar1 = (__this->fields).FALDFPJGOMB;
  if (pSVar1 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  length = (pSVar1->fields)._size;
  method_01 = (MethodInfo *)(ulong)length;
  (pSVar1->fields)._size = 0;
  (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
  if (0 < (int)length) {
    System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
    __this_00 = extraout_x0;
    method_00 = extraout_x1;
  }
  if (JIKBAKFCENP) {
    pSVar1 = Nekki_SF2_GUI_Shop_ShopScene__KOPEODKDDDF(__this_00,method_00);
    HPACPFLKHPK = (__this->fields).FALDFPJGOMB;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
    }
    method_01 = (MethodInfo *)0x0;
    MGNPHCAAEIO__FHKMIFJBPEN(pSVar1,HPACPFLKHPK,(MethodInfo *)0x0);
  }
  if ((__this->fields).AIAODGKGPEI == 6) {
    (__this->fields).AIAODGKGPEI = 8;
    Nekki_SF2_GUI_Shop_ShopScene__set_CurrentSection(__this,6,method_01);
    return;
  }
  return;
}


// ===== public InfoPanelContent get_InfoPanelContent()  [RVA 0x3433900]
// Nekki.SF2.GUI.Shop.ShopScene$$get_InfoPanelContent @ RVA 0x3433900

Nekki_SF2_GUI_Shop_InfoPanelContent_o *
Nekki_SF2_GUI_Shop_ShopScene__get_InfoPanelContent
          (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_SidePanelContent_o *__this_00;
  Nekki_SF2_GUI_Shop_InfoPanelContent_o *pNVar1;
  undefined8 uVar2;
  Nekki_SF2_GUI_Shop_SidePanel_o *pNVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_045681a0 & 1) == 0) {
    auVar4 = FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_SidePanelContent_As<InfoPanelContent>__);
    DAT_045681a0 = 1;
  }
  uVar2 = auVar4._0_8_;
  pNVar3 = (__this->fields)._ItemInfo;
  if ((pNVar3 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) &&
     (__this_00 = (pNVar3->fields).LJBNCINMIIP, uVar2 = 0,
     __this_00 != (Nekki_SF2_GUI_Shop_SidePanelContent_o *)0x0)) {
    pNVar1 = (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)
             Nekki_SF2_GUI_Shop_SidePanelContent__As<object>
                       (__this_00,Method_Nekki_SF2_GUI_Shop_SidePanelContent_As<InfoPanelContent>__)
    ;
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2,auVar4._8_8_);
}


// ===== public DBNKANLBEFF get_Mode()  [RVA 0x34376FC]
// Nekki.SF2.GUI.Shop.ShopScene$$get_Mode @ RVA 0x34376FC

int32_t Nekki_SF2_GUI_Shop_ShopScene__get_Mode
                  (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  return (__this->fields).HLKBICFHFJM;
}


// ===== private IEnumerator KMEOPJBEJAA()  [RVA 0x34340F8]
// Nekki.SF2.GUI.Shop.ShopScene$$KMEOPJBEJAA @ RVA 0x34340F8

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Shop_ShopScene__KMEOPJBEJAA(Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045681a1 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ShopScene_FJEEGDDJFKE_TypeInfo);
    DAT_045681a1 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_ShopScene_FJEEGDDJFKE_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public void OnForgeOpenButtonClick()  [RVA 0x343772C]
// Nekki.SF2.GUI.Shop.ShopScene$$OnForgeOpenButtonClick @ RVA 0x343772C

void Nekki_SF2_GUI_Shop_ShopScene__OnForgeOpenButtonClick
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *pNVar1;
  
  pNVar1 = (__this->fields)._ForgePanel;
  if (pNVar1 == (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pNVar1->fields).NBAADNACNDJ == 2) {
    Nekki_SF2_GUI_Shop_ShopScene__set_Mode(__this,1,in_x2);
    return;
  }
  return;
}


// ===== private void BCDNLJLKOCC(HOOAAGABMBL CNDPGGAFHEA)  [RVA 0x3436F18]
// Nekki.SF2.GUI.Shop.ShopScene$$BCDNLJLKOCC @ RVA 0x3436F18

void Nekki_SF2_GUI_Shop_ShopScene__BCDNLJLKOCC
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,HOOAAGABMBL_o *CNDPGGAFHEA,MethodInfo *method
               )

{
  Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this_00;
  
  if (CNDPGGAFHEA == (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 03536f3c to 03636f43 has its CatchHandler @ 03537148 */
    return;
  }
  __this_00 = Nekki_SF2_GUI_Shop_ShopScene__get_ParametersPanelContent
                        (__this,(MethodInfo *)CNDPGGAFHEA);
  if (__this_00 != (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *)0x0) {
                    /* try { // try from 03536f2c to 03636f33 has its CatchHandler @ 0353716c */
    Nekki_SF2_GUI_Shop_ParametersPanelContent__NeedToUpdateParameters
              (__this_00,CNDPGGAFHEA,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x343775C]
// Nekki.SF2.GUI.Shop.ShopScene$$.cctor @ RVA 0x343775C

void Nekki_SF2_GUI_Shop_ShopScene___cctor(MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ShopScene_StaticFields *pNVar1;
  
  if ((DAT_045681a2 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ShopScene_TypeInfo);
    DAT_045681a2 = 1;
  }
  pNVar1 = Nekki_SF2_GUI_Shop_ShopScene_TypeInfo->static_fields;
  pNVar1->ForceSlowRenderFramesLong = 4;
  pNVar1->ForceSlowRenderFramesShort = 2;
  return;
}


// ===== public override DBMPKPJGIPI get_SceneId()  [RVA 0x34377AC]
// Nekki.SF2.GUI.Shop.ShopScene$$get_SceneId @ RVA 0x34377AC

int32_t Nekki_SF2_GUI_Shop_ShopScene__get_SceneId
                  (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  return 4;
}


// ===== private void GNOBOBBEEAH()  [RVA 0x3432CD0]
// Nekki.SF2.GUI.Shop.ShopScene$$GNOBOBBEEAH @ RVA 0x3432CD0

void Nekki_SF2_GUI_Shop_ShopScene__GNOBOBBEEAH
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_Fights_ModelContainer_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045681a3 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045681a3 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  MGNPHCAAEIO__EBMJDCJOLDM(1,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._ModelContainer;
  if (__this_00 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
    Nekki_SF2_Core_Fights_ModelContainer__ResetSlowFramesAcquire(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OMOHFLMFCOG(object IMMNELPBGIF)  [RVA 0x34377B4]
// Nekki.SF2.GUI.Shop.ShopScene$$OMOHFLMFCOG @ RVA 0x34377B4

void Nekki_SF2_GUI_Shop_ShopScene__OMOHFLMFCOG
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  int *piVar2;
  GGLKHCAIGDI_o *pGVar3;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *NKCMBEFHFII;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this_01;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_02;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar4;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *pNVar5;
  
  if ((DAT_045681a4 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045681a4 = 1;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
LAB_03537980:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((IMMNELPBGIF->klass->_1).element_class !=
      (Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
  piVar2 = (int *)thunk_FUN_01bda96c();
  if (*piVar2 == 1) {
    pNVar5 = (__this->fields)._ForgePanel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      pNVar5 = (__this->fields)._ForgePanel;
      if (pNVar5 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) {
                    /* try { // try from 03537870 to 0363795f has its CatchHandler @ 03537870
                       catch() { ... } // from try @ 03537870 with catch @ 03537870
                       catch() { ... } // from try @ 03537a44 with catch @ 03537870
                       catch() { ... } // from try @ 03537a64 with catch @ 03537870
                       catch() { ... } // from try @ 03537ae8 with catch @ 03537870
                       catch() { ... } // from try @ 03537b38 with catch @ 03537870
                       catch() { ... } // from try @ 03537b70 with catch @ 03537870 */
        if ((pNVar5->fields).PCBECBEFJOI == (HOOAAGABMBL_o *)0x0) {
          return;
        }
        pGVar3 = Nekki_SF2_GUI_Shop_Forge_ForgePanel__get_CurrentRecipe(pNVar5,(MethodInfo *)0x0);
        if (pGVar3 == (GGLKHCAIGDI_o *)0x0) {
          return;
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
        if (((pAVar4 != (ACHLOMELAJE_o *)0x0) &&
            (pNVar5 = (__this->fields)._ForgePanel,
            pNVar5 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0)) &&
           (__this_00 = (pAVar4->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) {
          NKCMBEFHFII = GGHCLMEFIGO__JNFIBDBHNOA
                                  (__this_00,(pNVar5->fields).PCBECBEFJOI,(MethodInfo *)0x0);
          if (NKCMBEFHFII == (IGFGDDANEPE_o *)0x0) {
            return;
          }
          pNVar5 = (__this->fields)._ForgePanel;
          if (pNVar5 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) {
            pGVar3 = Nekki_SF2_GUI_Shop_Forge_ForgePanel__get_CurrentRecipe
                               (pNVar5,(MethodInfo *)0x0);
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
            }
            NLPJLHOEAOE__KNHMJABJGIP(NKCMBEFHFII,pGVar3,(MethodInfo *)0x0);
            __this_01 = Nekki_SF2_GUI_Shop_ShopScene__get_PropertiesPanelContent(__this,method_00);
            if (__this_01 != (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *)0x0) {
              Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshButtons
                        (__this_01,(MethodInfo *)0x0);
              pNVar5 = (__this->fields)._ForgePanel;
              if (pNVar5 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) {
                Nekki_SF2_GUI_Shop_Forge_ForgePanel__set_ItemInfo
                          (pNVar5,(NKCMBEFHFII->fields).PCBECBEFJOI,(MethodInfo *)0x0);
                __this_02 = (__this->fields).CCKIFMALFBA;
                    /* try { // try from 03537960 to 03637967 has its CatchHandler @ 03537b1c */
                if (__this_02 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
                  Nekki_SF2_GUI_Menu_MainMenu__UpdateMaterials(__this_02,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
      goto LAB_03537980;
    }
  }
                    /* try { // try from 03537978 to 03637983 has its CatchHandler @ 03537b14 */
  return;
}


// ===== public void SetOpacity(float BCEJOJECHDA)  [RVA 0x3433C28]
// Nekki.SF2.GUI.Shop.ShopScene$$SetOpacity @ RVA 0x3433C28

void Nekki_SF2_GUI_Shop_ShopScene__SetOpacity
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,float BCEJOJECHDA,MethodInfo *method)

{
  DG_Tweening_DOTweenModuleUI__DOFade
            ((__this->fields)._ShopUIGroup,BCEJOJECHDA,0.7,(MethodInfo *)0x0);
  return;
}


// ===== private void OEDCGMAAPLN(HOOAAGABMBL CNDPGGAFHEA)  [RVA 0x3436F48]
// Nekki.SF2.GUI.Shop.ShopScene$$OEDCGMAAPLN @ RVA 0x3436F48

void Nekki_SF2_GUI_Shop_ShopScene__OEDCGMAAPLN
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,HOOAAGABMBL_o *CNDPGGAFHEA,MethodInfo *method
               )

{
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this_00;
  
  if (CNDPGGAFHEA == (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 03536f64 to 03636f6b has its CatchHandler @ 03537140 */
    return;
  }
  __this_00 = (__this->fields)._ForgePanel;
                    /* try { // try from 03536f54 to 03636f5b has its CatchHandler @ 03537144 */
  if (__this_00 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) {
    Nekki_SF2_GUI_Shop_Forge_ForgePanel__set_ItemInfo(__this_00,CNDPGGAFHEA,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03536f6c to 03636f77 has its CatchHandler @ 0353713c */
  FUN_01bab8c8();
}


// ===== private bool AKNGLDCMBFG()  [RVA 0x3433C14]
// Nekki.SF2.GUI.Shop.ShopScene$$AKNGLDCMBFG @ RVA 0x3433C14

bool Nekki_SF2_GUI_Shop_ShopScene__AKNGLDCMBFG
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  return 1 < (__this->fields).AIAODGKGPEI - 1U;
}


// ===== protected override void Update()  [RVA 0x3437988]
// Nekki.SF2.GUI.Shop.ShopScene$$Update @ RVA 0x3437988

void Nekki_SF2_GUI_Shop_ShopScene__Update(Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *__this_00;
  HOOAAGABMBL_o *ANMFBABEMFD;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this_01;
  MethodInfo *method_00;
  
                    /* try { // try from 03537994 to 03637997 has its CatchHandler @ 03537af8 */
                    /* try { // try from 03537998 to 0363799f has its CatchHandler @ 03537b08 */
                    /* try { // try from 035379a4 to 036379af has its CatchHandler @ 03537b0c */
  if ((DAT_045681a5 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_Update__);
                    /* try { // try from 035379b8 to 036379c3 has its CatchHandler @ 03537b10 */
    DAT_045681a5 = 1;
  }
  Nekki_SF2_GUI_Scene<object>__Update
            ((Nekki_SF2_GUI_Scene_T__o *)__this,Method_Nekki_SF2_GUI_Scene<ShopScene>_Update__);
  __this_00 = (__this->fields)._ItemsPanel;
  if (__this_00 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
    ANMFBABEMFD = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 035379dc to 036379e3 has its CatchHandler @ 03537a50 */
    if ((ANMFBABEMFD == (HOOAAGABMBL_o *)0x0) ||
       (bVar1 = HCAICJLDDJO__MINAKLNNDBL(ANMFBABEMFD,false,(MethodInfo *)0x0), !bVar1)) {
      return;
    }
    __this_01 = Nekki_SF2_GUI_Shop_ShopScene__get_PropertiesPanelContent(__this,method_00);
                    /* try { // try from 035379f4 to 036379ff has its CatchHandler @ 03537a4c */
    if (__this_01 != (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *)0x0) {
      Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshTimers(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GoToSlider(HPPDIEDAKEC JOIKOKOCFGP, bool MGFBPKIBNJI = False)  [RVA 0x3432304]
// Nekki.SF2.GUI.Shop.ShopScene$$GoToSlider @ RVA 0x3432304

void Nekki_SF2_GUI_Shop_ShopScene__GoToSlider
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,int32_t JOIKOKOCFGP,bool MGFBPKIBNJI,
               MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  Nekki_SF2_GUI_Shop_ShopBottomPanel_o *__this_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)MGFBPKIBNJI;
  if ((DAT_045681a6 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_ScrollToItem__);
    DAT_045681a6 = 1;
  }
  CJNHFNHJHPE = BKBFFEJEBAI__PPGMDDODKFG(JOIKOKOCFGP,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Shop_ShopScene__set_CurrentSection(__this,CJNHFNHJHPE,method_00);
  if (MGFBPKIBNJI) {
    __this_00 = (__this->fields).GJIPOBCNEPG;
    if (__this_00 != (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *)0x0) {
      Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__ScrollToItem
                ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this_00,(__this->fields).AIAODGKGPEI,
                 Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_ScrollToItem__);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void Refresh()  [RVA 0x3434D90]
// Nekki.SF2.GUI.Shop.ShopScene$$Refresh @ RVA 0x3434D90

void Nekki_SF2_GUI_Shop_ShopScene__Refresh
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this_00;
  Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this_01;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this_02;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this_03;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar2;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this_04;
  
  if ((DAT_045681a7 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045681a7 = 1;
    method = extraout_x1;
  }
  __this_00 = Nekki_SF2_GUI_Shop_ShopScene__get_InfoPanelContent(__this,method);
  if (__this_00 != (Nekki_SF2_GUI_Shop_InfoPanelContent_o *)0x0) {
    Nekki_SF2_GUI_Shop_InfoPanelContent__Refresh(__this_00,(MethodInfo *)0x0);
    __this_01 = Nekki_SF2_GUI_Shop_ShopScene__get_ParametersPanelContent(__this,method_00);
    if (__this_01 != (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *)0x0) {
      Nekki_SF2_GUI_Shop_ParametersPanelContent__NeedToRefresh(__this_01,0.0,(MethodInfo *)0x0);
      __this_02 = Nekki_SF2_GUI_Shop_ShopScene__get_PropertiesPanelContent(__this,method_01);
      if (__this_02 != (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *)0x0) {
        Nekki_SF2_GUI_Shop_PropertiesPanelContent__NeedToRefreshAll(__this_02,(MethodInfo *)0x0);
        __this_03 = (__this->fields)._ForgePanel;
        if (__this_03 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) {
          Nekki_SF2_GUI_Shop_Forge_ForgePanel__NeedToRefresh(__this_03,(MethodInfo *)0x0);
          pNVar2 = (__this->fields)._ItemsPanel;
          if (pNVar2 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
            __this_04 = (pNVar2->fields).HCMDPJADLOL;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            method_02 = (MethodInfo *)0x0;
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (!bVar1) {
              return;
            }
            if (__this_04 != (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0) {
              Nekki_SF2_GUI_Shop_ShopScene__PBDGFBENHDK
                        (__this,(__this_04->fields).IHKJJFAEEHM,method_02);
              Nekki_SF2_GUI_Shop_ShopTableViewCell__UpdateItem(__this_04,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_CurrentSection(POIJDKLHHKO CJNHFNHJHPE)  [RVA 0x3436150]
// Nekki.SF2.GUI.Shop.ShopScene$$set_CurrentSection @ RVA 0x3436150

void Nekki_SF2_GUI_Shop_ShopScene__set_CurrentSection
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar3;
  Nekki_SF2_GUI_Shop_ShopBottomPanel_o *pNVar4;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  UnityEngine_GameObject_o *pUVar6;
  LabelButton_o *pLVar7;
  Nekki_SF2_GUI_Shop_ShopScene_o *extraout_x0;
  Nekki_SF2_GUI_Shop_ShopScene_o *extraout_x0_00;
  Nekki_SF2_GUI_Shop_ShopScene_o *__this_00;
  Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *pNVar8;
  bool bVar9;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  System_Collections_Generic_List_HOOAAGABMBL__o *CJNHFNHJHPE_00;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_x1_05;
  MethodInfo *extraout_x1_06;
  MethodInfo *extraout_x1_07;
  MethodInfo *extraout_x1_08;
  MethodInfo *pMVar10;
  MethodInfo *pMVar11;
  undefined8 *puVar12;
  ACHLOMELAJE_o *pAVar13;
  LPAPAMPGDFN_o *pLVar14;
  Nekki_SF2_Core_Fights_ModelContainer_o *pNVar15;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar16;
  Nekki_SF2_GUI_Shop_CheatsPanel_o *pNVar17;
  
  pMVar11 = (MethodInfo *)(ulong)(uint)CJNHFNHJHPE;
  if ((DAT_045681a8 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_DisableButton__);
                    /* try { // try from 03536184 to 03636263 has its CatchHandler @ 03536184
                       catch() { ... } // from try @ 03536184 with catch @ 03536184
                       catch() { ... } // from try @ 035362c4 with catch @ 03536184
                       catch() { ... } // from try @ 035362f8 with catch @ 03536184
                       catch() { ... } // from try @ 0353632c with catch @ 03536184
                       catch() { ... } // from try @ 0353635c with catch @ 03536184 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_EnableAllButtons__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_20993/*"shopMagicLocked"*/);
    FUN_01bab630(&StringLiteral_20996/*"shopRaidsLocked"*/);
    FUN_01bab630(&StringLiteral_20997/*"shopRangedLocked"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045681a8 = 1;
    pMVar11 = extraout_x1;
  }
  if (CJNHFNHJHPE == 8) {
    return;
  }
  if ((__this->fields).AIAODGKGPEI == CJNHFNHJHPE) {
    return;
  }
  Nekki_SF2_GUI_Shop_ShopScene__GNOBOBBEEAH(__this,pMVar11);
  pNVar3 = (__this->fields)._ItemsPanel;
  if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
  pMVar11 = (MethodInfo *)0x0;
  (pNVar3->fields).DisableSorting = false;
  Nekki_SF2_GUI_Shop_ItemsPanel__RememberSelection(pNVar3,(HOOAAGABMBL_o *)0x0,(MethodInfo *)0x0);
  (__this->fields).AIAODGKGPEI = CJNHFNHJHPE;
  Nekki_SF2_GUI_Shop_ShopScene__ShowSidePanels(__this,true,pMVar11);
  Nekki_SF2_GUI_Shop_ShopScene__UpdateNewItemsCounters(__this,method_00);
  pNVar4 = (__this->fields).GJIPOBCNEPG;
  if (pNVar4 == (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *)0x0) goto LAB_035367c8;
  Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__EnableAllButtons
            ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)pNVar4,
             Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_EnableAllButtons__);
  pNVar4 = (__this->fields).GJIPOBCNEPG;
  if (pNVar4 == (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *)0x0) goto LAB_035367c8;
  Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__DisableButton
            ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)pNVar4,CJNHFNHJHPE,
             Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_DisableButton__);
  pNVar5 = (__this->fields)._NoItemsMessage;
  if (pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_035367c8;
                    /* try { // try from 03536264 to 0363626b has its CatchHandler @ 0353630c */
  Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar5,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  pNVar5 = (__this->fields)._NoItemsMessage;
  if (pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_035367c8;
                    /* try { // try from 03536280 to 03636287 has its CatchHandler @ 03536308 */
                    /* try { // try from 0353628c to 0363628f has its CatchHandler @ 03536304 */
  (*(pNVar5->klass->vtable)._75_set_text.methodPtr)
            (pNVar5,StringLiteral_1/*""*/,(pNVar5->klass->vtable)._75_set_text.method);
  pNVar17 = (__this->fields).OJKJMHEEAGN;
                    /* try { // try from 035362a4 to 036362c3 has its CatchHandler @ 03536310 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar11 = extraout_x1_00;
  if (bVar2) {
    pNVar17 = (__this->fields).OJKJMHEEAGN;
                    /* try { // try from 035362c4 to 036362ef has its CatchHandler @ 03536184 */
    if (pNVar17 == (Nekki_SF2_GUI_Shop_CheatsPanel_o *)0x0) goto LAB_035367c8;
    Nekki_SF2_GUI_Shop_CheatsPanel__HideCheats(pNVar17,(MethodInfo *)0x0);
    pMVar11 = extraout_x1_01;
  }
                    /* try { // try from 035362f0 to 036362f3 has its CatchHandler @ 03536300 */
  switch(CJNHFNHJHPE) {
  case 0:
                    /* try { // try from 035362f4 to 036362f7 has its CatchHandler @ 035362fc */
    pNVar3 = (__this->fields)._ItemsPanel;
                    /* try { // try from 035362f8 to 03636327 has its CatchHandler @ 03536184 */
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035362f4 with catch @ 035362fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035362f0 with catch @ 03536300
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353628c with catch @ 03536304
                        */
    Nekki_SF2_GUI_Shop_ItemsPanel__set_Spacing(pNVar3,0.0,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03536280 with catch @ 03536308
                        */
    pNVar3 = (__this->fields)._ItemsPanel;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03536264 with catch @ 0353630c
                        */
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035362a4 with catch @ 03536310
                        */
    (pNVar3->fields).LKOBHGOBICA = 480.0;
    (pNVar3->fields).HGCMLPDPFIK.fields = (__this->fields)._WeaponImageSize.fields;
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
                    /* try { // try from 03536328 to 0363632b has its CatchHandler @ 0353634c */
                    /* try { // try from 0353632c to 03636353 has its CatchHandler @ 03536184 */
    (pNVar3->fields).PMDCABLGDGF = true;
    CJNHFNHJHPE_00 = (__this->fields).CAFKGACOEBL;
    break;
  case 1:
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
                    /* catch() { ... } // from try @ 03536328 with catch @ 0353634c */
    Nekki_SF2_GUI_Shop_ItemsPanel__set_Spacing(pNVar3,110.0,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._ItemsPanel;
                    /* try { // try from 03536354 to 0363635b has its CatchHandler @ 03536370 */
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
                    /* try { // try from 0353635c to 03636367 has its CatchHandler @ 03536184 */
    (pNVar3->fields).LKOBHGOBICA = 840.0;
    (pNVar3->fields).HGCMLPDPFIK.fields = (__this->fields)._ArmorImageSize.fields;
                    /* try { // try from 03536368 to 0363636f has its CatchHandler @ 03536370 */
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03536354 with catch @ 03536370
                       catch(type#2 @ 00000000) { ... } // from try @ 03536368 with catch @ 03536370
                        */
    (pNVar3->fields).PMDCABLGDGF = true;
    CJNHFNHJHPE_00 = (__this->fields).HDHLOAOBOIA;
    break;
  case 2:
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    Nekki_SF2_GUI_Shop_ItemsPanel__set_Spacing(pNVar3,110.0,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    (pNVar3->fields).LKOBHGOBICA = 840.0;
    (pNVar3->fields).HGCMLPDPFIK.fields = (__this->fields)._HelmetImageSize.fields;
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    (pNVar3->fields).PMDCABLGDGF = true;
    CJNHFNHJHPE_00 = (__this->fields).CDGAHKJEMHM;
    break;
  case 3:
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    Nekki_SF2_GUI_Shop_ItemsPanel__set_Spacing(pNVar3,0.0,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    (pNVar3->fields).LKOBHGOBICA = 480.0;
    (pNVar3->fields).HGCMLPDPFIK.fields = (__this->fields)._RangedImageSize.fields;
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    Nekki_SF2_GUI_Shop_ItemsPanel__set_CurrentItems
              (pNVar3,(__this->fields).CBGOPJALHHB,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    (pNVar3->fields).PMDCABLGDGF = true;
    pNVar5 = (__this->fields)._NoItemsMessage;
    if (pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_035367c8;
    puVar12 = &StringLiteral_20997/*"shopRangedLocked"*/;
    goto LAB_03536534;
  case 4:
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    Nekki_SF2_GUI_Shop_ItemsPanel__set_Spacing(pNVar3,120.0,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    (pNVar3->fields).LKOBHGOBICA = 810.0;
    (pNVar3->fields).HGCMLPDPFIK.fields = (__this->fields)._MagicImageSize.fields;
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    Nekki_SF2_GUI_Shop_ItemsPanel__set_CurrentItems
              (pNVar3,(__this->fields).LAPBNMPGIEH,(MethodInfo *)0x0);
    pNVar5 = (__this->fields)._NoItemsMessage;
    if (pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_035367c8;
    puVar12 = &StringLiteral_20993/*"shopMagicLocked"*/;
    goto LAB_03536534;
  case 5:
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    Nekki_SF2_GUI_Shop_ItemsPanel__set_Spacing(pNVar3,20.0,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    (pNVar3->fields).LKOBHGOBICA = 520.0;
    (pNVar3->fields).HGCMLPDPFIK.fields = (__this->fields)._PaymentImageSize.fields;
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    (pNVar3->fields).PMDCABLGDGF = true;
    CJNHFNHJHPE_00 = (__this->fields).NHJBNMACENA;
    break;
  case 6:
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    (pNVar3->fields).DisableSorting = true;
    Nekki_SF2_GUI_Shop_ItemsPanel__set_Spacing(pNVar3,20.0,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    (pNVar3->fields).LKOBHGOBICA = 600.0;
    (pNVar3->fields).HGCMLPDPFIK.fields = (__this->fields)._RaidImageSize.fields;
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    (pNVar3->fields).PMDCABLGDGF = true;
    Nekki_SF2_GUI_Shop_ItemsPanel__set_CurrentItems
              (pNVar3,(__this->fields).FALDFPJGOMB,(MethodInfo *)0x0);
    pNVar5 = (__this->fields)._NoItemsMessage;
    if (pNVar5 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_035367c8;
    puVar12 = &StringLiteral_20996/*"shopRaidsLocked"*/;
LAB_03536534:
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar5,(System_String_o *)*puVar12,(MethodInfo *)0x0);
    pMVar11 = extraout_x1_03;
    goto switchD_035362f0_default;
  case 7:
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    Nekki_SF2_GUI_Shop_ItemsPanel__set_Spacing(pNVar3,20.0,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    (pNVar3->fields).LKOBHGOBICA = 520.0;
    (pNVar3->fields).HGCMLPDPFIK.fields = (__this->fields)._FreeImageSize.fields;
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    Nekki_SF2_GUI_Shop_ItemsPanel__set_CurrentItems
              (pNVar3,(__this->fields).EPKOHJKLMIJ,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._ItemsPanel;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) goto LAB_035367c8;
    (pNVar3->fields).PMDCABLGDGF = false;
    pMVar11 = extraout_x1_04;
  default:
    goto switchD_035362f0_default;
  }
  Nekki_SF2_GUI_Shop_ItemsPanel__set_CurrentItems(pNVar3,CJNHFNHJHPE_00,(MethodInfo *)0x0);
  pMVar11 = extraout_x1_02;
switchD_035362f0_default:
  Nekki_SF2_GUI_Shop_ShopScene__HPJLOJELBCI(__this,pMVar11);
  bVar2 = Nekki_SF2_GUI_Shop_ShopScene__FJFHCNJBHEP(__this,method_01);
  pNVar5 = (__this->fields)._NoItemsMessage;
  if ((pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar6 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
     pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
    pMVar11 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(pUVar6,(bool)(~bVar2 & 1),(MethodInfo *)0x0);
    Nekki_SF2_GUI_Shop_ShopScene__ShowSidePanels(__this,bVar2,pMVar11);
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
    pAVar13 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar13 != (ACHLOMELAJE_o *)0x0) &&
       (pLVar14 = (pAVar13->fields).LMCDOMHENMC, pLVar14 != (LPAPAMPGDFN_o *)0x0)) {
      iVar1 = (pLVar14->fields).AMIMEMOELHE;
      if (bVar2) {
        bVar9 = false;
      }
      else {
        bVar9 = (__this->fields).AIAODGKGPEI == 6;
      }
      pLVar7 = (__this->fields)._BtnLoadRaid;
      if ((pLVar7 != (LabelButton_o *)0x0) &&
         (pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar7,(MethodInfo *)0x0),
         pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
        bVar9 = (bool)(bVar9 & iVar1 == 0x32);
        UnityEngine_GameObject__SetActive(pUVar6,bVar9,(MethodInfo *)0x0);
        pLVar7 = (__this->fields)._BtnLoadRaid;
        if (pLVar7 != (LabelButton_o *)0x0) {
          pMVar11 = (MethodInfo *)0x0;
          UnityEngine_UI_Selectable__set_interactable
                    ((UnityEngine_UI_Selectable_o *)pLVar7,bVar9,(MethodInfo *)0x0);
          bVar9 = Nekki_SF2_GUI_Shop_ShopScene__FJLNKLMBKDN(__this,method_02);
          if (bVar9) {
            pMVar10 = method_03;
            if ((__this->fields).HLKBICFHFJM == 1) {
              Nekki_SF2_GUI_Shop_ShopScene__FMBFAPGPDPF(__this,method_03);
              pMVar10 = extraout_x1_05;
            }
          }
          else {
            Nekki_SF2_GUI_Shop_ShopScene__set_Mode(__this,0,pMVar11);
            pMVar10 = extraout_x1_06;
          }
          pNVar15 = (__this->fields)._ModelContainer;
          if (pNVar15 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
            if ((pNVar15->fields).GJPPMNKLLGD == 7) {
              Nekki_SF2_GUI_Shop_ShopScene__LJEJIDPLJAA(__this,pMVar10);
            }
            pNVar3 = (__this->fields)._ItemsPanel;
            if (pNVar3 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
              Nekki_SF2_GUI_Shop_ItemsPanel__SetSelection(pNVar3,(MethodInfo *)0x0);
              pNVar3 = (__this->fields)._ItemsPanel;
              if (pNVar3 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
                Nekki_SF2_GUI_Shop_ItemsPanel__ReloadSelectedItem(pNVar3,(MethodInfo *)0x0);
                __this_00 = extraout_x0;
                pMVar10 = extraout_x1_07;
                if (!bVar2) {
                  Nekki_SF2_GUI_Shop_ShopScene__EICMBDFALCN(__this,(HOOAAGABMBL_o *)0x0,pMVar11);
                  __this_00 = extraout_x0_00;
                  pMVar10 = extraout_x1_08;
                }
                Nekki_SF2_GUI_Shop_ShopScene__TryClearAtlasCacheItemImages(__this_00,pMVar10);
                if ((CJNHFNHJHPE == 6) && ((__this->fields).AIAODGKGPEI != 6)) {
                  return;
                }
                if (DAT_04565b84 == '\0') {
                  FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
                  DAT_04565b84 = '\x01';
                }
                pNVar16 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                          _JPDNDPEAJAL_k__BackingField;
                if ((pNVar16 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) &&
                   (pNVar8 = (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)(pNVar16->fields)._energy,
                   pNVar8 != (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)0x0)) {
                  Nekki_SF2_GUI_Menu_MenuMoneyPanel__UpdateCoinsIcon(pNVar8,(MethodInfo *)0x0);
                  if (DAT_04565b84 == '\0') {
                    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
                    DAT_04565b84 = '\x01';
                  }
                  pNVar16 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                            _JPDNDPEAJAL_k__BackingField;
                    /* try { // try from 035367a8 to 03636d53 has its CatchHandler @ 035367a8
                       catch() { ... } // from try @ 035367a8 with catch @ 035367a8
                       catch() { ... } // from try @ 03536ff8 with catch @ 035367a8
                       catch() { ... } // from try @ 03537118 with catch @ 035367a8
                       catch() { ... } // from try @ 03537124 with catch @ 035367a8
                       catch() { ... } // from try @ 03537264 with catch @ 035367a8 */
                  if ((pNVar16 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) &&
                     (pNVar8 = (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)(pNVar16->fields)._energy,
                     pNVar8 != (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)0x0)) {
                    Nekki_SF2_GUI_Menu_MenuMoneyPanel__ForceUpdateCoins(pNVar8,(MethodInfo *)0x0);
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
LAB_035367c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private List<HOOAAGABMBL> KOPEODKDDDF()  [RVA 0x3436B64]
// Nekki.SF2.GUI.Shop.ShopScene$$KOPEODKDDDF @ RVA 0x3436B64

System_Collections_Generic_List_HOOAAGABMBL__o *
Nekki_SF2_GUI_Shop_ShopScene__KOPEODKDDDF(Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  ulong uVar4;
  MethodInfo *extraout_x1;
  DOPEEDABNEK_o *pDVar5;
  HOOAAGABMBL_array *pHVar6;
  ACHLOMELAJE_o *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_045681a9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045681a9 = 1;
    method = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  MGNPHCAAEIO_TypeInfo->static_fields->BIJJALJHKCD = true;
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
  __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if ((pDVar5 == (DOPEEDABNEK_o *)0x0) ||
     (__this_01 = (pDVar5->fields)._BDIDINACBBH_k__BackingField,
     __this_01 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
  local_60.fields._index = local_78.fields._index;
  local_60.fields._version = local_78.fields._version;
  local_60.fields._list = local_78.fields._list;
  local_60.fields._current = local_78.fields._current;
LAB_03536d20:
  do {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    item = local_60.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__)
      ;
      return __this_00;
    }
    if ((HOOAAGABMBL_o *)local_60.fields._current == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar4 = (*(((HOOAAGABMBL_c *)(local_60.fields._current)->klass)->vtable)._5_EFLKILFFJKH.
              methodPtr)(local_60.fields._current,
                         (((HOOAAGABMBL_c *)(local_60.fields._current)->klass)->vtable).
                         _5_EFLKILFFJKH.method);
  } while ((uVar4 & 1) != 0);
                    /* try { // try from 03536d54 to 03636d7b has its CatchHandler @ 035371a4 */
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD
                    (((HOOAAGABMBL_Fields *)((long)item + 0x10))->_ILMMODKJGFK_k__BackingField,
                     (MethodInfo *)0x0);
  if (!bVar3) goto code_r0x03536d5c;
  goto LAB_03536d74;
code_r0x03536d5c:
  if (__this_02 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar3 = ACHLOMELAJE__MHLDNEBLNJG
                    (__this_02,
                     ((HOOAAGABMBL_Fields *)((long)item + 0x10))->_ILMMODKJGFK_k__BackingField,
                     (MethodInfo *)0x0);
  if (bVar3) {
LAB_03536d74:
    lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
    if (__this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pHVar6 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pHVar6 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pHVar6->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pHVar6->m_Items[(int)uVar1] = (HOOAAGABMBL_o *)item;
                    /* try { // try from 03536db0 to 03636ddb has its CatchHandler @ 035371a0 */
      thunk_FUN_01c20e04(pHVar6->m_Items + (int)uVar1,item);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  goto LAB_03536d20;
}


// ===== protected override void GIENGNEGHPJ(object IMMNELPBGIF)  [RVA 0x3437B9C]
// Nekki.SF2.GUI.Shop.ShopScene$$GIENGNEGHPJ @ RVA 0x3437B9C

void Nekki_SF2_GUI_Shop_ShopScene__GIENGNEGHPJ
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  FFHKCJAOPLI_c *pFVar2;
  bool bVar3;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar4;
  Nekki_SF2_GUI_Shop_ShopBottomPanel_o *pNVar5;
  HJNDPNIMBBG_o *__this_00;
  UnityEngine_Object_o *exists;
  Nekki_SF2_GUI_SpriteRendererQuality_o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar6;
  KKLJIDJBFEI_o *__this_02;
  System_Action_o *pSVar7;
  MCEIBCKPIAD_o *pMVar8;
  System_Action_FAIJGJCCKJC__o *pSVar9;
  EEGDOGKBLNG_o *__this_03;
  System_Action_IList_PIADCKMDDAK___o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Common_PaymentUI_o *pNVar10;
  UnityEngine_Events_UnityAction_T0__o *pUVar11;
  UnityEngine_GameObject_o *pUVar12;
  UnityEngine_Transform_o *__this_04;
  Nekki_SF2_GUI_Shop_SidePanelContent_o *pNVar13;
  Nekki_SF2_GUI_Shop_SidePanel_o *pNVar14;
  Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this_05;
  UnityEngine_UI_Image_o *pUVar15;
  Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this_06;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *pNVar16;
  System_Action_IGFGDDANEPE__o *CJNHFNHJHPE_00;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar17;
  Nekki_SF2_Core_Fights_ModelContainer_o *__this_07;
  System_Action_BNKBGIIJNLF__o *CJNHFNHJHPE_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *pMVar18;
  LabelButton_o *pLVar19;
  ACHLOMELAJE_o *pAVar20;
  GGHCLMEFIGO_o *pGVar21;
  PJKHAJKEHEL_o *pPVar22;
  FFHKCJAOPLI_o *pFVar23;
  UnityEngine_Events_UnityEvent_o *pUVar24;
  GGHCLMEFIGO_OENHIHPIEPH_o *__this_08;
  UnityEngine_UI_Image_o **ppUVar25;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_HFEIKHEIFDE_o *__this_09;
  Nekki_SF2_GUI_Shop_ItemsPanel_NCKBCCJJHGI_o *__this_10;
  Nekki_SF2_GUI_Shop_ItemsPanel_BINPIFNIONG_o *__this_11;
  Nekki_SF2_GUI_Shop_SidePanelContent_c *__this_12;
  UnityEngine_Vector3_o UVar26;
  
  pMVar18 = (MethodInfo *)IMMNELPBGIF;
  if ((DAT_045681aa & 1) == 0) {
    FUN_01bab630(&System_Action<IGFGDDANEPE>_TypeInfo);
    FUN_01bab630(&System_Action<BNKBGIIJNLF>_TypeInfo);
    FUN_01bab630(&System_Action<IList<PIADCKMDDAK>>_TypeInfo);
    FUN_01bab630(&System_Action<FAIJGJCCKJC>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_FinalCheckScrollCapacity__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<Image>__);
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&FFHKCJAOPLI_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<InfoPanelContent>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ParametersPanelContent>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<PropertiesPanelContent>__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<MainMenu>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<PaymentUI>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<ShopBottomPanel>__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_GIENGNEGHPJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_AFIDMLMGCMG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_AFLOKAHKLFA__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_ALOBOKCKGLP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_BNIAIFODLJK__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_BNKPDJFNJKP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_DAGJHIAIOML__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_EGMHFFODCKH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_EICMBDFALCN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_EOIIDEJIBNC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_FBHPEDGIJFA__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_GFFNHPFGAFJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_GLCEGKANFNO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_IKIELNIGEBB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_IMJPAHJCLHK__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_LCCGFCCNEGC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_LFHIAJBBKGC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_OMAPCIJEBOP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_OnForgeOpenButtonClick__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_RefreshItems__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<TableViewCell>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<GGLKHCAIGDI>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<List<IGFGDDANEPE>>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<TableViewCell>_AddListener__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<HOOAAGABMBL>_AddListener__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<GGLKHCAIGDI>_AddListener__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<List<IGFGDDANEPE>>_AddListener__);
    DAT_045681aa = 1;
    pMVar18 = extraout_x1;
  }
  Nekki_SF2_GUI_Shop_ShopScene__GNOBOBBEEAH(__this,pMVar18);
  Nekki_SF2_GUI_Scene<object>__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Scene_T__o *)__this,IMMNELPBGIF,
             Method_Nekki_SF2_GUI_Scene<ShopScene>_GIENGNEGHPJ__);
  pFVar2 = FFHKCJAOPLI_TypeInfo;
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
    IMMNELPBGIF = (Il2CppObject *)0x0;
    (__this->fields).GLGDPPHDDAJ = (FFHKCJAOPLI_o *)0x0;
  }
  else {
    bVar1 = (FFHKCJAOPLI_TypeInfo->_2).naturalAligment;
    if ((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) {
      pFVar23 = (FFHKCJAOPLI_o *)0x0;
    }
    else {
      pFVar23 = (FFHKCJAOPLI_o *)IMMNELPBGIF;
      if ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)FFHKCJAOPLI_TypeInfo) {
        pFVar23 = (FFHKCJAOPLI_o *)0x0;
      }
    }
    (__this->fields).GLGDPPHDDAJ = pFVar23;
    if ((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) {
      IMMNELPBGIF = (Il2CppObject *)0x0;
    }
    else if ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)pFVar2) {
      IMMNELPBGIF = (Il2CppObject *)0x0;
    }
  }
  thunk_FUN_01c20e04(&(__this->fields).GLGDPPHDDAJ,IMMNELPBGIF);
  pNVar4 = (Nekki_SF2_GUI_Menu_MainMenu_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<MainMenu>__);
  (__this->fields).CCKIFMALFBA = pNVar4;
  thunk_FUN_01c20e04(&(__this->fields).CCKIFMALFBA);
  pNVar5 = (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<ShopBottomPanel>__);
  (__this->fields).GJIPOBCNEPG = pNVar5;
  thunk_FUN_01c20e04(&(__this->fields).GJIPOBCNEPG);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7e == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7e = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_FGIDANNEKFM_k__BackingField;
  if (__this_00 != (HJNDPNIMBBG_o *)0x0) {
    exists = (UnityEngine_Object_o *)HJNDPNIMBBG__JDHIIDFJMBM(__this_00,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar3 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
    if (bVar3) {
      __this_01 = (__this->fields)._Background;
      if (__this_01 == (Nekki_SF2_GUI_SpriteRendererQuality_o *)0x0) goto LAB_0353892c;
      Nekki_SF2_GUI_SpriteRendererQuality__ChangeSprite
                (__this_01,(UnityEngine_Sprite_o *)exists,(MethodInfo *)0x0);
    }
    pLVar19 = (__this->fields)._BtnLoadRaid;
    if (pLVar19 != (LabelButton_o *)0x0) {
      pUVar24 = (UnityEngine_Events_UnityEvent_o *)(pLVar19->fields).super.super.super.m_OnClick;
      pUVar6 = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (pUVar24 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(pUVar24,pUVar6,(MethodInfo *)0x0);
        __this_02 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        pSVar7 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (__this_02 != (KKLJIDJBFEI_o *)0x0) {
          KKLJIDJBFEI__HKAALOKPBPG(__this_02,pSVar7,(MethodInfo *)0x0);
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pMVar8 = HJPEKDOPBHN__IOMECNCIENO((MethodInfo *)0x0);
          pSVar9 = (System_Action_FAIJGJCCKJC__o *)
                   thunk_FUN_01bda818(System_Action<FAIJGJCCKJC>_TypeInfo);
          System_Action<object>___ctor();
          if (pMVar8 != (MCEIBCKPIAD_o *)0x0) {
            MCEIBCKPIAD__ACHOOLNHMPK(pMVar8,pSVar9,(MethodInfo *)0x0);
            pMVar8 = HJPEKDOPBHN__IOMECNCIENO((MethodInfo *)0x0);
            pSVar9 = (System_Action_FAIJGJCCKJC__o *)
                     thunk_FUN_01bda818(System_Action<FAIJGJCCKJC>_TypeInfo);
            System_Action<object>___ctor();
            if (pMVar8 != (MCEIBCKPIAD_o *)0x0) {
              MCEIBCKPIAD__HMPDMOOMDAC(pMVar8,pSVar9,(MethodInfo *)0x0);
              __this_03 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
              CJNHFNHJHPE = (System_Action_IList_PIADCKMDDAK___o *)
                            thunk_FUN_01bda818(System_Action<IList<PIADCKMDDAK>>_TypeInfo);
              System_Action<object>___ctor();
              if (__this_03 != (EEGDOGKBLNG_o *)0x0) {
                EEGDOGKBLNG__KODPPOKHKML(__this_03,CJNHFNHJHPE,(MethodInfo *)0x0);
                pNVar10 = (Nekki_SF2_GUI_Common_PaymentUI_o *)
                          Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                                    ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                                     Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<PaymentUI>__);
                (__this->fields).AGKBOPBINNE = pNVar10;
                thunk_FUN_01c20e04(&(__this->fields).AGKBOPBINNE);
                pNVar10 = (__this->fields).AGKBOPBINNE;
                if (pNVar10 != (Nekki_SF2_GUI_Common_PaymentUI_o *)0x0) {
                  pUVar24 = (pNVar10->fields)._OnProductsUpdateEvent;
                  pUVar6 = (UnityEngine_Events_UnityAction_o *)
                           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                  UnityEngine_Events_UnityAction___ctor();
                  if (pUVar24 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    UnityEngine_Events_UnityEvent__AddListener(pUVar24,pUVar6,(MethodInfo *)0x0);
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
                    if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField !=
                        (ACHLOMELAJE_o *)0x0) {
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
                      pAVar20 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                      if (pAVar20 == (ACHLOMELAJE_o *)0x0) goto LAB_0353892c;
                      if ((pAVar20->fields).OIDPLCLELEN != (GGHCLMEFIGO_o *)0x0) {
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
                        pAVar20 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                        if ((pAVar20 == (ACHLOMELAJE_o *)0x0) ||
                           (pGVar21 = (pAVar20->fields).OIDPLCLELEN, pGVar21 == (GGHCLMEFIGO_o *)0x0
                           )) goto LAB_0353892c;
                        __this_08 = (pGVar21->fields).LNPBODFAFII;
                        pUVar11 = (UnityEngine_Events_UnityAction_T0__o *)
                                  thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction<List<IGFGDDANEPE>>_TypeInfo
                                                  );
                        UnityEngine_Events_UnityAction<object>___ctor();
                        if (__this_08 == (GGHCLMEFIGO_OENHIHPIEPH_o *)0x0) goto LAB_0353892c;
                        UnityEngine_Events_UnityEvent<object>__AddListener
                                  ((UnityEngine_Events_UnityEvent_T0__o *)__this_08,pUVar11,
                                   Method_UnityEngine_Events_UnityEvent<List<IGFGDDANEPE>>_AddListener__
                                  );
                      }
                    }
                    pUVar12 = (__this->fields)._PanelsContainer;
                    if ((pUVar12 != (UnityEngine_GameObject_o *)0x0) &&
                       (__this_04 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0)
                       , __this_04 != (UnityEngine_Transform_o *)0x0)) {
                      UVar26 = UnityEngine_Transform__get_localPosition(__this_04,(MethodInfo *)0x0)
                      ;
                      (__this->fields).FBBJFCLGAJE = UVar26.fields.x;
                      pUVar12 = (__this->fields)._InfoPanelContentPrefab;
                      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564(UVar26.fields.x,UVar26.fields.y,UVar26.fields.z);
                      }
                      pUVar12 = (UnityEngine_GameObject_o *)
                                UnityEngine_Object__Instantiate<object>
                                          ((Il2CppObject *)pUVar12,
                                           Method_UnityEngine_Object_Instantiate<GameObject>__);
                      if ((pUVar12 != (UnityEngine_GameObject_o *)0x0) &&
                         (pNVar13 = (Nekki_SF2_GUI_Shop_SidePanelContent_o *)
                                    UnityEngine_GameObject__GetComponent<object>
                                              (pUVar12,
                                               Method_UnityEngine_GameObject_GetComponent<InfoPanelContent>__
                                              ),
                         pNVar13 != (Nekki_SF2_GUI_Shop_SidePanelContent_o *)0x0)) {
                        (*(pNVar13->klass->vtable)._5_unknown.methodPtr)
                                  (pNVar13,(pNVar13->klass->vtable)._5_unknown.method);
                        __this_12 = pNVar13[1].klass;
                        pUVar6 = (UnityEngine_Events_UnityAction_o *)
                                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                        UnityEngine_Events_UnityAction___ctor();
                        if (__this_12 != (Nekki_SF2_GUI_Shop_SidePanelContent_c *)0x0) {
                          UnityEngine_Events_UnityEvent__AddListener
                                    ((UnityEngine_Events_UnityEvent_o *)__this_12,pUVar6,
                                     (MethodInfo *)0x0);
                          pNVar14 = (__this->fields)._ItemInfo;
                          if (pNVar14 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) {
                            Nekki_SF2_GUI_Shop_SidePanel__Init
                                      (pNVar14,pNVar13,true,(MethodInfo *)0x0);
                            pUVar12 = (UnityEngine_GameObject_o *)
                                      UnityEngine_Object__Instantiate<object>
                                                ((Il2CppObject *)
                                                 (__this->fields)._ParametersPanelContentPrefab,
                                                 Method_UnityEngine_Object_Instantiate<GameObject>__
                                                );
                            if ((pUVar12 != (UnityEngine_GameObject_o *)0x0) &&
                               (__this_05 = (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *)
                                            UnityEngine_GameObject__GetComponent<object>
                                                      (pUVar12,
                                                  Method_UnityEngine_GameObject_GetComponent<ParametersPanelContent>__
                                                  ),
                               __this_05 != (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *)0x0)) {
                              (*(__this_05->klass->vtable)._5_Init.methodPtr)
                                        (__this_05,(__this_05->klass->vtable)._5_Init.method);
                              pNVar14 = (__this->fields)._ItemParameters;
                              if (pNVar14 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) {
                                Nekki_SF2_GUI_Shop_SidePanel__Init
                                          (pNVar14,(Nekki_SF2_GUI_Shop_SidePanelContent_o *)
                                                   __this_05,false,(MethodInfo *)0x0);
                                Nekki_SF2_GUI_Shop_ParametersPanelContent__AdditionalRootGraphics
                                          (__this_05,false,
                                           (__this->fields)._ItemParameters_additionalRootGraphics,
                                           (MethodInfo *)0x0);
                                pNVar14 = (__this->fields)._ItemParameters;
                                if ((pNVar14 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) &&
                                   (pNVar13 = (pNVar14->fields).LJBNCINMIIP,
                                   pNVar13 != (Nekki_SF2_GUI_Shop_SidePanelContent_o *)0x0)) {
                                  pUVar15 = (UnityEngine_UI_Image_o *)
                                            UnityEngine_Component__GetComponent<object>
                                                      ((UnityEngine_Component_o *)pNVar13,
                                                                                                              
                                                  Method_UnityEngine_Component_GetComponent<Image>__
                                                  );
                                  ppUVar25 = &(__this_05->fields)._MBFMMJHFBBH_k__BackingField;
                                  *ppUVar25 = pUVar15;
                                  thunk_FUN_01c20e04(ppUVar25,pUVar15);
                                  pUVar12 = (UnityEngine_GameObject_o *)
                                            UnityEngine_Object__Instantiate<object>
                                                      ((Il2CppObject *)
                                                       (__this->fields).
                                                       _PropertiesPanelContentPrefab,
                                                                                                              
                                                  Method_UnityEngine_Object_Instantiate<GameObject>__
                                                  );
                                  if ((pUVar12 != (UnityEngine_GameObject_o *)0x0) &&
                                     (__this_06 = (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *)
                                                  UnityEngine_GameObject__GetComponent<object>
                                                            (pUVar12,
                                                  Method_UnityEngine_GameObject_GetComponent<PropertiesPanelContent>__
                                                  ),
                                     __this_06 != (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *)0x0
                                     )) {
                                    (*(__this_06->klass->vtable)._5_Init.methodPtr)
                                              (__this_06,(__this_06->klass->vtable)._5_Init.method);
                                    pUVar24 = (__this_06->fields)._OnForgeOpenButtonClicked;
                                    pUVar6 = (UnityEngine_Events_UnityAction_o *)
                                             thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction_TypeInfo);
                                    UnityEngine_Events_UnityAction___ctor();
                                    if (pUVar24 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                      UnityEngine_Events_UnityEvent__AddListener
                                                (pUVar24,pUVar6,(MethodInfo *)0x0);
                                      pUVar24 = (__this_06->fields)._OnForgeCloseButtonClicked;
                                      pUVar6 = (UnityEngine_Events_UnityAction_o *)
                                               thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction_TypeInfo);
                                      UnityEngine_Events_UnityAction___ctor();
                                      if (pUVar24 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                        UnityEngine_Events_UnityEvent__AddListener
                                                  (pUVar24,pUVar6,(MethodInfo *)0x0);
                                        pUVar24 = (__this_06->fields)._OnEnchantApplyButtonClicked;
                                        pUVar6 = (UnityEngine_Events_UnityAction_o *)
                                                 thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction_TypeInfo);
                                        UnityEngine_Events_UnityAction___ctor();
                                        if (pUVar24 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                          UnityEngine_Events_UnityEvent__AddListener
                                                    (pUVar24,pUVar6,(MethodInfo *)0x0);
                                          pUVar24 = (__this_06->fields)._OnSkipDeliveryButtonClicked
                                          ;
                                          pUVar6 = (UnityEngine_Events_UnityAction_o *)
                                                   thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction_TypeInfo);
                                          UnityEngine_Events_UnityAction___ctor();
                                          if (pUVar24 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                            UnityEngine_Events_UnityEvent__AddListener
                                                      (pUVar24,pUVar6,(MethodInfo *)0x0);
                                            pUVar24 = (__this_06->fields).
                                                      _OnSkipDeliveryForADButtonClicked;
                                            pUVar6 = (UnityEngine_Events_UnityAction_o *)
                                                     thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction_TypeInfo);
                                            UnityEngine_Events_UnityAction___ctor();
                                            if (pUVar24 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                              UnityEngine_Events_UnityEvent__AddListener
                                                        (pUVar24,pUVar6,(MethodInfo *)0x0);
                                              pNVar14 = (__this->fields)._ItemProperties;
                                              if (pNVar14 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0)
                                              {
                                                Nekki_SF2_GUI_Shop_SidePanel__Init
                                                          (pNVar14,(
                                                  Nekki_SF2_GUI_Shop_SidePanelContent_o *)__this_06,
                                                  false,(MethodInfo *)0x0);
                                                Nekki_SF2_GUI_Shop_PropertiesPanelContent__AdditionalRootGraphics
                                                          (__this_06,false,
                                                           (__this->fields).
                                                           _ItemProperties_additionalRootGraphics,
                                                           (MethodInfo *)0x0);
                                                pNVar14 = (__this->fields)._ItemProperties;
                                                if ((pNVar14 !=
                                                     (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0) &&
                                                   (pNVar13 = (pNVar14->fields).LJBNCINMIIP,
                                                   pNVar13 !=
                                                   (Nekki_SF2_GUI_Shop_SidePanelContent_o *)0x0)) {
                                                  pUVar15 = (UnityEngine_UI_Image_o *)
                                                                                                                        
                                                  UnityEngine_Component__GetComponent<object>
                                                            ((UnityEngine_Component_o *)pNVar13,
                                                                                                                          
                                                  Method_UnityEngine_Component_GetComponent<Image>__
                                                  );
                                                  ppUVar25 = &(__this_06->fields).
                                                              _MBFMMJHFBBH_k__BackingField;
                                                  *ppUVar25 = pUVar15;
                                                  thunk_FUN_01c20e04(ppUVar25,pUVar15);
                                                  pNVar16 = (__this->fields)._ForgePanel;
                                                  if (pNVar16 !=
                                                      (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0)
                                                  {
                                                    Nekki_SF2_GUI_Shop_Forge_ForgePanel__Init
                                                              (pNVar16,(MethodInfo *)0x0);
                                                    pNVar16 = (__this->fields)._ForgePanel;
                                                    if (pNVar16 !=
                                                        (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0
                                                       ) {
                                                      __this_09 = (pNVar16->fields).
                                                                  _OnRecipeSelected;
                                                      pUVar11 = (
                                                  UnityEngine_Events_UnityAction_T0__o *)
                                                  thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction<GGLKHCAIGDI>_TypeInfo
                                                  );
                                                  UnityEngine_Events_UnityAction<object>___ctor();
                                                  if (__this_09 !=
                                                      (
                                                  Nekki_SF2_GUI_Shop_Forge_ForgePanel_HFEIKHEIFDE_o
                                                  *)0x0) {
                                                                                                        
                                                  UnityEngine_Events_UnityEvent<object>__AddListener
                                                            ((UnityEngine_Events_UnityEvent_T0__o *)
                                                             __this_09,pUVar11,
                                                                                                                          
                                                  Method_UnityEngine_Events_UnityEvent<GGLKHCAIGDI>_AddListener__
                                                  );
                                                  CJNHFNHJHPE_00 =
                                                       (System_Action_IGFGDDANEPE__o *)
                                                       thunk_FUN_01bda818(
                                                  System_Action<IGFGDDANEPE>_TypeInfo);
                                                  System_Action<object>___ctor();
                                                  if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0
                                                     ) {
                                                    thunk_FUN_01ba7564();
                                                  }
                                                  DEKKGJNMFEB__DNIBODHMAJC
                                                            (CJNHFNHJHPE_00,(MethodInfo *)0x0);
                                                  Nekki_SF2_GUI_Shop_ShopScene__FHKMIFJBPEN
                                                            (__this,method_00);
                                                  Nekki_SF2_GUI_Shop_ShopScene__GNBIFHFHBEL
                                                            (__this,method_01);
                                                  pNVar5 = (__this->fields).GJIPOBCNEPG;
                                                  if (pNVar5 != (
                                                  Nekki_SF2_GUI_Shop_ShopBottomPanel_o *)0x0) {
                                                                                                        
                                                  Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__FinalCheckScrollCapacity
                                                            ((Nekki_SF2_GUI_Common_BottomPanel_T__o
                                                              *)pNVar5,
                                                                                                                          
                                                  Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_FinalCheckScrollCapacity__
                                                  );
                                                  pNVar17 = (__this->fields)._ItemsPanel;
                                                  if (pNVar17 !=
                                                      (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
                                                    Nekki_SF2_GUI_Shop_ItemsPanel__Init
                                                              (pNVar17,(MethodInfo *)0x0);
                                                    pNVar17 = (__this->fields)._ItemsPanel;
                                                    if (pNVar17 !=
                                                        (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
                                                      __this_10 = (pNVar17->fields)._OnItemSelected;
                                                      pUVar11 = (
                                                  UnityEngine_Events_UnityAction_T0__o *)
                                                  thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction<HOOAAGABMBL>_TypeInfo
                                                  );
                                                  UnityEngine_Events_UnityAction<object>___ctor();
                                                  if (__this_10 !=
                                                      (Nekki_SF2_GUI_Shop_ItemsPanel_NCKBCCJJHGI_o *
                                                      )0x0) {
                                                                                                        
                                                  UnityEngine_Events_UnityEvent<object>__AddListener
                                                            ((UnityEngine_Events_UnityEvent_T0__o *)
                                                             __this_10,pUVar11,
                                                                                                                          
                                                  Method_UnityEngine_Events_UnityEvent<HOOAAGABMBL>_AddListener__
                                                  );
                                                  pNVar17 = (__this->fields)._ItemsPanel;
                                                  if (pNVar17 !=
                                                      (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
                                                    __this_11 = (pNVar17->fields)._OnItemDoubleClick
                                                    ;
                                                    pUVar11 = (UnityEngine_Events_UnityAction_T0__o
                                                               *)thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction<TableViewCell>_TypeInfo
                                                  );
                                                  UnityEngine_Events_UnityAction<object>___ctor();
                                                  if (__this_11 !=
                                                      (Nekki_SF2_GUI_Shop_ItemsPanel_BINPIFNIONG_o *
                                                      )0x0) {
                                                                                                        
                                                  UnityEngine_Events_UnityEvent<object>__AddListener
                                                            ((UnityEngine_Events_UnityEvent_T0__o *)
                                                             __this_11,pUVar11,
                                                                                                                          
                                                  Method_UnityEngine_Events_UnityEvent<TableViewCell>_AddListener__
                                                  );
                                                  pNVar17 = (__this->fields)._ItemsPanel;
                                                  if (pNVar17 !=
                                                      (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
                                                    pUVar24 = (pNVar17->fields)._OnDragBegin;
                                                    pUVar6 = (UnityEngine_Events_UnityAction_o *)
                                                             thunk_FUN_01bda818(
                                                  UnityEngine_Events_UnityAction_TypeInfo);
                                                  pMVar18 = (MethodInfo *)0x0;
                                                  UnityEngine_Events_UnityAction___ctor();
                                                  if (pUVar24 !=
                                                      (UnityEngine_Events_UnityEvent_o *)0x0) {
                                                    UnityEngine_Events_UnityEvent__AddListener
                                                              (pUVar24,pUVar6,(MethodInfo *)0x0);
                                                    __this_07 = (__this->fields)._ModelContainer;
                                                    if (__this_07 !=
                                                        (Nekki_SF2_Core_Fights_ModelContainer_o *)
                                                        0x0) {
                                                      Nekki_SF2_Core_Fights_ModelContainer__Init
                                                                (__this_07,0.0,0.0,0.0,0.0,
                                                                 (MethodInfo *)0x0);
                                                      Nekki_SF2_GUI_Shop_ShopScene__JFCGHINAKCH
                                                                (__this,method_02);
                                                      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished
                                                          == 0) {
                                                        thunk_FUN_01ba7564();
                                                      }
                                                      if (DAT_04565b7d == '\0') {
                                                        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                                                        DAT_04565b7d = '\x01';
                                                      }
                                                      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished
                                                          == 0) {
                                                        thunk_FUN_01ba7564();
                                                      }
                                                      pAVar20 = NLPJLHOEAOE_TypeInfo->static_fields
                                                                ->_EDIEPEOIMDF_k__BackingField;
                                                      if ((pAVar20 != (ACHLOMELAJE_o *)0x0) &&
                                                         (pPVar22 = (pAVar20->fields).MFLNIMCFPDK,
                                                         pPVar22 != (PJKHAJKEHEL_o *)0x0)) {
                                                        Nekki_SF2_GUI_Shop_ShopScene__FJHEDBMBEFI
                                                                  (__this,(pPVar22->fields).
                                                                          PNAAPNFPCPI,4,pMVar18);
                                                        Nekki_SF2_GUI_Shop_ShopScene__ShowUI
                                                                  (__this,method_03);
                                                        if (DAT_04565b7d == '\0') {
                                                          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                                                          DAT_04565b7d = '\x01';
                                                        }
                                                        if ((NLPJLHOEAOE_TypeInfo->_2).
                                                            cctor_finished == 0) {
                                                          thunk_FUN_01ba7564();
                                                        }
                                                        (__this->fields).OKNKKHGBECG =
                                                             NLPJLHOEAOE_TypeInfo->static_fields->
                                                             _EDIEPEOIMDF_k__BackingField;
                                                        thunk_FUN_01c20e04(&(__this->fields).
                                                                            OKNKKHGBECG);
                                                        pAVar20 = (__this->fields).OKNKKHGBECG;
                                                        CJNHFNHJHPE_01 =
                                                             (System_Action_BNKBGIIJNLF__o *)
                                                             thunk_FUN_01bda818(
                                                  System_Action<BNKBGIIJNLF>_TypeInfo);
                                                  System_Action<object>___ctor();
                                                  if (pAVar20 != (ACHLOMELAJE_o *)0x0) {
                                                    ACHLOMELAJE__GILENGKAJNN
                                                              (pAVar20,CJNHFNHJHPE_01,
                                                               (MethodInfo *)0x0);
                                                    pAVar20 = (__this->fields).OKNKKHGBECG;
                                                    pSVar7 = (System_Action_o *)
                                                             thunk_FUN_01bda818(
                                                  System_Action_TypeInfo);
                                                  System_Action___ctor();
                                                  if (pAVar20 != (ACHLOMELAJE_o *)0x0) {
                                                    ACHLOMELAJE__DDKBPJIHMDN
                                                              (pAVar20,pSVar7,(MethodInfo *)0x0);
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
LAB_0353892c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public PaymentUI get_PaymentUI()  [RVA 0x34389C4]
// Nekki.SF2.GUI.Shop.ShopScene$$get_PaymentUI @ RVA 0x34389C4

Nekki_SF2_GUI_Common_PaymentUI_o *
Nekki_SF2_GUI_Shop_ShopScene__get_PaymentUI
          (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  return (__this->fields).AGKBOPBINNE;
}


// ===== public void ReloadRaidItemPackSliderDelayed()  [RVA 0x34389CC]
// Nekki.SF2.GUI.Shop.ShopScene$$ReloadRaidItemPackSliderDelayed @ RVA 0x34389CC

void Nekki_SF2_GUI_Shop_ShopScene__ReloadRaidItemPackSliderDelayed
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  PBAKFOBIHEG_o *pPVar3;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_045681ab & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045681ab = 1;
  }
  if ((__this->fields).IMJDKMADNGL != (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar4 = Nekki_SF2_GUI_Shop_ShopScene__JDPMLOOBKOD(__this,method_00);
  if (pPVar3 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar6 = pPVar3->klass;
  ppSVar1 = &(__this->fields).IMJDKMADNGL;
  uVar2._0_1_ = (pPVar6->_2).rank;
  uVar2._1_1_ = (pPVar6->_2).minimumAlignment;
  uVar7 = (ulong)uVar2;
  if (uVar7 != 0) {
    piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar5 = pPVar6->vtable + *piVar8;
        goto LAB_03538a80;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,0);
LAB_03538a80:
  pSVar4 = (System_Collections_IEnumerator_o *)(*pVVar5->methodPtr)(pPVar3,pSVar4,1,pVVar5->method);
  *ppSVar1 = pSVar4;
                    /* try { // try from 03538aa8 to 03638ceb has its CatchHandler @ 03538aa8
                       catch() { ... } // from try @ 03538aa8 with catch @ 03538aa8
                       catch() { ... } // from try @ 03538d74 with catch @ 03538aa8
                       catch() { ... } // from try @ 03538f1c with catch @ 03538aa8
                       catch() { ... } // from try @ 03538f84 with catch @ 03538aa8
                       catch() { ... } // from try @ 03538fb0 with catch @ 03538aa8
                       catch() { ... } // from try @ 03538fec with catch @ 03538aa8
                       catch() { ... } // from try @ 0353900c with catch @ 03538aa8
                       catch() { ... } // from try @ 03539040 with catch @ 03538aa8 */
  thunk_FUN_01c20e04(ppSVar1,pSVar4);
  return;
}


// ===== public POIJDKLHHKO get_CurrentSection()  [RVA 0x3438AB0]
// Nekki.SF2.GUI.Shop.ShopScene$$get_CurrentSection @ RVA 0x3438AB0

int32_t Nekki_SF2_GUI_Shop_ShopScene__get_CurrentSection
                  (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  return (__this->fields).AIAODGKGPEI;
}


// ===== private void AFIDMLMGCMG()  [RVA 0x3438AB8]
// Nekki.SF2.GUI.Shop.ShopScene$$AFIDMLMGCMG @ RVA 0x3438AB8

void Nekki_SF2_GUI_Shop_ShopScene__AFIDMLMGCMG
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ItemsPanel_o *__this_00;
  HOOAAGABMBL_o *ANMFBABEMFD;
  MethodInfo *extraout_x1;
  
  if ((DAT_045681ac & 1) == 0) {
    FUN_01bab630(&FEPCHKMAIBL_TypeInfo);
    DAT_045681ac = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._ItemsPanel;
  if (__this_00 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
    ANMFBABEMFD = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(__this_00,(MethodInfo *)0x0);
    if (ANMFBABEMFD != (HOOAAGABMBL_o *)0x0) {
      if ((FEPCHKMAIBL_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      FEPCHKMAIBL__NDCCCHJDNFP(ANMFBABEMFD,(System_Action_int__int__o *)0x0,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== private void GJKCKGNJNFE()  [RVA 0x3438B3C]
// Nekki.SF2.GUI.Shop.ShopScene$$GJKCKGNJNFE @ RVA 0x3438B3C

void Nekki_SF2_GUI_Shop_ShopScene__GJKCKGNJNFE
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ItemsPanel_o *__this_00;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields)._ItemsPanel;
  if (__this_00 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
    Nekki_SF2_GUI_Shop_ItemsPanel__UpdateScrollItems(__this_00,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Shop_ShopScene__UpdateNewItemsCounters(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PLCCEAFLBOM()  [RVA 0x3438B40]
// Nekki.SF2.GUI.Shop.ShopScene$$PLCCEAFLBOM @ RVA 0x3438B40

void Nekki_SF2_GUI_Shop_ShopScene__PLCCEAFLBOM
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  ACHLOMELAJE_o *__this_01;
  NDPMLPGANCI_o *__this_02;
  MethodInfo *method_00;
  
  if ((DAT_045681ad & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_PLCCEAFLBOM__);
    DAT_045681ad = 1;
  }
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    KKLJIDJBFEI__PILMCAFCLMN(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
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
    __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_01 != (ACHLOMELAJE_o *)0x0) {
      ACHLOMELAJE__DHPIHCCDOGH(__this_01,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Shop_ShopScene__PEMHHDNNKAO(__this,true,method_00);
      __this_02 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_02 != (NDPMLPGANCI_o *)0x0) {
        NDPMLPGANCI__KJGGEPNHOBK(__this_02,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HPJLOJELBCI()  [RVA 0x3437A18]
// Nekki.SF2.GUI.Shop.ShopScene$$HPJLOJELBCI @ RVA 0x3437A18

void Nekki_SF2_GUI_Shop_ShopScene__HPJLOJELBCI
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *method_00;
  DOPEEDABNEK_o *pDVar1;
  System_Collections_Generic_List_HOOAAGABMBL__o *DHBBIJMJPNL;
  
                    /* try { // try from 03537a1c to 03637a23 has its CatchHandler @ 03537afc */
  if ((DAT_045681ae & 1) == 0) {
    FUN_01bab630(&AMHFFFODDOC_TypeInfo);
                    /* try { // try from 03537a40 to 03637a43 has its CatchHandler @ 03537a48 */
                    /* try { // try from 03537a44 to 03637a5f has its CatchHandler @ 03537870 */
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* catch() { ... } // from try @ 03537a40 with catch @ 03537a48 */
                    /* catch() { ... } // from try @ 035379f4 with catch @ 03537a4c */
                    /* catch() { ... } // from try @ 035379dc with catch @ 03537a50 */
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 03537a60 to 03637a63 has its CatchHandler @ 03537aec */
                    /* try { // try from 03537a64 to 03637abf has its CatchHandler @ 03537870 */
    FUN_01bab630(&StringLiteral_14097/*"UI/Atlases/effect_lottery"*/);
    FUN_01bab630(&StringLiteral_14093/*"UI/Atlases/Lottery"*/);
    DAT_045681ae = 1;
    method = extraout_x1;
  }
  if ((__this->fields).AIAODGKGPEI == 6) {
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
      method = extraout_x1_00;
    }
    if (MGNPHCAAEIO_TypeInfo->static_fields->BIJJALJHKCD != false) {
                    /* try { // try from 03537ac0 to 03637ad7 has its CatchHandler @ 03537b84 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
        method = extraout_x1_01;
      }
      if (DAT_04563eaa == '\0') {
                    /* try { // try from 03537ad8 to 03637adb has its CatchHandler @ 03537b18 */
                    /* try { // try from 03537adc to 03637ae3 has its CatchHandler @ 03537b04 */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 03537ae4 to 03637ae7 has its CatchHandler @ 03537b00 */
                    /* try { // try from 03537ae8 to 03637b33 has its CatchHandler @ 03537870 */
        DAT_04563eaa = '\x01';
        method = extraout_x1_02;
      }
                    /* catch() { ... } // from try @ 03537a60 with catch @ 03537aec */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03537994 with catch @ 03537af8 */
        thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
                    /* catch() { ... } // from try @ 03537a1c with catch @ 03537afc */
      }
                    /* catch() { ... } // from try @ 03537ae4 with catch @ 03537b00 */
                    /* catch() { ... } // from try @ 03537adc with catch @ 03537b04 */
      pDVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
                    /* catch() { ... } // from try @ 03537998 with catch @ 03537b08 */
      if (pDVar1 != (DOPEEDABNEK_o *)0x0) {
                    /* catch() { ... } // from try @ 035379a4 with catch @ 03537b0c */
                    /* catch() { ... } // from try @ 035379b8 with catch @ 03537b10 */
        DHBBIJMJPNL = (pDVar1->fields)._BDIDINACBBH_k__BackingField;
                    /* catch() { ... } // from try @ 03537978 with catch @ 03537b14 */
                    /* catch() { ... } // from try @ 03537ad8 with catch @ 03537b18 */
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03537960 with catch @ 03537b1c */
          thunk_FUN_01ba7564();
        }
        MGNPHCAAEIO__DAPBLAMONKL(DHBBIJMJPNL,(MethodInfo *)0x0);
                    /* try { // try from 03537b34 to 03637b37 has its CatchHandler @ 03537b60 */
                    /* try { // try from 03537b38 to 03637b67 has its CatchHandler @ 03537870 */
        if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        NGCBNMBJMOE__MMHFNAEHAKC(StringLiteral_14097/*"UI/Atlases/effect_lottery"*/,false,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03537b34 with catch @ 03537b60 */
                    /* try { // try from 03537b68 to 03637b6f has its CatchHandler @ 03537b84 */
        method_00 = extraout_x1_03;
        if ((AMHFFFODDOC_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03537b70 to 03637b7b has its CatchHandler @ 03537870 */
          thunk_FUN_01ba7564();
          method_00 = extraout_x1_04;
        }
                    /* try { // try from 03537b7c to 03637b83 has its CatchHandler @ 03537b84 */
                    /* catch() { ... } // from try @ 03537ac0 with catch @ 03537b84
                       catch() { ... } // from try @ 03537b68 with catch @ 03537b84
                       catch() { ... } // from try @ 03537b7c with catch @ 03537b84 */
        AMHFFFODDOC__MMHFNAEHAKC(StringLiteral_14093/*"UI/Atlases/Lottery"*/,method_00);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== private void EOIIDEJIBNC()  [RVA 0x3438DA4]
// Nekki.SF2.GUI.Shop.ShopScene$$EOIIDEJIBNC @ RVA 0x3438DA4

void Nekki_SF2_GUI_Shop_ShopScene__EOIIDEJIBNC
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  int32_t DPCEFBCDHPA;
  bool bVar1;
  int32_t iVar2;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *__this_01;
  DEKKGJNMFEB_o *__this_02;
  GGLKHCAIGDI_o *pGVar3;
  BFBONKPKBNL_o *GMCFOKPADCA;
  System_Action_object__o *CGLKNMPIAJF;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  int32_t JEAJGNNOONA;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *pNVar4;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar5;
  ACHLOMELAJE_o *pAVar6;
  HOOAAGABMBL_o *pHVar7;
  System_String_o *JEPIGCLHAMI;
  
  if ((DAT_045681af & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Count__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ShopScene_OMOHFLMFCOG__);
    DAT_045681af = 1;
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
  pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (((pAVar6 != (ACHLOMELAJE_o *)0x0) &&
      (pNVar4 = (__this->fields)._ForgePanel, pNVar4 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0
      )) && (__this_00 = (pAVar6->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) {
    __this_01 = GGHCLMEFIGO__JNFIBDBHNOA(__this_00,(pNVar4->fields).PCBECBEFJOI,(MethodInfo *)0x0);
    if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03538e94 to 03638e9b has its CatchHandler @ 03538ff4 */
      thunk_FUN_01ba7564(DEKKGJNMFEB_TypeInfo);
    }
    __this_02 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
    pNVar4 = (__this->fields)._ForgePanel;
    if ((pNVar4 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) &&
       (pHVar7 = (pNVar4->fields).PCBECBEFJOI, pHVar7 != (HOOAAGABMBL_o *)0x0)) {
      JEPIGCLHAMI = (pHVar7->fields)._COIPKAKHDFP_k__BackingField;
                    /* try { // try from 03538ebc to 03638ebf has its CatchHandler @ 03538ff0 */
      pGVar3 = Nekki_SF2_GUI_Shop_Forge_ForgePanel__get_CurrentRecipe(pNVar4,(MethodInfo *)0x0);
                    /* try { // try from 03538ed0 to 03638f1b has its CatchHandler @ 03538ff8 */
      if (((pGVar3 != (GGLKHCAIGDI_o *)0x0) &&
          ((__this_02 != (DEKKGJNMFEB_o *)0x0 &&
           (GMCFOKPADCA = DEKKGJNMFEB__NCFEMNMDBMJ
                                    (__this_02,JEPIGCLHAMI,
                                     (pGVar3->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0
                                    ), __this_01 != (IGFGDDANEPE_o *)0x0)))) &&
         (pHVar7 = IGFGDDANEPE__JPNNODJPOCL(__this_01,false,(MethodInfo *)0x0),
         pHVar7 != (HOOAAGABMBL_o *)0x0)) {
        DPCEFBCDHPA = (pHVar7->fields)._JDEHPJEIOCI_k__BackingField;
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 03538f1c to 03638f6f has its CatchHandler @ 03538aa8 */
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar6 != (ACHLOMELAJE_o *)0x0) {
          iVar2 = ACHLOMELAJE__EOEAKGGDBFH(pAVar6,(MethodInfo *)0x0);
          pSVar5 = (__this_01->fields).PAPANCDPPIF;
          if (pSVar5 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
            if ((pSVar5->fields)._size < 1) {
                    /* catch() { ... } // from try @ 03538d14 with catch @ 03538f90 */
                    /* catch() { ... } // from try @ 03538f78 with catch @ 03538f94
                       catch() { ... } // from try @ 03538f80 with catch @ 03538f94 */
              JEAJGNNOONA = 3;
              if (iVar2 <= DPCEFBCDHPA) {
                JEAJGNNOONA = 0;
              }
            }
            else {
              pNVar4 = (__this->fields)._ForgePanel;
              if ((pNVar4 == (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) ||
                 (pGVar3 = Nekki_SF2_GUI_Shop_Forge_ForgePanel__get_CurrentRecipe
                                     (pNVar4,(MethodInfo *)0x0), pGVar3 == (GGLKHCAIGDI_o *)0x0))
              goto LAB_03539010;
                    /* try { // try from 03538f70 to 03638f73 has its CatchHandler @ 03538fec */
                    /* try { // try from 03538f74 to 03638f77 has its CatchHandler @ 03538f88 */
                    /* try { // try from 03538f78 to 03638f7b has its CatchHandler @ 03538f94 */
                    /* try { // try from 03538f7c to 03638f7f has its CatchHandler @ 03538f84 */
              bVar1 = GGLKHCAIGDI__PCDGMIBPFEO(pGVar3,__this_01,DPCEFBCDHPA,(MethodInfo *)0x0);
              JEAJGNNOONA = 1;
                    /* try { // try from 03538f80 to 03638f83 has its CatchHandler @ 03538f94 */
                    /* catch() { ... } // from try @ 03538f7c with catch @ 03538f84
                       try { // try from 03538f84 to 03638fab has its CatchHandler @ 03538aa8 */
                    /* catch() { ... } // from try @ 03538f74 with catch @ 03538f88 */
              if (bVar1) {
                JEAJGNNOONA = 2;
              }
            }
            pNVar4 = (__this->fields)._ForgePanel;
            if (pNVar4 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) {
                    /* try { // try from 03538fac to 03638faf has its CatchHandler @ 03538fd0 */
                    /* try { // try from 03538fb0 to 03638fd7 has its CatchHandler @ 03538aa8 */
              pGVar3 = Nekki_SF2_GUI_Shop_Forge_ForgePanel__get_CurrentRecipe
                                 (pNVar4,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Shop_Forge_ForgePanel__ScrollToRecipe(pNVar4,pGVar3,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03538fac with catch @ 03538fd0 */
              CGLKNMPIAJF = (System_Action_object__o *)
                            thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                    /* try { // try from 03538fd8 to 03638feb has its CatchHandler @ 03539054 */
              System_Action<object>___ctor();
                    /* catch() { ... } // from try @ 03538f70 with catch @ 03538fec
                       try { // try from 03538fec to 03639007 has its CatchHandler @ 03538aa8 */
                    /* catch() { ... } // from try @ 03538ebc with catch @ 03538ff0 */
                    /* catch() { ... } // from try @ 03538e94 with catch @ 03538ff4 */
                    /* catch() { ... } // from try @ 03538ed0 with catch @ 03538ff8 */
                    /* try { // try from 03539008 to 0363900b has its CatchHandler @ 03539030 */
                    /* try { // try from 0353900c to 03639037 has its CatchHandler @ 03538aa8 */
              JJPNLEPEAFM__CFOHCDKCGOG(GMCFOKPADCA,JEAJGNNOONA,CGLKNMPIAJF,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_03539010:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public SidePanel get_ItemProperties()  [RVA 0x3439014]
// Nekki.SF2.GUI.Shop.ShopScene$$get_ItemProperties @ RVA 0x3439014

Nekki_SF2_GUI_Shop_SidePanel_o *
Nekki_SF2_GUI_Shop_ShopScene__get_ItemProperties
          (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  return (__this->fields)._ItemProperties;
}


// ===== public void ReloadCurrentSection()  [RVA 0x34376EC]
// Nekki.SF2.GUI.Shop.ShopScene$$ReloadCurrentSection @ RVA 0x34376EC

void Nekki_SF2_GUI_Shop_ShopScene__ReloadCurrentSection
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  MethodInfo *in_x2;
  
  CJNHFNHJHPE = (__this->fields).AIAODGKGPEI;
  (__this->fields).AIAODGKGPEI = 8;
  Nekki_SF2_GUI_Shop_ShopScene__set_CurrentSection(__this,CJNHFNHJHPE,in_x2);
  return;
}


// ===== private void GNBIFHFHBEL()  [RVA 0x3438930]
// Nekki.SF2.GUI.Shop.ShopScene$$GNBIFHFHBEL @ RVA 0x3438930

void Nekki_SF2_GUI_Shop_ShopScene__GNBIFHFHBEL
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Shop_ShopBottomPanel_o *pNVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  
  if ((DAT_045681b0 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_HideButton__);
    DAT_045681b0 = 1;
    method = extraout_x1;
  }
  bVar1 = Nekki_SF2_GUI_Shop_ShopScene__get_IsPaidItemsAvailable(__this,method);
  method_00 = extraout_x1_00;
  if (!bVar1) {
    pNVar2 = (__this->fields).GJIPOBCNEPG;
    if (pNVar2 == (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *)0x0) goto LAB_035389c0;
    Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__HideButton
              ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)pNVar2,5,
               Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_HideButton__);
    method_00 = extraout_x1_01;
  }
  bVar1 = Nekki_SF2_GUI_Shop_ShopScene__get_IsFreeItemsAvailable(__this,method_00);
  if (bVar1) {
    return;
  }
  pNVar2 = (__this->fields).GJIPOBCNEPG;
  if (pNVar2 != (Nekki_SF2_GUI_Shop_ShopBottomPanel_o *)0x0) {
    Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__HideButton
              ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)pNVar2,7,
               Method_Nekki_SF2_GUI_Common_BottomPanel<POIJDKLHHKO>_HideButton__);
    return;
  }
LAB_035389c0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FMBFAPGPDPF()  [RVA 0x3433A4C]
// Nekki.SF2.GUI.Shop.ShopScene$$FMBFAPGPDPF @ RVA 0x3433A4C

void Nekki_SF2_GUI_Shop_ShopScene__FMBFAPGPDPF
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar1;
  HOOAAGABMBL_o *ANMFBABEMFD;
  System_Collections_Generic_List_HOOAAGABMBL__o *BCECKFJCLKB;
  
  pNVar1 = (__this->fields)._ItemsPanel;
  if (pNVar1 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
    ANMFBABEMFD = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._ItemsPanel;
    if (pNVar1 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
      BCECKFJCLKB = Nekki_SF2_GUI_Shop_ItemsPanel__GetBoughtItems(pNVar1,false,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Shop_ItemsPanel__UpdateScrollItems(pNVar1,BCECKFJCLKB,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._ItemsPanel;
      if (pNVar1 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
        Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem(pNVar1,ANMFBABEMFD,0.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OpenForgeAndSetRecipe(string JNCMFLKJJMP)  [RVA 0x3433350]
// Nekki.SF2.GUI.Shop.ShopScene$$OpenForgeAndSetRecipe @ RVA 0x3433350

void Nekki_SF2_GUI_Shop_ShopScene__OpenForgeAndSetRecipe
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,System_String_o *JNCMFLKJJMP,
               MethodInfo *method)

{
  bool bVar1;
  DEKKGJNMFEB_o *__this_00;
  GGLKHCAIGDI_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *pNVar2;
  
  method_00 = (MethodInfo *)JNCMFLKJJMP;
  if ((DAT_045681b1 & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    DAT_045681b1 = 1;
    method_00 = extraout_x1;
  }
  pNVar2 = (__this->fields)._ForgePanel;
  if (pNVar2 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) {
    if (((uint)(pNVar2->fields).NBAADNACNDJ < 2) ||
       (bVar1 = Nekki_SF2_GUI_Shop_ShopScene__FJLNKLMBKDN(__this,method_00), !bVar1)) {
      return;
    }
    Nekki_SF2_GUI_Shop_ShopScene__set_Mode(__this,1,method);
    pNVar2 = (__this->fields)._ForgePanel;
    if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
    if ((__this_00 != (DEKKGJNMFEB_o *)0x0) &&
       (CJNHFNHJHPE = DEKKGJNMFEB__LDGJEEGACHJ(__this_00,JNCMFLKJJMP,(MethodInfo *)0x0),
       pNVar2 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0)) {
      Nekki_SF2_GUI_Shop_Forge_ForgePanel__set_CurrentRecipe(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OMAPCIJEBOP(FAIJGJCCKJC AHLEEOHEIIL)  [RVA 0x343901C]
// Nekki.SF2.GUI.Shop.ShopScene$$OMAPCIJEBOP @ RVA 0x343901C

void Nekki_SF2_GUI_Shop_ShopScene__OMAPCIJEBOP
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,FAIJGJCCKJC_o *AHLEEOHEIIL,MethodInfo *method
               )

{
  Nekki_SF2_GUI_Shop_ShopScene__PEMHHDNNKAO(__this,true,method);
  return;
}

