// IBMLPPNMDCI$$MergeFrom @ RVA 0x30F5DC4

void IBMLPPNMDCI__MergeFrom
               (IBMLPPNMDCI_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  IBMLPPNMDCI_Fields *pIVar1;
  uint32_t uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  
  if ((DAT_04566453 & 1) == 0) {
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_AddEntriesFrom__);
    DAT_04566453 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pIVar1 = &__this->fields;
    while( true ) {
      while ((uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
             uVar2 != 8 && (uVar2 != 10))) {
        if (uVar2 == 0) {
          return;
        }
        pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pIVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pIVar1->CKFPENBPNML = pGVar3;
        thunk_FUN_01c20e04(pIVar1,pGVar3);
      }
      __this_00 = (__this->fields).EHBNKDHKJNI;
      if ((IBMLPPNMDCI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) break;
      Google_Protobuf_Collections_RepeatedField<long>__AddEntriesFrom
                (__this_00,AIGOBLJEBCA,
                 (Google_Protobuf_FieldCodec_T__o *)IBMLPPNMDCI_TypeInfo->static_fields->IODFLINNJEL
                 ,Method_Google_Protobuf_Collections_RepeatedField<long>_AddEntriesFrom__);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

