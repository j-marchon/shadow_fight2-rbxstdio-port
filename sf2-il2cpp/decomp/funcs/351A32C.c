// IHELGNOGAOE$$LLMJPCHOBPL @ RVA 0x351A32C

void IHELGNOGAOE__LLMJPCHOBPL(IHELGNOGAOE_o *__this,MethodInfo *method)

{
  IHELGNOGAOE_Fields *pIVar1;
  System_Threading_CancellationTokenSource_o *__this_00;
  
  pIVar1 = &__this->fields;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361a210 with catch @ 0361a32c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361a30c with catch @ 0361a330
                        */
  __this_00 = pIVar1->NKHLCJCLMKP;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361a308 with catch @ 0361a334
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361a1b4 with catch @ 0361a338
                        */
  pIVar1->NKHLCJCLMKP = (System_Threading_CancellationTokenSource_o *)0x0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361a158 with catch @ 0361a33c
                        */
  thunk_FUN_01c20e04(pIVar1,0);
  if (__this_00 != (System_Threading_CancellationTokenSource_o *)0x0) {
                    /* try { // try from 0361a34c to 0371a34f has its CatchHandler @ 0361a360 */
    System_Threading_CancellationTokenSource__Cancel(__this_00,(MethodInfo *)0x0);
    System_Threading_CancellationTokenSource__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* catch() { ... } // from try @ 0361a34c with catch @ 0361a360 */
  return;
}

