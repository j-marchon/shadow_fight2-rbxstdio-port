// FGFPOFBKHMM$$Dispose @ RVA 0x34ABFF4

void FGFPOFBKHMM__Dispose(FGFPOFBKHMM_o *__this,MethodInfo *method)

{
  UniRx_ReactiveProperty_HCBNEFEHCBM__o *__this_00;
  UniRx_Subject_HCBNEFEHCBM__o *pUVar1;
  
  if ((DAT_04568535 & 1) == 0) {
    FUN_01bab630(&Method_UniRx_ReactiveProperty<HCBNEFEHCBM>_Dispose__);
    FUN_01bab630(&Method_UniRx_Subject<HCBNEFEHCBM>_Dispose__);
    FUN_01bab630(&Method_UniRx_Subject<HCBNEFEHCBM>_OnCompleted__);
    DAT_04568535 = 1;
  }
  __this_00 = (__this->fields).OMMGLBIMPDI;
  if (__this_00 != (UniRx_ReactiveProperty_HCBNEFEHCBM__o *)0x0) {
    UniRx_ReactiveProperty<object>__Dispose
              ((UniRx_ReactiveProperty_T__o *)__this_00,
               Method_UniRx_ReactiveProperty<HCBNEFEHCBM>_Dispose__);
  }
  pUVar1 = (__this->fields).POPPKIFIINN;
  if (pUVar1 != (UniRx_Subject_HCBNEFEHCBM__o *)0x0) {
    UniRx_Subject<object>__OnCompleted
              ((UniRx_Subject_T__o *)pUVar1,Method_UniRx_Subject<HCBNEFEHCBM>_OnCompleted__);
    pUVar1 = (__this->fields).POPPKIFIINN;
    if (pUVar1 != (UniRx_Subject_HCBNEFEHCBM__o *)0x0) {
      UniRx_Subject<object>__Dispose
                ((UniRx_Subject_T__o *)pUVar1,Method_UniRx_Subject<HCBNEFEHCBM>_Dispose__);
      return;
    }
  }
  return;
}

