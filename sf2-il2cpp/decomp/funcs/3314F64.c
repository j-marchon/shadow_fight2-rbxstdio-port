// MKFAKELPPAC$$.cctor @ RVA 0x3314F64

void MKFAKELPPAC___cctor(MethodInfo *method)

{
  UniRx_ReactiveProperty_KKEKKPIDGBK__o *__this;
  UniRx_ReactiveProperty_KKEKKPIDGBK__o **ppUVar1;
  
  if ((DAT_045677d1 & 1) == 0) {
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    FUN_01bab630(&Method_UniRx_ReactiveProperty<KKEKKPIDGBK>__ctor__);
    FUN_01bab630(&UniRx_ReactiveProperty<KKEKKPIDGBK>_TypeInfo);
    DAT_045677d1 = 1;
  }
  __this = (UniRx_ReactiveProperty_KKEKKPIDGBK__o *)
           thunk_FUN_01bda818(UniRx_ReactiveProperty<KKEKKPIDGBK>_TypeInfo);
  UniRx_ReactiveProperty<object>___ctor
            ((UniRx_ReactiveProperty_T__o *)__this,
             Method_UniRx_ReactiveProperty<KKEKKPIDGBK>__ctor__);
  ppUVar1 = &MKFAKELPPAC_TypeInfo->static_fields->HIINAEEPCDO;
  *ppUVar1 = __this;
  thunk_FUN_01c20e04(ppUVar1,__this);
  return;
}

