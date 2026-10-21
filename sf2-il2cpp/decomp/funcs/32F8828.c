// EEOMEMBBGNA$$IMJOCHPGEBL @ RVA 0x32F8828

void EEOMEMBBGNA__IMJOCHPGEBL(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  CPNHNIKFGFB_o *__this_00;
  
                    /* try { // try from 033f8830 to 034f8857 has its CatchHandler @ 033f8d70 */
  if ((DAT_045676ab & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_17023);
    DAT_045676ab = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_17023,(MethodInfo *)0x0);
    return;
  }
  bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
  if (!bVar1) {
                    /* try { // try from 033f88f0 to 034f88fb has its CatchHandler @ 033f8d54 */
    __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (CPNHNIKFGFB_o *)0x0) {
                    /* try { // try from 033f88fc to 034f8907 has its CatchHandler @ 033f8d50 */
      CPNHNIKFGFB__DIGPCFKCCBK
                (__this_00,(IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 033f888c to 034f88b7 has its CatchHandler @ 033f8d6c */
  lVar2 = thunk_FUN_01bda71c((IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField,
                             System_Action<KEFHDOHHHML>_TypeInfo);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x033f88b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))
              (*(undefined8 *)(lVar2 + 0x40),IDCGLBOIAFJ,*(undefined8 *)(lVar2 + 0x28));
    return;
  }
  return;
}

