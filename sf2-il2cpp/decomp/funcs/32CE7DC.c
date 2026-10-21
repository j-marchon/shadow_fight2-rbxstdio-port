// FLFPJEKOAMK$$Dispose @ RVA 0x32CE7DC

void FLFPJEKOAMK__Dispose(FLFPJEKOAMK_o *__this,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  UniRx_Subject_bool__o *pUVar1;
  
  if ((DAT_0456753d & 1) == 0) {
    FUN_01bab630(&Method_UniRx_Subject<bool>_Dispose__);
    FUN_01bab630(&Method_UniRx_Subject<bool>_OnCompleted__);
    DAT_0456753d = 1;
  }
  __this_00 = (__this->fields).AEKMHAIMLKI;
  if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
    UniRx_SerialDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).DOPGFNMCDEA;
    if (pUVar1 != (UniRx_Subject_bool__o *)0x0) {
      UniRx_Subject<bool>__OnCompleted(pUVar1,Method_UniRx_Subject<bool>_OnCompleted__);
      pUVar1 = (__this->fields).DOPGFNMCDEA;
      if (pUVar1 != (UniRx_Subject_bool__o *)0x0) {
        UniRx_Subject<bool>__Dispose(pUVar1,Method_UniRx_Subject<bool>_Dispose__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

