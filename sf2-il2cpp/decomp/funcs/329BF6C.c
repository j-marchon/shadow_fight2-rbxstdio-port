// EEHFEPPDBHL$$WriteTo @ RVA 0x329BF6C

void EEHFEPPDBHL__WriteTo
               (EEHFEPPDBHL_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  System_String_o *pSVar1;
  
  pSVar1 = (__this->fields).KKMDFLKPNNJ;
  if (pSVar1 != (System_String_o *)0x0) {
    if ((pSVar1->fields)._stringLength != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0339c064;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteString
                (JBGJLELBMJF,(__this->fields).KKMDFLKPNNJ,(MethodInfo *)0x0);
    }
    pSVar1 = (__this->fields).JAAACMPGMKJ;
    if (pSVar1 != (System_String_o *)0x0) {
      if ((pSVar1->fields)._stringLength != 0) {
        if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0339c064;
        Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
        Google_Protobuf_CodedOutputStream__WriteString
                  (JBGJLELBMJF,(__this->fields).JAAACMPGMKJ,(MethodInfo *)0x0);
      }
      if ((__this->fields).JODJOLBBJNI != 0) {
        if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0339c064;
        Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x18,(MethodInfo *)0x0);
        Google_Protobuf_CodedOutputStream__WriteEnum
                  (JBGJLELBMJF,(__this->fields).JODJOLBBJNI,(MethodInfo *)0x0);
      }
      if ((__this->fields).IFICKDAKCHN != 0) {
        if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0339c064;
        Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x20,(MethodInfo *)0x0);
        Google_Protobuf_CodedOutputStream__WriteInt32
                  (JBGJLELBMJF,(__this->fields).IFICKDAKCHN,(MethodInfo *)0x0);
      }
      __this_00 = (__this->fields).CKFPENBPNML;
      if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
LAB_0339c064:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

