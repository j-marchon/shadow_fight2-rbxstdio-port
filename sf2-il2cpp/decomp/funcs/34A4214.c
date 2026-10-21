// MGDJPGGPDJI$$.ctor @ RVA 0x34A4214

void MGDJPGGPDJI___ctor(MGDJPGGPDJI_o *__this,MGDJPGGPDJI_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  MGDJPGGPDJI___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (MGDJPGGPDJI_o *)0x0) {
    (__this->fields).ANAJGHJEEOC = (IBKIPBJJCPG->fields).ANAJGHJEEOC;
    (__this->fields).LLBEKLPKDHK = (IBKIPBJJCPG->fields).LLBEKLPKDHK;
    thunk_FUN_01c20e04();
    iVar1 = (IBKIPBJJCPG->fields).NLLKMEMKBAF;
    (__this->fields).BDPMJNBHKIJ = (IBKIPBJJCPG->fields).BDPMJNBHKIJ;
    (__this->fields).NLLKMEMKBAF = iVar1;
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

