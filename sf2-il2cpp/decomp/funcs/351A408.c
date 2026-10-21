// IHELGNOGAOE$$KNPNGGFPCHG @ RVA 0x351A408

System_Threading_CancellationToken_o
IHELGNOGAOE__KNPNGGFPCHG(IHELGNOGAOE_o *__this,MethodInfo *method)

{
  System_Threading_CancellationTokenSource_o *pSVar1;
  System_Threading_CancellationToken_o SVar2;
  MethodInfo *extraout_x1;
  System_Threading_CancellationTokenSource_o *__this_00;
  IHELGNOGAOE_Fields *pIVar3;
  
                    /* try { // try from 0361a408 to 0371a49f has its CatchHandler @ 0361a408
                       catch() { ... } // from try @ 0361a408 with catch @ 0361a408
                       catch() { ... } // from try @ 0361a4c8 with catch @ 0361a408
                       catch() { ... } // from try @ 0361a504 with catch @ 0361a408
                       catch() { ... } // from try @ 0361a52c with catch @ 0361a408
                       catch() { ... } // from try @ 0361a564 with catch @ 0361a408 */
  if ((DAT_04568972 & 1) == 0) {
    FUN_01bab630(&System_Threading_CancellationTokenSource_TypeInfo);
    DAT_04568972 = 1;
    method = extraout_x1;
  }
  pIVar3 = &__this->fields;
  __this_00 = pIVar3->NKHLCJCLMKP;
  pSVar1 = (System_Threading_CancellationTokenSource_o *)
           thunk_FUN_01bda818(System_Threading_CancellationTokenSource_TypeInfo,method);
  System_Threading_CancellationTokenSource___ctor(pSVar1,(MethodInfo *)0x0);
  pIVar3->NKHLCJCLMKP = pSVar1;
  thunk_FUN_01c20e04(pIVar3,pSVar1);
  if (__this_00 != (System_Threading_CancellationTokenSource_o *)0x0) {
    System_Threading_CancellationTokenSource__Cancel(__this_00,(MethodInfo *)0x0);
    System_Threading_CancellationTokenSource__Dispose(__this_00,(MethodInfo *)0x0);
  }
  pSVar1 = (__this->fields).NKHLCJCLMKP;
  (__this->fields).HGOFNNBNBGK = true;
  if (pSVar1 != (System_Threading_CancellationTokenSource_o *)0x0) {
                    /* try { // try from 0361a4a0 to 0371a4a7 has its CatchHandler @ 0361a510 */
    SVar2 = System_Threading_CancellationTokenSource__get_Token(pSVar1,(MethodInfo *)0x0);
    return (System_Threading_CancellationToken_o)SVar2.fields._source;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

