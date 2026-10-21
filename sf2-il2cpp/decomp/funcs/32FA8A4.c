// EEOMEMBBGNA$$DJLHKEGALPA @ RVA 0x32FA8A4

void EEOMEMBBGNA__DJLHKEGALPA(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  CPNHNIKFGFB_o *__this_00;
  
  if ((DAT_045676cf & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_17027);
    DAT_045676cf = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_17027,(MethodInfo *)0x0);
    return;
  }
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
                    /* WARNING: Could not recover jumptable at 0x033fa930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))
              (*(undefined8 *)(lVar2 + 0x40),IDCGLBOIAFJ,*(undefined8 *)(lVar2 + 0x28));
    return;
  }
                    /* try { // try from 033fa988 to 034faacb has its CatchHandler @ 033fa988
                       catch() { ... } // from try @ 033fa988 with catch @ 033fa988
                       catch() { ... } // from try @ 033fab50 with catch @ 033fa988
                       catch() { ... } // from try @ 033fabb0 with catch @ 033fa988
                       catch() { ... } // from try @ 033fabf0 with catch @ 033fa988
                       catch() { ... } // from try @ 033fac20 with catch @ 033fa988 */
  return;
}

