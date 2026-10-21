// FCPAHDIGJGN$$OLGAHLHLCKH @ RVA 0x33CB03C

void FCPAHDIGJGN__OLGAHLHLCKH(FCPAHDIGJGN_o *__this,MethodInfo *method)

{
  System_Action_bool__o *pSVar1;
  
  if ((DAT_04567e25 & 1) == 0) {
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    FUN_01bab630(&StringLiteral_11307);
    DAT_04567e25 = 1;
  }
  NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,StringLiteral_11307,(MethodInfo *)0x0);
  if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = NHJCFGACFDF_TypeInfo->static_fields->HHENPENBNLD;
  if (pSVar1 != (System_Action_bool__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034cb0d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,1,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

