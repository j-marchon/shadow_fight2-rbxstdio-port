// JGELBDHDHAO$$WriteTo @ RVA 0x35045FC

void JGELBDHDHAO__WriteTo
               (JGELBDHDHAO_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_01;
  
  if ((DAT_04568885 & 1) == 0) {
    FUN_01bab630(&JGELBDHDHAO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_WriteTo__);
    DAT_04568885 = 1;
  }
  if ((__this->fields).IFBHDAMCHNM != false) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036046dc;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteBool
              (JBGJLELBMJF,(__this->fields).IFBHDAMCHNM,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).DDEAFMPDPBJ;
  if ((JGELBDHDHAO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__WriteTo
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)JGELBDHDHAO_TypeInfo->static_fields->EEIBKMBPHLJ,
               Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_WriteTo__);
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_036046dc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

