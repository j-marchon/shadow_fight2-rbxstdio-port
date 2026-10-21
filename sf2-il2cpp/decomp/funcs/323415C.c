// DLOALGNBPNL$$.ctor @ RVA 0x323415C

void DLOALGNBPNL___ctor(DLOALGNBPNL_o *__this,DLOALGNBPNL_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *pGVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04567006 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_Clone__);
    DAT_04567006 = 1;
    method_00 = extraout_x1;
  }
  DLOALGNBPNL___ctor(__this,method_00);
  if ((IBKIPBJJCPG != (DLOALGNBPNL_o *)0x0) &&
     (pGVar1 = (IBKIPBJJCPG->fields).EHBNKDHKJNI,
     pGVar1 != (Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *)0x0)) {
    pGVar1 = (Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *)
             Google_Protobuf_Collections_RepeatedField<object>__Clone
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,
                        Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_Clone__);
    (__this->fields).EHBNKDHKJNI = pGVar1;
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

