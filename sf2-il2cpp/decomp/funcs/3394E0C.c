// Nekki.SF2.GUI.Profile.ProfileScene$$set_CurrentSection @ RVA 0x3394E0C

void Nekki_SF2_GUI_Profile_ProfileScene__set_CurrentSection
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_ItemsController_o **ppNVar1;
  undefined8 *puVar2;
  int iVar3;
  bool bVar4;
  int32_t iVar5;
  int32_t CPGKPBEINGA;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar6;
  System_String_o *pSVar7;
  Nekki_SF2_GUI_TableView_o *__this_00;
  UnityEngine_GameObject_o *pUVar8;
  Nekki_SF2_GUI_Profile_InfoPanel_o *pNVar9;
  Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this_01;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_RectTransform_o *__this_02;
  Nekki_SF2_GUI_Profile_BattlePassPanel_o *pNVar11;
  NDPMLPGANCI_o *__this_03;
  Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *pNVar12;
  LabelButton_o *pLVar13;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  DOPEEDABNEK_o *pDVar14;
  System_String_StaticFields *pSVar15;
  PKHMIGFEJCL_o *pPVar16;
  System_String_o **ppSVar17;
  Nekki_SF2_GUI_Profile_ItemsController_o *pNVar18;
  Nekki_SF2_GUI_Profile_PerksController_o *pNVar19;
  Nekki_SF2_GUI_LabelAlias_o *__this_04;
  Nekki_SF2_GUI_Profile_TricksController_o *pNVar20;
  Nekki_SF2_GUI_Profile_AchievementsController_o *pNVar21;
  Nekki_SF2_GUI_Profile_SealsController_o *pNVar22;
  System_Collections_Generic_List_HOOAAGABMBL__o *DHBBIJMJPNL;
  Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *pNVar23;
  
  if ((DAT_04567c4e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_DisableButton__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_EnableAllButtons__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_UpdateIndicators__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_20303);
    FUN_01bab630(&StringLiteral_11964);
    FUN_01bab630(&StringLiteral_11963);
    FUN_01bab630(&StringLiteral_20302);
    DAT_04567c4e = 1;
  }
  if ((CJNHFNHJHPE == 5) || ((__this->fields).AIAODGKGPEI == CJNHFNHJHPE)) {
    return;
  }
  if (CJNHFNHJHPE == 4) {
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar4 = MGNPHCAAEIO__BJIAIGCNFDJ((MethodInfo *)0x0);
    if (!bVar4) {
      return;
    }
  }
  pNVar6 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar6 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) ||
     (pPVar16 = (pNVar6->fields).QuestParameters, pPVar16 == (PKHMIGFEJCL_o *)0x0))
  goto LAB_034954f0;
  ppSVar17 = &(pPVar16->fields).CHFDDNODLGP;
  iVar5 = MMOGKBGEPGM__GFLCMDMEOBN(*ppSVar17,(MethodInfo *)0x0);
  CPGKPBEINGA = HLHCKNLCOBM__PPENGKDOGFE(CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* try { // try from 03494f3c to 03595177 has its CatchHandler @ 03494f3c
                       catch() { ... } // from try @ 03494f3c with catch @ 03494f3c
                       catch() { ... } // from try @ 03495250 with catch @ 03494f3c
                       catch() { ... } // from try @ 0349531c with catch @ 03494f3c
                       catch() { ... } // from try @ 034953d4 with catch @ 03494f3c */
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
  }
  MGNPHCAAEIO__BIFPGEGFDLK(iVar5,CPGKPBEINGA,(MethodInfo *)0x0);
  (__this->fields).AIAODGKGPEI = CJNHFNHJHPE;
  iVar5 = HLHCKNLCOBM__PPENGKDOGFE(CJNHFNHJHPE,(MethodInfo *)0x0);
  pSVar7 = MMOGKBGEPGM__GKMAFGODLLG(iVar5,(MethodInfo *)0x0);
  *ppSVar17 = pSVar7;
  thunk_FUN_01c20e04(ppSVar17,pSVar7);
  pNVar18 = (__this->fields).FOGBEOLOAGF;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ppNVar1 = &(__this->fields).FOGBEOLOAGF;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if ((*ppNVar1 == (Nekki_SF2_GUI_Profile_ItemsController_o *)0x0) ||
       (__this_00 = ((*ppNVar1)->fields)._TableView, __this_00 == (Nekki_SF2_GUI_TableView_o *)0x0))
    goto LAB_034954f0;
    Nekki_SF2_GUI_TableView__KillTween(__this_00,(MethodInfo *)0x0);
    if ((*ppNVar1 == (Nekki_SF2_GUI_Profile_ItemsController_o *)0x0) ||
       (pUVar8 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)*ppNVar1,(MethodInfo *)0x0),
       pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto LAB_034954f0;
    UnityEngine_GameObject__SetActive(pUVar8,false,(MethodInfo *)0x0);
  }
  pNVar9 = (__this->fields)._RightPanel;
  if (pNVar9 == (Nekki_SF2_GUI_Profile_InfoPanel_o *)0x0) goto LAB_034954f0;
  Nekki_SF2_GUI_Profile_InfoPanel__Clear(pNVar9,(MethodInfo *)0x0);
  __this_01 = (__this->fields)._LeftPanel;
  if ((((__this_01 == (Nekki_SF2_GUI_Profile_UserPerksPanel_o *)0x0) ||
       (pUVar10 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pUVar10 == (UnityEngine_Transform_o *)0x0)) ||
      (pUVar10 = UnityEngine_Transform__get_parent(pUVar10,(MethodInfo *)0x0),
      pUVar10 == (UnityEngine_Transform_o *)0x0)) ||
     (pUVar8 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0),
     pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto LAB_034954f0;
  UnityEngine_GameObject__SetActive(pUVar8,(__this->fields).AIAODGKGPEI != 4,(MethodInfo *)0x0);
  __this_02 = (__this->fields)._ItemsPanel;
  if ((__this_02 == (UnityEngine_RectTransform_o *)0x0) ||
     (pUVar8 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
     pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto LAB_034954f0;
  UnityEngine_GameObject__SetActive(pUVar8,(__this->fields).AIAODGKGPEI != 4,(MethodInfo *)0x0);
  pNVar11 = (__this->fields)._battlePassPanel;
  if ((pNVar11 == (Nekki_SF2_GUI_Profile_BattlePassPanel_o *)0x0) ||
     (pUVar8 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar11,(MethodInfo *)0x0),
     pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto LAB_034954f0;
  UnityEngine_GameObject__SetActive(pUVar8,(__this->fields).AIAODGKGPEI == 4,(MethodInfo *)0x0);
  iVar3 = (__this->fields).AIAODGKGPEI;
  __this_03 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_03 == (NDPMLPGANCI_o *)0x0) goto LAB_034954f0;
  if (iVar3 == 4) {
    NDPMLPGANCI__KJGGEPNHOBK(__this_03,(MethodInfo *)0x0);
    method_00 = extraout_x1;
  }
  else {
    NDPMLPGANCI__NPDADBCINPL(__this_03,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
  switch((__this->fields).AIAODGKGPEI) {
  case 0:
    Nekki_SF2_GUI_Profile_ProfileScene__HFHCHGEFAFD(__this,method_00);
    pNVar19 = (__this->fields)._PerksController;
    pNVar23 = (__this->fields)._ItemsSelectionManager;
    (__this->fields).FOGBEOLOAGF = (Nekki_SF2_GUI_Profile_ItemsController_o *)pNVar19;
    thunk_FUN_01c20e04(ppNVar1,pNVar19);
    if (pNVar23 == (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *)0x0) goto LAB_034954f0;
    Nekki_SF2_GUI_Profile_ItemsSelectionManager__set_SubItemsContainer
              (pNVar23,(JEIEEMKCNOJ_o *)pNVar19,(MethodInfo *)0x0);
    pNVar23 = (__this->fields)._ItemsSelectionManager;
    if (pNVar23 == (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *)0x0) goto LAB_034954f0;
    Nekki_SF2_GUI_Profile_ItemsSelectionManager__RestoreSelection(pNVar23,false,(MethodInfo *)0x0);
    pNVar9 = (__this->fields)._RightPanel;
    if ((pNVar9 == (Nekki_SF2_GUI_Profile_InfoPanel_o *)0x0) ||
       (pNVar19 = (__this->fields)._PerksController,
       pNVar19 == (Nekki_SF2_GUI_Profile_PerksController_o *)0x0)) goto LAB_034954f0;
    __this_04 = (pNVar9->fields)._NoContentMessageLabel;
    bVar4 = Nekki_SF2_GUI_Profile_PerksController__get_IsAvailablePerk(pNVar19,(MethodInfo *)0x0);
    if (__this_04 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_034954f0;
    puVar2 = &StringLiteral_20303;
                    /* try { // try from 03495178 to 0359519f has its CatchHandler @ 0349533c */
    if (!bVar4) {
      puVar2 = &StringLiteral_20302;
    }
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_04,(System_String_o *)*puVar2,(MethodInfo *)0x0);
    break;
  case 1:
    Nekki_SF2_GUI_Profile_ProfileScene__BIKNKNAPCJB(__this,method_00);
    pNVar20 = (__this->fields)._TricksController;
    pNVar23 = (__this->fields)._ItemsSelectionManager;
    (__this->fields).FOGBEOLOAGF = (Nekki_SF2_GUI_Profile_ItemsController_o *)pNVar20;
    thunk_FUN_01c20e04(ppNVar1,pNVar20);
    if (pNVar23 == (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *)0x0) goto LAB_034954f0;
    Nekki_SF2_GUI_Profile_ItemsSelectionManager__set_SubItemsContainer
              (pNVar23,(JEIEEMKCNOJ_o *)pNVar20,(MethodInfo *)0x0);
    pNVar23 = (__this->fields)._ItemsSelectionManager;
    if (pNVar23 == (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *)0x0) goto LAB_034954f0;
                    /* try { // try from 034951d4 to 035951fb has its CatchHandler @ 03495338 */
    Nekki_SF2_GUI_Profile_ItemsSelectionManager__RestoreSelection(pNVar23,false,(MethodInfo *)0x0);
    pNVar20 = (__this->fields)._TricksController;
    if (pNVar20 == (Nekki_SF2_GUI_Profile_TricksController_o *)0x0) goto LAB_034954f0;
    Nekki_SF2_GUI_Profile_ItemsController__ScrollToFirstCell
              ((Nekki_SF2_GUI_Profile_ItemsController_o *)pNVar20,0.0,(MethodInfo *)0x0);
    pNVar20 = (__this->fields)._TricksController;
    if (pNVar20 == (Nekki_SF2_GUI_Profile_TricksController_o *)0x0) goto LAB_034954f0;
    Nekki_SF2_GUI_Profile_ItemsController__UpdateSelection
              ((Nekki_SF2_GUI_Profile_ItemsController_o *)pNVar20,(MethodInfo *)0x0);
    pNVar20 = (__this->fields)._TricksController;
    if (pNVar20 == (Nekki_SF2_GUI_Profile_TricksController_o *)0x0) goto LAB_034954f0;
    Nekki_SF2_GUI_Profile_ItemsController__UpdateCellsState
              ((Nekki_SF2_GUI_Profile_ItemsController_o *)pNVar20,(MethodInfo *)0x0);
    pNVar20 = (__this->fields)._TricksController;
    if (pNVar20 == (Nekki_SF2_GUI_Profile_TricksController_o *)0x0) goto LAB_034954f0;
                    /* try { // try from 03495220 to 0359522b has its CatchHandler @ 03495330 */
    Nekki_SF2_GUI_Profile_TricksController__ScrollToFirstOpenItem(pNVar20,0.0,(MethodInfo *)0x0);
    break;
  case 2:
    Nekki_SF2_GUI_Profile_ProfileScene__BIKNKNAPCJB(__this,method_00);
                    /* try { // try from 03495230 to 0359523f has its CatchHandler @ 03495334 */
    pNVar21 = (__this->fields)._AchievementsController;
    pNVar23 = (__this->fields)._ItemsSelectionManager;
    (__this->fields).FOGBEOLOAGF = (Nekki_SF2_GUI_Profile_ItemsController_o *)pNVar21;
                    /* try { // try from 03495244 to 0359524f has its CatchHandler @ 0349532c */
    thunk_FUN_01c20e04(ppNVar1,pNVar21);
    if (pNVar23 == (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *)0x0) goto LAB_034954f0;
                    /* try { // try from 03495250 to 03595313 has its CatchHandler @ 03494f3c */
    Nekki_SF2_GUI_Profile_ItemsSelectionManager__set_SubItemsContainer
              (pNVar23,(JEIEEMKCNOJ_o *)pNVar21,(MethodInfo *)0x0);
    pNVar23 = (__this->fields)._ItemsSelectionManager;
    if (pNVar23 == (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *)0x0) goto LAB_034954f0;
    Nekki_SF2_GUI_Profile_ItemsSelectionManager__RestoreSelection(pNVar23,false,(MethodInfo *)0x0);
    pNVar21 = (__this->fields)._AchievementsController;
    if (pNVar21 == (Nekki_SF2_GUI_Profile_AchievementsController_o *)0x0) goto LAB_034954f0;
    bVar4 = Nekki_SF2_GUI_Profile_AchievementsController__IsAchievementWithReward
                      (pNVar21,(MethodInfo *)0x0);
    pNVar21 = (__this->fields)._AchievementsController;
    if (pNVar21 == (Nekki_SF2_GUI_Profile_AchievementsController_o *)0x0) goto LAB_034954f0;
    if (bVar4) {
      Nekki_SF2_GUI_Profile_AchievementsController__ScrollToItemWithReward
                (pNVar21,0.0,(MethodInfo *)0x0);
    }
    else {
      Nekki_SF2_GUI_Profile_ItemsController__ScrollToFirstCell
                ((Nekki_SF2_GUI_Profile_ItemsController_o *)pNVar21,0.0,(MethodInfo *)0x0);
    }
    pNVar22 = (Nekki_SF2_GUI_Profile_SealsController_o *)(__this->fields)._AchievementsController;
    goto joined_r0x034952ec;
  case 3:
    Nekki_SF2_GUI_Profile_ProfileScene__BIKNKNAPCJB(__this,method_00);
    pNVar22 = (__this->fields)._SealsController;
    pNVar23 = (__this->fields)._ItemsSelectionManager;
    (__this->fields).FOGBEOLOAGF = (Nekki_SF2_GUI_Profile_ItemsController_o *)pNVar22;
    thunk_FUN_01c20e04(ppNVar1,pNVar22);
    if (pNVar23 == (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *)0x0) goto LAB_034954f0;
    Nekki_SF2_GUI_Profile_ItemsSelectionManager__set_SubItemsContainer
              (pNVar23,(JEIEEMKCNOJ_o *)pNVar22,(MethodInfo *)0x0);
    pNVar22 = (__this->fields)._SealsController;
    if (pNVar22 == (Nekki_SF2_GUI_Profile_SealsController_o *)0x0) goto LAB_034954f0;
    Nekki_SF2_GUI_Profile_ItemsController__ScrollToFirstCell
              ((Nekki_SF2_GUI_Profile_ItemsController_o *)pNVar22,0.0,(MethodInfo *)0x0);
    pNVar22 = (__this->fields)._SealsController;
joined_r0x034952ec:
    if (pNVar22 == (Nekki_SF2_GUI_Profile_SealsController_o *)0x0) goto LAB_034954f0;
    Nekki_SF2_GUI_Profile_ItemsController__UpdateSelection
              ((Nekki_SF2_GUI_Profile_ItemsController_o *)pNVar22,(MethodInfo *)0x0);
    break;
  case 4:
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03495314 to 03595317 has its CatchHandler @ 03495328 */
    if (DAT_04563eaa == '\0') {
                    /* try { // try from 03495318 to 0359531b has its CatchHandler @ 03495324 */
                    /* try { // try from 0349531c to 03595353 has its CatchHandler @ 03494f3c */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03495318 with catch @ 03495324
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03495314 with catch @ 03495328
                        */
      DAT_04563eaa = '\x01';
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03495244 with catch @ 0349532c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03495220 with catch @ 03495330
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03495230 with catch @ 03495334
                        */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034951d4 with catch @ 03495338
                        */
      thunk_FUN_01ba7564();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03495178 with catch @ 0349533c
                        */
    }
    pDVar14 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
    if (pDVar14 == (DOPEEDABNEK_o *)0x0) goto LAB_034954f0;
    DHBBIJMJPNL = (pDVar14->fields)._BDIDINACBBH_k__BackingField;
                    /* try { // try from 03495354 to 03595357 has its CatchHandler @ 0349536c */
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    MGNPHCAAEIO__DAPBLAMONKL(DHBBIJMJPNL,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03495354 with catch @ 0349536c */
    pNVar11 = (__this->fields)._battlePassPanel;
    if (pNVar11 == (Nekki_SF2_GUI_Profile_BattlePassPanel_o *)0x0) goto LAB_034954f0;
    Nekki_SF2_GUI_Profile_BattlePassPanel__Refresh(pNVar11,(MethodInfo *)0x0);
  }
  pNVar18 = *ppNVar1;
  if (pNVar18 != (Nekki_SF2_GUI_Profile_ItemsController_o *)0x0) {
                    /* try { // try from 034953ac to 035953d3 has its CatchHandler @ 034953e8 */
    (*(pNVar18->klass->vtable)._39_MarkItemsAsViewed.methodPtr)
              (pNVar18,(pNVar18->klass->vtable)._39_MarkItemsAsViewed.method);
    if (*ppNVar1 != (Nekki_SF2_GUI_Profile_ItemsController_o *)0x0) {
      pUVar8 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)*ppNVar1,(MethodInfo *)0x0);
      if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto LAB_034954f0;
      UnityEngine_GameObject__SetActive(pUVar8,true,(MethodInfo *)0x0);
    }
  }
                    /* try { // try from 034953d4 to 035953df has its CatchHandler @ 03494f3c */
  pNVar12 = (__this->fields).GJIPOBCNEPG;
  if (pNVar12 != (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *)0x0) {
                    /* try { // try from 034953e0 to 035953e7 has its CatchHandler @ 034953e8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034953ac with catch @ 034953e8
                       catch(type#2 @ 00000000) { ... } // from try @ 034953e0 with catch @ 034953e8
                        */
    Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__UpdateIndicators
              ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)pNVar12,
               Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_UpdateIndicators__);
    pNVar12 = (__this->fields).GJIPOBCNEPG;
    if (pNVar12 != (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *)0x0) {
      Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__EnableAllButtons
                ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)pNVar12,
                 Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_EnableAllButtons__);
      pNVar12 = (__this->fields).GJIPOBCNEPG;
      if (pNVar12 != (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *)0x0) {
        Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__DisableButton
                  ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)pNVar12,CJNHFNHJHPE,
                   Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_DisableButton__);
        pLVar13 = (__this->fields)._ShowAchievementButton;
        if (pLVar13 != (LabelButton_o *)0x0) {
          pUVar8 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar13,(MethodInfo *)0x0);
          bVar4 = IMAPABEJECG__NCJLBDIMPED((MethodInfo *)0x0);
          if ((bVar4) && (bVar4 = IMAPABEJECG__HCDIBNJMKLH((MethodInfo *)0x0), bVar4)) {
            bVar4 = (__this->fields).AIAODGKGPEI == 2;
          }
          else {
            bVar4 = false;
          }
          if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar8,bVar4,(MethodInfo *)0x0);
            pLVar13 = (__this->fields)._ShowAchievementButton;
            if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            iVar5 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
            if (iVar5 == 8) {
              pSVar15 = (System_String_StaticFields *)&StringLiteral_11963;
            }
            else if (iVar5 == 0xb) {
              pSVar15 = (System_String_StaticFields *)&StringLiteral_11964;
            }
            else {
              pSVar15 = string_TypeInfo->static_fields;
            }
            if (pLVar13 != (LabelButton_o *)0x0) {
              LabelButton__set_Alias(pLVar13,pSVar15->Empty,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_034954f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

