// IBMLPPNMDCI$$.ctor @ RVA 0x30F626C

void IBMLPPNMDCI___ctor(IBMLPPNMDCI_o *__this,IBMLPPNMDCI_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_T__o *pGVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_0456645e & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Clone__);
    DAT_0456645e = 1;
    method_00 = extraout_x1;
  }
  IBMLPPNMDCI___ctor(__this,method_00);
  if ((IBKIPBJJCPG != (IBMLPPNMDCI_o *)0x0) &&
     (__this_00 = (IBKIPBJJCPG->fields).EHBNKDHKJNI,
     __this_00 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) {
    pGVar1 = Google_Protobuf_Collections_RepeatedField<long>__Clone
                       (__this_00,Method_Google_Protobuf_Collections_RepeatedField<long>_Clone__);
    (__this->fields).EHBNKDHKJNI = (Google_Protobuf_Collections_RepeatedField_long__o *)pGVar1;
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

