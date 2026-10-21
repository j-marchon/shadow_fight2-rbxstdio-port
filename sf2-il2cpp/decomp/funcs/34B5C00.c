// OJEHKJHEBID$$.ctor @ RVA 0x34B5C00

void OJEHKJHEBID___ctor(OJEHKJHEBID_o *__this,OJEHKJHEBID_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  EEHFEPPDBHL_o *pEVar2;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *pGVar3;
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *pGVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_String_o **ppSVar6;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04568582 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_Clone__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_Clone__);
    DAT_04568582 = 1;
    method_00 = extraout_x1;
  }
  OJEHKJHEBID___ctor(__this,method_00);
  if (IBKIPBJJCPG != (OJEHKJHEBID_o *)0x0) {
    (__this->fields).ADEIKPGDIPM = (IBKIPBJJCPG->fields).ADEIKPGDIPM;
    ppSVar6 = &(__this->fields).GJNOEAKNMOG;
    *ppSVar6 = (IBKIPBJJCPG->fields).GJNOEAKNMOG;
    thunk_FUN_01c20e04(ppSVar6);
    (__this->fields).HAKDPKINDPN = (IBKIPBJJCPG->fields).HAKDPKINDPN;
    iVar1 = (IBKIPBJJCPG->fields).IBFEHEDKGAL;
    (__this->fields).GPDALMOAKGG = (IBKIPBJJCPG->fields).GPDALMOAKGG;
    (__this->fields).IBFEHEDKGAL = iVar1;
    pEVar2 = (IBKIPBJJCPG->fields).MMIHELOLFPP;
    if (pEVar2 == (EEHFEPPDBHL_o *)0x0) {
      pEVar2 = (EEHFEPPDBHL_o *)0x0;
    }
    else {
      pEVar2 = EEHFEPPDBHL__Clone(pEVar2,(MethodInfo *)0x0);
    }
    (__this->fields).MMIHELOLFPP = pEVar2;
    thunk_FUN_01c20e04();
    pGVar3 = (IBKIPBJJCPG->fields).MABPCBMOECE;
    if (pGVar3 != (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0) {
      pGVar3 = (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)
               Google_Protobuf_Collections_RepeatedField<object>__Clone
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar3,
                          Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_Clone__);
      (__this->fields).MABPCBMOECE = pGVar3;
      thunk_FUN_01c20e04();
      pGVar4 = (IBKIPBJJCPG->fields).MJIHCLLODMF;
      if (pGVar4 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0) {
        pGVar4 = (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)
                 Google_Protobuf_Collections_RepeatedField<object>__Clone
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar4,
                            Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_Clone__);
        (__this->fields).MJIHCLLODMF = pGVar4;
        thunk_FUN_01c20e04();
        pGVar5 = Google_Protobuf_UnknownFieldSet__Clone
                           ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
        (__this->fields).CKFPENBPNML = pGVar5;
        thunk_FUN_01c20e04(&__this->fields,pGVar5);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

