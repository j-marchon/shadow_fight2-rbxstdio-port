// CEKMGBEGCBI$$Dispose @ RVA 0x35CA1CC

void CEKMGBEGCBI__Dispose(CEKMGBEGCBI_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_ReactiveProperty_Nullable_int___o *__this_01;
  
  if ((DAT_04568f93 & 1) == 0) {
    FUN_01bab630(&Method_UniRx_ReactiveProperty<Nullable<int>>_Dispose__);
    DAT_04568f93 = 1;
  }
  __this_00 = (__this->fields).IHADHPMEOFI;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).LHCCMHBFOBB;
  if (__this_01 != (UniRx_ReactiveProperty_Nullable_int___o *)0x0) {
    UniRx_ReactiveProperty<Nullable<int>>__Dispose
              (__this_01,Method_UniRx_ReactiveProperty<Nullable<int>>_Dispose__);
    return;
  }
  return;
}

