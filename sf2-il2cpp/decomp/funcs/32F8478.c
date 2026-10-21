// EEOMEMBBGNA$$CGELDPIHHOP @ RVA 0x32F8478

void EEOMEMBBGNA__CGELDPIHHOP(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  CPNHNIKFGFB_o *__this_00;
  
  if ((DAT_045676a7 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
                    /* try { // try from 033f849c to 034f84a3 has its CatchHandler @ 033f8500 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_17030);
                    /* try { // try from 033f84b4 to 034f84bf has its CatchHandler @ 033f84f8 */
    DAT_045676a7 = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
                    /* try { // try from 033f8518 to 034f851b has its CatchHandler @ 033f853c */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033f851c to 034f8543 has its CatchHandler @ 033f8408 */
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_17030,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 033f84c0 to 034f84ef has its CatchHandler @ 033f8408 */
  bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
  if (!bVar1) {
                    /* catch() { ... } // from try @ 033f8518 with catch @ 033f853c */
    __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 033f8544 to 034f854b has its CatchHandler @ 033f8560 */
    if (__this_00 != (CPNHNIKFGFB_o *)0x0) {
                    /* try { // try from 033f854c to 034f8557 has its CatchHandler @ 033f8408 */
                    /* try { // try from 033f8558 to 034f855f has its CatchHandler @ 033f8560 */
      CPNHNIKFGFB__DIGPCFKCCBK
                (__this_00,(IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  lVar2 = thunk_FUN_01bda71c((IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField,
                             System_Action<KEFHDOHHHML>_TypeInfo);
  if (lVar2 != 0) {
                    /* try { // try from 033f84f0 to 034f84f3 has its CatchHandler @ 033f84fc */
                    /* try { // try from 033f84f4 to 034f8517 has its CatchHandler @ 033f8408 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f84b4 with catch @ 033f84f8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f84f0 with catch @ 033f84fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f849c with catch @ 033f8500
                        */
                    /* WARNING: Could not recover jumptable at 0x033f8504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))
              (*(undefined8 *)(lVar2 + 0x40),IDCGLBOIAFJ,*(undefined8 *)(lVar2 + 0x28));
    return;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033f8544 with catch @ 033f8560
                       catch(type#2 @ 00000000) { ... } // from try @ 033f8558 with catch @ 033f8560
                        */
  return;
}

