// CHDGOFBHAFI$$PNLACGIDHPI @ RVA 0x324542C

void CHDGOFBHAFI__PNLACGIDHPI(CHDGOFBHAFI_o *__this,int32_t LBKOHHHPNIP,MethodInfo *method)

{
  System_Action_CHDGOFBHAFI_DCENIHNBCAA__o *pSVar1;
  
  pSVar1 = (__this->fields).FELKMAJFHIE;
  (__this->fields).CMDMECMFCIK = LBKOHHHPNIP;
  if (pSVar1 != (System_Action_CHDGOFBHAFI_DCENIHNBCAA__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0334544c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,LBKOHHHPNIP,
               (pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

