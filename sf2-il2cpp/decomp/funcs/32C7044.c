// PNFHEJAEPHI$$.ctor @ RVA 0x32C7044

void PNFHEJAEPHI___ctor(PNFHEJAEPHI_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_CompositeDisposable_o **ppUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045674f0 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    DAT_045674f0 = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)
              thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo,method);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).CAEFEOBGDEH;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  FCMAKNBEJDA___ctor((FCMAKNBEJDA_o *)__this,(MethodInfo *)0x0);
  return;
}

