// BFLFFPLIIFM$$MergeFrom @ RVA 0x3232E88

void BFLFFPLIIFM__MergeFrom(BFLFFPLIIFM_o *__this,BFLFFPLIIFM_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  long lVar2;
  BFLFFPLIIFM_Fields *pBVar3;
  
  if (IBKIPBJJCPG != (BFLFFPLIIFM_o *)0x0) {
    lVar2 = (IBKIPBJJCPG->fields).POLEIDMHDNP;
    if (lVar2 != 0) {
      (__this->fields).POLEIDMHDNP = lVar2;
    }
    pBVar3 = &__this->fields;
    pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pBVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pBVar3->CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(pBVar3,pGVar1);
    return;
  }
  return;
}

