// NOMBKAHPOHM.ELLEJAKENLH$$PAFEJOBBDOK @ RVA 0x32DAD04

bool NOMBKAHPOHM_ELLEJAKENLH__PAFEJOBBDOK
               (NOMBKAHPOHM_ELLEJAKENLH_o *__this,NCCFNKMICGK_o *offer,MethodInfo *method)

{
  undefined1 uVar1;
  System_Predicate_NCCFNKMICGK__o *pSVar2;
  
  pSVar2 = (__this->fields).condition;
  if (pSVar2 != (System_Predicate_NCCFNKMICGK__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033dad18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(pSVar2->fields).super.super.invoke_impl)
                      ((pSVar2->fields).super.super.method_code,offer,
                       (pSVar2->fields).super.super.method);
    return (bool)uVar1;
  }
  return true;
}

