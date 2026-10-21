// TypeDefIndex 2356
// Namespace: 
// [CompilerGenerated]
// private sealed class RaidKeysRowView.FBNELGBEPFJ : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public RaidKeysRowView <>4__this; // 0x20
//   private WaitForSecondsRealtime <delay>5__2; // 0x28
//   private int <i>5__3; // 0x30

// ===== public void .ctor(int <>1__state)  [RVA 0x3327F68]
// Nekki.SF2.GUI.Map.RaidKeysRowView.FBNELGBEPFJ$$.ctor @ RVA 0x3327F68

void Nekki_SF2_GUI_Map_RaidKeysRowView_FBNELGBEPFJ___ctor
               (Nekki_SF2_GUI_Map_RaidKeysRowView_FBNELGBEPFJ_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x3327F90]
// Nekki.SF2.GUI.Map.RaidKeysRowView.FBNELGBEPFJ$$System.IDisposable.Dispose @ RVA 0x3327F90

void Nekki_SF2_GUI_Map_RaidKeysRowView_FBNELGBEPFJ__System_IDisposable_Dispose
               (Nekki_SF2_GUI_Map_RaidKeysRowView_FBNELGBEPFJ_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x3327F94]
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


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x332809C]
// Nekki.SF2.GUI.Map.RaidKeysRowView.FBNELGBEPFJ$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x332809C

Il2CppObject *
Nekki_SF2_GUI_Map_RaidKeysRowView_FBNELGBEPFJ__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_Map_RaidKeysRowView_FBNELGBEPFJ_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x33280A4]
// Nekki.SF2.GUI.Map.RaidKeysRowView.FBNELGBEPFJ$$System.Collections.IEnumerator.Reset @ RVA 0x33280A4

void Nekki_SF2_GUI_Map_RaidKeysRowView_FBNELGBEPFJ__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_Map_RaidKeysRowView_FBNELGBEPFJ_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
                    /* try { // try from 034280b8 to 035280bf has its CatchHandler @ 03428188 */
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_Map_RaidKeysRowView_FBNELGBEPFJ_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x33280DC]
// Nekki.SF2.GUI.Map.RaidKeysRowView.FBNELGBEPFJ$$System.Collections.IEnumerator.get_Current @ RVA 0x33280DC

Il2CppObject *
Nekki_SF2_GUI_Map_RaidKeysRowView_FBNELGBEPFJ__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_Map_RaidKeysRowView_FBNELGBEPFJ_o *__this,MethodInfo *method)

{
                    /* try { // try from 034280e0 to 035280e3 has its CatchHandler @ 03428170 */
  return (__this->fields).__2__current;
}

