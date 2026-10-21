// KEIAEKNFNNA$$Dispose @ RVA 0x35084D8

void KEIAEKNFNNA__Dispose(KEIAEKNFNNA_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_SerialDisposable_o *__this_01;
  
  __this_00 = (__this->fields).IHADHPMEOFI;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields).BGIOGEDMPOH;
    if (__this_01 != (UniRx_SerialDisposable_o *)0x0) {
      UniRx_SerialDisposable__Dispose(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

