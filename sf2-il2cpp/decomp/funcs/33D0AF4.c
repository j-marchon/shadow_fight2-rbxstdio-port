// NCIIAGLGGIP$$.ctor @ RVA 0x33D0AF4

void NCIIAGLGGIP___ctor(NCIIAGLGGIP_o *__this,JNDFOKIMHPB_o *DDLHBHHDFLF,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_CompositeDisposable_o **ppUVar1;
  
                    /* catch() { ... } // from try @ 034d0ab8 with catch @ 034d0b18 */
  if ((DAT_04567e60 & 1) == 0) {
                    /* try { // try from 034d0b20 to 035d0b27 has its CatchHandler @ 034d0b3c */
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
                    /* try { // try from 034d0b28 to 035d0b33 has its CatchHandler @ 034d0968 */
    DAT_04567e60 = 1;
  }
                    /* try { // try from 034d0b34 to 035d0b3b has its CatchHandler @ 034d0b3c */
  __this_00 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034d0b20 with catch @ 034d0b3c
                       catch(type#2 @ 00000000) { ... } // from try @ 034d0b34 with catch @ 034d0b3c
                        */
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).BNAIPPCOGPE;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).BAKCPKLAEMM = DDLHBHHDFLF;
  thunk_FUN_01c20e04(&__this->fields,DDLHBHHDFLF);
  return;
}

