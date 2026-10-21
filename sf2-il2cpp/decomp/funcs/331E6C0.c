// IPABNCIICPB$$HJDHGAAHOHO @ RVA 0x331E6C0

System_String_o *
IPABNCIICPB__HJDHGAAHOHO(IPABNCIICPB_o *__this,CBLABOPKBKD_o *IKKAMAMLIKA,MethodInfo *method)

{
  System_String_o **ppSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  System_String_o *arg1;
  
                    /* catch() { ... } // from try @ 0341e608 with catch @ 0341e6c0
                       try { // try from 0341e6c0 to 0351e6eb has its CatchHandler @ 0341e350 */
                    /* catch() { ... } // from try @ 0341e5fc with catch @ 0341e6c4 */
                    /* catch() { ... } // from try @ 0341e6bc with catch @ 0341e6c8 */
                    /* catch() { ... } // from try @ 0341e534 with catch @ 0341e6cc */
                    /* catch() { ... } // from try @ 0341e5b4 with catch @ 0341e6d0
                       catch() { ... } // from try @ 0341e6b4 with catch @ 0341e6d0 */
  if ((DAT_0456782e & 1) == 0) {
                    /* try { // try from 0341e6ec to 0351e6ef has its CatchHandler @ 0341e6fc */
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_22366);
                    /* catch() { ... } // from try @ 0341e6ec with catch @ 0341e6fc */
    FUN_01bab630(&StringLiteral_1567);
    DAT_0456782e = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = MGENAMAJALB__LGAGCPLBLHL((MethodInfo *)0x0);
  if (IKKAMAMLIKA != (CBLABOPKBKD_o *)0x0) {
    ppSVar4 = &(IKKAMAMLIKA->fields).super._HFPMHKHBAEF_k__BackingField;
                    /* try { // try from 0341e73c to 0351e76f has its CatchHandler @ 0341e8ac */
    arg1 = (IKKAMAMLIKA->fields).BGHFADDGPAD;
    bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(*ppSVar4,(MethodInfo *)0x0);
    ppSVar1 = (System_String_o **)&StringLiteral_1567;
    if (!bVar2) {
      ppSVar1 = ppSVar4;
    }
                    /* catch() { ... } // from try @ 0341e564 with catch @ 0341e770
                       catch() { ... } // from try @ 0341e6ac with catch @ 0341e770
                       try { // try from 0341e770 to 0351e78f has its CatchHandler @ 0341e350 */
    pSVar3 = System_String__Format
                       (StringLiteral_22366,(Il2CppObject *)pSVar3,(Il2CppObject *)arg1,
                        (Il2CppObject *)*ppSVar1,(MethodInfo *)0x0);
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

