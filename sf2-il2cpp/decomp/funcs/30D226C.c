// BECIPDJBAOG$$.ctor @ RVA 0x30D226C

void BECIPDJBAOG___ctor(BECIPDJBAOG_o *__this,BECIPDJBAOG_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04566314 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Clone__);
    DAT_04566314 = 1;
    method_00 = extraout_x1;
  }
  BECIPDJBAOG___ctor(__this,method_00);
  if (IBKIPBJJCPG != (BECIPDJBAOG_o *)0x0) {
    (__this->fields).JPHFGCIDDHE = (IBKIPBJJCPG->fields).JPHFGCIDDHE;
    thunk_FUN_01c20e04();
    pGVar2 = (IBKIPBJJCPG->fields).LEJBLHJFJHP;
    if (pGVar2 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
      pGVar2 = (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)
               Google_Protobuf_Collections_RepeatedField<object>__Clone
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,
                          Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Clone__);
      (__this->fields).LEJBLHJFJHP = pGVar2;
      thunk_FUN_01c20e04();
      pGVar2 = (IBKIPBJJCPG->fields).AKFPFIHIHOC;
      if (pGVar2 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
        pGVar2 = (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)
                 Google_Protobuf_Collections_RepeatedField<object>__Clone
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,
                            Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Clone__);
        (__this->fields).AKFPFIHIHOC = pGVar2;
        thunk_FUN_01c20e04();
        iVar1 = (IBKIPBJJCPG->fields).NLLKMEMKBAF;
        (__this->fields).EMOLIBOCKJK = (IBKIPBJJCPG->fields).EMOLIBOCKJK;
        (__this->fields).NLLKMEMKBAF = iVar1;
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

