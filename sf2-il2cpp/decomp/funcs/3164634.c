// MFLHNKGKEGA$$Dispose @ RVA 0x3164634

void MFLHNKGKEGA__Dispose(MFLHNKGKEGA_o *__this,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  UniRx_ReactiveProperty_string____o *__this_01;
  
  if ((DAT_045668a4 & 1) == 0) {
    FUN_01bab630(&Method_UniRx_ReactiveProperty<string[]>_Dispose__);
    DAT_045668a4 = 1;
  }
  __this_00 = (__this->fields).FMLPNCFMLCI;
  if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
    UniRx_SerialDisposable__Dispose(__this_00,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).IDPIHPBEHFC;
  if (__this_01 != (UniRx_ReactiveProperty_string____o *)0x0) {
    UniRx_ReactiveProperty<object>__Dispose
              ((UniRx_ReactiveProperty_T__o *)__this_01,
               Method_UniRx_ReactiveProperty<string[]>_Dispose__);
    return;
  }
  return;
}

