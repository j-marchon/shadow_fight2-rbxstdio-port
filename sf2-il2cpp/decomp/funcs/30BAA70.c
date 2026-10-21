// DMOPGPMINJD$$MergeFrom @ RVA 0x30BAA70

void DMOPGPMINJD__MergeFrom(DMOPGPMINJD_o *__this,DMOPGPMINJD_o *IBKIPBJJCPG,MethodInfo *method)

{
  EEHFEPPDBHL_o *pEVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  System_String_o *CJNHFNHJHPE;
  DMOPGPMINJD_Fields *pDVar3;
  EEHFEPPDBHL_o **ppEVar4;
  
  if ((DAT_04566235 & 1) == 0) {
    FUN_01bab630(&EEHFEPPDBHL_TypeInfo);
    DAT_04566235 = 1;
  }
  if (IBKIPBJJCPG == (DMOPGPMINJD_o *)0x0) {
    return;
  }
  CJNHFNHJHPE = (IBKIPBJJCPG->fields).GJNOEAKNMOG;
  if (CJNHFNHJHPE != (System_String_o *)0x0) {
    if ((CJNHFNHJHPE->fields)._stringLength != 0) {
      DMOPGPMINJD__HCOCAAIGNNL(__this,CJNHFNHJHPE,method);
    }
    if ((IBKIPBJJCPG->fields).MMIHELOLFPP != (EEHFEPPDBHL_o *)0x0) {
      ppEVar4 = &(__this->fields).MMIHELOLFPP;
      pEVar1 = *ppEVar4;
      if (pEVar1 == (EEHFEPPDBHL_o *)0x0) {
        pEVar1 = (EEHFEPPDBHL_o *)thunk_FUN_01bda818(EEHFEPPDBHL_TypeInfo);
        EEHFEPPDBHL___ctor(pEVar1,(MethodInfo *)0x0);
        *ppEVar4 = pEVar1;
        thunk_FUN_01c20e04(ppEVar4,pEVar1);
        pEVar1 = *ppEVar4;
        if (pEVar1 == (EEHFEPPDBHL_o *)0x0) goto LAB_031bab50;
      }
      EEHFEPPDBHL__MergeFrom(pEVar1,(IBKIPBJJCPG->fields).MMIHELOLFPP,(MethodInfo *)0x0);
    }
    pDVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pDVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pDVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pDVar3,pGVar2);
    return;
  }
LAB_031bab50:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

