// TypeDefIndex 2944
// Namespace: 
// [CompilerGenerated]
// private sealed class UIModule.IIIELPJHPPP : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public Action<UIModule> p_event; // 0x20
//   public UIModule <>4__this; // 0x28

// ===== public void .ctor(int <>1__state)  [RVA 0x3491168]
// Nekki.SF2.GUI.UIModule.IIIELPJHPPP$$.ctor @ RVA 0x3491168

void Nekki_SF2_GUI_UIModule_IIIELPJHPPP___ctor
               (Nekki_SF2_GUI_UIModule_IIIELPJHPPP_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x3491698]
// Nekki.SF2.GUI.UIModule.IIIELPJHPPP$$System.IDisposable.Dispose @ RVA 0x3491698

void Nekki_SF2_GUI_UIModule_IIIELPJHPPP__System_IDisposable_Dispose
               (Nekki_SF2_GUI_UIModule_IIIELPJHPPP_o *__this,MethodInfo *method)

{
                    /* try { // try from 03591698 to 0369169f has its CatchHandler @ 035916a0 */
  return;
}


// ===== private bool MoveNext()  [RVA 0x349169C]
// Nekki.SF2.GUI.UIModule.IIIELPJHPPP$$MoveNext @ RVA 0x349169C

bool Nekki_SF2_GUI_UIModule_IIIELPJHPPP__MoveNext
               (Nekki_SF2_GUI_UIModule_IIIELPJHPPP_o *__this,MethodInfo *method)

{
  System_Action_UIModule__o *pSVar1;
  Nekki_SF2_GUI_UIModule_o *pNVar2;
  int iVar3;
  Il2CppObject *__this_00;
  Il2CppObject **ppIVar4;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = __this;
                    /* catch() { ... } // from try @ 035915fc with catch @ 035916a0
                       catch() { ... } // from try @ 03591684 with catch @ 035916a0
                       catch() { ... } // from try @ 03591698 with catch @ 035916a0 */
  if ((DAT_04568421 & 1) == 0) {
    auVar5 = FUN_01bab630(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    DAT_04568421 = 1;
  }
  iVar3 = (__this->fields).__1__state;
  if (iVar3 == 1) {
    pSVar1 = (__this->fields).p_event;
    pNVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pSVar1 == (System_Action_UIModule__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(auVar5._0_8_,pNVar2);
    }
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,pNVar2,(pSVar1->fields).super.super.method);
  }
  else if (iVar3 == 0) {
    (__this->fields).__1__state = -1;
    __this_00 = (Il2CppObject *)
                thunk_FUN_01bda818(UnityEngine_WaitForEndOfFrame_TypeInfo,auVar5._8_8_);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)__this_00,(MethodInfo *)0x0);
    ppIVar4 = &(__this->fields).__2__current;
    *ppIVar4 = __this_00;
    thunk_FUN_01c20e04(ppIVar4,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x349174C]
// Nekki.SF2.GUI.UIModule.IIIELPJHPPP$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x349174C

Il2CppObject *
Nekki_SF2_GUI_UIModule_IIIELPJHPPP__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_UIModule_IIIELPJHPPP_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x3491754]
// Nekki.SF2.GUI.UIModule.IIIELPJHPPP$$System.Collections.IEnumerator.Reset @ RVA 0x3491754

void Nekki_SF2_GUI_UIModule_IIIELPJHPPP__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_UIModule_IIIELPJHPPP_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_UIModule_IIIELPJHPPP_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x349178C]
// Nekki.SF2.GUI.UIModule.IIIELPJHPPP$$System.Collections.IEnumerator.get_Current @ RVA 0x349178C

Il2CppObject *
Nekki_SF2_GUI_UIModule_IIIELPJHPPP__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_UIModule_IIIELPJHPPP_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

