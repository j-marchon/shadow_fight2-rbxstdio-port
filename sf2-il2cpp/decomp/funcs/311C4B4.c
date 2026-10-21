// HDDKPFAHBBN$$.ctor @ RVA 0x311C4B4

void HDDKPFAHBBN___ctor(HDDKPFAHBBN_o *__this,HDDKPFAHBBN_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  HDDKPFAHBBN___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (HDDKPFAHBBN_o *)0x0) {
    (__this->fields).PFCHOEFIMPF = (IBKIPBJJCPG->fields).PFCHOEFIMPF;
    thunk_FUN_01c20e04();
    (__this->fields).BEBCICLILLB = (IBKIPBJJCPG->fields).BEBCICLILLB;
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

