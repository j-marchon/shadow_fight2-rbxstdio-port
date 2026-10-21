// Nekki.SF2.GUI.Dialogs.LotteryDialog$$Init @ RVA 0x328C140

void Nekki_SF2_GUI_Dialogs_LotteryDialog__Init
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  LPGLKMNHELJ_c *pLVar3;
  bool bVar4;
  System_Collections_Generic_List_DILGLGMKOFG__o *__this_00;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar5;
  UnityEngine_Events_UnityAction_o *call;
  System_IObservable_object__o *source;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  CloseButton_o *__this_01;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *pEVar6;
  EIFHKGFMIEN_o *__this_02;
  PBAKFOBIHEG_o *pPVar7;
  System_Collections_IEnumerator_o *pSVar8;
  VirtualInvokeData *pVVar9;
  System_Action_o *CJNHFNHJHPE;
  HJNDPNIMBBG_o *__this_03;
  UnityEngine_Object_o *exists;
  Nekki_SF2_GUI_ResolutionImage_o *__this_04;
  NDPMLPGANCI_o *__this_05;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE_00;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  LPGLKMNHELJ_o *pLVar10;
  PKHMIGFEJCL_o *pPVar11;
  CocosAnimation_o *pCVar12;
  PBAKFOBIHEG_c *pPVar13;
  ulong uVar14;
  int32_t *piVar15;
  UnityEngine_Events_UnityEvent_o *__this_06;
  EIFHKGFMIEN_o **ppEVar16;
  LPGLKMNHELJ_o **ppLVar17;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_80;
  int64_t local_60;
  int64_t iStack_58;
  int64_t iStack_50;
  bool_conflict bStack_48;
  bool_conflict bStack_47;
  undefined6 uStack_46;
  
  if ((DAT_045672e2 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&EIFHKGFMIEN_TypeInfo);
    FUN_01bab630(&LPGLKMNHELJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<DILGLGMKOFG>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_DPHGELLABKO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_GJBIHHLINEG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_PEGBLLJOOHM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_PEIBNBAMFFE__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<object>__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&WideScreenController_TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_1);
    DAT_045672e2 = 1;
  }
  pLVar3 = LPGLKMNHELJ_TypeInfo;
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
    (__this->fields).DKMMBMBMJBO = (LPGLKMNHELJ_o *)0x0;
  }
  else {
    bVar1 = (LPGLKMNHELJ_TypeInfo->_2).naturalAligment;
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)LPGLKMNHELJ_TypeInfo)) {
LAB_0338c6f8:
                    /* try { // try from 0338c6f8 to 0348c703 has its CatchHandler @ 0338beec */
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    (__this->fields).DKMMBMBMJBO = (LPGLKMNHELJ_o *)IMMNELPBGIF;
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)pLVar3))
    goto LAB_0338c6f8;
  }
  ppLVar17 = &(__this->fields).DKMMBMBMJBO;
  thunk_FUN_01c20e04(ppLVar17,IMMNELPBGIF);
  pLVar10 = *ppLVar17;
  if (pLVar10 != (LPGLKMNHELJ_o *)0x0) {
    (__this->fields).KGJOHFHDLFK = (pLVar10->fields).IHJFCJKCGEK;
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_80,0,(MethodInfo *)0x0);
    iStack_58 = local_80.fields.hiddenValue;
    local_60 = local_80.fields.currentCryptoKey;
    bStack_48 = local_80.fields.fakeValueActive;
    bStack_47 = local_80.fields.inited;
    uStack_46 = local_80.fields._26_6_;
    iStack_50 = local_80.fields.fakeValue;
    (__this->fields).ENCFNGGMNAN.fields.hiddenValue = local_80.fields.hiddenValue;
    (__this->fields).ENCFNGGMNAN.fields.currentCryptoKey = local_80.fields.currentCryptoKey;
    (__this->fields).ENCFNGGMNAN.fields.fakeValueActive = local_80.fields.fakeValueActive;
    (__this->fields).ENCFNGGMNAN.fields.inited = local_80.fields.inited;
    *(undefined6 *)&(__this->fields).ENCFNGGMNAN.fields.field_0x1a = local_80.fields._26_6_;
    (__this->fields).ENCFNGGMNAN.fields.fakeValue = local_80.fields.fakeValue;
    (__this->fields).OIKLOAGFFGO = 0;
    __this_00 = (System_Collections_Generic_List_DILGLGMKOFG__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<DILGLGMKOFG>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<DILGLGMKOFG>__ctor__);
    (__this->fields).HPJNLAOAJJE = __this_00;
    thunk_FUN_01c20e04(&(__this->fields).HPJNLAOAJJE,__this_00);
    Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
              ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,StringLiteral_1,StringLiteral_9679,
               StringLiteral_3640,0,(MethodInfo *)0x0);
    (__this->fields).super.IsQuestDialog = true;
    pNVar5 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if ((pNVar5 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
       (pPVar11 = (pNVar5->fields).QuestParameters, pPVar11 != (PKHMIGFEJCL_o *)0x0)) {
      (pPVar11->fields).BILELFMLGNC = true;
      pCVar12 = (__this->fields).WinEffect;
      if (pCVar12 != (CocosAnimation_o *)0x0) {
        __this_06 = (pCVar12->fields).OnAnimationComplete;
        call = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_06 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(__this_06,call,(MethodInfo *)0x0);
          source = HABIFHOHHOF__ELOBMGDKLPK((__this->fields).BtnQuit,(MethodInfo *)0x0);
          onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
          System_Action<object>___ctor();
          disposable = (Il2CppObject *)
                       UniRx_ObservableExtensions__Subscribe<object>
                                 ((System_IObservable_T__o *)source,onNext,
                                  Method_UniRx_ObservableExtensions_Subscribe<object>__);
          UniRx_DisposableExtensions__AddTo<object>
                    (disposable,
                     (System_Collections_Generic_ICollection_IDisposable__o *)
                     (__this->fields).HBJPBPBIOOB,
                     Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
          __this_01 = (__this->fields).BtnQuit;
          if (__this_01 != (CloseButton_o *)0x0) {
            CloseButton__PlayIdleAnimation(__this_01,(MethodInfo *)0x0);
            pEVar6 = (__this->fields).Scroller;
            if (pEVar6 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
              EnhancedUI_EnhancedScroller_EnhancedScroller__set_Delegate
                        (pEVar6,(LEPEFNKEJBC_o *)__this,(MethodInfo *)0x0);
              pEVar6 = (__this->fields).Scroller;
              __this_02 = (EIFHKGFMIEN_o *)thunk_FUN_01bda818(EIFHKGFMIEN_TypeInfo);
              EIFHKGFMIEN___ctor(__this_02,(Il2CppObject *)__this,
                                 Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_PEGBLLJOOHM__,
                                 (MethodInfo *)0x0);
              if (pEVar6 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
                ppEVar16 = &(pEVar6->fields).scrollerSnapped;
                *ppEVar16 = __this_02;
                thunk_FUN_01c20e04(ppEVar16,__this_02);
                pLVar10 = (__this->fields).DKMMBMBMJBO;
                if ((pLVar10 != (LPGLKMNHELJ_o *)0x0) &&
                   (pEVar6 = (__this->fields).Scroller,
                   pEVar6 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0)) {
                    /* try { // try from 0338c4d4 to 0348c4fb has its CatchHandler @ 0338c65c */
                  (pEVar6->fields).snapping = (pLVar10->fields).BGHFADDGPAD == 0;
                  pPVar7 = CoroutineManager__get_Current((MethodInfo *)0x0);
                  pSVar8 = Nekki_SF2_GUI_Dialogs_LotteryDialog__LPNCEHPFOAF(__this,method_00);
                  if (pPVar7 != (PBAKFOBIHEG_o *)0x0) {
                    pPVar13 = pPVar7->klass;
                    uVar2._0_1_ = (pPVar13->_2).rank;
                    uVar2._1_1_ = (pPVar13->_2).minimumAlignment;
                    uVar14 = (ulong)uVar2;
                    if (uVar14 != 0) {
                    /* try { // try from 0338c530 to 0348c557 has its CatchHandler @ 0338c658 */
                      piVar15 = &((pPVar13->_1).interfaceOffsets)->offset;
                      do {
                        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                          pVVar9 = pPVar13->vtable + *piVar15;
                          goto LAB_0338c568;
                        }
                        uVar14 = uVar14 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar14 != 0);
                    }
                    pVVar9 = (VirtualInvokeData *)FUN_01b81914(pPVar7,PBAKFOBIHEG_TypeInfo,0);
LAB_0338c568:
                    pSVar8 = (System_Collections_IEnumerator_o *)
                             (*pVVar9->methodPtr)(pPVar7,pSVar8,1,pVVar9->method);
                    /* try { // try from 0338c588 to 0348c593 has its CatchHandler @ 0338c660 */
                    (__this->fields).JHIHPMFPMIO = pSVar8;
                    thunk_FUN_01c20e04(&(__this->fields).JHIHPMFPMIO);
                    /* try { // try from 0338c594 to 0348c637 has its CatchHandler @ 0338beec */
                    CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    System_Action___ctor();
                    if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    WideScreenController__add_UpdateEvent(CJNHFNHJHPE,(MethodInfo *)0x0);
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
                    __this_03 = NLPJLHOEAOE_TypeInfo->static_fields->_FGIDANNEKFM_k__BackingField;
                    if (__this_03 != (HJNDPNIMBBG_o *)0x0) {
                      exists = (UnityEngine_Object_o *)
                               HJNDPNIMBBG__JDHIIDFJMBM(__this_03,(MethodInfo *)0x0);
                    /* try { // try from 0338c638 to 0348c63b has its CatchHandler @ 0338c654 */
                      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0338c63c to 0348c63f has its CatchHandler @ 0338c650 */
                    /* try { // try from 0338c640 to 0348c643 has its CatchHandler @ 0338c64c */
                        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
                      }
                    /* try { // try from 0338c644 to 0348c677 has its CatchHandler @ 0338beec */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338c640 with catch @ 0338c64c
                        */
                      bVar4 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
                      method_01 = extraout_x1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338c63c with catch @ 0338c650
                        */
                      if (bVar4) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338c638 with catch @ 0338c654
                        */
                        __this_04 = (__this->fields).Bg;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338c530 with catch @ 0338c658
                        */
                        if (__this_04 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0338c6f4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338c4d4 with catch @ 0338c65c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338c588 with catch @ 0338c660
                        */
                        UnityEngine_UI_Image__set_sprite
                                  ((UnityEngine_UI_Image_o *)__this_04,
                                   (UnityEngine_Sprite_o *)exists,(MethodInfo *)0x0);
                        method_01 = extraout_x1_00;
                      }
                    /* try { // try from 0338c678 to 0348c67b has its CatchHandler @ 0338c690 */
                      Nekki_SF2_GUI_Dialogs_LotteryDialog__GJBIHHLINEG(__this,method_01);
                      Nekki_SF2_GUI_Dialogs_LotteryDialog__KNDKMGHNIMK(__this,method_02);
                      Nekki_SF2_GUI_Dialogs_LotteryDialog__AINGLMJIPKH(__this,method_03);
                    /* catch() { ... } // from try @ 0338c678 with catch @ 0338c690 */
                      __this_05 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                      CJNHFNHJHPE_00 =
                           (System_Action_DBMPKPJGIPI__o *)
                           thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
                      System_Action<Int32Enum>___ctor();
                      if (__this_05 != (NDPMLPGANCI_o *)0x0) {
                        NDPMLPGANCI__FKFIIDIJIEI(__this_05,CJNHFNHJHPE_00,(MethodInfo *)0x0);
                    /* try { // try from 0338c6d0 to 0348c6f7 has its CatchHandler @ 0338c70c */
                        Nekki_SF2_GUI_Dialogs_LotteryDialog__OKJDJIGBMLI(__this,method_04);
                        (__this->fields).GGCLCAMEALI = false;
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
LAB_0338c6f4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

