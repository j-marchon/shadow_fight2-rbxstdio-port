// KICJDJCJLKJ$$KBENBGOIBBB @ RVA 0x348CA28

void KICJDJCJLKJ__KBENBGOIBBB(KICJDJCJLKJ_o *__this,int32_t BDICLGNGCNA,MethodInfo *method)

{
  int val2;
  bool bVar1;
  int32_t iVar2;
  Il2CppObject *__this_00;
  System_TimeSpan_o dueTime;
  System_IObservable_long__o *source;
  System_Action_T__o *onNext;
  System_IDisposable_o *value;
  UniRx_SerialDisposable_o *__this_01;
  long lVar3;
  double value_00;
  
  if ((DAT_045683eb & 1) == 0) {
    FUN_01bab630(&System_Action<long>_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<long>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_KICJDJCJLKJ_PJMEKONAHON_CGHICJCFLEN__);
    FUN_01bab630(&KICJDJCJLKJ_PJMEKONAHON_TypeInfo);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    DAT_045683eb = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(KICJDJCJLKJ_PJMEKONAHON_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    *(int32_t *)&__this_00[1].monitor = BDICLGNGCNA;
    bVar1 = OMMDIMHOHLK__JKOMBMIBMBL(BDICLGNGCNA,(MethodInfo *)0x0);
    lVar3 = 0x20;
    if (!bVar1) {
      lVar3 = 0x28;
    }
    lVar3 = *(long *)((long)&__this->klass + lVar3);
    if (lVar3 != 0) {
      val2 = *(int *)(lVar3 + 0x18) + 1;
      *(int *)(lVar3 + 0x18) = val2;
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = System_Math__Min(6,val2,(MethodInfo *)0x0);
      *(int32_t *)(lVar3 + 0x18) = iVar2;
      value_00 = System_Math__Pow(2.0,(double)iVar2,(MethodInfo *)0x0);
      __this_01 = *(UniRx_SerialDisposable_o **)(lVar3 + 0x20);
      if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      dueTime = System_TimeSpan__FromSeconds(value_00,(MethodInfo *)0x0);
      if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UniRx_Observable_TypeInfo);
      }
                    /* try { // try from 0358cbb4 to 0368cc5b has its CatchHandler @ 0358cbb4
                       catch() { ... } // from try @ 0358cbb4 with catch @ 0358cbb4
                       catch() { ... } // from try @ 0358cc64 with catch @ 0358cbb4
                       catch() { ... } // from try @ 0358cccc with catch @ 0358cbb4
                       catch() { ... } // from try @ 0358ccf0 with catch @ 0358cbb4
                       catch() { ... } // from try @ 0358cd20 with catch @ 0358cbb4 */
      source = UniRx_Observable__Timer(dueTime,(MethodInfo *)0x0);
      onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
      System_Action<long>___ctor();
      value = UniRx_ObservableExtensions__Subscribe<long>
                        ((System_IObservable_T__o *)source,onNext,
                         Method_UniRx_ObservableExtensions_Subscribe<long>__);
      if (__this_01 != (UniRx_SerialDisposable_o *)0x0) {
        UniRx_SerialDisposable__set_Disposable(__this_01,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

