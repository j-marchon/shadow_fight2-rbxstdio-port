// CHDGOFBHAFI$$GJPOEDJOAAM @ RVA 0x32436D0

void CHDGOFBHAFI__GJPOEDJOAAM(CHDGOFBHAFI_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  if ((__this->fields).BLELLCNDBHN == CJNHFNHJHPE) {
    return;
  }
  pSVar1 = (__this->fields).MHOOOLECDKK;
  (__this->fields).BLELLCNDBHN = CJNHFNHJHPE;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03343708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

