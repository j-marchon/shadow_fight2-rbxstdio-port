// PCDNPOPANBA$$.ctor @ RVA 0x32C260C

void PCDNPOPANBA___ctor(PCDNPOPANBA_o *__this,IMPJOEHKNBA_o *DEBKGFHOFMA,GCPFDLNAFDF_o *PCMFDDODKED,
                       MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_CompositeDisposable_o **ppUVar1;
  GCPFDLNAFDF_o **ppGVar2;
  
  if ((DAT_045674d5 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&Method_GOCLIOIANDK<PCDNPOPANBA,_EEHFMPOFFDG>__ctor__);
    DAT_045674d5 = 1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).BNAIPPCOGPE;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  GOCLIOIANDK<object,_object>___ctor
            ((GOCLIOIANDK_T__TInterface__o *)__this,
             Method_GOCLIOIANDK<PCDNPOPANBA,_EEHFMPOFFDG>__ctor__);
  (__this->fields).HCBPFENNFHD = DEBKGFHOFMA;
  thunk_FUN_01c20e04(&__this->fields,DEBKGFHOFMA);
  ppGVar2 = &(__this->fields).DCAEFFHDMGE;
  *ppGVar2 = PCMFDDODKED;
  thunk_FUN_01c20e04(ppGVar2,PCMFDDODKED);
  return;
}

