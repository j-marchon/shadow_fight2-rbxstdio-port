// EEOMEMBBGNA$$CHAMCKJPFDF @ RVA 0x32F9998

void EEOMEMBBGNA__CHAMCKJPFDF(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  CPNHNIKFGFB_o *__this_00;
  
  if ((DAT_045676bb & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 033f99c8 to 034f99cf has its CatchHandler @ 033f9f2c */
    FUN_01bab630(&StringLiteral_17013);
    DAT_045676bb = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
                    /* try { // try from 033f9a38 to 034f9a3f has its CatchHandler @ 033f9e30 */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 033f9a54 to 034f9a57 has its CatchHandler @ 033f9e24 */
                    /* try { // try from 033f9a58 to 034f9ac7 has its CatchHandler @ 033f950c */
    UnityEngine_Debug__LogError(StringLiteral_17013,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 033f99e4 to 034f99e7 has its CatchHandler @ 033f9eb4 */
                    /* try { // try from 033f99e8 to 034f9a37 has its CatchHandler @ 033f950c */
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
  lVar2 = thunk_FUN_01bda71c((IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField,
                             System_Action<KEFHDOHHHML>_TypeInfo);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x033f9a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))
              (*(undefined8 *)(lVar2 + 0x40),IDCGLBOIAFJ,*(undefined8 *)(lVar2 + 0x28));
    return;
  }
  return;
}

