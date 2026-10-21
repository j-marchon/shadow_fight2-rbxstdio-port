// CUDLR.Server.LECJFHCOHPH$$GALCAHPJENJ @ RVA 0x33C1900

void CUDLR_Server_LECJFHCOHPH__GALCAHPJENJ
               (CUDLR_Server_LECJFHCOHPH_o *__this,JOCIOCLPIHI_o *context,MethodInfo *method)

{
  CUDLR_Server_NFEBIKDKJPN_o *pCVar1;
  
  pCVar1 = (__this->fields).callback;
  if (pCVar1 != (CUDLR_Server_NFEBIKDKJPN_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034c1920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pCVar1->fields).super.super.invoke_impl)
              ((pCVar1->fields).super.super.method_code,context,1,
               (pCVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

