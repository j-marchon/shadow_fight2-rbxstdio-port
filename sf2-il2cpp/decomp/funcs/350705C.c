// KEIAEKNFNNA$$HHANNAPHADA @ RVA 0x350705C

void KEIAEKNFNNA__HHANNAPHADA(KEIAEKNFNNA_o *__this,int32_t BPCMPECIOLF,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  GCIFMNHADDF_o *__this_01;
  UnityEngine_Object_o *exists;
  System_IObservable_long__o *source;
  System_IObservable_T__o *source_00;
  System_Action_T__o *onNext;
  System_IDisposable_o *value;
  UniRx_SerialDisposable_o *__this_02;
  
  if ((DAT_045688b0 & 1) == 0) {
    FUN_01bab630(&System_Action<long>_TypeInfo);
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<LotteryDialog>__);
    FUN_01bab630(&Method_KEIAEKNFNNA_GJHCOOIGICA_NEMPBMNDIKK__);
    FUN_01bab630(&KEIAEKNFNNA_GJHCOOIGICA_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<long>__);
    FUN_01bab630(&Method_UniRx_Observable_Skip<long>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_045688b0 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(KEIAEKNFNNA_GJHCOOIGICA_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    *(int32_t *)&__this_00[1].monitor = BPCMPECIOLF;
    __this_01 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_01 != (GCIFMNHADDF_o *)0x0) {
      exists = (UnityEngine_Object_o *)
               GCIFMNHADDF__BFJGHKKGOJC<object>
                         (__this_01,Method_GCIFMNHADDF_BFJGHKKGOJC<LotteryDialog>__);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
      if (!bVar1) {
        JJPNLEPEAFM__FGGGLJNFDLF(*(int32_t *)&__this_00[1].monitor,(MethodInfo *)0x0);
        return;
      }
      __this_02 = (__this->fields).BGIOGEDMPOH;
      if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      source = UniRx_Observable__EveryUpdate((MethodInfo *)0x0);
      source_00 = UniRx_Observable__Skip<long>
                            ((System_IObservable_T__o *)source,1,
                             Method_UniRx_Observable_Skip<long>__);
      onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
      System_Action<long>___ctor();
      value = UniRx_ObservableExtensions__Subscribe<long>
                        (source_00,onNext,Method_UniRx_ObservableExtensions_Subscribe<long>__);
      if (__this_02 != (UniRx_SerialDisposable_o *)0x0) {
        UniRx_SerialDisposable__set_Disposable(__this_02,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

