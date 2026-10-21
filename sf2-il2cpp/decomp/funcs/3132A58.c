// AFLJMCMKCIG$$.ctor @ RVA 0x3132A58

void AFLJMCMKCIG___ctor(AFLJMCMKCIG_o *__this,AFLJMCMKCIG_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  AFLJMCMKCIG___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (AFLJMCMKCIG_o *)0x0) {
    (__this->fields).EMDNDLOODLG = (IBKIPBJJCPG->fields).EMDNDLOODLG;
    (__this->fields).PPDLPBMONBL = (IBKIPBJJCPG->fields).PPDLPBMONBL;
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

