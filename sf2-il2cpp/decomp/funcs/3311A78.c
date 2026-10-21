// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$Init @ RVA 0x3311A78

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__Init
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,System_String_o *MCJKMCKELIN,
               MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int32_t iVar5;
  UnityEngine_Events_UnityAction_o *pUVar6;
  System_String_o *pSVar7;
  JMDPBFOCHHP_o *pJVar8;
  JMDPBFOCHHP_HJLEKMDIDPO_o *pJVar9;
  System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *__this_00;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar11;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar12;
  System_Action_BaseScrollItem__o *CJNHFNHJHPE;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar13;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *pDVar14;
  Il2CppObject *pIVar15;
  PBAKFOBIHEG_o *pPVar16;
  System_Collections_IEnumerator_o *pSVar17;
  VirtualInvokeData *pVVar18;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar19;
  MethodInfo *in_x3;
  LabelButton_o *pLVar20;
  JMDPBFOCHHP_NOPCEDPNNKO_o *pJVar21;
  JMDPBFOCHHP_HJLEKMDIDPO_array *pJVar22;
  SFButton_o *pSVar23;
  long lVar24;
  ACHLOMELAJE_o *pAVar25;
  LPAPAMPGDFN_o *pLVar26;
  PBAKFOBIHEG_c *pPVar27;
  ulong uVar28;
  int32_t *piVar29;
  System_Collections_IEnumerator_o **ppSVar30;
  UnityEngine_Events_UnityEvent_o *pUVar31;
  Nekki_SF2_GUI_LabelAlias_o *pNVar32;
  System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *pSVar33;
  int iVar34;
  System_String_o *local_48;
  
  if ((DAT_045677b8 & 1) == 0) {
    FUN_01bab630(&System_Action<BaseScrollItem>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_CFOMPMAKJCD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_DJNLICOAJGO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_EAALEBDGAOE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_EIDAKAPJKGH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_JAGDCEOECMD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_OnScroll__);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<JMDPBFOCHHP_HJLEKMDIDPO>__);
    FUN_01bab630(&JMDPBFOCHHP_HJLEKMDIDPO_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Color,_Color,_ColorOptions>>__
                );
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Color,_Color,_ColorOptions>>__
                );
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_10920);
    FUN_01bab630(&StringLiteral_17347);
    FUN_01bab630(&StringLiteral_8722);
    FUN_01bab630(&StringLiteral_14092);
    FUN_01bab630(&StringLiteral_10919);
    DAT_045677b8 = 1;
  }
  local_48 = (System_String_o *)0x0;
  bVar4 = Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LOHIKLBCOOH
                    (__this,MCJKMCKELIN,&local_48,in_x3);
  if (!bVar4) {
    return;
  }
  pLVar20 = (__this->fields)._consumableButton;
  if (pLVar20 == (LabelButton_o *)0x0) goto LAB_034123c4;
  pUVar31 = (UnityEngine_Events_UnityEvent_o *)(pLVar20->fields).super.super.super.m_OnClick;
  pUVar6 = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
  UnityEngine_Events_UnityAction___ctor();
  if (pUVar31 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_034123c4;
  UnityEngine_Events_UnityEvent__AddListener(pUVar31,pUVar6,(MethodInfo *)0x0);
  pLVar20 = (__this->fields)._specialButton;
  if (pLVar20 == (LabelButton_o *)0x0) goto LAB_034123c4;
  pUVar31 = (UnityEngine_Events_UnityEvent_o *)(pLVar20->fields).super.super.super.m_OnClick;
  pUVar6 = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
  UnityEngine_Events_UnityAction___ctor();
  if (pUVar31 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_034123c4;
  UnityEngine_Events_UnityEvent__AddListener(pUVar31,pUVar6,(MethodInfo *)0x0);
  pNVar32 = (__this->fields)._text;
  pSVar7 = System_Int32__ToString((int)__this + 0x98,(MethodInfo *)0x0);
  pSVar7 = System_String__Concat(StringLiteral_17347,pSVar7,(MethodInfo *)0x0);
  if (pNVar32 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_034123c4;
  Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar32,pSVar7,(MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar8 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (((pJVar8 == (JMDPBFOCHHP_o *)0x0) ||
      (pJVar21 = (pJVar8->fields).OFMMMBIIDAE, pJVar21 == (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0)) ||
     (pSVar33 = (pJVar21->fields).GADHINPJDAF,
     pSVar33 == (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)0x0))
  goto LAB_034123c4;
  if (0 < (pSVar33->fields)._size) {
    iVar34 = 0;
    do {
      pJVar9 = (JMDPBFOCHHP_HJLEKMDIDPO_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar33,iVar34,
                          Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_get_Item__
                         );
      if (pJVar9 == (JMDPBFOCHHP_HJLEKMDIDPO_o *)0x0) goto LAB_034123c4;
      bVar4 = System_String__op_Equality
                        ((pJVar9->fields).BGHFADDGPAD,(__this->fields).HBJEOMFBMMC,(MethodInfo *)0x0
                        );
      lVar24 = Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_Add__;
      if (bVar4) {
        __this_00 = (__this->fields).FHPLGHNOJGE;
        if (__this_00 == (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)0x0)
        goto LAB_034123c4;
        pJVar22 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pJVar22 == (JMDPBFOCHHP_HJLEKMDIDPO_array *)0x0) goto LAB_034123c4;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pJVar22->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pJVar22->m_Items[(int)uVar2] = pJVar9;
          thunk_FUN_01c20e04(pJVar22->m_Items + (int)uVar2,pJVar9);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pJVar9,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
        }
      }
      iVar34 = iVar34 + 1;
    } while (iVar34 < (pSVar33->fields)._size);
  }
  bVar4 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).FHPLGHNOJGE,
                     Method_DJNBJHPDKDP_OBECCOPBADO<JMDPBFOCHHP_HJLEKMDIDPO>__);
  pSVar23 = (__this->fields)._hintButton;
  (__this->fields).OCMNMHFIJCJ = bVar4;
  if ((pSVar23 == (SFButton_o *)0x0) ||
     (pUVar10 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pSVar23,(MethodInfo *)0x0),
     pUVar10 == (UnityEngine_GameObject_o *)0x0)) goto LAB_034123c4;
  UnityEngine_GameObject__SetActive(pUVar10,(__this->fields).OCMNMHFIJCJ,(MethodInfo *)0x0);
  if ((__this->fields).OCMNMHFIJCJ == false) {
    pUVar10 = (__this->fields)._hintDescriptionRoot;
    if ((pUVar10 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar10 = UnityEngine_GameObject__get_gameObject(pUVar10,(MethodInfo *)0x0),
       pUVar10 == (UnityEngine_GameObject_o *)0x0)) goto LAB_034123c4;
    UnityEngine_GameObject__SetActive(pUVar10,false,(MethodInfo *)0x0);
  }
  else {
    pSVar33 = (__this->fields).FHPLGHNOJGE;
    pJVar9 = (JMDPBFOCHHP_HJLEKMDIDPO_o *)thunk_FUN_01bda818(JMDPBFOCHHP_HJLEKMDIDPO_TypeInfo);
    JMDPBFOCHHP_HJLEKMDIDPO___ctor(pJVar9,(MethodInfo *)0x0);
    lVar24 = Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_Add__;
    if (pSVar33 == (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)0x0)
    goto LAB_034123c4;
    pJVar22 = (pSVar33->fields)._items;
    (pSVar33->fields)._version = (pSVar33->fields)._version + 1;
    if (pJVar22 == (JMDPBFOCHHP_HJLEKMDIDPO_array *)0x0) goto LAB_034123c4;
    uVar2 = (pSVar33->fields)._size;
    if (uVar2 < (uint)pJVar22->max_length) {
      (pSVar33->fields)._size = uVar2 + 1;
      pJVar22->m_Items[(int)uVar2] = pJVar9;
      thunk_FUN_01c20e04(pJVar22->m_Items + (int)uVar2,pJVar9);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar33,(Il2CppObject *)pJVar9,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
    }
    pUVar10 = (__this->fields)._hintRoot;
    if ((pUVar10 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar10 = UnityEngine_GameObject__get_gameObject(pUVar10,(MethodInfo *)0x0),
       pUVar10 == (UnityEngine_GameObject_o *)0x0)) goto LAB_034123c4;
    UnityEngine_GameObject__SetActive(pUVar10,false,(MethodInfo *)0x0);
    pSVar23 = (__this->fields)._hintButton;
    if ((pSVar23 == (SFButton_o *)0x0) ||
       (pUVar11 = (pSVar23->fields).super.m_OnClick,
       pUVar11 == (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) goto LAB_034123c4;
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar11,(MethodInfo *)0x0);
    pSVar23 = (__this->fields)._hintButton;
    if (pSVar23 == (SFButton_o *)0x0) goto LAB_034123c4;
    pUVar31 = (UnityEngine_Events_UnityEvent_o *)(pSVar23->fields).super.m_OnClick;
    pUVar6 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar31 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_034123c4;
    UnityEngine_Events_UnityEvent__AddListener(pUVar31,pUVar6,(MethodInfo *)0x0);
  }
  pNVar12 = (__this->fields)._scroll;
  if ((__this->fields).OCMNMHFIJCJ == false) {
    if (pNVar12 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_034123c4;
  }
  else {
    if (pNVar12 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_034123c4;
    *(undefined2 *)&(pNVar12->fields)._visibilityChecker = 0;
  }
  Nekki_SF2_GUI_SimpleScroll__Init(pNVar12,(MethodInfo *)0x0);
  pNVar12 = (__this->fields)._scroll;
  CJNHFNHJHPE = (System_Action_BaseScrollItem__o *)
                thunk_FUN_01bda818(System_Action<BaseScrollItem>_TypeInfo);
  System_Action<object>___ctor();
  if (pNVar12 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_034123c4;
  Nekki_SF2_GUI_SimpleScroll__add_OnScroll(pNVar12,CJNHFNHJHPE,(MethodInfo *)0x0);
  pNVar12 = (__this->fields)._scroll;
  if ((pNVar12 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) ||
     (pUVar10 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pNVar12,(MethodInfo *)0x0),
     pUVar10 == (UnityEngine_GameObject_o *)0x0)) goto LAB_034123c4;
  UnityEngine_GameObject__SetActive(pUVar10,true,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__OAIJOOFCOEK(__this,method_00);
  pNVar12 = (__this->fields)._scroll;
  if ((pNVar12 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) ||
     (lVar24 = *(long *)&(pNVar12->fields)._snapEase, lVar24 == 0)) goto LAB_034123c4;
  if (*(int *)(lVar24 + 0x18) < 2) {
LAB_03411fd8:
    iVar34 = 0;
LAB_03411fe4:
    pMVar19 = (MethodInfo *)0x8;
    Nekki_SF2_GUI_SimpleScroll__ScrollToItem(pNVar12,iVar34,0.0,8,(MethodInfo *)0x0);
  }
  else {
    bVar4 = PCOEHCPGBBG__BDLEIEHBFAD(local_48,(MethodInfo *)0x0);
    if (bVar4) {
      pNVar12 = (__this->fields)._scroll;
      if (pNVar12 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_034123c4;
      goto LAB_03411fd8;
    }
    pMVar19 = (MethodInfo *)0x0;
    bVar4 = System_String__op_Equality
                      ((__this->fields).HBJEOMFBMMC,StringLiteral_8722,(MethodInfo *)0x0);
    if (bVar4) {
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
      pAVar25 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar25 == (ACHLOMELAJE_o *)0x0) ||
         (pLVar26 = (pAVar25->fields).LMCDOMHENMC, pLVar26 == (LPAPAMPGDFN_o *)0x0))
      goto LAB_034123c4;
      if ((pLVar26->fields).AMIMEMOELHE != 0x32) goto LAB_034123b4;
      iVar5 = Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__MKECLNPFGHC(__this,local_48,pMVar19);
      pNVar12 = (__this->fields)._scroll;
      if ((pNVar12 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) ||
         (lVar24 = *(long *)&(pNVar12->fields)._snapEase, lVar24 == 0)) goto LAB_034123c4;
      iVar34 = *(int *)(lVar24 + 0x18);
      iVar3 = 0;
      if (iVar34 != 0) {
        iVar3 = iVar5 / iVar34;
      }
      iVar34 = iVar5 - iVar3 * iVar34;
      goto LAB_03411fe4;
    }
LAB_034123b4:
    Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__CACDLMIOJNI(__this,local_48,pMVar19);
  }
  if ((__this->fields).OCMNMHFIJCJ == false) {
    Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LNAECHIOFNK(__this,true,pMVar19);
    pNVar13 = (__this->fields)._nextConsumable;
    if (pNVar13 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_034123c4;
    Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
              (pNVar13,StringLiteral_14092,StringLiteral_10920,(MethodInfo *)0x0);
    pNVar13 = (__this->fields)._nextConsumable;
    if (pNVar13 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_034123c4;
    Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
              (pNVar13,StringLiteral_14092,StringLiteral_10919,(MethodInfo *)0x0);
    pNVar13 = (__this->fields)._nextConsumable;
    if ((pNVar13 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) ||
       (pUVar11 = (pNVar13->fields).super.super.m_OnClick,
       pUVar11 == (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) goto LAB_034123c4;
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar11,(MethodInfo *)0x0);
    pNVar13 = (__this->fields)._nextConsumable;
    if (pNVar13 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_034123c4;
    pUVar31 = (UnityEngine_Events_UnityEvent_o *)(pNVar13->fields).super.super.m_OnClick;
    pUVar6 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar31 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_034123c4;
    UnityEngine_Events_UnityEvent__AddListener(pUVar31,pUVar6,(MethodInfo *)0x0);
    pNVar13 = (__this->fields)._prevConsumable;
    if (pNVar13 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_034123c4;
    Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
              (pNVar13,StringLiteral_14092,StringLiteral_10920,(MethodInfo *)0x0);
    pNVar13 = (__this->fields)._prevConsumable;
    if (pNVar13 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_034123c4;
    Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
              (pNVar13,StringLiteral_14092,StringLiteral_10919,(MethodInfo *)0x0);
    pNVar13 = (__this->fields)._prevConsumable;
    if ((pNVar13 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) ||
       (pUVar11 = (pNVar13->fields).super.super.m_OnClick,
       pUVar11 == (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) goto LAB_034123c4;
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar11,(MethodInfo *)0x0);
    pNVar13 = (__this->fields)._prevConsumable;
    if (pNVar13 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_034123c4;
    pUVar31 = (UnityEngine_Events_UnityEvent_o *)(pNVar13->fields).super.super.m_OnClick;
    pUVar6 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar31 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_034123c4;
    UnityEngine_Events_UnityEvent__AddListener(pUVar31,pUVar6,(MethodInfo *)0x0);
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
    pAVar25 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar25 == (ACHLOMELAJE_o *)0x0) ||
       (pLVar26 = (pAVar25->fields).LMCDOMHENMC, pLVar26 == (LPAPAMPGDFN_o *)0x0))
    goto LAB_034123c4;
    if ((pLVar26->fields).AMIMEMOELHE != 10) {
      pDVar14 = DG_Tweening_DOTweenModuleUI__DOFade
                          ((UnityEngine_UI_Image_o *)(__this->fields)._nextConsumableHighlight,1.0,
                           1.0,(MethodInfo *)0x0);
      pIVar15 = DG_Tweening_TweenSettingsExtensions__SetEase<object>
                          ((Il2CppObject *)pDVar14,3,
                           Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Color,_Color,_ColorOptions>>__
                          );
      DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                (pIVar15,8,1,
                 Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Color,_Color,_ColorOptions>>__
                );
      pDVar14 = DG_Tweening_DOTweenModuleUI__DOFade
                          ((UnityEngine_UI_Image_o *)(__this->fields)._prevConsumableHighlight,1.0,
                           1.0,(MethodInfo *)0x0);
      pIVar15 = DG_Tweening_TweenSettingsExtensions__SetEase<object>
                          ((Il2CppObject *)pDVar14,3,
                           Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Color,_Color,_ColorOptions>>__
                          );
      DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                (pIVar15,8,1,
                 Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Color,_Color,_ColorOptions>>__
                );
    }
  }
  else {
    Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LNAECHIOFNK(__this,false,pMVar19);
  }
  pNVar32 = (__this->fields)._descLbl;
  if ((pNVar32 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar10 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pNVar32,(MethodInfo *)0x0),
     pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
    pMVar19 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(pUVar10,false,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__UpdateData(__this,false,pMVar19);
    pPVar16 = CoroutineManager__get_Current((MethodInfo *)0x0);
    pSVar17 = Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__OEFGGDKMCPB(__this,method_01);
    if (pPVar16 != (PBAKFOBIHEG_o *)0x0) {
      pPVar27 = pPVar16->klass;
      uVar1._0_1_ = (pPVar27->_2).rank;
      uVar1._1_1_ = (pPVar27->_2).minimumAlignment;
      uVar28 = (ulong)uVar1;
      if (uVar28 != 0) {
        piVar29 = &((pPVar27->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar29 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar18 = pPVar27->vtable + *piVar29;
            goto LAB_034122b8;
          }
          uVar28 = uVar28 - 1;
          piVar29 = piVar29 + 4;
        } while (uVar28 != 0);
      }
      pVVar18 = (VirtualInvokeData *)FUN_01b81914(pPVar16,PBAKFOBIHEG_TypeInfo,0);
LAB_034122b8:
      pSVar17 = (System_Collections_IEnumerator_o *)
                (*pVVar18->methodPtr)(pPVar16,pSVar17,1,pVVar18->method);
      ppSVar30 = &(__this->fields).ALMLDADAHFC;
      *ppSVar30 = pSVar17;
      thunk_FUN_01c20e04(ppSVar30,pSVar17);
      return;
    }
  }
LAB_034123c4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

