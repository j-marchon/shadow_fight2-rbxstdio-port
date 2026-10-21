// KICEBKFFJJA.HNNLPOCFLOO$$IIPCEALKIJF @ RVA 0x3378664

void KICEBKFFJJA_HNNLPOCFLOO__IIPCEALKIJF(KICEBKFFJJA_HNNLPOCFLOO_o *__this,MethodInfo *method)

{
  KICEBKFFJJA_EDEMEPDGLOP_o *pKVar1;
  System_Action_bool__o *pSVar2;
  
  pKVar1 = (__this->fields).CS___8__locals1;
  if (pKVar1 == (KICEBKFFJJA_EDEMEPDGLOP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar2 = (pKVar1->fields).callback;
  if (pSVar2 != (System_Action_bool__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0347868c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(__this->fields).result,
               (pSVar2->fields).super.super.method);
    return;
  }
  return;
}

