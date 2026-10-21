// HCKHJECBIJC$$.ctor @ RVA 0x30A9D58

void HCKHJECBIJC___ctor(HCKHJECBIJC_o *__this,HCKHJECBIJC_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (HCKHJECBIJC_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).CCCDGBNPNOD;
    (__this->fields).GCDBBHAFJPN = (IBKIPBJJCPG->fields).GCDBBHAFJPN;
    (__this->fields).CCCDGBNPNOD = iVar1;
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

