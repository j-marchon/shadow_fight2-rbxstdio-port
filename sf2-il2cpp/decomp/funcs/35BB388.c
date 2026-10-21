// OLCBPIHLPEC$$WriteTo @ RVA 0x35BB388

void OLCBPIHLPEC__WriteTo
               (OLCBPIHLPEC_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  System_String_o *pSVar1;
  
  if ((__this->fields).NGODFBDEMLE != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036bb4ac;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).NGODFBDEMLE,(MethodInfo *)0x0);
  }
  pSVar1 = (__this->fields).IAEBJKOPDAO;
  if (pSVar1 != (System_String_o *)0x0) {
    if ((pSVar1->fields)._stringLength != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036bb4ac;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteString
                (JBGJLELBMJF,(__this->fields).IAEBJKOPDAO,(MethodInfo *)0x0);
    }
    if ((__this->fields).EMDNDLOODLG != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036bb4ac;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x18,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteEnum
                (JBGJLELBMJF,(__this->fields).EMDNDLOODLG,(MethodInfo *)0x0);
    }
    pSVar1 = (__this->fields).EGELDFKMOCJ;
    if (pSVar1 != (System_String_o *)0x0) {
      if ((pSVar1->fields)._stringLength != 0) {
        if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036bb4ac;
        Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x22,(MethodInfo *)0x0);
        Google_Protobuf_CodedOutputStream__WriteString
                  (JBGJLELBMJF,(__this->fields).EGELDFKMOCJ,(MethodInfo *)0x0);
      }
      if ((__this->fields).MIINPPOCPCN != (PGICCMFLDPI_o *)0x0) {
        if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036bb4ac;
        Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x2a,(MethodInfo *)0x0);
        Google_Protobuf_CodedOutputStream__WriteMessage
                  (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).MIINPPOCPCN,
                   (MethodInfo *)0x0);
      }
      __this_00 = (__this->fields).CKFPENBPNML;
      if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
LAB_036bb4ac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

