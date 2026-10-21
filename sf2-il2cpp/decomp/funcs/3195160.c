// OLHGMELLLFK$$MergeFrom @ RVA 0x3195160

void OLHGMELLLFK__MergeFrom(OLHGMELLLFK_o *__this,OLHGMELLLFK_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_ByteString_o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  OLHGMELLLFK_Fields *pOVar3;
  
  if (IBKIPBJJCPG == (OLHGMELLLFK_o *)0x0) {
    return;
  }
  __this_00 = (IBKIPBJJCPG->fields).OACFBJNMHCM;
  if (__this_00 != (Google_Protobuf_ByteString_o *)0x0) {
    iVar1 = Google_Protobuf_ByteString__get_Length(__this_00,(MethodInfo *)0x0);
    if (iVar1 != 0) {
      OLHGMELLLFK__BGOOPIDKJEC(__this,(IBKIPBJJCPG->fields).OACFBJNMHCM,method);
    }
    pOVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pOVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pOVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pOVar3,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

