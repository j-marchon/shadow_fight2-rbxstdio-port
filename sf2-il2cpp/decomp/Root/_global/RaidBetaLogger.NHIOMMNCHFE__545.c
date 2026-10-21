// TypeDefIndex 545
// Namespace: 
// [CompilerGenerated]
// private sealed class RaidBetaLogger.NHIOMMNCHFE : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public RaidBetaLogger <>4__this; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x35A5BA0]
// Nekki.Utils.RaidBetaLogger.NHIOMMNCHFE$$.ctor @ RVA 0x35A5BA0

void Nekki_Utils_RaidBetaLogger_NHIOMMNCHFE___ctor
               (Nekki_Utils_RaidBetaLogger_NHIOMMNCHFE_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x35A5BC8]
// Nekki.Utils.RaidBetaLogger.NHIOMMNCHFE$$System.IDisposable.Dispose @ RVA 0x35A5BC8

void Nekki_Utils_RaidBetaLogger_NHIOMMNCHFE__System_IDisposable_Dispose
               (Nekki_Utils_RaidBetaLogger_NHIOMMNCHFE_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x35A5BCC]
// Nekki.Utils.RaidBetaLogger.NHIOMMNCHFE$$MoveNext @ RVA 0x35A5BCC

bool Nekki_Utils_RaidBetaLogger_NHIOMMNCHFE__MoveNext
               (Nekki_Utils_RaidBetaLogger_NHIOMMNCHFE_o *__this,MethodInfo *method)

{
  int iVar1;
  float seconds;
  UnityEngine_WaitForSeconds_o *__this_00;
  Il2CppObject **ppIVar2;
  Nekki_Utils_RaidBetaLogger_o *__this_01;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_04568e08 & 1) == 0) {
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    auVar3 = FUN_01bab630(&StringLiteral_16559/*"auto, on exceptions"*/);
    DAT_04568e08 = 1;
  }
  iVar1 = (__this->fields).__1__state;
  __this_01 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_01 == (Nekki_Utils_RaidBetaLogger_o *)0x0) goto LAB_036a5cc4;
    if ((__this_01->fields)._NOEPHKDKPNJ_k__BackingField == false) {
      Nekki_Utils_RaidBetaLogger__CLIHAFJDHKO(__this_01,StringLiteral_16559/*"auto, on exceptions"*/,(MethodInfo *)0x0);
    }
    Nekki_Utils_RaidBetaLogger__FKLEGPIEJGA(__this_01,(MethodInfo *)0x0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (__this_01 != (Nekki_Utils_RaidBetaLogger_o *)0x0) {
      seconds = 2.0;
      if ((__this_01->fields)._GCJCDAIIAJF_k__BackingField != false) {
        seconds = 5.0;
      }
      __this_00 = (UnityEngine_WaitForSeconds_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
      ppIVar2 = &(__this->fields).__2__current;
      *ppIVar2 = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(ppIVar2,__this_00);
      (__this->fields).__1__state = 1;
      return true;
    }
LAB_036a5cc4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
  }
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x35A5CC8]
// Nekki.Utils.RaidBetaLogger.NHIOMMNCHFE$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x35A5CC8

Il2CppObject *
Nekki_Utils_RaidBetaLogger_NHIOMMNCHFE__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_Utils_RaidBetaLogger_NHIOMMNCHFE_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x35A5CD0]
// Nekki.Utils.RaidBetaLogger.NHIOMMNCHFE$$System.Collections.IEnumerator.Reset @ RVA 0x35A5CD0

void Nekki_Utils_RaidBetaLogger_NHIOMMNCHFE__System_Collections_IEnumerator_Reset
               (Nekki_Utils_RaidBetaLogger_NHIOMMNCHFE_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_Utils_RaidBetaLogger_NHIOMMNCHFE_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x35A5D08]
// Nekki.Utils.RaidBetaLogger.NHIOMMNCHFE$$System.Collections.IEnumerator.get_Current @ RVA 0x35A5D08

Il2CppObject *
Nekki_Utils_RaidBetaLogger_NHIOMMNCHFE__System_Collections_IEnumerator_get_Current
          (Nekki_Utils_RaidBetaLogger_NHIOMMNCHFE_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

