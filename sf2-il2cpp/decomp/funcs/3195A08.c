// ProgressBarBase.DKLCHCNCMAI$$CFIOEAEBAIB @ RVA 0x3195A08

void ProgressBarBase_DKLCHCNCMAI__CFIOEAEBAIB
               (ProgressBarBase_DKLCHCNCMAI_o *__this,float x,MethodInfo *method)

{
  ProgressBarBase_o *pPVar1;
  ProgressBarBase_c *pPVar2;
  
  pPVar1 = (__this->fields).__4__this;
  if (pPVar1 != (ProgressBarBase_o *)0x0) {
    pPVar2 = pPVar1->klass;
    (pPVar1->fields).JGFKHMMNJBA = x;
                    /* WARNING: Could not recover jumptable at 0x03295a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pPVar2->vtable)._4_unknown.methodPtr)(pPVar1,(pPVar2->vtable)._4_unknown.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

