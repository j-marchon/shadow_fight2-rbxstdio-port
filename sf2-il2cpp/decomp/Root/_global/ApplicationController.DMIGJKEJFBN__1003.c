// TypeDefIndex 1003
// Namespace: 
// [CompilerGenerated]
// private sealed class ApplicationController.DMIGJKEJFBN : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public float p_delay; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x30BFB5C]
// Nekki.SF2.Core.ApplicationController.DMIGJKEJFBN$$.ctor @ RVA 0x30BFB5C

void Nekki_SF2_Core_ApplicationController_DMIGJKEJFBN___ctor
               (Nekki_SF2_Core_ApplicationController_DMIGJKEJFBN_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x30C1BDC]
// Nekki.SF2.Core.ApplicationController.DMIGJKEJFBN$$System.IDisposable.Dispose @ RVA 0x30C1BDC

void Nekki_SF2_Core_ApplicationController_DMIGJKEJFBN__System_IDisposable_Dispose
               (Nekki_SF2_Core_ApplicationController_DMIGJKEJFBN_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x30C1BE0]
// Nekki.SF2.Core.ApplicationController.DMIGJKEJFBN$$MoveNext @ RVA 0x30C1BE0

bool Nekki_SF2_Core_ApplicationController_DMIGJKEJFBN__MoveNext
               (Nekki_SF2_Core_ApplicationController_DMIGJKEJFBN_o *__this,MethodInfo *method)

{
  int iVar1;
  NCNCKGBEGGF_o *__this_00;
  Il2CppObject **ppIVar2;
  float NACILJPLKBG;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_04566291 & 1) == 0) {
    auVar3 = FUN_01bab630(&NCNCKGBEGGF_TypeInfo);
    DAT_04566291 = 1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    Nekki_SF2_Core_ApplicationController__Quit(auVar3._0_8_);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    NACILJPLKBG = (__this->fields).p_delay;
    __this_00 = (NCNCKGBEGGF_o *)thunk_FUN_01bda818(NCNCKGBEGGF_TypeInfo,auVar3._8_8_);
    NCNCKGBEGGF___ctor(__this_00,NACILJPLKBG,(MethodInfo *)0x0);
    ppIVar2 = &(__this->fields).__2__current;
    *ppIVar2 = (Il2CppObject *)__this_00;
    thunk_FUN_01c20e04(ppIVar2,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x30C1C88]
// Nekki.SF2.Core.ApplicationController.DMIGJKEJFBN$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x30C1C88

Il2CppObject *
Nekki_SF2_Core_ApplicationController_DMIGJKEJFBN__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_Core_ApplicationController_DMIGJKEJFBN_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x30C1C90]
// Nekki.SF2.Core.ApplicationController.DMIGJKEJFBN$$System.Collections.IEnumerator.Reset @ RVA 0x30C1C90

void Nekki_SF2_Core_ApplicationController_DMIGJKEJFBN__System_Collections_IEnumerator_Reset
               (Nekki_SF2_Core_ApplicationController_DMIGJKEJFBN_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_Core_ApplicationController_DMIGJKEJFBN_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x30C1CC8]
// Nekki.SF2.Core.ApplicationController.DMIGJKEJFBN$$System.Collections.IEnumerator.get_Current @ RVA 0x30C1CC8

Il2CppObject *
Nekki_SF2_Core_ApplicationController_DMIGJKEJFBN__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_Core_ApplicationController_DMIGJKEJFBN_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

