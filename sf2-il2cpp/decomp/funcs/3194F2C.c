// OLHGMELLLFK$$WriteTo @ RVA 0x3194F2C

void OLHGMELLLFK__WriteTo
               (OLHGMELLLFK_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_ByteString_o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *__this_01;
  
  __this_00 = (__this->fields).OACFBJNMHCM;
  if (__this_00 != (Google_Protobuf_ByteString_o *)0x0) {
    iVar1 = Google_Protobuf_ByteString__get_Length(__this_00,(MethodInfo *)0x0);
    if (iVar1 != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03294f9c;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteBytes
                (JBGJLELBMJF,(__this->fields).OACFBJNMHCM,(MethodInfo *)0x0);
    }
    __this_01 = (__this->fields).CKFPENBPNML;
    if (__this_01 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_01,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_03294f9c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

