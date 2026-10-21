// KEIAEKNFNNA$$.ctor @ RVA 0x350679C

void KEIAEKNFNNA___ctor(KEIAEKNFNNA_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_CompositeDisposable_o **ppUVar1;
  UniRx_SerialDisposable_o *__this_01;
  UniRx_SerialDisposable_o **ppUVar2;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 036067c4 to 03706a9f has its CatchHandler @ 036067c4
                       catch() { ... } // from try @ 036067c4 with catch @ 036067c4
                       catch() { ... } // from try @ 03606adc with catch @ 036067c4
                       catch() { ... } // from try @ 03606ba4 with catch @ 036067c4
                       catch() { ... } // from try @ 03606bac with catch @ 036067c4
                       catch() { ... } // from try @ 03606be0 with catch @ 036067c4
                       catch() { ... } // from try @ 03606c20 with catch @ 036067c4 */
  if ((DAT_045688a1 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&UniRx_SerialDisposable_TypeInfo);
    DAT_045688a1 = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)
              thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo,method);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).IHADHPMEOFI;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  __this_01 = (UniRx_SerialDisposable_o *)thunk_FUN_01bda818(UniRx_SerialDisposable_TypeInfo);
  UniRx_SerialDisposable___ctor(__this_01,(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields).BGIOGEDMPOH;
  *ppUVar2 = __this_01;
  thunk_FUN_01c20e04(ppUVar2,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

