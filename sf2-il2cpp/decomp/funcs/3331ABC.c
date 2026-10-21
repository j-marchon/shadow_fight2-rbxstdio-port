// JCFJFJCKLKG$$WriteTo @ RVA 0x3331ABC

void JCFJFJCKLKG__WriteTo
               (JCFJFJCKLKG_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *__this_01;
  
  if ((DAT_04567912 & 1) == 0) {
    FUN_01bab630(&JCFJFJCKLKG_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_WriteTo__);
    DAT_04567912 = 1;
  }
  if ((__this->fields).PDOMCPONBNB != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03431b9c;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).PDOMCPONBNB,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).LFOCACIGEFK;
  if ((JCFJFJCKLKG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__WriteTo
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)JCFJFJCKLKG_TypeInfo->static_fields->HCFIGOCMMPG,
               Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_WriteTo__);
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_03431b9c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

