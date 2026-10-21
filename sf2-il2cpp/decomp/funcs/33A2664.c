// PAOMOCCOFDE$$IKBILKIMBCB @ RVA 0x33A2664

void PAOMOCCOFDE__IKBILKIMBCB(PAOMOCCOFDE_o *__this,Il2CppObject *OCMMDIHLKMH,MethodInfo *method)

{
  int32_t DPCEFBCDHPA;
  ushort uVar1;
  bool bVar2;
  int32_t DLNKPJMDPJI;
  long lVar3;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *__this_00;
  HOOAAGABMBL_o *pHVar4;
  int *piVar5;
  GGHCLMEFIGO_o *__this_01;
  IGFGDDANEPE_o *__this_02;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this_03;
  GGLKHCAIGDI_o *__this_04;
  BFBONKPKBNL_o *GMCFOKPADCA;
  DEKKGJNMFEB_o *__this_05;
  UnityEngine_Component_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_06;
  LabelButton_o *pLVar8;
  UnityEngine_Events_UnityAction_o *call;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_07;
  PBAKFOBIHEG_o *pPVar9;
  System_Collections_IEnumerator_o *pSVar10;
  VirtualInvokeData *pVVar11;
  MethodInfo *method_00;
  MethodInfo *method_01;
  ACHLOMELAJE_o *pAVar12;
  PBAKFOBIHEG_c *pPVar13;
  ulong uVar14;
  int32_t *piVar15;
  UnityEngine_Events_UnityEvent_o *__this_08;
  
  if ((DAT_04567cc5 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo);
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
                    /* try { // try from 034a26b4 to 035a282b has its CatchHandler @ 034a26b4
                       catch() { ... } // from try @ 034a26b4 with catch @ 034a26b4
                       catch() { ... } // from try @ 034a2874 with catch @ 034a26b4
                       catch() { ... } // from try @ 034a28a4 with catch @ 034a26b4
                       catch() { ... } // from try @ 034a28e0 with catch @ 034a26b4
                       catch() { ... } // from try @ 034a2910 with catch @ 034a26b4 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_PAOMOCCOFDE_IPMJMPDBEJH__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04567cc5 = 1;
  }
  lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  if (((**(long **)(lVar3 + 0xb8) == 0) ||
      (__this_00 = *(Nekki_SF2_GUI_Shop_ItemsPanel_o **)(**(long **)(lVar3 + 0xb8) + 0x178),
      __this_00 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0)) ||
     (pHVar4 = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(__this_00,(MethodInfo *)0x0),
     OCMMDIHLKMH == (Il2CppObject *)0x0)) goto LAB_034a2bb8;
  if ((OCMMDIHLKMH->klass->_1).element_class !=
      (Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(OCMMDIHLKMH);
  }
  piVar5 = (int *)thunk_FUN_01bda96c(OCMMDIHLKMH);
  if ((pHVar4 == (HOOAAGABMBL_o *)0x0) || (*piVar5 != 1)) {
    if ((__this->fields).KFMKNNMDNKJ != false) {
LAB_034a29b4:
      if (DAT_04565b84 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
        DAT_04565b84 = '\x01';
      }
      __this_06 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
      if (__this_06 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
        Nekki_SF2_GUI_Menu_MainMenu__UpdateMaterials(__this_06,(MethodInfo *)0x0);
        pLVar8 = (__this->fields).GPELNIEGMJG;
        if (pLVar8 != (LabelButton_o *)0x0) {
          SFButton__set_IsFlashing((SFButton_o *)pLVar8,false,(MethodInfo *)0x0);
          pLVar8 = (__this->fields).GPELNIEGMJG;
          if (pLVar8 != (LabelButton_o *)0x0) {
            __this_08 = (UnityEngine_Events_UnityEvent_o *)
                        (pLVar8->fields).super.super.super.m_OnClick;
            call = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (__this_08 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__RemoveListener(__this_08,call,(MethodInfo *)0x0);
              pLVar8 = (__this->fields).GPELNIEGMJG;
              if (pLVar8 != (LabelButton_o *)0x0) {
                NAJBHKGHIGK__JKGCKABLLKD
                          ((UnityEngine_Events_UnityEventBase_o *)
                           (pLVar8->fields).super.super.super.m_OnClick,2,(MethodInfo *)0x0);
                AKJJAPEHKCG__HJDDBKPCAFJ
                          ((UnityEngine_UI_Selectable_o *)(__this->fields).GPELNIEGMJG,
                           (MethodInfo *)0x0);
                lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_01b81620();
                }
                lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
                if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_01b81620();
                }
                    /* try { // try from 034a2aa8 to 035a2c0b has its CatchHandler @ 034a2aa8
                       catch() { ... } // from try @ 034a2aa8 with catch @ 034a2aa8
                       catch() { ... } // from try @ 034a2c38 with catch @ 034a2aa8
                       catch() { ... } // from try @ 034a2ce4 with catch @ 034a2aa8
                       catch() { ... } // from try @ 034a2d2c with catch @ 034a2aa8
                       catch() { ... } // from try @ 034a2d64 with catch @ 034a2aa8
                       catch() { ... } // from try @ 034a2da0 with catch @ 034a2aa8
                       catch() { ... } // from try @ 034a2dc8 with catch @ 034a2aa8
                       catch() { ... } // from try @ 034a2df8 with catch @ 034a2aa8 */
                if (((**(long **)(lVar3 + 0xb8) != 0) &&
                    (lVar3 = *(long *)(**(long **)(lVar3 + 0xb8) + 0x178), lVar3 != 0)) &&
                   (pUVar6 = *(UnityEngine_Component_o **)(lVar3 + 0x28),
                   pUVar6 != (UnityEngine_Component_o *)0x0)) {
                  pUVar7 = UnityEngine_Component__get_gameObject(pUVar6,(MethodInfo *)0x0);
                  AKJJAPEHKCG__HJDDBKPCAFJ(pUVar7,(MethodInfo *)0x0);
                  __this_07 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0)
                  ;
                  if (__this_07 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
                    Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn
                              (__this_07,false,(MethodInfo *)0x0);
                    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
                    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                      lVar3 = FUN_01b81620();
                    }
                    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
                    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                      lVar3 = FUN_01b81620();
                    }
                    if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8) !=
                        (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
                      Nekki_SF2_GUI_Shop_ShopScene__Refresh
                                ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8),
                                 (MethodInfo *)0x0);
                      pPVar9 = CoroutineManager__get_Current((MethodInfo *)0x0);
                      pSVar10 = PAOMOCCOFDE__LFJLJEHKINP(__this,method_00);
                      if (pPVar9 != (PBAKFOBIHEG_o *)0x0) {
                        pPVar13 = pPVar9->klass;
                        uVar1._0_1_ = (pPVar13->_2).rank;
                        uVar1._1_1_ = (pPVar13->_2).minimumAlignment;
                        uVar14 = (ulong)uVar1;
                        if (uVar14 != 0) {
                          piVar15 = &((pPVar13->_1).interfaceOffsets)->offset;
                          do {
                            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType
                                == (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                              pVVar11 = pPVar13->vtable + *piVar15;
                              goto LAB_034a2b90;
                            }
                            uVar14 = uVar14 - 1;
                            piVar15 = piVar15 + 4;
                          } while (uVar14 != 0);
                        }
                        pVVar11 = (VirtualInvokeData *)FUN_01b81914(pPVar9,PBAKFOBIHEG_TypeInfo,0);
LAB_034a2b90:
                    /* WARNING: Could not recover jumptable at 0x034a2bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*pVVar11->methodPtr)(pPVar9,pSVar10,1,pVVar11->method);
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
      goto LAB_034a2bb8;
    }
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
    pAVar12 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar12 == (ACHLOMELAJE_o *)0x0) ||
       (__this_01 = (pAVar12->fields).OIDPLCLELEN, __this_01 == (GGHCLMEFIGO_o *)0x0))
    goto LAB_034a2bb8;
    __this_02 = GGHCLMEFIGO__JNFIBDBHNOA
                          (__this_01,(pHVar4->fields)._COIPKAKHDFP_k__BackingField,method);
    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620(lVar3);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
                    /* try { // try from 034a282c to 035a2833 has its CatchHandler @ 034a28c4 */
    if (((**(long **)(lVar3 + 0xb8) == 0) ||
        (__this_03 = *(Nekki_SF2_GUI_Shop_Forge_ForgePanel_o **)(**(long **)(lVar3 + 0xb8) + 0x110),
        __this_03 == (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0)) ||
       (__this_04 = Nekki_SF2_GUI_Shop_Forge_ForgePanel__get_CurrentRecipe
                              (__this_03,(MethodInfo *)0x0), __this_02 == (IGFGDDANEPE_o *)0x0))
    goto LAB_034a2bb8;
    method_01 = (MethodInfo *)0x0;
    pHVar4 = IGFGDDANEPE__JPNNODJPOCL(__this_02,false,(MethodInfo *)0x0);
    if (pHVar4 == (HOOAAGABMBL_o *)0x0) goto LAB_034a2bb8;
    DPCEFBCDHPA = (pHVar4->fields)._JDEHPJEIOCI_k__BackingField;
                    /* try { // try from 034a2850 to 035a2857 has its CatchHandler @ 034a28c0 */
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 034a2864 to 035a2873 has its CatchHandler @ 034a28b0 */
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034a2874 to 035a2897 has its CatchHandler @ 034a26b4 */
      thunk_FUN_01ba7564();
    }
    pAVar12 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar12 == (ACHLOMELAJE_o *)0x0) goto LAB_034a2bb8;
    DLNKPJMDPJI = ACHLOMELAJE__EOEAKGGDBFH(pAVar12,(MethodInfo *)0x0);
                    /* try { // try from 034a2898 to 035a289b has its CatchHandler @ 034a28bc */
    if (DAT_04565b7d == '\0') {
                    /* try { // try from 034a289c to 035a289f has its CatchHandler @ 034a28b8 */
                    /* try { // try from 034a28a0 to 035a28a3 has its CatchHandler @ 034a28b4 */
                    /* try { // try from 034a28a4 to 035a28db has its CatchHandler @ 034a26b4 */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034a2864 with catch @ 034a28b0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034a28a0 with catch @ 034a28b4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034a289c with catch @ 034a28b8
                        */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034a2898 with catch @ 034a28bc
                        */
      thunk_FUN_01ba7564();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034a2850 with catch @ 034a28c0
                        */
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034a282c with catch @ 034a28c4
                        */
    if (__this_04 == (GGLKHCAIGDI_o *)0x0) goto LAB_034a2bb8;
    pAVar12 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    GMCFOKPADCA = GGLKHCAIGDI__GPGGNMAFOJD(__this_04,__this_02,method_01);
                    /* try { // try from 034a28dc to 035a28df has its CatchHandler @ 034a2900 */
    if (pAVar12 == (ACHLOMELAJE_o *)0x0) goto LAB_034a2bb8;
                    /* try { // try from 034a28e0 to 035a2907 has its CatchHandler @ 034a26b4 */
    ACHLOMELAJE__OPKKKNLCACD(pAVar12,GMCFOKPADCA,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034a28dc with catch @ 034a2900 */
    if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 034a2908 to 035a290f has its CatchHandler @ 034a2924 */
    __this_05 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 034a2910 to 035a291b has its CatchHandler @ 034a26b4 */
    if (__this_05 == (DEKKGJNMFEB_o *)0x0) goto LAB_034a2bb8;
                    /* try { // try from 034a291c to 035a2923 has its CatchHandler @ 034a2924 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034a2908 with catch @ 034a2924
                       catch(type#2 @ 00000000) { ... } // from try @ 034a291c with catch @ 034a2924
                        */
    bVar2 = DEKKGJNMFEB__IKBILKIMBCB
                      (__this_05,__this_02,__this_04,DPCEFBCDHPA,DLNKPJMDPJI,(MethodInfo *)0x0);
    (__this->fields).KFMKNNMDNKJ = bVar2;
    if (bVar2) goto LAB_034a29b4;
  }
  AKJJAPEHKCG__GOCEMJOCNEE
            ((UnityEngine_UI_Selectable_o *)(__this->fields).GPELNIEGMJG,(MethodInfo *)0x0);
  lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  if (((**(long **)(lVar3 + 0xb8) != 0) &&
      (lVar3 = *(long *)(**(long **)(lVar3 + 0xb8) + 0x178), lVar3 != 0)) &&
     (pUVar6 = *(UnityEngine_Component_o **)(lVar3 + 0x28), pUVar6 != (UnityEngine_Component_o *)0x0
     )) {
    pUVar7 = UnityEngine_Component__get_gameObject(pUVar6,(MethodInfo *)0x0);
    AKJJAPEHKCG__GOCEMJOCNEE(pUVar7,(MethodInfo *)0x0);
    return;
  }
LAB_034a2bb8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

