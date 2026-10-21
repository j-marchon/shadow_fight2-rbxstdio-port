// PIADCKMDDAK$$.ctor @ RVA 0x32BDB5C

void PIADCKMDDAK___ctor(PIADCKMDDAK_o *__this,PIADCKMDDAK_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  PIADCKMDDAK___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (PIADCKMDDAK_o *)0x0) {
    (__this->fields).GJNOEAKNMOG = (IBKIPBJJCPG->fields).GJNOEAKNMOG;
    thunk_FUN_01c20e04();
    (__this->fields).GDKPGIBMFPA = (IBKIPBJJCPG->fields).GDKPGIBMFPA;
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

