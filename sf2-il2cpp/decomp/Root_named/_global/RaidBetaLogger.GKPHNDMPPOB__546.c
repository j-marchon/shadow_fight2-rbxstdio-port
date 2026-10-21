// TypeDefIndex 546
// Namespace: 
// [CompilerGenerated]
// private sealed class RaidBetaLogger.GKPHNDMPPOB : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public RaidBetaLogger <>4__this; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x35A5D10]
// Nekki.Utils.RaidBetaLogger.GKPHNDMPPOB$$.ctor @ RVA 0x35A5D10

void Nekki_Utils_RaidBetaLogger_GKPHNDMPPOB___ctor
               (Nekki_Utils_RaidBetaLogger_GKPHNDMPPOB_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x35A5D38]
// Nekki.Utils.RaidBetaLogger.GKPHNDMPPOB$$System.IDisposable.Dispose @ RVA 0x35A5D38

void Nekki_Utils_RaidBetaLogger_GKPHNDMPPOB__System_IDisposable_Dispose
               (Nekki_Utils_RaidBetaLogger_GKPHNDMPPOB_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x35A5D3C]
// Nekki.Utils.RaidBetaLogger.GKPHNDMPPOB$$MoveNext @ RVA 0x35A5D3C

bool Nekki_Utils_RaidBetaLogger_GKPHNDMPPOB__MoveNext
               (Nekki_Utils_RaidBetaLogger_GKPHNDMPPOB_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_WaitForSeconds_o *__this_00;
  Il2CppObject **ppIVar2;
  UnityEngine_Coroutine_o **ppUVar3;
  Nekki_Utils_RaidBetaLogger_o *__this_01;
  float seconds;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_04568e09 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    auVar4 = FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_04568e09 = 1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    __this_01 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_01 == (Nekki_Utils_RaidBetaLogger_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
    }
    Nekki_Utils_RaidBetaLogger__ShowSendButton(__this_01,true,true,(MethodInfo *)0x0);
    ppUVar3 = &(__this_01->fields).LIFNPOJAIBB;
    if (*ppUVar3 != (UnityEngine_Coroutine_o *)0x0) {
      UnityEngine_MonoBehaviour__StopCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this_01,*ppUVar3,(MethodInfo *)0x0);
    }
    *ppUVar3 = (UnityEngine_Coroutine_o *)0x0;
    thunk_FUN_01c20e04(ppUVar3,0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    seconds = Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->ADEMADBNCBD;
    __this_00 = (UnityEngine_WaitForSeconds_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
    ppIVar2 = &(__this->fields).__2__current;
    *ppIVar2 = (Il2CppObject *)__this_00;
    thunk_FUN_01c20e04(ppIVar2,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x35A5E54]
// Nekki.Utils.RaidBetaLogger.GKPHNDMPPOB$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x35A5E54

Il2CppObject *
Nekki_Utils_RaidBetaLogger_GKPHNDMPPOB__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_Utils_RaidBetaLogger_GKPHNDMPPOB_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x35A5E5C]
// Nekki.Utils.RaidBetaLogger.GKPHNDMPPOB$$System.Collections.IEnumerator.Reset @ RVA 0x35A5E5C

void Nekki_Utils_RaidBetaLogger_GKPHNDMPPOB__System_Collections_IEnumerator_Reset
               (Nekki_Utils_RaidBetaLogger_GKPHNDMPPOB_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_Utils_RaidBetaLogger_GKPHNDMPPOB_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x35A5E94]
// Nekki.Utils.RaidBetaLogger.GKPHNDMPPOB$$System.Collections.IEnumerator.get_Current @ RVA 0x35A5E94

Il2CppObject *
Nekki_Utils_RaidBetaLogger_GKPHNDMPPOB__System_Collections_IEnumerator_get_Current
          (Nekki_Utils_RaidBetaLogger_GKPHNDMPPOB_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

