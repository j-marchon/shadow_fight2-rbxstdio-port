// KIOBDEIAMOO$$.ctor @ RVA 0x3097C30

void KIOBDEIAMOO___ctor(KIOBDEIAMOO_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_CompositeDisposable_o **ppUVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03197c50 to 03297c53 has its CatchHandler @ 03197c58 */
                    /* try { // try from 03197c54 to 03297c83 has its CatchHandler @ 0319795c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03197c50 with catch @ 03197c58
                        */
  if ((DAT_045660ed & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03197b84 with catch @ 03197c5c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03197b60 with catch @ 03197c60
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03197b9c with catch @ 03197c64
                        */
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03197b88 with catch @ 03197c68
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03197b64 with catch @ 03197c6c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03197b28 with catch @ 03197c70
                        */
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03197acc with catch @ 03197c74
                        */
    DAT_045660ed = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)
              thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo,method);
                    /* try { // try from 03197c84 to 03297c87 has its CatchHandler @ 03197cd0 */
                    /* try { // try from 03197c88 to 03297d07 has its CatchHandler @ 0319795c */
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).BNAIPPCOGPE;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  MKFAKELPPAC___ctor((MKFAKELPPAC_o *)__this,(MethodInfo *)0x0);
  return;
}

