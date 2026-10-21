// PNFHEJAEPHI$$OBFBBCGKHMG @ RVA 0x32C7740

/* WARNING: Type propagation algorithm not settling */

void PNFHEJAEPHI__OBFBBCGKHMG(PNFHEJAEPHI_o *__this,MethodInfo *method)

{
  System_Action_MPAKDCNMLEG__o *pSVar1;
  
  if ((DAT_045674f6 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9841);
    DAT_045674f6 = 1;
  }
  FCMAKNBEJDA__DHAAGKPHJLA((FCMAKNBEJDA_o *)__this,StringLiteral_9841,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).super.IIEIOOACJJL;
  if (pSVar1 != (System_Action_MPAKDCNMLEG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033c77a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(__this->fields).super.JBNGADJBDHB,
               (pSVar1->fields).super.super.method);
    return;
  }
  return;
}

