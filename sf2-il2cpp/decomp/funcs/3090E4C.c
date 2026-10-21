// NODLJPNGNBG$$.ctor @ RVA 0x3090E4C

void NODLJPNGNBG___ctor(NODLJPNGNBG_o *__this,NODLJPNGNBG_o *IBKIPBJJCPG,MethodInfo *method)

{
  ICBMOMGINFH_o *pIVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (NODLJPNGNBG_o *)0x0) {
    (__this->fields).ANAJGHJEEOC = (IBKIPBJJCPG->fields).ANAJGHJEEOC;
    (__this->fields).LINGIJDCLLC = (IBKIPBJJCPG->fields).LINGIJDCLLC;
    (__this->fields).DMFDEJEDMPO = (IBKIPBJJCPG->fields).DMFDEJEDMPO;
    (__this->fields).PFJPLCAIGJH = (IBKIPBJJCPG->fields).PFJPLCAIGJH;
    pIVar1 = (IBKIPBJJCPG->fields).PMMFPJJOPKE;
    if (pIVar1 == (ICBMOMGINFH_o *)0x0) {
      pIVar1 = (ICBMOMGINFH_o *)0x0;
    }
    else {
      pIVar1 = ICBMOMGINFH__Clone(pIVar1,(MethodInfo *)0x0);
    }
    (__this->fields).PMMFPJJOPKE = pIVar1;
    thunk_FUN_01c20e04();
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

