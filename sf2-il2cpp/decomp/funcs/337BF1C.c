// IDDIABHBDEE$$Dispose @ RVA 0x337BF1C

void IDDIABHBDEE__Dispose(IDDIABHBDEE_o *__this,MethodInfo *method)

{
  DOCLKKFHECI_T__o *pDVar1;
  UniRx_CompositeDisposable_o *__this_00;
  System_Threading_CancellationTokenSource_o *pSVar2;
  
  if ((DAT_04567b8f & 1) == 0) {
    FUN_01bab630(&Method_DOCLKKFHECI<BCGLDKLKKDA>_DGLJCGNHLIG__);
    FUN_01bab630(&Method_DOCLKKFHECI<CBLABOPKBKD>_DGLJCGNHLIG__);
    DAT_04567b8f = 1;
  }
  pDVar1 = (DOCLKKFHECI_T__o *)(__this->fields)._MOAJPECDFIF_k__BackingField;
  if (pDVar1 != (DOCLKKFHECI_T__o *)0x0) {
    DOCLKKFHECI<object>__DGLJCGNHLIG(pDVar1,Method_DOCLKKFHECI<BCGLDKLKKDA>_DGLJCGNHLIG__);
    pDVar1 = (DOCLKKFHECI_T__o *)(__this->fields)._GIOCOOPLCKH_k__BackingField;
    if (pDVar1 != (DOCLKKFHECI_T__o *)0x0) {
      DOCLKKFHECI<object>__DGLJCGNHLIG(pDVar1,Method_DOCLKKFHECI<CBLABOPKBKD>_DGLJCGNHLIG__);
      __this_00 = (__this->fields).BNAIPPCOGPE;
      if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
        UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
        pSVar2 = (__this->fields).KAGAAJGKDJH;
        if (pSVar2 != (System_Threading_CancellationTokenSource_o *)0x0) {
          System_Threading_CancellationTokenSource__Cancel(pSVar2,(MethodInfo *)0x0);
          pSVar2 = (__this->fields).KAGAAJGKDJH;
          if (pSVar2 != (System_Threading_CancellationTokenSource_o *)0x0) {
            System_Threading_CancellationTokenSource__Dispose(pSVar2,(MethodInfo *)0x0);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

