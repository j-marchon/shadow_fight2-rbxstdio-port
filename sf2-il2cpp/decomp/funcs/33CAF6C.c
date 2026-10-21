// FCPAHDIGJGN$$KJFENNDOBOB @ RVA 0x33CAF6C

void FCPAHDIGJGN__KJFENNDOBOB
               (FCPAHDIGJGN_o *__this,System_Action_bool__o *BLMFLPJJMPF,MethodInfo *method)

{
  if ((DAT_04567e23 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12124);
    DAT_04567e23 = 1;
  }
  NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,StringLiteral_12124,(MethodInfo *)0x0);
  if (BLMFLPJJMPF != (System_Action_bool__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034cafd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(BLMFLPJJMPF->fields).super.super.invoke_impl)
              ((BLMFLPJJMPF->fields).super.super.method_code,0,
               (BLMFLPJJMPF->fields).super.super.method);
    return;
  }
  return;
}

