// EEOMEMBBGNA$$EHCGDODIIGF @ RVA 0x32F8BDC

void EEOMEMBBGNA__EHCGDODIIGF(EEOMEMBBGNA_o *__this,MethodInfo *method)

{
  OJEHKJHEBID_o **ppOVar1;
  System_Action_OJEHKJHEBID__o *pSVar2;
  
  ppOVar1 = &(__this->fields).MICFEIBNOLM;
  (__this->fields).NGOFLMHNOGM = -1;
  if (*ppOVar1 == (OJEHKJHEBID_o *)0x0) {
    return;
  }
  (__this->fields).MICFEIBNOLM = (OJEHKJHEBID_o *)0x0;
  thunk_FUN_01c20e04(ppOVar1,0);
  pSVar2 = (__this->fields).JNCKDHJJBPM;
  if (pSVar2 != (System_Action_OJEHKJHEBID__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033f8690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,0,(pSVar2->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

