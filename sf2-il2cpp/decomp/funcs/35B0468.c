// OFGMILFFIDI$$DPICJOGPEDN @ RVA 0x35B0468

void OFGMILFFIDI__DPICJOGPEDN
               (OFGMILFFIDI_o *__this,PPPLAFICHMF_o *OHPDECELOBI,System_Action_o *BLMFLPJJMPF,
               MethodInfo *method)

{
                    /* try { // try from 036b046c to 037b0543 has its CatchHandler @ 036aff80 */
  if ((DAT_04568e95 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11272);
    FUN_01bab630(&StringLiteral_11646);
    DAT_04568e95 = 1;
  }
  OFGMILFFIDI__JHEIGLGFONB(__this,StringLiteral_11646,StringLiteral_11272,method);
  if (BLMFLPJJMPF != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036b04e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(BLMFLPJJMPF->fields).super.super.invoke_impl)
              ((BLMFLPJJMPF->fields).super.super.method_code,
               (BLMFLPJJMPF->fields).super.super.method);
    return;
  }
  return;
}

