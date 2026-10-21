// AJINOJNMEEK$$.ctor @ RVA 0x304E1F0

void AJINOJNMEEK___ctor(AJINOJNMEEK_o *__this,AJINOJNMEEK_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  AJINOJNMEEK___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (AJINOJNMEEK_o *)0x0) {
    (__this->fields).EMDNDLOODLG = (IBKIPBJJCPG->fields).EMDNDLOODLG;
    (__this->fields).EGELDFKMOCJ = (IBKIPBJJCPG->fields).EGELDFKMOCJ;
    thunk_FUN_01c20e04();
    (__this->fields).ABFBDJFPIMM = (IBKIPBJJCPG->fields).ABFBDJFPIMM;
    thunk_FUN_01c20e04();
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

