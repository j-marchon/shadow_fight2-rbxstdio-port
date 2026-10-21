// EMBNHHOCCBH$$.ctor @ RVA 0x35AA6A8

void EMBNHHOCCBH___ctor(EMBNHHOCCBH_o *__this,EMBNHHOCCBH_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *pGVar1;
  KAMBBJFPLGM_o *pKVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04568e4a & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_Clone__);
    DAT_04568e4a = 1;
    method_00 = extraout_x1;
  }
  EMBNHHOCCBH___ctor(__this,method_00);
  if ((IBKIPBJJCPG != (EMBNHHOCCBH_o *)0x0) &&
     (pGVar1 = (IBKIPBJJCPG->fields).MJIIHOLHNCK,
     pGVar1 != (Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *)0x0)) {
    pGVar1 = (Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *)
             Google_Protobuf_Collections_RepeatedField<object>__Clone
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,
                        Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_Clone__);
    (__this->fields).MJIIHOLHNCK = pGVar1;
    thunk_FUN_01c20e04();
    pKVar2 = (IBKIPBJJCPG->fields).OPHCNELIOLD;
    if (pKVar2 == (KAMBBJFPLGM_o *)0x0) {
      pKVar2 = (KAMBBJFPLGM_o *)0x0;
    }
    else {
      pKVar2 = KAMBBJFPLGM__Clone(pKVar2,(MethodInfo *)0x0);
    }
    (__this->fields).OPHCNELIOLD = pKVar2;
    thunk_FUN_01c20e04();
    pGVar3 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar3;
    thunk_FUN_01c20e04(&__this->fields,pGVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

