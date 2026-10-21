// EOLFEKNCPLM$$WriteTo @ RVA 0x35800A0

void EOLFEKNCPLM__WriteTo
               (EOLFEKNCPLM_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_ByteString_o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *__this_01;
  
  if ((__this->fields).MCOPPCNPAHF != (GKLPDMLELJF_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036801ec;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).MCOPPCNPAHF,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).PLJJCOHGICK != (OBCMNBDBNFO_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036801ec;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).PLJJCOHGICK,
               (MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).OACFBJNMHCM;
  if (__this_00 != (Google_Protobuf_ByteString_o *)0x0) {
    iVar1 = Google_Protobuf_ByteString__get_Length(__this_00,(MethodInfo *)0x0);
    if (iVar1 != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036801ec;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x1a,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteBytes
                (JBGJLELBMJF,(__this->fields).OACFBJNMHCM,(MethodInfo *)0x0);
    }
    if ((__this->fields).LEEKCALJFJN != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036801ec;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x20,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteInt32
                (JBGJLELBMJF,(__this->fields).LEEKCALJFJN,(MethodInfo *)0x0);
    }
    if ((__this->fields).IINFDIJOFIG != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036801ec;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x28,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteInt32
                (JBGJLELBMJF,(__this->fields).IINFDIJOFIG,(MethodInfo *)0x0);
    }
    if ((__this->fields).ODDCBFOLIGB != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036801ec;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x30,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteInt32
                (JBGJLELBMJF,(__this->fields).ODDCBFOLIGB,(MethodInfo *)0x0);
    }
    __this_01 = (__this->fields).CKFPENBPNML;
    if (__this_01 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_01,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_036801ec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

