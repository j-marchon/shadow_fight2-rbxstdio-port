// OFGMILFFIDI$$EHFDECHCNLO @ RVA 0x35B0634

void OFGMILFFIDI__EHFDECHCNLO(OFGMILFFIDI_o *__this,System_Action_o *BLMFLPJJMPF,MethodInfo *method)

{
  MethodInfo *in_x3;
  
                    /* try { // try from 036b0638 to 037b064f has its CatchHandler @ 036b06bc */
                    /* try { // try from 036b0658 to 037b065b has its CatchHandler @ 036b06ac */
                    /* try { // try from 036b065c to 037b067f has its CatchHandler @ 036b06b4 */
  if ((DAT_04568e98 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12110);
    FUN_01bab630(&StringLiteral_1);
                    /* try { // try from 036b0680 to 037b0697 has its CatchHandler @ 036aff80 */
    DAT_04568e98 = 1;
  }
  OFGMILFFIDI__JHEIGLGFONB(__this,StringLiteral_1,StringLiteral_12110,in_x3);
  if (BLMFLPJJMPF != (System_Action_o *)0x0) {
                    /* try { // try from 036b0698 to 037b06a7 has its CatchHandler @ 036b06bc */
                    /* catch() { ... } // from try @ 036b0658 with catch @ 036b06ac */
                    /* WARNING: Could not recover jumptable at 0x036b06b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(BLMFLPJJMPF->fields).super.super.invoke_impl)
              ((BLMFLPJJMPF->fields).super.super.method_code,
               (BLMFLPJJMPF->fields).super.super.method);
    return;
  }
                    /* catch() { ... } // from try @ 036b065c with catch @ 036b06b4 */
                    /* catch() { ... } // from try @ 036b0638 with catch @ 036b06bc
                       catch() { ... } // from try @ 036b0698 with catch @ 036b06bc */
  return;
}

