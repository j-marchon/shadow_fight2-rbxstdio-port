// BPBGAAHBFKH$$WriteTo @ RVA 0x35CFA50

void BPBGAAHBFKH__WriteTo
               (BPBGAAHBFKH_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *__this_01;
  
  if ((DAT_04568fd1 & 1) == 0) {
    FUN_01bab630(&BPBGAAHBFKH_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_WriteTo__);
    DAT_04568fd1 = 1;
  }
  if ((__this->fields).PDOMCPONBNB != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036cfb30;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).PDOMCPONBNB,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).IGPJEDLPAGI;
  if ((BPBGAAHBFKH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__WriteTo
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)BPBGAAHBFKH_TypeInfo->static_fields->ODAOMAKCEEH,
               Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_WriteTo__);
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_036cfb30:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

