// Nekki.Utils.RaidBetaLogger$$EAJCNKFOGFF @ RVA 0x359D470

void Nekki_Utils_RaidBetaLogger__EAJCNKFOGFF
               (Nekki_Utils_RaidBetaLogger_o *__this,MethodInfo *method)

{
  System_Threading_CancellationTokenSource_o **ppSVar1;
  
  ppSVar1 = &(__this->fields).NCLFCOGENLF;
                    /* try { // try from 0369d478 to 0379d50f has its CatchHandler @ 0369d478
                       catch() { ... } // from try @ 0369d478 with catch @ 0369d478
                       catch() { ... } // from try @ 0369d534 with catch @ 0369d478
                       catch() { ... } // from try @ 0369d574 with catch @ 0369d478
                       catch() { ... } // from try @ 0369d59c with catch @ 0369d478
                       catch() { ... } // from try @ 0369d5d8 with catch @ 0369d478 */
  if (*ppSVar1 != (System_Threading_CancellationTokenSource_o *)0x0) {
    System_Threading_CancellationTokenSource__Cancel(*ppSVar1,(MethodInfo *)0x0);
    if (*ppSVar1 != (System_Threading_CancellationTokenSource_o *)0x0) {
      System_Threading_CancellationTokenSource__Dispose(*ppSVar1,(MethodInfo *)0x0);
    }
    *ppSVar1 = (System_Threading_CancellationTokenSource_o *)0x0;
    thunk_FUN_01c20e04(ppSVar1,0);
    return;
  }
  return;
}

