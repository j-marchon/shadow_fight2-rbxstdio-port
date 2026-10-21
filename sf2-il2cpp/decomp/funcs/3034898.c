// FJNIPMODEPO$$.ctor @ RVA 0x3034898

void FJNIPMODEPO___ctor(FJNIPMODEPO_o *__this,CPHBJEDCAEO_o *LPBPGPJICKO,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_CompositeDisposable_o **ppUVar1;
  CPHBJEDCAEO_o **ppCVar2;
  
  if ((DAT_04565d2f & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    DAT_04565d2f = 1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).BNAIPPCOGPE;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppCVar2 = &(__this->fields).HEEHMDOOMIO;
  *ppCVar2 = LPBPGPJICKO;
  thunk_FUN_01c20e04(ppCVar2,LPBPGPJICKO);
  return;
}

