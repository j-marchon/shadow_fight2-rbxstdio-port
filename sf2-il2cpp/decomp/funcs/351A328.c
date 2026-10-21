// IHELGNOGAOE$$Dispose @ RVA 0x351A328

void IHELGNOGAOE__Dispose(IHELGNOGAOE_o *__this,MethodInfo *method)

{
  IHELGNOGAOE_Fields *pIVar1;
  System_Threading_CancellationTokenSource_o *__this_00;
  
  pIVar1 = &__this->fields;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361a260 with catch @ 0361a328
                        */
  __this_00 = pIVar1->NKHLCJCLMKP;
  pIVar1->NKHLCJCLMKP = (System_Threading_CancellationTokenSource_o *)0x0;
  thunk_FUN_01c20e04(pIVar1,0);
  if (__this_00 != (System_Threading_CancellationTokenSource_o *)0x0) {
    System_Threading_CancellationTokenSource__Cancel(__this_00,(MethodInfo *)0x0);
    System_Threading_CancellationTokenSource__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}

