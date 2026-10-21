// EEOMEMBBGNA$$AMPHGEFLMAN @ RVA 0x32F9F44

void EEOMEMBBGNA__AMPHGEFLMAN(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  CPNHNIKFGFB_o *__this_00;
  
                    /* try { // try from 033f9f44 to 034f9f47 has its CatchHandler @ 033f9f70 */
                    /* try { // try from 033f9f48 to 034f9f77 has its CatchHandler @ 033f950c */
  if ((DAT_045676c4 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
                    /* catch() { ... } // from try @ 033f9f44 with catch @ 033f9f70 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 033f9f78 to 034f9f8b has its CatchHandler @ 033fa0f8 */
    FUN_01bab630(&StringLiteral_17016);
    DAT_045676c4 = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* catch() { ... } // from try @ 033f9fc8 with catch @ 033f9ff4 */
                    /* try { // try from 033fa004 to 034fa017 has its CatchHandler @ 033fa0f8 */
    UnityEngine_Debug__LogError(StringLiteral_17016,(MethodInfo *)0x0);
    return;
  }
                    /* catch() { ... } // from try @ 033f9d68 with catch @ 033f9f8c
                       try { // try from 033f9f8c to 034f9fc7 has its CatchHandler @ 033f950c */
                    /* catch() { ... } // from try @ 033f9de4 with catch @ 033f9f90 */
                    /* catch() { ... } // from try @ 033f9de0 with catch @ 033f9f94 */
  bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033f9ddc with catch @ 033f9f98 */
  if (!bVar1) {
    __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (CPNHNIKFGFB_o *)0x0) {
                    /* catch() { ... } // from try @ 033f9ac8 with catch @ 033fa018
                       try { // try from 033fa018 to 034fa02f has its CatchHandler @ 033f950c */
      CPNHNIKFGFB__DIGPCFKCCBK
                (__this_00,(IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033fa034 to 034fa06b has its CatchHandler @ 033f950c */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 033f9ae4 with catch @ 033f9fa4 */
  lVar2 = thunk_FUN_01bda71c((IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField,
                             System_Action<KEFHDOHHHML>_TypeInfo);
                    /* catch() { ... } // from try @ 033f9d44 with catch @ 033f9fb0 */
  if (lVar2 != 0) {
                    /* try { // try from 033f9fc8 to 034f9fcb has its CatchHandler @ 033f9ff4 */
                    /* try { // try from 033f9fcc to 034fa003 has its CatchHandler @ 033f950c */
                    /* WARNING: Could not recover jumptable at 0x033f9fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))
              (*(undefined8 *)(lVar2 + 0x40),IDCGLBOIAFJ,*(undefined8 *)(lVar2 + 0x28));
    return;
  }
                    /* try { // try from 033fa030 to 034fa033 has its CatchHandler @ 033fa05c */
  return;
}

