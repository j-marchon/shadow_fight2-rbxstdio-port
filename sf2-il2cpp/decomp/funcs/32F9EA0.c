// EEOMEMBBGNA$$LPGFLHCGJLP @ RVA 0x32F9EA0

void EEOMEMBBGNA__LPGFLHCGJLP(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IMMNELPBGIF,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
                    /* catch() { ... } // from try @ 033f9dec with catch @ 033f9ea8 */
                    /* catch() { ... } // from try @ 033f99e4 with catch @ 033f9eb4 */
  if ((DAT_045676c3 & 1) == 0) {
                    /* catch() { ... } // from try @ 033f9c44 with catch @ 033f9ec0 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* catch() { ... } // from try @ 033f9b38 with catch @ 033f9ec8 */
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<OJEHKJHEBID>__);
    __this = (EEOMEMBBGNA_o *)FUN_01bab630(&StringLiteral_20014);
                    /* try { // try from 033f9ee0 to 034f9ee3 has its CatchHandler @ 033f9f08 */
    DAT_045676c3 = 1;
  }
                    /* try { // try from 033f9ee4 to 034f9f17 has its CatchHandler @ 033f950c */
  if (IMMNELPBGIF != (KEFHDOHHHML_o *)0x0) {
    pIVar1 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IMMNELPBGIF,Method_KEFHDOHHHML_PFNEPJAFEDF<OJEHKJHEBID>__);
    if (pIVar1 != (Il2CppObject *)0x0) {
                    /* catch() { ... } // from try @ 033f9ee0 with catch @ 033f9f08 */
      return;
    }
                    /* try { // try from 033f9f18 to 034f9f2b has its CatchHandler @ 033fa0f8 */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* catch() { ... } // from try @ 033f99c8 with catch @ 033f9f2c
                       try { // try from 033f9f2c to 034f9f43 has its CatchHandler @ 033f950c */
    UnityEngine_Debug__LogError(StringLiteral_20014,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

