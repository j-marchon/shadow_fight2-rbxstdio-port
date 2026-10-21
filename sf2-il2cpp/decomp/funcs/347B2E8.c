// LPAPAMPGDFN$$JDFDKLKCHKC @ RVA 0x347B2E8

void LPAPAMPGDFN__JDFDKLKCHKC(LPAPAMPGDFN_o *__this,MethodInfo *method)

{
  System_String_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  MGNPHCAAEIO_LLBEEBNCOND_o *pMVar1;
  System_Action_o *pSVar2;
  
  if ((DAT_04568347 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<string>__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568347 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  pMVar1 = MGNPHCAAEIO_TypeInfo->static_fields->DMMGOHFKKCA;
  if (pMVar1 != (MGNPHCAAEIO_LLBEEBNCOND_o *)0x0) {
    CJNHFNHJHPE = (System_String_o *)
                  DJNBJHPDKDP__KIKGKKGDCKK<object>
                            ((System_Collections_Generic_List_T__o *)(pMVar1->fields).PKPJOJCIDGA,
                             Method_DJNBJHPDKDP_KIKGKKGDCKK<string>__);
    LPAPAMPGDFN__CBALBLBOEJC(__this,CJNHFNHJHPE,in_x2);
    pSVar2 = (__this->fields).JKPKAMGOAAB;
    (__this->fields).HBFBGGBPLOB = true;
    if (pSVar2 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0357b38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

