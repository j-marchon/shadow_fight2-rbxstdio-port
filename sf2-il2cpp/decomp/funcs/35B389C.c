// FDJKKAFIEFB$$NHCANHBEGOE @ RVA 0x35B389C

void FDJKKAFIEFB__NHCANHBEGOE
               (FDJKKAFIEFB_o *__this,float LFJGFLNMBMC,int32_t FDJFFCLBLBH,MethodInfo *method)

{
  FDJKKAFIEFB_o *__this_00;
  System_Func_IEnumerator__o *coroutine;
  System_IObservable_Unit__o *source;
  System_IDisposable_o *value;
  MethodInfo *method_00;
  UniRx_SerialDisposable_o *__this_01;
  undefined1 auVar1 [16];
  
  method_00 = (MethodInfo *)(ulong)(uint)FDJFFCLBLBH;
  __this_00 = __this;
  if ((DAT_04568eaa & 1) == 0) {
    FUN_01bab630(&Method_FDJKKAFIEFB_PCEOOHNIJBJ__);
    FUN_01bab630(&FDJKKAFIEFB_TypeInfo);
    FUN_01bab630(&System_Func<IEnumerator>_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    auVar1 = FUN_01bab630(&UniRx_Observable_TypeInfo);
    method_00 = auVar1._8_8_;
    __this_00 = auVar1._0_8_;
    DAT_04568eaa = 1;
  }
  (__this->fields).JHLCHFLFMJG = LFJGFLNMBMC;
  (__this->fields).EKKBCIHHKNB = FDJFFCLBLBH;
  FDJKKAFIEFB__PCCPIHPECMA(__this_00,method_00);
  if ((FDJKKAFIEFB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = FDJKKAFIEFB_TypeInfo->static_fields->LEGEHOHOJGP;
  coroutine = (System_Func_IEnumerator__o *)thunk_FUN_01bda818(System_Func<IEnumerator>_TypeInfo);
  System_Func<object>___ctor();
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  source = UniRx_Observable__FromCoroutine(coroutine,false,(MethodInfo *)0x0);
  value = UniRx_ObservableExtensions__Subscribe<Unit>
                    ((System_IObservable_T__o *)source,
                     Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
  if (__this_01 != (UniRx_SerialDisposable_o *)0x0) {
    UniRx_SerialDisposable__set_Disposable(__this_01,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

