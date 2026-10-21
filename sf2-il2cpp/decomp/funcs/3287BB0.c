// Nekki.SF2.GUI.Dialogs.LotteryDialog$$OnDestroy @ RVA 0x3287BB0

void Nekki_SF2_GUI_Dialogs_LotteryDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  bool bVar3;
  UniRx_CompositeDisposable_o *__this_00;
  System_Action_o *pSVar4;
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar5;
  UnityEngine_GameObject_o *HODGKDNOHLP;
  UnityEngine_Events_UnityEvent_o *__this_01;
  NDPMLPGANCI_o *__this_02;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  DG_Tweening_Sequence_o *t;
  PBAKFOBIHEG_o *pPVar6;
  VirtualInvokeData *pVVar7;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *pMVar8;
  LabelButton_o *pLVar9;
  CocosAnimation_o *pCVar10;
  PBAKFOBIHEG_c *pPVar11;
  ulong uVar12;
  int32_t *piVar13;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar14;
  Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this_03;
  System_Collections_IEnumerator_o *pSVar15;
  
  if ((DAT_045672cb & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_BPHEMMPAJGO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_DPHGELLABKO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_GJBIHHLINEG__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Util_TypeInfo);
    FUN_01bab630(&WideScreenController_TypeInfo);
    DAT_045672cb = 1;
  }
  if (Util_TypeInfo->static_fields->IEGHLFIBMBL != false) {
    return;
  }
  __this_00 = (__this->fields).HBJPBPBIOOB;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    WideScreenController__remove_UpdateEvent(pSVar4,(MethodInfo *)0x0);
    pLVar9 = (__this->fields).BtnSpin;
    if ((pLVar9 != (LabelButton_o *)0x0) &&
       (pUVar5 = (pLVar9->fields).super.super.super.m_OnClick,
       pUVar5 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)pUVar5,(MethodInfo *)0x0);
      pLVar9 = (__this->fields).BtnSpinCurrency;
      if ((pLVar9 != (LabelButton_o *)0x0) &&
         (pUVar5 = (pLVar9->fields).super.super.super.m_OnClick,
         pUVar5 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
        UnityEngine_Events_UnityEventBase__RemoveAllListeners
                  ((UnityEngine_Events_UnityEventBase_o *)pUVar5,(MethodInfo *)0x0);
        pLVar9 = (__this->fields).BtnSpinAD;
        if (pLVar9 != (LabelButton_o *)0x0) {
          bVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled
                            ((UnityEngine_Behaviour_o *)pLVar9,(MethodInfo *)0x0);
          if (bVar3) {
            pLVar9 = (__this->fields).BtnSpinAD;
            if ((pLVar9 == (LabelButton_o *)0x0) ||
               (pUVar5 = (pLVar9->fields).super.super.super.m_OnClick,
               pUVar5 == (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) goto LAB_03387fb0;
            UnityEngine_Events_UnityEventBase__RemoveAllListeners
                      ((UnityEngine_Events_UnityEventBase_o *)pUVar5,(MethodInfo *)0x0);
          }
          if (DAT_04565b84 == '\0') {
            FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
            DAT_04565b84 = '\x01';
          }
          pNVar14 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                    _JPDNDPEAJAL_k__BackingField;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pNVar14,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (bVar3) {
            if (DAT_04565b84 == '\0') {
              FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
              DAT_04565b84 = '\x01';
            }
            pNVar14 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                      _JPDNDPEAJAL_k__BackingField;
            if (pNVar14 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_03387fb0;
            __this_03 = (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)(pNVar14->fields)._energy;
            pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            if (__this_03 == (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)0x0) goto LAB_03387fb0;
            Nekki_SF2_GUI_Menu_MenuMoneyPanel__remove_OnRubyBtnClick
                      (__this_03,pSVar4,(MethodInfo *)0x0);
            if (DAT_04565b84 == '\0') {
              FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
              DAT_04565b84 = '\x01';
            }
            pNVar14 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                      _JPDNDPEAJAL_k__BackingField;
            HODGKDNOHLP = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pNVar14 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_03387fb0;
            Nekki_SF2_GUI_Menu_MainMenu__RestoreParentAndTryShowScroll
                      (pNVar14,HODGKDNOHLP,(MethodInfo *)0x0);
            if (DAT_04565b84 == '\0') {
              FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
              DAT_04565b84 = '\x01';
            }
            pNVar14 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                      _JPDNDPEAJAL_k__BackingField;
            if (pNVar14 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_03387fb0;
            Nekki_SF2_GUI_Menu_MainMenu__set_IsEnabled(pNVar14,true,(MethodInfo *)0x0);
          }
          pCVar10 = (__this->fields).WinEffect;
          if ((pCVar10 != (CocosAnimation_o *)0x0) &&
             (__this_01 = (pCVar10->fields).OnAnimationComplete,
             __this_01 != (UnityEngine_Events_UnityEvent_o *)0x0)) {
            UnityEngine_Events_UnityEventBase__RemoveAllListeners
                      ((UnityEngine_Events_UnityEventBase_o *)__this_01,(MethodInfo *)0x0);
            __this_02 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
            CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                          thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
            System_Action<Int32Enum>___ctor();
            if (__this_02 != (NDPMLPGANCI_o *)0x0) {
              NDPMLPGANCI__ILJKHKMFKAJ(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
              t = (__this->fields).AJFGBJDEEIJ;
              pMVar8 = extraout_x1;
              if (t != (DG_Tweening_Sequence_o *)0x0) {
                DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)t,false,(MethodInfo *)0x0);
                pMVar8 = extraout_x1_00;
              }
              Nekki_SF2_GUI_Dialogs_LotteryDialog__FIODMEOCNHA(__this,pMVar8);
              FDEOKGMPLBK__DGLJCGNHLIG((MethodInfo *)0x0);
              pMVar8 = extraout_x1_01;
              if ((__this->fields).NJMEPPOGCLN != (System_Collections_IEnumerator_o *)0x0) {
                pPVar6 = CoroutineManager__get_Current((MethodInfo *)0x0);
                if (pPVar6 == (PBAKFOBIHEG_o *)0x0) goto LAB_03387fb0;
                ppSVar1 = &(__this->fields).NJMEPPOGCLN;
                pPVar11 = pPVar6->klass;
                pSVar15 = *ppSVar1;
                uVar2._0_1_ = (pPVar11->_2).rank;
                uVar2._1_1_ = (pPVar11->_2).minimumAlignment;
                uVar12 = (ulong)uVar2;
                if (uVar12 != 0) {
                  piVar13 = &((pPVar11->_1).interfaceOffsets)->offset;
                  do {
                    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                        (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                      pVVar7 = pPVar11->vtable + (*piVar13 + 1);
                      goto LAB_03387f70;
                    }
                    uVar12 = uVar12 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar12 != 0);
                }
                pVVar7 = (VirtualInvokeData *)FUN_01b81914(pPVar6,PBAKFOBIHEG_TypeInfo,1);
LAB_03387f70:
                (*pVVar7->methodPtr)(pPVar6,pSVar15,pVVar7->method);
                *ppSVar1 = (System_Collections_IEnumerator_o *)0x0;
                thunk_FUN_01c20e04(ppSVar1,0);
                pMVar8 = extraout_x1_02;
              }
              Nekki_SF2_GUI_Dialogs_LotteryDialog__BMMFIILCION(__this,pMVar8);
              Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy
                        ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_03387fb0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

