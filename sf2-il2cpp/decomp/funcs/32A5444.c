// GDGNDNPEHIG$$.ctor @ RVA 0x32A5444

void GDGNDNPEHIG___ctor(GDGNDNPEHIG_o *__this,HCOKCPNMKFK_o *IEADDGPDHIF,CFOCLEDKNKL_o *NFOGGNINBBP,
                       MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  HCOKCPNMKFK_o **ppHVar1;
  CFOCLEDKNKL_o **ppCVar2;
  
  if ((DAT_045673e8 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    DAT_045673e8 = 1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).IHADHPMEOFI = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppHVar1 = &(__this->fields).BCHLEFPBFHO;
  *ppHVar1 = IEADDGPDHIF;
  thunk_FUN_01c20e04(ppHVar1,IEADDGPDHIF);
  ppCVar2 = &(__this->fields).CGBEFGDEDKH;
  *ppCVar2 = NFOGGNINBBP;
  thunk_FUN_01c20e04(ppCVar2,NFOGGNINBBP);
  return;
}

