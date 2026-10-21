// EEHFEPPDBHL$$.ctor @ RVA 0x329BADC

void EEHFEPPDBHL___ctor(EEHFEPPDBHL_o *__this,EEHFEPPDBHL_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  EEHFEPPDBHL___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (EEHFEPPDBHL_o *)0x0) {
    (__this->fields).KKMDFLKPNNJ = (IBKIPBJJCPG->fields).KKMDFLKPNNJ;
    thunk_FUN_01c20e04();
    (__this->fields).JAAACMPGMKJ = (IBKIPBJJCPG->fields).JAAACMPGMKJ;
    thunk_FUN_01c20e04();
    iVar1 = (IBKIPBJJCPG->fields).IFICKDAKCHN;
    (__this->fields).JODJOLBBJNI = (IBKIPBJJCPG->fields).JODJOLBBJNI;
    (__this->fields).IFICKDAKCHN = iVar1;
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

