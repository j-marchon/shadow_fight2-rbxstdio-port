// MKIBNAAANPO$$.ctor @ RVA 0x30D4338

void MKIBNAAANPO___ctor(MKIBNAAANPO_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456631d & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    DAT_0456631d = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)
              thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo,method);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).BNAIPPCOGPE = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

