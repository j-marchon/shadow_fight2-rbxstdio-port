// MEPKDDGONGE$$WriteTo @ RVA 0x317953C

void MEPKDDGONGE__WriteTo
               (MEPKDDGONGE_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_string__o *__this_01;
  
  if ((DAT_04566978 & 1) == 0) {
    FUN_01bab630(&MEPKDDGONGE_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<string>_WriteTo__);
    DAT_04566978 = 1;
  }
  if ((__this->fields).CCCDGBNPNOD != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0327961c;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).CCCDGBNPNOD,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).IECICFJIDPO;
  if ((MEPKDDGONGE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_string__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__WriteTo
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)MEPKDDGONGE_TypeInfo->static_fields->ADCKHCEHBAG,
               Method_Google_Protobuf_Collections_RepeatedField<string>_WriteTo__);
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_0327961c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

