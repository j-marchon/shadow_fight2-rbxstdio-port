// EIBAKHBHMAO$$WriteTo @ RVA 0x304FAC8

void EIBAKHBHMAO__WriteTo
               (EIBAKHBHMAO_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).EMDNDLOODLG != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0314fb58;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteEnum
              (JBGJLELBMJF,(__this->fields).EMDNDLOODLG,(MethodInfo *)0x0);
  }
  if ((__this->fields).FMNDJOFNPBP != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_0314fb58:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).FMNDJOFNPBP,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}

