// DBNIPENAEKO$$WriteTo @ RVA 0x31C8A68

void DBNIPENAEKO__WriteTo
               (DBNIPENAEKO_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  System_String_o *pSVar1;
  Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *__this_01;
  
  if ((DAT_04566c46 & 1) == 0) {
    FUN_01bab630(&DBNIPENAEKO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_WriteTo__);
    DAT_04566c46 = 1;
  }
  if ((__this->fields).LCAENFFHHEI != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_032c8ba8;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).LCAENFFHHEI,(MethodInfo *)0x0);
  }
  if ((__this->fields).HBCNHAMIMGF != (AFLJMCMKCIG_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_032c8ba8;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).HBCNHAMIMGF,
               (MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).BMMFCMJLFKN;
  if ((DBNIPENAEKO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__WriteTo
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)DBNIPENAEKO_TypeInfo->static_fields->FHPMBCKAFHD,
               Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_WriteTo__);
    pSVar1 = (__this->fields).BHMHGIBMMMB;
    if (pSVar1 != (System_String_o *)0x0) {
      if ((pSVar1->fields)._stringLength != 0) {
        if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_032c8ba8;
        Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x22,(MethodInfo *)0x0);
        Google_Protobuf_CodedOutputStream__WriteString
                  (JBGJLELBMJF,(__this->fields).BHMHGIBMMMB,(MethodInfo *)0x0);
      }
      __this_00 = (__this->fields).CKFPENBPNML;
      if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
LAB_032c8ba8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

