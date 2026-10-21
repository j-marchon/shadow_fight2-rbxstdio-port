// KKGHPKOFEHM$$.ctor @ RVA 0x308D404

void KKGHPKOFEHM___ctor(KKGHPKOFEHM_o *__this,KKGHPKOFEHM_o *IBKIPBJJCPG,MethodInfo *method)

{
  KAMBBJFPLGM_o *pKVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04566073 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Clone__);
    DAT_04566073 = 1;
    method_00 = extraout_x1;
  }
  KKGHPKOFEHM___ctor(__this,method_00);
  if (IBKIPBJJCPG != (KKGHPKOFEHM_o *)0x0) {
    pKVar1 = (IBKIPBJJCPG->fields).OPHCNELIOLD;
    if (pKVar1 == (KAMBBJFPLGM_o *)0x0) {
      pKVar1 = (KAMBBJFPLGM_o *)0x0;
    }
    else {
      pKVar1 = KAMBBJFPLGM__Clone(pKVar1,(MethodInfo *)0x0);
    }
    if (__this != (KKGHPKOFEHM_o *)0x0) {
      (__this->fields).OPHCNELIOLD = pKVar1;
      thunk_FUN_01c20e04();
      pGVar2 = (IBKIPBJJCPG->fields).NNDJCFCJGMO;
      if (pGVar2 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
        pGVar2 = (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)
                 Google_Protobuf_Collections_RepeatedField<object>__Clone
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,
                            Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Clone__);
        (__this->fields).NNDJCFCJGMO = pGVar2;
        thunk_FUN_01c20e04();
        pGVar3 = Google_Protobuf_UnknownFieldSet__Clone
                           ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
        (__this->fields).CKFPENBPNML = pGVar3;
        thunk_FUN_01c20e04(&__this->fields,pGVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

