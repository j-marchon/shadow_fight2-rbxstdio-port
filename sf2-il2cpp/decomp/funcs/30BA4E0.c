// DMOPGPMINJD$$.ctor @ RVA 0x30BA4E0

void DMOPGPMINJD___ctor(DMOPGPMINJD_o *__this,DMOPGPMINJD_o *IBKIPBJJCPG,MethodInfo *method)

{
  EEHFEPPDBHL_o *pEVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  DMOPGPMINJD___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (DMOPGPMINJD_o *)0x0) {
    (__this->fields).GJNOEAKNMOG = (IBKIPBJJCPG->fields).GJNOEAKNMOG;
    thunk_FUN_01c20e04();
    pEVar1 = (IBKIPBJJCPG->fields).MMIHELOLFPP;
    if (pEVar1 == (EEHFEPPDBHL_o *)0x0) {
      pEVar1 = (EEHFEPPDBHL_o *)0x0;
    }
    else {
      pEVar1 = EEHFEPPDBHL__Clone(pEVar1,(MethodInfo *)0x0);
    }
    (__this->fields).MMIHELOLFPP = pEVar1;
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

