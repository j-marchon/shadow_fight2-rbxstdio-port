// IJIHLBLCJMG$$DPLIBGCCKPM @ RVA 0x34A5F80

void IJIHLBLCJMG__DPLIBGCCKPM(IJIHLBLCJMG_o *__this,MethodInfo *method)

{
  UniRx_Subject_bool__o *pUVar1;
  
  if ((DAT_045684ef & 1) == 0) {
    FUN_01bab630(&Method_UniRx_Subject<bool>_Dispose__);
                    /* try { // try from 035a5fac to 036a603f has its CatchHandler @ 035a5fac
                       catch() { ... } // from try @ 035a5fac with catch @ 035a5fac
                       catch() { ... } // from try @ 035a6068 with catch @ 035a5fac
                       catch() { ... } // from try @ 035a60a8 with catch @ 035a5fac
                       catch() { ... } // from try @ 035a60d0 with catch @ 035a5fac
                       catch() { ... } // from try @ 035a6108 with catch @ 035a5fac */
    FUN_01bab630(&Method_UniRx_Subject<bool>_OnCompleted__);
    DAT_045684ef = 1;
  }
  pUVar1 = (__this->fields).POPPKIFIINN;
  if (pUVar1 != (UniRx_Subject_bool__o *)0x0) {
    UniRx_Subject<bool>__OnCompleted(pUVar1,Method_UniRx_Subject<bool>_OnCompleted__);
    pUVar1 = (__this->fields).POPPKIFIINN;
    if (pUVar1 != (UniRx_Subject_bool__o *)0x0) {
      UniRx_Subject<bool>__Dispose(pUVar1,Method_UniRx_Subject<bool>_Dispose__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

