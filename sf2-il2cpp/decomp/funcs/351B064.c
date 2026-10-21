// EKCGNICFDEO$$WriteTo @ RVA 0x351B064

void EKCGNICFDEO__WriteTo
               (EKCGNICFDEO_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  System_String_o *pSVar1;
  
  pSVar1 = (__this->fields).BJGJOHGJCKC;
  if (pSVar1 != (System_String_o *)0x0) {
    if ((pSVar1->fields)._stringLength != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0361b0fc;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteString
                (JBGJLELBMJF,(__this->fields).BJGJOHGJCKC,(MethodInfo *)0x0);
    }
    if ((__this->fields).CMKMIFIIGBK != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0361b0fc;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteEnum
                (JBGJLELBMJF,(__this->fields).CMKMIFIIGBK,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* try { // try from 0361b0e4 to 0371b10b has its CatchHandler @ 0361b2b4 */
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_0361b0fc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

