// ADAHHFAPLLM$$.ctor @ RVA 0x30C8724

void ADAHHFAPLLM___ctor(ADAHHFAPLLM_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045662c9 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    DAT_045662c9 = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)
              thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo,method);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).BNAIPPCOGPE = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  (__this->fields)._IOLEJLFICGM_k__BackingField = true;
                    /* try { // try from 031c8788 to 032c878b has its CatchHandler @ 031c879c */
                    /* try { // try from 031c878c to 032c878f has its CatchHandler @ 031c8794 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c86fc with catch @ 031c8790
                       try { // try from 031c8790 to 032c87b7 has its CatchHandler @ 031c85f0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c878c with catch @ 031c8794
                        */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

