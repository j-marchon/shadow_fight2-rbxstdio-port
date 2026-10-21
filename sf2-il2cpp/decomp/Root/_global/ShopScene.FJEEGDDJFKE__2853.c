// TypeDefIndex 2853
// Namespace: 
// [CompilerGenerated]
// private sealed class ShopScene.FJEEGDDJFKE : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public ShopScene <>4__this; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x3437704]
// Nekki.SF2.GUI.Shop.ShopScene.FJEEGDDJFKE$$.ctor @ RVA 0x3437704

void Nekki_SF2_GUI_Shop_ShopScene_FJEEGDDJFKE___ctor
               (Nekki_SF2_GUI_Shop_ShopScene_FJEEGDDJFKE_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x34391E8]
// Nekki.SF2.GUI.Shop.ShopScene.FJEEGDDJFKE$$System.IDisposable.Dispose @ RVA 0x34391E8

void Nekki_SF2_GUI_Shop_ShopScene_FJEEGDDJFKE__System_IDisposable_Dispose
               (Nekki_SF2_GUI_Shop_ShopScene_FJEEGDDJFKE_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x34391EC]
// Nekki.SF2.GUI.Shop.ShopScene.FJEEGDDJFKE$$MoveNext @ RVA 0x34391EC

bool Nekki_SF2_GUI_Shop_ShopScene_FJEEGDDJFKE__MoveNext
               (Nekki_SF2_GUI_Shop_ShopScene_FJEEGDDJFKE_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *__this_00;
  Il2CppObject **ppIVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Shop_ShopScene_o *__this_01;
  
  if ((DAT_045681b5 & 1) == 0) {
                    /* try { // try from 03539208 to 03639217 has its CatchHandler @ 03539270 */
    FUN_01bab630(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    DAT_045681b5 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03539218 to 03639257 has its CatchHandler @ 03539068 */
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03539258 with catch @ 03539268
                        */
    __this_01 = (__this->fields).__4__this;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035391d0 with catch @ 0353926c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03539208 with catch @ 03539270
                        */
    (__this->fields).__1__state = -1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035391b4 with catch @ 03539274
                        */
    if (__this_01 == (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Shop_ShopScene__ReloadActiveItemsAndRefresh(__this_01,method);
    (__this_01->fields).GBPDKLANGLP = (System_Collections_IEnumerator_o *)0x0;
                    /* try { // try from 0353928c to 0363928f has its CatchHandler @ 035392b0 */
    thunk_FUN_01c20e04(&(__this_01->fields).GBPDKLANGLP,0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_00 = (Il2CppObject *)thunk_FUN_01bda818(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)__this_00,(MethodInfo *)0x0);
    ppIVar2 = &(__this->fields).__2__current;
    *ppIVar2 = __this_00;
                    /* try { // try from 03539258 to 0363925b has its CatchHandler @ 03539268 */
    thunk_FUN_01c20e04(ppIVar2,__this_00);
                    /* try { // try from 0353925c to 0363925f has its CatchHandler @ 03539264 */
                    /* try { // try from 03539260 to 0363928b has its CatchHandler @ 03539068 */
    (__this->fields).__1__state = 1;
    return true;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353925c with catch @ 03539264
                        */
  }
                    /* try { // try from 03539290 to 036392b7 has its CatchHandler @ 03539068 */
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x34392A4]
// Nekki.SF2.GUI.Shop.ShopScene.FJEEGDDJFKE$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x34392A4

Il2CppObject *
Nekki_SF2_GUI_Shop_ShopScene_FJEEGDDJFKE__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_Shop_ShopScene_FJEEGDDJFKE_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x34392AC]
// Nekki.SF2.GUI.Shop.ShopScene.FJEEGDDJFKE$$System.Collections.IEnumerator.Reset @ RVA 0x34392AC

void Nekki_SF2_GUI_Shop_ShopScene_FJEEGDDJFKE__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_Shop_ShopScene_FJEEGDDJFKE_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
                    /* catch() { ... } // from try @ 0353928c with catch @ 035392b0 */
                    /* try { // try from 035392b8 to 036392bf has its CatchHandler @ 035392d4 */
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
                    /* try { // try from 035392c0 to 036392cb has its CatchHandler @ 03539068 */
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 035392cc to 036392d3 has its CatchHandler @ 035392d4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035392b8 with catch @ 035392d4
                       catch(type#2 @ 00000000) { ... } // from try @ 035392cc with catch @ 035392d4
                        */
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_Shop_ShopScene_FJEEGDDJFKE_System_Collections_IEnumerator_Reset__
                            );
                    /* try { // try from 035392d8 to 0363944f has its CatchHandler @ 035392d8
                       catch() { ... } // from try @ 035392d8 with catch @ 035392d8
                       catch() { ... } // from try @ 035395f0 with catch @ 035392d8
                       catch() { ... } // from try @ 03539668 with catch @ 035392d8
                       catch() { ... } // from try @ 035396d8 with catch @ 035392d8
                       catch() { ... } // from try @ 03539718 with catch @ 035392d8 */
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x34392E4]
// Nekki.SF2.GUI.Shop.ShopScene.FJEEGDDJFKE$$System.Collections.IEnumerator.get_Current @ RVA 0x34392E4

Il2CppObject *
Nekki_SF2_GUI_Shop_ShopScene_FJEEGDDJFKE__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_Shop_ShopScene_FJEEGDDJFKE_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

