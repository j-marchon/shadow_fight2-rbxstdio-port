// Nekki.SF2.GUI.Profile.BattlePassPanel$$OnDestroy @ RVA 0x359164C

void Nekki_SF2_GUI_Profile_BattlePassPanel__OnDestroy
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  EIFHKGFMIEN_c *pEVar1;
  MENMJFHKIDI_c *pMVar2;
  EIFHKGFMIEN_o *pEVar3;
  MENMJFHKIDI_o *__this_00;
  UniRx_CompositeDisposable_o *__this_01;
  MethodInfo *extraout_x1;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *pEVar4;
  EIFHKGFMIEN_o **ppEVar5;
  MENMJFHKIDI_o **ppMVar6;
  EIFHKGFMIEN_o *source;
  MENMJFHKIDI_o *source_00;
  
  if ((DAT_04568d76 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_ECIMACJIPAE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_OMIMKNHBAMI__);
    FUN_01bab630(&EIFHKGFMIEN_TypeInfo);
    FUN_01bab630(&MENMJFHKIDI_TypeInfo);
    FUN_01bab630(&Util_TypeInfo);
    DAT_04568d76 = 1;
    method = extraout_x1;
  }
  if (Util_TypeInfo->static_fields->IEGHLFIBMBL != false) {
    return;
  }
  pEVar4 = (__this->fields)._scroller;
  if (pEVar4 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
    ppEVar5 = &(pEVar4->fields).scrollerSnapped;
    source = *ppEVar5;
    pEVar3 = (EIFHKGFMIEN_o *)thunk_FUN_01bda818(EIFHKGFMIEN_TypeInfo,method);
    EIFHKGFMIEN___ctor(pEVar3,(Il2CppObject *)__this,
                       Method_Nekki_SF2_GUI_Profile_BattlePassPanel_OMIMKNHBAMI__,(MethodInfo *)0x0)
    ;
    pEVar3 = (EIFHKGFMIEN_o *)
             System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)pEVar3,(MethodInfo *)0x0);
    pEVar1 = EIFHKGFMIEN_TypeInfo;
    if (pEVar3 == (EIFHKGFMIEN_o *)0x0) {
      *ppEVar5 = (EIFHKGFMIEN_o *)0x0;
    }
    else if ((pEVar3->klass != EIFHKGFMIEN_TypeInfo) || (*ppEVar5 = pEVar3, pEVar3->klass != pEVar1)
            ) goto LAB_036917c8;
    thunk_FUN_01c20e04(ppEVar5,pEVar3);
    pEVar4 = (__this->fields)._scroller;
    if (pEVar4 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
      ppMVar6 = &(pEVar4->fields).scrollerScrollingChanged;
      source_00 = *ppMVar6;
      __this_00 = (MENMJFHKIDI_o *)thunk_FUN_01bda818(MENMJFHKIDI_TypeInfo);
      MENMJFHKIDI___ctor(__this_00,(Il2CppObject *)__this,
                         Method_Nekki_SF2_GUI_Profile_BattlePassPanel_ECIMACJIPAE__,
                         (MethodInfo *)0x0);
      pEVar3 = (EIFHKGFMIEN_o *)
               System_Delegate__Remove
                         ((System_Delegate_o *)source_00,(System_Delegate_o *)__this_00,
                          (MethodInfo *)0x0);
      pMVar2 = MENMJFHKIDI_TypeInfo;
      if (pEVar3 == (EIFHKGFMIEN_o *)0x0) {
        *ppMVar6 = (MENMJFHKIDI_o *)0x0;
      }
      else if (((MENMJFHKIDI_c *)pEVar3->klass != MENMJFHKIDI_TypeInfo) ||
              (*ppMVar6 = (MENMJFHKIDI_o *)pEVar3, (MENMJFHKIDI_c *)pEVar3->klass != pMVar2)) {
LAB_036917c8:
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pEVar3);
      }
      thunk_FUN_01c20e04(ppMVar6,pEVar3);
      __this_01 = (__this->fields).BNAIPPCOGPE;
      if (__this_01 != (UniRx_CompositeDisposable_o *)0x0) {
        UniRx_CompositeDisposable__Dispose(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

