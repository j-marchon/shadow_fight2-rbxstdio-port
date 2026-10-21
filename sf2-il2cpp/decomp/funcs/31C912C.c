// DBNIPENAEKO$$.ctor @ RVA 0x31C912C

void DBNIPENAEKO___ctor(DBNIPENAEKO_o *__this,DBNIPENAEKO_o *IBKIPBJJCPG,MethodInfo *method)

{
  AFLJMCMKCIG_o *pAVar1;
  Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *pGVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04566c4c & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_Clone__);
    DAT_04566c4c = 1;
    method_00 = extraout_x1;
  }
  DBNIPENAEKO___ctor(__this,method_00);
  if (IBKIPBJJCPG != (DBNIPENAEKO_o *)0x0) {
    (__this->fields).LCAENFFHHEI = (IBKIPBJJCPG->fields).LCAENFFHHEI;
    pAVar1 = (IBKIPBJJCPG->fields).HBCNHAMIMGF;
    if (pAVar1 == (AFLJMCMKCIG_o *)0x0) {
      pAVar1 = (AFLJMCMKCIG_o *)0x0;
    }
    else {
      pAVar1 = AFLJMCMKCIG__Clone(pAVar1,(MethodInfo *)0x0);
    }
    (__this->fields).HBCNHAMIMGF = pAVar1;
    thunk_FUN_01c20e04();
    pGVar2 = (IBKIPBJJCPG->fields).BMMFCMJLFKN;
    if (pGVar2 != (Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *)0x0) {
      pGVar2 = (Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *)
               Google_Protobuf_Collections_RepeatedField<object>__Clone
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,
                          Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_Clone__);
      (__this->fields).BMMFCMJLFKN = pGVar2;
      thunk_FUN_01c20e04();
      (__this->fields).BHMHGIBMMMB = (IBKIPBJJCPG->fields).BHMHGIBMMMB;
      thunk_FUN_01c20e04();
      pGVar3 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(&__this->fields,pGVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

