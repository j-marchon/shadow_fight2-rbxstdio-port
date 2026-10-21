// PCDNPOPANBA$$Dispose @ RVA 0x32C26C4

void PCDNPOPANBA__Dispose(PCDNPOPANBA_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
  if ((DAT_045674d6 & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<PCDNPOPANBA,_EEHFMPOFFDG>_Dispose__);
    DAT_045674d6 = 1;
  }
  GOCLIOIANDK<object,_object>__Dispose
            ((GOCLIOIANDK_T__TInterface__o *)__this,
             Method_GOCLIOIANDK<PCDNPOPANBA,_EEHFMPOFFDG>_Dispose__);
  __this_00 = (__this->fields).BNAIPPCOGPE;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

