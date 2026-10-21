// MEPKDDGONGE$$MergeFrom @ RVA 0x3179234

void MEPKDDGONGE__MergeFrom(MEPKDDGONGE_o *__this,MEPKDDGONGE_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_Collections_RepeatedField_string__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  MEPKDDGONGE_Fields *pMVar3;
  
  if ((DAT_04566973 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<string>_Add__);
    DAT_04566973 = 1;
  }
  if (IBKIPBJJCPG == (MEPKDDGONGE_o *)0x0) {
    return;
  }
  iVar1 = (IBKIPBJJCPG->fields).CCCDGBNPNOD;
  if (iVar1 != 0) {
    (__this->fields).CCCDGBNPNOD = iVar1;
  }
  __this_00 = (__this->fields).IECICFJIDPO;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_string__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__Add
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).IECICFJIDPO,
               Method_Google_Protobuf_Collections_RepeatedField<string>_Add__);
    pMVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pMVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pMVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pMVar3,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

