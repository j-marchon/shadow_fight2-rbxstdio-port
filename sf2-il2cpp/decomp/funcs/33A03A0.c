// LFELBGMCDHD$$WriteTo @ RVA 0x33A03A0

void LFELBGMCDHD__WriteTo
               (LFELBGMCDHD_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *__this_01;
  
  if ((DAT_04567caa & 1) == 0) {
    FUN_01bab630(&LFELBGMCDHD_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_WriteTo__);
    DAT_04567caa = 1;
  }
  __this_01 = (__this->fields).EHBNKDHKJNI;
  if ((LFELBGMCDHD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__WriteTo
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)LFELBGMCDHD_TypeInfo->static_fields->IODFLINNJEL,
               Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_WriteTo__);
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

