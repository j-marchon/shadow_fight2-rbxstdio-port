// JGELBDHDHAO$$MergeFrom @ RVA 0x35047F8

void JGELBDHDHAO__MergeFrom
               (JGELBDHDHAO_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  JGELBDHDHAO_Fields *pJVar1;
  bool bVar2;
  uint32_t uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  
  if ((DAT_04568887 & 1) == 0) {
    FUN_01bab630(&JGELBDHDHAO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_AddEntriesFrom__);
    DAT_04568887 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pJVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar3 == 8) {
          bVar2 = Google_Protobuf_CodedInputStream__ReadBool(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).IFBHDAMCHNM = bVar2;
        }
        if (uVar3 == 0x12) break;
        if (uVar3 == 0) {
          return;
        }
        pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pJVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pJVar1->CKFPENBPNML = pGVar4;
        thunk_FUN_01c20e04(pJVar1,pGVar4);
      }
      __this_00 = (__this->fields).DDEAFMPDPBJ;
      if ((JGELBDHDHAO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) break;
      Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,AIGOBLJEBCA,
                 (Google_Protobuf_FieldCodec_T__o *)JGELBDHDHAO_TypeInfo->static_fields->EEIBKMBPHLJ
                 ,Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_AddEntriesFrom__);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

