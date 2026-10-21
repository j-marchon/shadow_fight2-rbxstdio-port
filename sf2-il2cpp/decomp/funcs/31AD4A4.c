// FBAABPGMPCC$$Dispose @ RVA 0x31AD4A4

void FBAABPGMPCC__Dispose(FBAABPGMPCC_o *__this,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  UniRx_Subject_KHODJHFHCDE__o *pUVar1;
  
  if ((DAT_04566b5b & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_Dispose__);
    FUN_01bab630(&Method_UniRx_Subject<KHODJHFHCDE>_Dispose__);
    FUN_01bab630(&Method_UniRx_Subject<KHODJHFHCDE>_OnCompleted__);
    DAT_04566b5b = 1;
  }
  GOCLIOIANDK<object,_object>__Dispose
            ((GOCLIOIANDK_T__TInterface__o *)__this,
             Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_Dispose__);
  __this_00 = (__this->fields).IDBDJDHDKGG;
  if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
    UniRx_SerialDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).NIFBGEKEBGF;
    if (pUVar1 != (UniRx_Subject_KHODJHFHCDE__o *)0x0) {
      UniRx_Subject<object>__OnCompleted
                ((UniRx_Subject_T__o *)pUVar1,Method_UniRx_Subject<KHODJHFHCDE>_OnCompleted__);
      pUVar1 = (__this->fields).NIFBGEKEBGF;
      if (pUVar1 != (UniRx_Subject_KHODJHFHCDE__o *)0x0) {
        UniRx_Subject<object>__Dispose
                  ((UniRx_Subject_T__o *)pUVar1,Method_UniRx_Subject<KHODJHFHCDE>_Dispose__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

