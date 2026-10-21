// GPKDMPJJEOO$$WriteTo @ RVA 0x319E0F0

void GPKDMPJJEOO__WriteTo
               (GPKDMPJJEOO_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_MapField_string__string__o *__this_01;
  
  if ((DAT_04566ac3 & 1) == 0) {
    FUN_01bab630(&GPKDMPJJEOO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_MapField<string,_string>_WriteTo__);
    DAT_04566ac3 = 1;
  }
  if ((__this->fields).MIINPPOCPCN != (PGICCMFLDPI_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0329e1d0;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).MIINPPOCPCN,
               (MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).PPDLPBMONBL;
  if ((GPKDMPJJEOO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_MapField_string__string__o *)0x0) {
    Google_Protobuf_Collections_MapField<object,_object>__WriteTo
              ((Google_Protobuf_Collections_MapField_TKey__TValue__o *)__this_01,JBGJLELBMJF,
               (Google_Protobuf_Collections_MapField_Codec_TKey__TValue__o *)
               GPKDMPJJEOO_TypeInfo->static_fields->BKAFBNGLAFE,
               Method_Google_Protobuf_Collections_MapField<string,_string>_WriteTo__);
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_0329e1d0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

