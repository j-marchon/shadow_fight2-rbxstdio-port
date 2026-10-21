// NIGMCJIMBHO$$.ctor @ RVA 0x337AB24

void NIGMCJIMBHO___ctor(NIGMCJIMBHO_o *__this,NIGMCJIMBHO_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  NIGMCJIMBHO___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (NIGMCJIMBHO_o *)0x0) {
    (__this->fields).DKOBFIICAFM = (IBKIPBJJCPG->fields).DKOBFIICAFM;
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

