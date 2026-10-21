// DLOALGNBPNL$$MergeFrom @ RVA 0x3233EE8

void DLOALGNBPNL__MergeFrom(DLOALGNBPNL_o *__this,DLOALGNBPNL_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  DLOALGNBPNL_Fields *pDVar2;
  
  if ((DAT_04567003 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_Add__);
    DAT_04567003 = 1;
  }
  if (IBKIPBJJCPG != (DLOALGNBPNL_o *)0x0) {
    __this_00 = (__this->fields).EHBNKDHKJNI;
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<object>__Add
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).EHBNKDHKJNI,
                 Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_Add__);
      pDVar2 = &__this->fields;
      pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                         (pDVar2->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      pDVar2->CKFPENBPNML = pGVar1;
      thunk_FUN_01c20e04(pDVar2,pGVar1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

