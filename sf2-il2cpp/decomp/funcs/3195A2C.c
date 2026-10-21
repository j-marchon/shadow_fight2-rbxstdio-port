// ProgressBarBase.DKLCHCNCMAI$$KDEAENJLPNG @ RVA 0x3195A2C

void ProgressBarBase_DKLCHCNCMAI__KDEAENJLPNG
               (ProgressBarBase_DKLCHCNCMAI_o *__this,MethodInfo *method)

{
  ProgressBarBase_o *__this_00;
  System_Action_o *pSVar1;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (ProgressBarBase_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  ProgressBarBase__CCPABLFBFFA(__this_00,method);
  pSVar1 = (__this->fields).onCompleteAction;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03295a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
  return;
}

