// GJFEBGNFFBA$$IOEHKDBENCJ @ RVA 0x325357C

System_String_o * GJFEBGNFFBA__IOEHKDBENCJ(MethodInfo *method)

{
  System_Diagnostics_Stopwatch_o *pSVar1;
  int64_t iVar2;
  System_String_o *pSVar3;
  float local_14;
  
  if ((DAT_04567146 & 1) == 0) {
                    /* try { // try from 033535a0 to 034535a3 has its CatchHandler @ 03353624 */
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
                    /* try { // try from 033535a4 to 034535a7 has its CatchHandler @ 03353620 */
                    /* try { // try from 033535a8 to 034535ab has its CatchHandler @ 033535f4 */
                    /* try { // try from 033535ac to 034535af has its CatchHandler @ 033535f0 */
    FUN_01bab630(&StringLiteral_167);
                    /* try { // try from 033535b0 to 034535b3 has its CatchHandler @ 033535d8 */
                    /* try { // try from 033535b4 to 034535b7 has its CatchHandler @ 033535d4 */
                    /* try { // try from 033535b8 to 0345363f has its CatchHandler @ 03352ef4 */
    FUN_01bab630(&StringLiteral_20642);
                    /* catch() { ... } // from try @ 03353558 with catch @ 033535c0 */
    DAT_04567146 = 1;
  }
                    /* catch() { ... } // from try @ 033533d4 with catch @ 033535c4 */
                    /* catch() { ... } // from try @ 0335343c with catch @ 033535c8 */
                    /* catch() { ... } // from try @ 03353454 with catch @ 033535cc */
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03353410 with catch @ 033535d0 */
    thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 033535b4 with catch @ 033535d4 */
  }
                    /* catch() { ... } // from try @ 033535b0 with catch @ 033535d8 */
                    /* catch() { ... } // from try @ 03353434 with catch @ 033535dc */
  pSVar1 = GJFEBGNFFBA_TypeInfo->static_fields->BBLPIKDNJPI;
                    /* catch() { ... } // from try @ 033533f8 with catch @ 033535e0 */
  if (pSVar1 != (System_Diagnostics_Stopwatch_o *)0x0) {
                    /* catch() { ... } // from try @ 0335341c with catch @ 033535e4 */
                    /* catch() { ... } // from try @ 033533d8 with catch @ 033535e8 */
    System_Diagnostics_Stopwatch__Stop(pSVar1,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033533b8 with catch @ 033535ec */
                    /* catch() { ... } // from try @ 033535ac with catch @ 033535f0 */
                    /* catch() { ... } // from try @ 033535a8 with catch @ 033535f4 */
    pSVar1 = GJFEBGNFFBA_TypeInfo->static_fields->BBLPIKDNJPI;
                    /* catch() { ... } // from try @ 033533a8 with catch @ 033535f8 */
    if (pSVar1 != (System_Diagnostics_Stopwatch_o *)0x0) {
                    /* catch() { ... } // from try @ 03353394 with catch @ 033535fc */
                    /* catch() { ... } // from try @ 033534c8 with catch @ 03353600 */
                    /* catch() { ... } // from try @ 033534a4 with catch @ 03353604 */
                    /* catch() { ... } // from try @ 033534e0 with catch @ 03353608 */
                    /* catch() { ... } // from try @ 03353508 with catch @ 0335360c */
                    /* catch() { ... } // from try @ 033534d8 with catch @ 03353610 */
      iVar2 = System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(pSVar1,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0335351c with catch @ 03353614 */
                    /* catch() { ... } // from try @ 033534f8 with catch @ 03353618 */
                    /* catch() { ... } // from try @ 033534bc with catch @ 0335361c */
                    /* catch() { ... } // from try @ 033535a4 with catch @ 03353620 */
      local_14 = (float)iVar2 / 1000.0;
                    /* catch() { ... } // from try @ 033535a0 with catch @ 03353624 */
                    /* catch() { ... } // from try @ 0335348c with catch @ 03353628 */
      pSVar3 = System_Single__ToString(local_14,(MethodInfo *)&local_14);
                    /* try { // try from 03353640 to 03453643 has its CatchHandler @ 0335366c */
                    /* try { // try from 03353644 to 0345367b has its CatchHandler @ 03352ef4 */
      pSVar3 = System_String__Concat(StringLiteral_167,pSVar3,StringLiteral_20642,(MethodInfo *)0x0)
      ;
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

