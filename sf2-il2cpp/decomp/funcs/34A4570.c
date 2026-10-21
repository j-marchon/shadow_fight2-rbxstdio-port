// MGDJPGGPDJI$$WriteTo @ RVA 0x34A4570

void MGDJPGGPDJI__WriteTo
               (MGDJPGGPDJI_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  System_String_o *pSVar1;
  
  if ((__this->fields).ANAJGHJEEOC != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_035a4660;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).ANAJGHJEEOC,(MethodInfo *)0x0);
  }
  pSVar1 = (__this->fields).LLBEKLPKDHK;
  if (pSVar1 != (System_String_o *)0x0) {
    if ((pSVar1->fields)._stringLength != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_035a4660;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteString
                (JBGJLELBMJF,(__this->fields).LLBEKLPKDHK,(MethodInfo *)0x0);
    }
    if ((__this->fields).BDPMJNBHKIJ != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_035a4660;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x18,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteEnum
                (JBGJLELBMJF,(__this->fields).BDPMJNBHKIJ,(MethodInfo *)0x0);
    }
    if ((__this->fields).NLLKMEMKBAF != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_035a4660;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x20,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteInt32
                (JBGJLELBMJF,(__this->fields).NLLKMEMKBAF,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_035a4660:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

