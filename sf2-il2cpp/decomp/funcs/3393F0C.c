// KDADMJGPAOM$$WriteTo @ RVA 0x3393F0C

void KDADMJGPAOM__WriteTo
               (KDADMJGPAOM_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).IILCHFKCEEH != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03493fc8;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).IILCHFKCEEH,(MethodInfo *)0x0);
  }
  if ((__this->fields).PDGEHKCPGDK != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03493fc8;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).PDGEHKCPGDK,(MethodInfo *)0x0);
  }
  if ((__this->fields).IOJIABMGMGB != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_03493fc8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x18,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).IOJIABMGMGB,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}

