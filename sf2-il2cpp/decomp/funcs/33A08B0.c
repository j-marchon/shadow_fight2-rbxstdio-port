// LFELBGMCDHD$$MergeFrom @ RVA 0x33A08B0

void LFELBGMCDHD__MergeFrom(LFELBGMCDHD_o *__this,LFELBGMCDHD_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  LFELBGMCDHD_Fields *pLVar2;
  
  if ((DAT_04567cb2 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_Add__);
    DAT_04567cb2 = 1;
  }
  if (IBKIPBJJCPG != (LFELBGMCDHD_o *)0x0) {
    __this_00 = (__this->fields).EHBNKDHKJNI;
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<object>__Add
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).EHBNKDHKJNI,
                 Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_Add__);
      pLVar2 = &__this->fields;
      pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                         (pLVar2->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      pLVar2->CKFPENBPNML = pGVar1;
      thunk_FUN_01c20e04(pLVar2,pGVar1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

