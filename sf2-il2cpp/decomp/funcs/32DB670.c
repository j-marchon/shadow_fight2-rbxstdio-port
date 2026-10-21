// HAIGJHOMMPL$$.ctor @ RVA 0x32DB670

void HAIGJHOMMPL___ctor(HAIGJHOMMPL_o *__this,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  UniRx_ReactiveProperty_bool__o *__this_01;
  UniRx_ReactiveProperty_bool__o **ppUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045675be & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>__ctor__);
    FUN_01bab630(&Method_UniRx_ReactiveProperty<bool>__ctor__);
    FUN_01bab630(&UniRx_ReactiveProperty<bool>_TypeInfo);
    FUN_01bab630(&UniRx_SerialDisposable_TypeInfo);
    DAT_045675be = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_SerialDisposable_o *)thunk_FUN_01bda818(UniRx_SerialDisposable_TypeInfo,method)
  ;
  UniRx_SerialDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).AJLCLKJCEHA = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (UniRx_ReactiveProperty_bool__o *)
              thunk_FUN_01bda818(UniRx_ReactiveProperty<bool>_TypeInfo);
  UniRx_ReactiveProperty<bool>___ctor(__this_01,Method_UniRx_ReactiveProperty<bool>__ctor__);
  ppUVar1 = &(__this->fields).DDKAEOMHAPH;
  *ppUVar1 = __this_01;
  thunk_FUN_01c20e04(ppUVar1,__this_01);
  GOCLIOIANDK<object,_object>___ctor
            ((GOCLIOIANDK_T__TInterface__o *)__this,
             Method_GOCLIOIANDK<HAIGJHOMMPL,_HCOEEOMMEFL>__ctor__);
  return;
}

