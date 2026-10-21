// JHMFOIIPEHB$$.ctor @ RVA 0x30CEFBC

void JHMFOIIPEHB___ctor(JHMFOIIPEHB_o *__this,JHMFOIIPEHB_o *IBKIPBJJCPG,MethodInfo *method)

{
  PGICCMFLDPI_o *pPVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (JHMFOIIPEHB_o *)0x0) {
    (__this->fields).LMHBPLAAEIE = (IBKIPBJJCPG->fields).LMHBPLAAEIE;
    pPVar1 = (IBKIPBJJCPG->fields).MIINPPOCPCN;
    if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
      pPVar1 = (PGICCMFLDPI_o *)0x0;
    }
    else {
      pPVar1 = PGICCMFLDPI__Clone(pPVar1,(MethodInfo *)0x0);
    }
    (__this->fields).MIINPPOCPCN = pPVar1;
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

