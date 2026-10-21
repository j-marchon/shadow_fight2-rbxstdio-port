// HAIGJHOMMPL$$Dispose @ RVA 0x32DB5E8

void HAIGJHOMMPL__Dispose(HAIGJHOMMPL_o *__this,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  UniRx_ReactiveProperty_bool__o *__this_01;
  
  if ((DAT_045675bd & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>_Dispose__);
    FUN_01bab630(&Method_UniRx_ReactiveProperty<bool>_Dispose__);
    DAT_045675bd = 1;
  }
  GOCLIOIANDK<object,_object>__Dispose
            ((GOCLIOIANDK_T__TInterface__o *)__this,
             Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>_Dispose__);
  __this_00 = (__this->fields).AJLCLKJCEHA;
  if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
    UniRx_SerialDisposable__Dispose(__this_00,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).DDKAEOMHAPH;
  if (__this_01 != (UniRx_ReactiveProperty_bool__o *)0x0) {
    UniRx_ReactiveProperty<bool>__Dispose(__this_01,Method_UniRx_ReactiveProperty<bool>_Dispose__);
    return;
  }
  return;
}

