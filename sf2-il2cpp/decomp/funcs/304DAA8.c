// AJINOJNMEEK$$WriteTo @ RVA 0x304DAA8

void AJINOJNMEEK__WriteTo
               (AJINOJNMEEK_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_FieldCodec_string__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *__this_01;
  System_String_o *pSVar1;
  
  if ((DAT_04565e24 & 1) == 0) {
    FUN_01bab630(&AJINOJNMEEK_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec<string>_WriteTagAndValue__);
    DAT_04565e24 = 1;
  }
                    /* try { // try from 0314dae8 to 0324dd1f has its CatchHandler @ 0314dae8
                       catch() { ... } // from try @ 0314dae8 with catch @ 0314dae8
                       catch() { ... } // from try @ 0314ddc0 with catch @ 0314dae8
                       catch() { ... } // from try @ 0314dedc with catch @ 0314dae8
                       catch() { ... } // from try @ 0314df40 with catch @ 0314dae8
                       catch() { ... } // from try @ 0314dff0 with catch @ 0314dae8 */
  if ((__this->fields).EMDNDLOODLG != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0314dbb4;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteEnum
              (JBGJLELBMJF,(__this->fields).EMDNDLOODLG,(MethodInfo *)0x0);
  }
  pSVar1 = (__this->fields).EGELDFKMOCJ;
  if (pSVar1 != (System_String_o *)0x0) {
    if ((pSVar1->fields)._stringLength != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0314dbb4;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteString
                (JBGJLELBMJF,(__this->fields).EGELDFKMOCJ,(MethodInfo *)0x0);
    }
    if ((__this->fields).ABFBDJFPIMM != (System_String_o *)0x0) {
      if ((AJINOJNMEEK_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = AJINOJNMEEK_TypeInfo->static_fields->GLHDOIAKLDH;
      if (__this_00 == (Google_Protobuf_FieldCodec_string__o *)0x0) goto LAB_0314dbb4;
      Google_Protobuf_FieldCodec<object>__WriteTagAndValue
                ((Google_Protobuf_FieldCodec_T__o *)__this_00,JBGJLELBMJF,
                 (Il2CppObject *)(__this->fields).ABFBDJFPIMM,
                 Method_Google_Protobuf_FieldCodec<string>_WriteTagAndValue__);
    }
    __this_01 = (__this->fields).CKFPENBPNML;
    if (__this_01 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_01,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_0314dbb4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

