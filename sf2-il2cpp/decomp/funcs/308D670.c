// KKGHPKOFEHM$$MergeFrom @ RVA 0x308D670

void KKGHPKOFEHM__MergeFrom(KKGHPKOFEHM_o *__this,KKGHPKOFEHM_o *IBKIPBJJCPG,MethodInfo *method)

{
  KAMBBJFPLGM_o *pKVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  KKGHPKOFEHM_Fields *pKVar3;
  KAMBBJFPLGM_o **ppKVar4;
  
  if ((DAT_0456606e & 1) == 0) {
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    DAT_0456606e = 1;
  }
  if (IBKIPBJJCPG == (KKGHPKOFEHM_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).OPHCNELIOLD != (KAMBBJFPLGM_o *)0x0) {
    ppKVar4 = &(__this->fields).OPHCNELIOLD;
    pKVar1 = *ppKVar4;
    if (pKVar1 == (KAMBBJFPLGM_o *)0x0) {
      pKVar1 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
      KAMBBJFPLGM___ctor(pKVar1,(MethodInfo *)0x0);
      *ppKVar4 = pKVar1;
      thunk_FUN_01c20e04(ppKVar4,pKVar1);
      pKVar1 = *ppKVar4;
      if (pKVar1 == (KAMBBJFPLGM_o *)0x0) goto LAB_0318d760;
    }
    KAMBBJFPLGM__MergeFrom(pKVar1,(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).NNDJCFCJGMO;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__Add
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).NNDJCFCJGMO,
               Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    pKVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pKVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pKVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pKVar3,pGVar2);
    return;
  }
LAB_0318d760:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

