// OLHGMELLLFK$$.ctor @ RVA 0x3194FF8

void OLHGMELLLFK___ctor(OLHGMELLLFK_o *__this,OLHGMELLLFK_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  OLHGMELLLFK___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (OLHGMELLLFK_o *)0x0) {
    (__this->fields).OACFBJNMHCM = (IBKIPBJJCPG->fields).OACFBJNMHCM;
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

