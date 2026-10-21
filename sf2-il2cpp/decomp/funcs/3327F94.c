// Nekki.SF2.GUI.Map.RaidKeysRowView.FBNELGBEPFJ$$MoveNext @ RVA 0x3327F94

bool Nekki_SF2_GUI_Map_RaidKeysRowView_FBNELGBEPFJ__MoveNext
               (Nekki_SF2_GUI_Map_RaidKeysRowView_FBNELGBEPFJ_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_CanvasGroup_o *pUVar2;
  UnityEngine_WaitForSecondsRealtime_o *__this_00;
  undefined8 uVar3;
  Nekki_SF2_GUI_Map_RaidKeysRowView_o *pNVar4;
  Il2CppObject **ppIVar5;
  UnityEngine_WaitForSecondsRealtime_o **ppUVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = __this;
  if ((DAT_045678a8 & 1) == 0) {
    auVar7 = FUN_01bab630(&UnityEngine_WaitForSecondsRealtime_TypeInfo);
    DAT_045678a8 = 1;
  }
  uVar3 = auVar7._0_8_;
  iVar1 = (__this->fields).__1__state;
  pNVar4 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    iVar1 = (__this->fields)._i_5__3 + 1;
    (__this->fields)._i_5__3 = iVar1;
    if (iVar1 < 2) {
LAB_03428054:
      ppIVar5 = &(__this->fields).__2__current;
      *ppIVar5 = (Il2CppObject *)(__this->fields)._delay_5__2;
      thunk_FUN_01c20e04(ppIVar5);
      (__this->fields).__1__state = 1;
      return true;
    }
    if (pNVar4 != (Nekki_SF2_GUI_Map_RaidKeysRowView_o *)0x0) {
      pUVar2 = (pNVar4->fields)._keyPanelCanvasGroup;
      uVar3 = 0;
      if (pUVar2 != (UnityEngine_CanvasGroup_o *)0x0) {
        UnityEngine_CanvasGroup__set_alpha(pUVar2,1.0,(MethodInfo *)0x0);
        return false;
      }
    }
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if (pNVar4 != (Nekki_SF2_GUI_Map_RaidKeysRowView_o *)0x0) {
      pUVar2 = (pNVar4->fields)._keyPanelCanvasGroup;
      uVar3 = 0;
      if (pUVar2 != (UnityEngine_CanvasGroup_o *)0x0) {
                    /* try { // try from 03427ff4 to 035280b7 has its CatchHandler @ 03427ff4
                       catch() { ... } // from try @ 03427ff4 with catch @ 03427ff4
                       catch() { ... } // from try @ 0342812c with catch @ 03427ff4
                       catch() { ... } // from try @ 03428164 with catch @ 03427ff4
                       catch() { ... } // from try @ 03428170 with catch @ 03427ff4
                       catch() { ... } // from try @ 034281a4 with catch @ 03427ff4
                       catch() { ... } // from try @ 034281d4 with catch @ 03427ff4 */
        UnityEngine_CanvasGroup__set_alpha(pUVar2,0.001,(MethodInfo *)0x0);
        __this_00 = (UnityEngine_WaitForSecondsRealtime_o *)
                    thunk_FUN_01bda818(UnityEngine_WaitForSecondsRealtime_TypeInfo);
        UnityEngine_WaitForSecondsRealtime___ctor(__this_00,0.01,(MethodInfo *)0x0);
        ppUVar6 = &(__this->fields)._delay_5__2;
        *ppUVar6 = __this_00;
        thunk_FUN_01c20e04(ppUVar6,__this_00);
        (__this->fields)._i_5__3 = 0;
        goto LAB_03428054;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar3,auVar7._8_8_);
}

