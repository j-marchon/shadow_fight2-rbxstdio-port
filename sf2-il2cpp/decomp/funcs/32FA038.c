// EEOMEMBBGNA$$EGLODFFNHNO @ RVA 0x32FA038

void EEOMEMBBGNA__EGLODFFNHNO(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  CPNHNIKFGFB_o *__this_00;
  
  if ((DAT_045676c7 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
                    /* catch() { ... } // from try @ 033fa030 with catch @ 033fa05c */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 033fa06c to 034fa07f has its CatchHandler @ 033fa0f8 */
    FUN_01bab630(&StringLiteral_17056);
    DAT_045676c7 = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
                    /* catch() { ... } // from try @ 033fa0a0 with catch @ 033fa0cc */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033fa0dc to 034fa0e3 has its CatchHandler @ 033fa0f8 */
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 033fa0e4 to 034fa0ef has its CatchHandler @ 033f950c */
                    /* try { // try from 033fa0f0 to 034fa0f7 has its CatchHandler @ 033fa0f8 */
                    /* catch() { ... } // from try @ 033f9e70 with catch @ 033fa0f8
                       catch() { ... } // from try @ 033f9f18 with catch @ 033fa0f8
                       catch() { ... } // from try @ 033f9f78 with catch @ 033fa0f8
                       catch() { ... } // from try @ 033fa004 with catch @ 033fa0f8
                       catch() { ... } // from try @ 033fa06c with catch @ 033fa0f8
                       catch() { ... } // from try @ 033fa0dc with catch @ 033fa0f8
                       catch() { ... } // from try @ 033fa0f0 with catch @ 033fa0f8 */
    UnityEngine_Debug__LogError(StringLiteral_17056,(MethodInfo *)0x0);
    return;
  }
                    /* catch() { ... } // from try @ 033f9df4 with catch @ 033fa080
                       catch() { ... } // from try @ 033f9dfc with catch @ 033fa080
                       try { // try from 033fa080 to 034fa09f has its CatchHandler @ 033f950c */
                    /* catch() { ... } // from try @ 033f9c60 with catch @ 033fa084 */
  bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (CPNHNIKFGFB_o *)0x0) {
      CPNHNIKFGFB__DIGPCFKCCBK
                (__this_00,(IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 033fa0a0 to 034fa0a3 has its CatchHandler @ 033fa0cc */
  lVar2 = thunk_FUN_01bda71c((IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField,
                             System_Action<KEFHDOHHHML>_TypeInfo);
                    /* try { // try from 033fa0a4 to 034fa0db has its CatchHandler @ 033f950c */
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x033fa0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),0,*(undefined8 *)(lVar2 + 0x28));
    return;
  }
  return;
}

