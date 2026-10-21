// PFDCJGIIPLB$$.cctor @ RVA 0x33581D4

void PFDCJGIIPLB___cctor(MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this;
  
  if ((DAT_04567a44 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&PFDCJGIIPLB_TypeInfo);
    DAT_04567a44 = 1;
  }
  __this = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(__this,(MethodInfo *)0x0);
  PFDCJGIIPLB_TypeInfo->static_fields->BNAIPPCOGPE = __this;
  thunk_FUN_01c20e04(PFDCJGIIPLB_TypeInfo->static_fields,__this);
  return;
}

