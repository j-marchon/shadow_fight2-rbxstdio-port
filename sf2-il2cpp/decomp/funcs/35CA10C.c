// CEKMGBEGCBI$$.ctor @ RVA 0x35CA10C

void CEKMGBEGCBI___ctor(CEKMGBEGCBI_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_ReactiveProperty_Nullable_int___o *__this_01;
  UniRx_ReactiveProperty_Nullable_int___o **ppUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568f92 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&Method_UniRx_ReactiveProperty<Nullable<int>>__ctor__);
    FUN_01bab630(&UniRx_ReactiveProperty<Nullable<int>>_TypeInfo);
    DAT_04568f92 = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)
              thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo,method);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).IHADHPMEOFI = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (UniRx_ReactiveProperty_Nullable_int___o *)
              thunk_FUN_01bda818(UniRx_ReactiveProperty<Nullable<int>>_TypeInfo);
  UniRx_ReactiveProperty<Nullable<int>>___ctor
            (__this_01,Method_UniRx_ReactiveProperty<Nullable<int>>__ctor__);
  ppUVar1 = &(__this->fields).LHCCMHBFOBB;
  *ppUVar1 = __this_01;
  thunk_FUN_01c20e04(ppUVar1,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

