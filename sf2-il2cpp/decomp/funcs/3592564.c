// Nekki.SF2.GUI.Profile.BattlePassPanel$$Init @ RVA 0x3592564

void Nekki_SF2_GUI_Profile_BattlePassPanel__Init
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  int32_t left;
  EIFHKGFMIEN_c *pEVar1;
  MENMJFHKIDI_c *pMVar2;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *pEVar3;
  EIFHKGFMIEN_o *pEVar4;
  MENMJFHKIDI_o *__this_00;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_RectOffset_o *__this_01;
  UnityEngine_UI_LayoutGroup_o *__this_02;
  System_Action_Action_BKLDKOMCOPN___o **ppSVar6;
  System_IObservable_T__o *source;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  EIFHKGFMIEN_o **ppEVar7;
  MENMJFHKIDI_o **ppMVar8;
  UnityEngine_RectOffset_o **ppUVar9;
  System_Action_Action_BKLDKOMCOPN___o *addHandler;
  EIFHKGFMIEN_o *a;
  MENMJFHKIDI_o *a_00;
  System_Action_Action_BKLDKOMCOPN___o *removeHandler;
  double dVar10;
  undefined8 in_d1;
  undefined4 uVar11;
  double __x;
  float fVar12;
  UnityEngine_Rect_o UVar13;
  double local_48;
  
  uVar11 = (undefined4)((ulong)in_d1 >> 0x20);
  if ((DAT_04568d82 & 1) == 0) {
    FUN_01bab630(&System_Action<Action<BKLDKOMCOPN>>_TypeInfo);
    FUN_01bab630(&System_Action<BKLDKOMCOPN>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_AJMCGPMEMFJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_ECIMACJIPAE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_OMIMKNHBAMI__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<HorizontalOrVerticalLayoutGroup>__);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&EIFHKGFMIEN_TypeInfo);
    FUN_01bab630(&MENMJFHKIDI_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<BKLDKOMCOPN>__);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<BKLDKOMCOPN>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&UnityEngine_RectOffset_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_<>c_DJPPAELDLFC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_<>c_JAHGJBJHNON__);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_BattlePassPanel_<>c_TypeInfo);
    DAT_04568d82 = 1;
  }
  pEVar3 = (__this->fields)._scroller;
  if (pEVar3 == (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) goto LAB_03692aa0;
  EnhancedUI_EnhancedScroller_EnhancedScroller__set_Delegate
            (pEVar3,(LEPEFNKEJBC_o *)__this,(MethodInfo *)0x0);
  pEVar3 = (__this->fields)._scroller;
  if (pEVar3 == (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) goto LAB_03692aa0;
  ppEVar7 = &(pEVar3->fields).scrollerSnapped;
  a = *ppEVar7;
  pEVar4 = (EIFHKGFMIEN_o *)thunk_FUN_01bda818(EIFHKGFMIEN_TypeInfo);
  EIFHKGFMIEN___ctor(pEVar4,(Il2CppObject *)__this,
                     Method_Nekki_SF2_GUI_Profile_BattlePassPanel_OMIMKNHBAMI__,(MethodInfo *)0x0);
  pEVar4 = (EIFHKGFMIEN_o *)
           System_Delegate__Combine
                     ((System_Delegate_o *)a,(System_Delegate_o *)pEVar4,(MethodInfo *)0x0);
  pEVar1 = EIFHKGFMIEN_TypeInfo;
  if (pEVar4 == (EIFHKGFMIEN_o *)0x0) {
    *ppEVar7 = (EIFHKGFMIEN_o *)0x0;
  }
  else if ((pEVar4->klass != EIFHKGFMIEN_TypeInfo) || (*ppEVar7 = pEVar4, pEVar4->klass != pEVar1))
  goto LAB_03692768;
  thunk_FUN_01c20e04(ppEVar7,pEVar4);
  pEVar3 = (__this->fields)._scroller;
  if (pEVar3 == (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) goto LAB_03692aa0;
  ppMVar8 = &(pEVar3->fields).scrollerScrollingChanged;
  a_00 = *ppMVar8;
  __this_00 = (MENMJFHKIDI_o *)thunk_FUN_01bda818(MENMJFHKIDI_TypeInfo);
  MENMJFHKIDI___ctor(__this_00,(Il2CppObject *)__this,
                     Method_Nekki_SF2_GUI_Profile_BattlePassPanel_ECIMACJIPAE__,(MethodInfo *)0x0);
  pEVar4 = (EIFHKGFMIEN_o *)
           System_Delegate__Combine
                     ((System_Delegate_o *)a_00,(System_Delegate_o *)__this_00,(MethodInfo *)0x0);
  pMVar2 = MENMJFHKIDI_TypeInfo;
  if (pEVar4 == (EIFHKGFMIEN_o *)0x0) {
    *ppMVar8 = (MENMJFHKIDI_o *)0x0;
  }
  else if (((MENMJFHKIDI_c *)pEVar4->klass != MENMJFHKIDI_TypeInfo) ||
          (*ppMVar8 = (MENMJFHKIDI_o *)pEVar4, (MENMJFHKIDI_c *)pEVar4->klass != pMVar2)) {
LAB_03692768:
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(pEVar4);
  }
  thunk_FUN_01c20e04(ppMVar8,pEVar4);
  pEVar3 = (__this->fields)._scroller;
  if (((pEVar3 == (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) ||
      (pUVar5 = (UnityEngine_RectTransform_o *)
                UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)pEVar3,(MethodInfo *)0x0),
      pUVar5 == (UnityEngine_RectTransform_o *)0x0)) ||
     (pUVar5->klass != UnityEngine_RectTransform_TypeInfo)) goto LAB_03692aa0;
  UVar13 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
  if (DAT_04561501 == '\0') {
    FUN_01bab630(0xc3d68000,CONCAT44(uVar11,UVar13.fields.m_YMin),UVar13.fields.m_Width,
                 UVar13.fields.m_Height,&System_Math_TypeInfo);
    DAT_04561501 = '\x01';
  }
  fVar12 = (UVar13.fields.m_Width + -429.0) * 0.5;
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __x = (double)fVar12;
  dVar10 = modf(__x,&local_48);
  if (0.0 <= fVar12) {
    if (dVar10 == 0.5) {
      dVar10 = 1.0;
      goto LAB_0369284c;
    }
    local_48 = (double)(long)(__x + 0.5);
  }
  else if (dVar10 == -0.5) {
    dVar10 = -1.0;
LAB_0369284c:
    if (((long)local_48 & 1U) != 0) {
      local_48 = local_48 + dVar10;
    }
  }
  else {
    local_48 = (double)(long)(__x + -0.5);
  }
  pEVar3 = (__this->fields)._scroller;
  left = -0x80000000;
  if (local_48 != INFINITY) {
    left = (int)local_48;
  }
  __this_01 = (UnityEngine_RectOffset_o *)thunk_FUN_01bda818(UnityEngine_RectOffset_TypeInfo);
  UnityEngine_RectOffset___ctor(__this_01,left,left,0,0,(MethodInfo *)0x0);
  if (pEVar3 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
    ppUVar9 = &(pEVar3->fields).padding;
    *ppUVar9 = __this_01;
    thunk_FUN_01c20e04(ppUVar9,__this_01);
    pEVar3 = (__this->fields)._scroller;
    if ((pEVar3 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) &&
       (pUVar5 = (pEVar3->fields).EKNAKFAPEGK, pUVar5 != (UnityEngine_RectTransform_o *)0x0)) {
      __this_02 = (UnityEngine_UI_LayoutGroup_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)pUVar5,
                             Method_UnityEngine_Component_GetComponent<HorizontalOrVerticalLayoutGroup>__
                            );
      pEVar3 = (__this->fields)._scroller;
      if ((pEVar3 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) &&
         (__this_02 != (UnityEngine_UI_LayoutGroup_o *)0x0)) {
        UnityEngine_UI_LayoutGroup__set_padding
                  (__this_02,(pEVar3->fields).padding,(MethodInfo *)0x0);
        if ((Nekki_SF2_GUI_Profile_BattlePassPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        addHandler = Nekki_SF2_GUI_Profile_BattlePassPanel_<>c_TypeInfo->static_fields->__9__27_0;
        if (addHandler == (System_Action_Action_BKLDKOMCOPN___o *)0x0) {
          if ((Nekki_SF2_GUI_Profile_BattlePassPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          addHandler = (System_Action_Action_BKLDKOMCOPN___o *)
                       thunk_FUN_01bda818(System_Action<Action<BKLDKOMCOPN>>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar6 = &Nekki_SF2_GUI_Profile_BattlePassPanel_<>c_TypeInfo->static_fields->__9__27_0;
          *ppSVar6 = addHandler;
          thunk_FUN_01c20e04(ppSVar6,addHandler);
        }
        if ((Nekki_SF2_GUI_Profile_BattlePassPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        removeHandler = Nekki_SF2_GUI_Profile_BattlePassPanel_<>c_TypeInfo->static_fields->__9__27_1
        ;
        if (removeHandler == (System_Action_Action_BKLDKOMCOPN___o *)0x0) {
          if ((Nekki_SF2_GUI_Profile_BattlePassPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          removeHandler =
               (System_Action_Action_BKLDKOMCOPN___o *)
               thunk_FUN_01bda818(System_Action<Action<BKLDKOMCOPN>>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar6 = &Nekki_SF2_GUI_Profile_BattlePassPanel_<>c_TypeInfo->static_fields->__9__27_1;
          *ppSVar6 = removeHandler;
          thunk_FUN_01c20e04(ppSVar6,removeHandler);
        }
        if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        source = UniRx_Observable__FromEvent<object>
                           ((System_Action_Action_T___o *)addHandler,
                            (System_Action_Action_T___o *)removeHandler,
                            Method_UniRx_Observable_FromEvent<BKLDKOMCOPN>__);
        onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<BKLDKOMCOPN>_TypeInfo);
        System_Action<object>___ctor();
        disposable = (Il2CppObject *)
                     UniRx_ObservableExtensions__Subscribe<object>
                               (source,onNext,
                                Method_UniRx_ObservableExtensions_Subscribe<BKLDKOMCOPN>__);
        UniRx_DisposableExtensions__AddTo<object>
                  (disposable,
                   (System_Collections_Generic_ICollection_IDisposable__o *)
                   (__this->fields).BNAIPPCOGPE,
                   Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
        return;
      }
    }
  }
LAB_03692aa0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

