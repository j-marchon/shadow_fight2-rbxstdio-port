// IBMLPPNMDCI$$MergeFrom @ RVA 0x30F5EB4

void IBMLPPNMDCI__MergeFrom(IBMLPPNMDCI_o *__this,IBMLPPNMDCI_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  IBMLPPNMDCI_Fields *pIVar2;
  
  if ((DAT_04566454 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    DAT_04566454 = 1;
  }
  if (IBKIPBJJCPG != (IBMLPPNMDCI_o *)0x0) {
    __this_00 = (__this->fields).EHBNKDHKJNI;
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<long>__Add
                (__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).EHBNKDHKJNI,
                 Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
      pIVar2 = &__this->fields;
      pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                         (pIVar2->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      pIVar2->CKFPENBPNML = pGVar1;
      thunk_FUN_01c20e04(pIVar2,pGVar1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

