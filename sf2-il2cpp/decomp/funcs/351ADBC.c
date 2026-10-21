// EKCGNICFDEO$$.ctor @ RVA 0x351ADBC

void EKCGNICFDEO___ctor(EKCGNICFDEO_o *__this,EKCGNICFDEO_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  EKCGNICFDEO___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (EKCGNICFDEO_o *)0x0) {
    (__this->fields).BJGJOHGJCKC = (IBKIPBJJCPG->fields).BJGJOHGJCKC;
    thunk_FUN_01c20e04();
    (__this->fields).CMKMIFIIGBK = (IBKIPBJJCPG->fields).CMKMIFIIGBK;
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
                    /* try { // try from 0361ae04 to 0371ae0b has its CatchHandler @ 0361afa0 */
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

