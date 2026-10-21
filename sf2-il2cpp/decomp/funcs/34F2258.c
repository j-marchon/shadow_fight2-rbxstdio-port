// OLKKAIFGGAK$$MAGLOOLDJHG @ RVA 0x34F2258

void OLKKAIFGGAK__MAGLOOLDJHG(OLKKAIFGGAK_o *__this,Il2CppObject *DKMMBMBMJBO,MethodInfo *method)

{
  OLKKAIFGGAK_EAOIGPODIAI_o *pOVar1;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *pSVar2;
  
  pOVar1 = (__this->fields).PDCHNCOIHHA;
  if (pOVar1 != (OLKKAIFGGAK_EAOIGPODIAI_o *)0x0) {
    (pOVar1->fields).KOANCCDDBDA = DKMMBMBMJBO;
    thunk_FUN_01c20e04();
    pSVar2 = (__this->fields).ALAOIBCIKIA;
    if (pSVar2 != (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035f228c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,(__this->fields).PDCHNCOIHHA,
                 (pSVar2->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

