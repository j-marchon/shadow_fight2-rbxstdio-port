// TypeDefIndex 709
// Namespace: 
// [CompilerGenerated]
// private sealed class RaidViewController.JKABJMLCHEL : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public long pause; // 0x20
//   public int minutesBefore; // 0x28

// ===== public void .ctor(int <>1__state)  [RVA 0x303ABC4]
// RaidViewController.JKABJMLCHEL$$.ctor @ RVA 0x303ABC4

void RaidViewController_JKABJMLCHEL___ctor
               (RaidViewController_JKABJMLCHEL_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x303AEEC]
// RaidViewController.JKABJMLCHEL$$System.IDisposable.Dispose @ RVA 0x303AEEC

void RaidViewController_JKABJMLCHEL__System_IDisposable_Dispose
               (RaidViewController_JKABJMLCHEL_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x303AEF0]
// RaidViewController.JKABJMLCHEL$$MoveNext @ RVA 0x303AEF0

bool RaidViewController_JKABJMLCHEL__MoveNext(RaidViewController_JKABJMLCHEL_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t OICBCFGIIOA;
  UnityEngine_WaitForSeconds_o *__this_00;
  Il2CppObject **ppIVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  long lVar3;
  
  if ((DAT_04565d7e & 1) == 0) {
    FUN_01bab630(&RaidViewController_TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_04565d7e = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    OICBCFGIIOA = (__this->fields).minutesBefore;
    if ((RaidViewController_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method = extraout_x1_00;
    }
    RaidViewController__FLHCPMBEGMD(OICBCFGIIOA,method);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    lVar3 = (__this->fields).pause;
    __this_00 = (UnityEngine_WaitForSeconds_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(__this_00,(float)lVar3,(MethodInfo *)0x0);
    ppIVar2 = &(__this->fields).__2__current;
    *ppIVar2 = (Il2CppObject *)__this_00;
    thunk_FUN_01c20e04(ppIVar2,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x303AFBC]
// RaidViewController.JKABJMLCHEL$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x303AFBC

Il2CppObject *
RaidViewController_JKABJMLCHEL__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (RaidViewController_JKABJMLCHEL_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x303AFC4]
// RaidViewController.JKABJMLCHEL$$System.Collections.IEnumerator.Reset @ RVA 0x303AFC4

void RaidViewController_JKABJMLCHEL__System_Collections_IEnumerator_Reset
               (RaidViewController_JKABJMLCHEL_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_LJNJDFEAIOH_JKABJMLCHEL_System_Collections_IEnumerator_Reset__)
  ;
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x303AFFC]
// RaidViewController.JKABJMLCHEL$$System.Collections.IEnumerator.get_Current @ RVA 0x303AFFC

Il2CppObject *
RaidViewController_JKABJMLCHEL__System_Collections_IEnumerator_get_Current
          (RaidViewController_JKABJMLCHEL_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

