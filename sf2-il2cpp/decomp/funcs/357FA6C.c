// EOLFEKNCPLM$$MergeFrom @ RVA 0x357FA6C

void EOLFEKNCPLM__MergeFrom(EOLFEKNCPLM_o *__this,EOLFEKNCPLM_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  GKLPDMLELJF_o *pGVar3;
  OBCMNBDBNFO_o *pOVar4;
  Google_Protobuf_ByteString_o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  EOLFEKNCPLM_Fields *pEVar6;
  GKLPDMLELJF_o **ppGVar7;
  OBCMNBDBNFO_o **ppOVar8;
  
  if ((DAT_04568cbe & 1) == 0) {
    FUN_01bab630(&GKLPDMLELJF_TypeInfo);
    FUN_01bab630(&OBCMNBDBNFO_TypeInfo);
    DAT_04568cbe = 1;
  }
  if (IBKIPBJJCPG == (EOLFEKNCPLM_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).MCOPPCNPAHF != (GKLPDMLELJF_o *)0x0) {
    ppGVar7 = &(__this->fields).MCOPPCNPAHF;
    pGVar3 = *ppGVar7;
    if (pGVar3 == (GKLPDMLELJF_o *)0x0) {
      pGVar3 = (GKLPDMLELJF_o *)thunk_FUN_01bda818(GKLPDMLELJF_TypeInfo);
      GKLPDMLELJF___ctor(pGVar3,(MethodInfo *)0x0);
      *ppGVar7 = pGVar3;
      thunk_FUN_01c20e04(ppGVar7,pGVar3);
      pGVar3 = *ppGVar7;
      if (pGVar3 == (GKLPDMLELJF_o *)0x0) goto LAB_0367fbd8;
    }
    method = (MethodInfo *)0x0;
    GKLPDMLELJF__MergeFrom(pGVar3,(IBKIPBJJCPG->fields).MCOPPCNPAHF,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).PLJJCOHGICK != (OBCMNBDBNFO_o *)0x0) {
    ppOVar8 = &(__this->fields).PLJJCOHGICK;
    pOVar4 = *ppOVar8;
    if (pOVar4 == (OBCMNBDBNFO_o *)0x0) {
      pOVar4 = (OBCMNBDBNFO_o *)thunk_FUN_01bda818(OBCMNBDBNFO_TypeInfo);
      OBCMNBDBNFO___ctor(pOVar4,(MethodInfo *)0x0);
      *ppOVar8 = pOVar4;
      thunk_FUN_01c20e04(ppOVar8,pOVar4);
      pOVar4 = *ppOVar8;
      if (pOVar4 == (OBCMNBDBNFO_o *)0x0) goto LAB_0367fbd8;
    }
    method = (MethodInfo *)0x0;
    OBCMNBDBNFO__MergeFrom(pOVar4,(IBKIPBJJCPG->fields).PLJJCOHGICK,(MethodInfo *)0x0);
  }
  __this_00 = (IBKIPBJJCPG->fields).OACFBJNMHCM;
  if (__this_00 != (Google_Protobuf_ByteString_o *)0x0) {
    iVar2 = Google_Protobuf_ByteString__get_Length(__this_00,(MethodInfo *)0x0);
    if (iVar2 != 0) {
      EOLFEKNCPLM__BGOOPIDKJEC(__this,(IBKIPBJJCPG->fields).OACFBJNMHCM,method);
    }
    iVar1 = (IBKIPBJJCPG->fields).LEEKCALJFJN;
    if (iVar1 != 0) {
      (__this->fields).LEEKCALJFJN = iVar1;
    }
    iVar1 = (IBKIPBJJCPG->fields).IINFDIJOFIG;
    if (iVar1 != 0) {
      (__this->fields).IINFDIJOFIG = iVar1;
    }
    iVar1 = (IBKIPBJJCPG->fields).ODDCBFOLIGB;
    if (iVar1 != 0) {
      (__this->fields).ODDCBFOLIGB = iVar1;
    }
    pEVar6 = &__this->fields;
    pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pEVar6->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pEVar6->CKFPENBPNML = pGVar5;
    thunk_FUN_01c20e04(pEVar6,pGVar5);
    return;
  }
LAB_0367fbd8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

