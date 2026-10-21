// PNFHEJAEPHI$$IJACNLMKEPB @ RVA 0x32C6F58

void PNFHEJAEPHI__IJACNLMKEPB(PNFHEJAEPHI_o *__this,MethodInfo *method)

{
  System_Action_MPAKDCNMLEG__o *pSVar1;
  
                    /* try { // try from 033c6f58 to 034c6f97 has its CatchHandler @ 033c6e10 */
  if ((DAT_045674ee & 1) == 0) {
    FUN_01bab630(&StringLiteral_9836);
    DAT_045674ee = 1;
  }
                    /* try { // try from 033c6f98 to 034c6f9f has its CatchHandler @ 033c6fb0 */
  FCMAKNBEJDA__DHAAGKPHJLA((FCMAKNBEJDA_o *)__this,StringLiteral_9836,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).super.EDPLNAAICPE;
                    /* try { // try from 033c6fa0 to 034c6fc7 has its CatchHandler @ 033c6e10 */
  if (pSVar1 != (System_Action_MPAKDCNMLEG__o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c6f54 with catch @ 033c6fa4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c6ef0 with catch @ 033c6fa8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c6f98 with catch @ 033c6fb0
                        */
                    /* WARNING: Could not recover jumptable at 0x033c6fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(__this->fields).super.JBNGADJBDHB,
               (pSVar1->fields).super.super.method);
    return;
  }
                    /* try { // try from 033c6fc8 to 034c6fcb has its CatchHandler @ 033c6fec */
  return;
}

