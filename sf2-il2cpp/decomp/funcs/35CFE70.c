// BPBGAAHBFKH$$MergeFrom @ RVA 0x35CFE70

void BPBGAAHBFKH__MergeFrom
               (BPBGAAHBFKH_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  BPBGAAHBFKH_Fields *pBVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *__this_00;
  
  if ((DAT_04568fd9 & 1) == 0) {
    FUN_01bab630(&BPBGAAHBFKH_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_AddEntriesFrom__);
    DAT_04568fd9 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pBVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 8) {
          iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).PDOMCPONBNB = iVar3;
        }
        if (uVar2 == 0x12) break;
        if (uVar2 == 0) {
          return;
        }
        pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pBVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pBVar1->CKFPENBPNML = pGVar4;
        thunk_FUN_01c20e04(pBVar1,pGVar4);
      }
      __this_00 = (__this->fields).IGPJEDLPAGI;
      if ((BPBGAAHBFKH_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0) break;
      Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,AIGOBLJEBCA,
                 (Google_Protobuf_FieldCodec_T__o *)BPBGAAHBFKH_TypeInfo->static_fields->ODAOMAKCEEH
                 ,Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_AddEntriesFrom__);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

