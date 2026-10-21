// FBAABPGMPCC$$.ctor @ RVA 0x31AD548

void FBAABPGMPCC___ctor(FBAABPGMPCC_o *__this,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  UniRx_Subject_KHODJHFHCDE__o *__this_01;
  UniRx_Subject_KHODJHFHCDE__o **ppUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566b5c & 1) == 0) {
    FUN_01bab630(&Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>__ctor__);
    FUN_01bab630(&UniRx_SerialDisposable_TypeInfo);
    FUN_01bab630(&Method_UniRx_Subject<KHODJHFHCDE>__ctor__);
    FUN_01bab630(&UniRx_Subject<KHODJHFHCDE>_TypeInfo);
    DAT_04566b5c = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_SerialDisposable_o *)thunk_FUN_01bda818(UniRx_SerialDisposable_TypeInfo,method)
  ;
  UniRx_SerialDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).IDBDJDHDKGG = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (UniRx_Subject_KHODJHFHCDE__o *)
              thunk_FUN_01bda818(UniRx_Subject<KHODJHFHCDE>_TypeInfo);
  UniRx_Subject<object>___ctor
            ((UniRx_Subject_T__o *)__this_01,Method_UniRx_Subject<KHODJHFHCDE>__ctor__);
  ppUVar1 = &(__this->fields).NIFBGEKEBGF;
  *ppUVar1 = __this_01;
  thunk_FUN_01c20e04(ppUVar1,__this_01);
  GOCLIOIANDK<object,_object>___ctor
            ((GOCLIOIANDK_T__TInterface__o *)__this,
             Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>__ctor__);
  return;
}

