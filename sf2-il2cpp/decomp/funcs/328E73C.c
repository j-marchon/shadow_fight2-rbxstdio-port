// Nekki.SF2.GUI.Dialogs.LotteryDialog.DGJBHIIPJNE$$MoveNext @ RVA 0x328E73C

bool Nekki_SF2_GUI_Dialogs_LotteryDialog_DGJBHIIPJNE__MoveNext
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_DGJBHIIPJNE_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  UnityEngine_WaitForEndOfFrame_o *__this_00;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *pEVar3;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar4;
  MethodInfo *extraout_x1;
  LPGLKMNHELJ_o *pLVar5;
  Il2CppObject **ppIVar6;
  Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this_01;
  UnityEngine_WaitForEndOfFrame_o **ppUVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((DAT_04567302 & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    DAT_04567302 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  __this_01 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    fVar8 = (__this->fields)._i_5__6;
    fVar10 = (__this->fields)._accelerationPerSec_5__4;
    (__this->fields).__1__state = -1;
    fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar8 = fVar8 + fVar10 * fVar9;
    (__this->fields)._i_5__6 = fVar8;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo,method);
    }
    LIIFLGALGNK__EGKCJPCMNNP(0.5,(MethodInfo *)0x0);
    (__this->fields)._direction_5__2 = 1.0;
    iVar2 = UnityEngine_Random__Range(10000,15000,(MethodInfo *)0x0);
    (__this->fields)._maxVelocity_5__3 = iVar2;
    (__this->fields)._accelerationPerSec_5__4 = 4000.0;
    __this_00 = (UnityEngine_WaitForEndOfFrame_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(__this_00,(MethodInfo *)0x0);
    ppUVar7 = &(__this->fields)._delay_5__5;
    *ppUVar7 = __this_00;
    thunk_FUN_01c20e04(ppUVar7,__this_00);
    (__this->fields)._i_5__6 = 0.0;
    fVar8 = 0.0;
  }
  if (__this_01 != (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *)0x0) {
    fVar9 = (__this->fields)._direction_5__2;
    pEVar3 = (__this_01->fields).Scroller;
    fVar10 = (float)(__this->fields)._maxVelocity_5__3;
    if (fVar8 < fVar10) {
      if (pEVar3 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
        EnhancedUI_EnhancedScroller_EnhancedScroller__set_LinearVelocity
                  (pEVar3,fVar8 * fVar9,(MethodInfo *)0x0);
        ppIVar6 = &(__this->fields).__2__current;
        *ppIVar6 = (Il2CppObject *)(__this->fields)._delay_5__5;
        thunk_FUN_01c20e04(ppIVar6);
        (__this->fields).__1__state = 1;
        return true;
      }
    }
    else if (pEVar3 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
      EnhancedUI_EnhancedScroller_EnhancedScroller__set_LinearVelocity
                (pEVar3,fVar9 * fVar10,(MethodInfo *)0x0);
      pEVar3 = (__this_01->fields).Scroller;
      if (pEVar3 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
        (pEVar3->fields).snapTweenTime = 1.5;
        pLVar5 = (__this_01->fields).DKMMBMBMJBO;
                    /* try { // try from 0338e8a8 to 0348e913 has its CatchHandler @ 0338e8a8
                       catch() { ... } // from try @ 0338e8a8 with catch @ 0338e8a8
                       catch() { ... } // from try @ 0338ea34 with catch @ 0338e8a8
                       catch() { ... } // from try @ 0338ea7c with catch @ 0338e8a8
                       catch() { ... } // from try @ 0338eadc with catch @ 0338e8a8 */
        (__this_01->fields).OIKLOAGFFGO = 2;
        if (pLVar5 != (LPGLKMNHELJ_o *)0x0) {
          if ((pLVar5->fields).BGHFADDGPAD == 1) {
            if ((__this_01->fields).FBODAFDBNLH != (BECIPDJBAOG_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_LotteryDialog__KAPGCIMJPED(__this_01,(MethodInfo *)0x0);
            }
            routine = Nekki_SF2_GUI_Dialogs_LotteryDialog__CFHLCAMKGPN
                                (__this_01,(__this->fields)._maxVelocity_5__3,(MethodInfo *)0x0);
            pUVar4 = UnityEngine_MonoBehaviour__StartCoroutine
                               ((UnityEngine_MonoBehaviour_o *)__this_01,routine,(MethodInfo *)0x0);
            (__this_01->fields).IIMLAADGBEE = pUVar4;
            thunk_FUN_01c20e04(&(__this_01->fields).IIMLAADGBEE);
          }
                    /* try { // try from 0338e914 to 0348e93f has its CatchHandler @ 0338ea4c */
          return false;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

