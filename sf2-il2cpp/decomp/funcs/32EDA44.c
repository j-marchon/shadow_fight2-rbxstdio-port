// HBHNJNHNFHP$$PCALMGLCBKG @ RVA 0x32EDA44

void HBHNJNHNFHP__PCALMGLCBKG(HBHNJNHNFHP_o *__this,MethodInfo *method)

{
  System_Action_MPAKDCNMLEG__o *pSVar1;
  
  if ((DAT_04567655 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9840);
    DAT_04567655 = 1;
  }
  FCMAKNBEJDA__DHAAGKPHJLA((FCMAKNBEJDA_o *)__this,StringLiteral_9840,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).super.NEKJNNBFECK;
  *(undefined2 *)&(__this->fields).super.field_0x3d = 0x100;
  if (pSVar1 != (System_Action_MPAKDCNMLEG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033edab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(__this->fields).super.JBNGADJBDHB,
               (pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

