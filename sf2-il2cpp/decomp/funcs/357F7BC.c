// EOLFEKNCPLM$$.ctor @ RVA 0x357F7BC

void EOLFEKNCPLM___ctor(EOLFEKNCPLM_o *__this,EOLFEKNCPLM_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  GKLPDMLELJF_o *pGVar2;
  OBCMNBDBNFO_o *pOVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
  EOLFEKNCPLM___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (EOLFEKNCPLM_o *)0x0) {
    pGVar2 = (IBKIPBJJCPG->fields).MCOPPCNPAHF;
    if (pGVar2 == (GKLPDMLELJF_o *)0x0) {
      pGVar2 = (GKLPDMLELJF_o *)0x0;
    }
    else {
      pGVar2 = GKLPDMLELJF__Clone(pGVar2,(MethodInfo *)0x0);
    }
    if (__this != (EOLFEKNCPLM_o *)0x0) {
      (__this->fields).MCOPPCNPAHF = pGVar2;
      thunk_FUN_01c20e04();
      pOVar3 = (IBKIPBJJCPG->fields).PLJJCOHGICK;
      if (pOVar3 == (OBCMNBDBNFO_o *)0x0) {
        pOVar3 = (OBCMNBDBNFO_o *)0x0;
      }
      else {
        pOVar3 = OBCMNBDBNFO__Clone(pOVar3,(MethodInfo *)0x0);
      }
      (__this->fields).PLJJCOHGICK = pOVar3;
      thunk_FUN_01c20e04();
      (__this->fields).OACFBJNMHCM = (IBKIPBJJCPG->fields).OACFBJNMHCM;
      thunk_FUN_01c20e04();
      iVar1 = (IBKIPBJJCPG->fields).IINFDIJOFIG;
      (__this->fields).LEEKCALJFJN = (IBKIPBJJCPG->fields).LEEKCALJFJN;
      (__this->fields).IINFDIJOFIG = iVar1;
      (__this->fields).ODDCBFOLIGB = (IBKIPBJJCPG->fields).ODDCBFOLIGB;
      pGVar4 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(&__this->fields,pGVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

