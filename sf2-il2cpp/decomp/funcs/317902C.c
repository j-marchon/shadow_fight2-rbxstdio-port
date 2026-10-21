// MEPKDDGONGE$$MergeFrom @ RVA 0x317902C

void MEPKDDGONGE__MergeFrom
               (MEPKDDGONGE_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  MEPKDDGONGE_Fields *pMVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  Google_Protobuf_Collections_RepeatedField_string__o *__this_00;
  
  if ((DAT_04566971 & 1) == 0) {
    FUN_01bab630(&MEPKDDGONGE_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<string>_AddEntriesFrom__);
    DAT_04566971 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pMVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 8) {
          iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).CCCDGBNPNOD = iVar3;
        }
        if (uVar2 == 0x12) break;
        if (uVar2 == 0) {
          return;
        }
        pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pMVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pMVar1->CKFPENBPNML = pGVar4;
        thunk_FUN_01c20e04(pMVar1,pGVar4);
      }
      __this_00 = (__this->fields).IECICFJIDPO;
      if ((MEPKDDGONGE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_string__o *)0x0) break;
      Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,AIGOBLJEBCA,
                 (Google_Protobuf_FieldCodec_T__o *)MEPKDDGONGE_TypeInfo->static_fields->ADCKHCEHBAG
                 ,Method_Google_Protobuf_Collections_RepeatedField<string>_AddEntriesFrom__);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

