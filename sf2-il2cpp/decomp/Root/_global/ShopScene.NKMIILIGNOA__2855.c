// TypeDefIndex 2855
// Namespace: 
// [CompilerGenerated]
// private sealed class ShopScene.NKMIILIGNOA : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public ShopScene <>4__this; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x3436848]
// Nekki.SF2.GUI.Shop.ShopScene.NKMIILIGNOA$$.ctor @ RVA 0x3436848

void Nekki_SF2_GUI_Shop_ShopScene_NKMIILIGNOA___ctor
               (Nekki_SF2_GUI_Shop_ShopScene_NKMIILIGNOA_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x34393F4]
// Nekki.SF2.GUI.Shop.ShopScene.NKMIILIGNOA$$System.IDisposable.Dispose @ RVA 0x34393F4

void Nekki_SF2_GUI_Shop_ShopScene_NKMIILIGNOA__System_IDisposable_Dispose
               (Nekki_SF2_GUI_Shop_ShopScene_NKMIILIGNOA_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x34393F8]
// Nekki.SF2.GUI.Shop.ShopScene.NKMIILIGNOA$$MoveNext @ RVA 0x34393F8

bool Nekki_SF2_GUI_Shop_ShopScene_NKMIILIGNOA__MoveNext
               (Nekki_SF2_GUI_Shop_ShopScene_NKMIILIGNOA_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *__this_00;
  Il2CppObject **ppIVar2;
  Nekki_SF2_GUI_Shop_ShopScene_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  
  if ((DAT_045681b7 & 1) == 0) {
    FUN_01bab630(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    DAT_045681b7 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    __this_01 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_01 == (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(0,method);
    }
    Nekki_SF2_GUI_Shop_ShopScene__FJHEDBMBEFI(__this_01,(HOOAAGABMBL_o *)0x0,6,in_x3);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_00 = (Il2CppObject *)thunk_FUN_01bda818(UnityEngine_WaitForEndOfFrame_TypeInfo);
                    /* try { // try from 03539450 to 03639457 has its CatchHandler @ 035396b8 */
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)__this_00,(MethodInfo *)0x0);
    ppIVar2 = &(__this->fields).__2__current;
    *ppIVar2 = __this_00;
    thunk_FUN_01c20e04(ppIVar2,__this_00);
    (__this->fields).__1__state = 1;
    return true;
                    /* try { // try from 03539470 to 0363947b has its CatchHandler @ 035396b4 */
  }
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x34394A4]
// Nekki.SF2.GUI.Shop.ShopScene.NKMIILIGNOA$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x34394A4

Il2CppObject *
Nekki_SF2_GUI_Shop_ShopScene_NKMIILIGNOA__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_Shop_ShopScene_NKMIILIGNOA_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x34394AC]
// Nekki.SF2.GUI.Shop.ShopScene.NKMIILIGNOA$$System.Collections.IEnumerator.Reset @ RVA 0x34394AC

void Nekki_SF2_GUI_Shop_ShopScene_NKMIILIGNOA__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_Shop_ShopScene_NKMIILIGNOA_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
                    /* try { // try from 035394ac to 036394c3 has its CatchHandler @ 03539684 */
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_Shop_ShopScene_NKMIILIGNOA_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x34394E4]
// Nekki.SF2.GUI.Shop.ShopScene.NKMIILIGNOA$$System.Collections.IEnumerator.get_Current @ RVA 0x34394E4

Il2CppObject *
Nekki_SF2_GUI_Shop_ShopScene_NKMIILIGNOA__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_Shop_ShopScene_NKMIILIGNOA_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

