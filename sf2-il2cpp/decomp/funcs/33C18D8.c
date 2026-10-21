// CUDLR.Server.LECJFHCOHPH$$FMAPNPJHDKO @ RVA 0x33C18D8

void CUDLR_Server_LECJFHCOHPH__FMAPNPJHDKO
               (CUDLR_Server_LECJFHCOHPH_o *__this,JOCIOCLPIHI_o *context,MethodInfo *method)

{
  CUDLR_Server_NFEBIKDKJPN_o *pCVar1;
  
  pCVar1 = (__this->fields).callback;
  if (pCVar1 != (CUDLR_Server_NFEBIKDKJPN_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034c18f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pCVar1->fields).super.super.invoke_impl)
              ((pCVar1->fields).super.super.method_code,context,0,
               (pCVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

