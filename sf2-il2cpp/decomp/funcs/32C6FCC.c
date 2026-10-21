// PNFHEJAEPHI$$HBELIHEAKBB @ RVA 0x32C6FCC

void PNFHEJAEPHI__HBELIHEAKBB(PNFHEJAEPHI_o *__this,MethodInfo *method)

{
  System_Action_MPAKDCNMLEG__o *pSVar1;
  
                    /* try { // try from 033c6fcc to 034c6ff3 has its CatchHandler @ 033c6e10 */
  if ((DAT_045674ef & 1) == 0) {
                    /* catch() { ... } // from try @ 033c6fc8 with catch @ 033c6fec */
                    /* try { // try from 033c6ff4 to 034c6ffb has its CatchHandler @ 033c7010 */
    FUN_01bab630(&StringLiteral_9840);
                    /* try { // try from 033c6ffc to 034c7007 has its CatchHandler @ 033c6e10 */
    DAT_045674ef = 1;
  }
                    /* try { // try from 033c7008 to 034c700f has its CatchHandler @ 033c7010 */
  FCMAKNBEJDA__DHAAGKPHJLA((FCMAKNBEJDA_o *)__this,StringLiteral_9840,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033c6ff4 with catch @ 033c7010
                       catch(type#2 @ 00000000) { ... } // from try @ 033c7008 with catch @ 033c7010
                        */
  pSVar1 = (__this->fields).super.NEKJNNBFECK;
  (__this->fields).HNIADPLNEII = false;
  if (pSVar1 != (System_Action_MPAKDCNMLEG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033c7034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(__this->fields).super.JBNGADJBDHB,
               (pSVar1->fields).super.super.method);
    return;
  }
  return;
}

