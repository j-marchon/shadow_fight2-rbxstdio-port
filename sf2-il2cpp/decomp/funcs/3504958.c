// JGELBDHDHAO$$MergeFrom @ RVA 0x3504958

void JGELBDHDHAO__MergeFrom(JGELBDHDHAO_o *__this,JGELBDHDHAO_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  JGELBDHDHAO_Fields *pJVar2;
  
  if ((DAT_0456888a & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    DAT_0456888a = 1;
  }
  if (IBKIPBJJCPG == (JGELBDHDHAO_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).IFBHDAMCHNM != false) {
    (__this->fields).IFBHDAMCHNM = true;
  }
  __this_00 = (__this->fields).DDEAFMPDPBJ;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__Add
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).DDEAFMPDPBJ,
               Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    pJVar2 = &__this->fields;
    pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pJVar2->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pJVar2->CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(pJVar2,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

