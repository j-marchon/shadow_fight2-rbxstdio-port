// EEOMEMBBGNA$$CONJKPKBICI @ RVA 0x32F7B14

void EEOMEMBBGNA__CONJKPKBICI(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  EPCCNLNOALL_o *ADHJMIOENHG;
  long lVar2;
  CPNHNIKFGFB_o *__this_00;
  System_Action_o *pSVar3;
  
  if ((DAT_045676a5 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 033f7b48 to 034f7b4f has its CatchHandler @ 033f7ba4 */
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<EPCCNLNOALL>__);
    FUN_01bab630(&StringLiteral_17025);
                    /* try { // try from 033f7b60 to 034f7b6b has its CatchHandler @ 033f7ba0 */
    DAT_045676a5 = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
                    /* try { // try from 033f7bec to 034f7bf3 has its CatchHandler @ 033f7c08 */
                    /* try { // try from 033f7bf4 to 034f7bff has its CatchHandler @ 033f7a64 */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033f7c00 to 034f7c07 has its CatchHandler @ 033f7c08 */
      thunk_FUN_01ba7564();
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033f7bec with catch @ 033f7c08
                       catch(type#2 @ 00000000) { ... } // from try @ 033f7c00 with catch @ 033f7c08
                        */
                    /* try { // try from 033f7c0c to 034f7df7 has its CatchHandler @ 033f7c0c
                       catch() { ... } // from try @ 033f7c0c with catch @ 033f7c0c
                       catch() { ... } // from try @ 033f7f40 with catch @ 033f7c0c
                       catch() { ... } // from try @ 033f7fe8 with catch @ 033f7c0c
                       catch() { ... } // from try @ 033f8048 with catch @ 033f7c0c
                       catch() { ... } // from try @ 033f8088 with catch @ 033f7c0c */
    UnityEngine_Debug__LogError(StringLiteral_17025,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 033f7b6c to 034f7b8f has its CatchHandler @ 033f7a64 */
  bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
  if (bVar1) {
    ADHJMIOENHG = (EPCCNLNOALL_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<EPCCNLNOALL>__);
                    /* try { // try from 033f7b90 to 034f7b97 has its CatchHandler @ 033f7b9c */
                    /* try { // try from 033f7b98 to 034f7bbf has its CatchHandler @ 033f7a64 */
    EEOMEMBBGNA__OGBNPDLJNBG(__this,ADHJMIOENHG,method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f7b90 with catch @ 033f7b9c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f7b60 with catch @ 033f7ba0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f7b48 with catch @ 033f7ba4
                        */
    lVar2 = thunk_FUN_01bda71c((IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField,
                               System_Action<KEFHDOHHHML>_TypeInfo);
    if (lVar2 != 0) {
                    /* try { // try from 033f7bc0 to 034f7bc3 has its CatchHandler @ 033f7be4 */
                    /* try { // try from 033f7bc4 to 034f7beb has its CatchHandler @ 033f7a64 */
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),IDCGLBOIAFJ,*(undefined8 *)(lVar2 + 0x28));
    }
    pSVar3 = (__this->fields).GHOPCFLDCPK;
    if (pSVar3 != (System_Action_o *)0x0) {
                    /* catch() { ... } // from try @ 033f7bc0 with catch @ 033f7be4 */
                    /* WARNING: Could not recover jumptable at 0x033f7be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar3->fields).super.super.invoke_impl)
                ((pSVar3->fields).super.super.method_code,(pSVar3->fields).super.super.method);
      return;
    }
  }
  else {
    __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (CPNHNIKFGFB_o *)0x0) {
      CPNHNIKFGFB__DIGPCFKCCBK
                (__this_00,(IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

