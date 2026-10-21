// NODLJPNGNBG$$MergeFrom @ RVA 0x309121C

void NODLJPNGNBG__MergeFrom(NODLJPNGNBG_o *__this,NODLJPNGNBG_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  ICBMOMGINFH_o *pIVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  long lVar4;
  NODLJPNGNBG_Fields *pNVar5;
  ICBMOMGINFH_o **ppIVar6;
  
  if ((DAT_045660a2 & 1) == 0) {
    FUN_01bab630(&ICBMOMGINFH_TypeInfo);
    DAT_045660a2 = 1;
  }
  if (IBKIPBJJCPG != (NODLJPNGNBG_o *)0x0) {
    lVar4 = (IBKIPBJJCPG->fields).ANAJGHJEEOC;
    if (lVar4 != 0) {
      (__this->fields).ANAJGHJEEOC = lVar4;
    }
    iVar1 = (IBKIPBJJCPG->fields).LINGIJDCLLC;
    if (iVar1 != 0) {
      (__this->fields).LINGIJDCLLC = iVar1;
    }
    if ((IBKIPBJJCPG->fields).DMFDEJEDMPO != false) {
      (__this->fields).DMFDEJEDMPO = true;
    }
    iVar1 = (IBKIPBJJCPG->fields).PFJPLCAIGJH;
    if (iVar1 != 0) {
      (__this->fields).PFJPLCAIGJH = iVar1;
    }
    if ((IBKIPBJJCPG->fields).PMMFPJJOPKE != (ICBMOMGINFH_o *)0x0) {
      ppIVar6 = &(__this->fields).PMMFPJJOPKE;
      pIVar2 = *ppIVar6;
      if (pIVar2 == (ICBMOMGINFH_o *)0x0) {
        pIVar2 = (ICBMOMGINFH_o *)thunk_FUN_01bda818(ICBMOMGINFH_TypeInfo);
        ICBMOMGINFH___ctor(pIVar2,(MethodInfo *)0x0);
        *ppIVar6 = pIVar2;
        thunk_FUN_01c20e04(ppIVar6,pIVar2);
        pIVar2 = *ppIVar6;
        if (pIVar2 == (ICBMOMGINFH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      ICBMOMGINFH__MergeFrom(pIVar2,(IBKIPBJJCPG->fields).PMMFPJJOPKE,(MethodInfo *)0x0);
    }
    pNVar5 = &__this->fields;
    pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pNVar5->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pNVar5->CKFPENBPNML = pGVar3;
    thunk_FUN_01c20e04(pNVar5,pGVar3);
    return;
  }
  return;
}

