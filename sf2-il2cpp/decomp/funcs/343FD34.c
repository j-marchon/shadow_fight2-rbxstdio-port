// OMFJHNMDIBF$$WriteTo @ RVA 0x343FD34

void OMFJHNMDIBF__WriteTo
               (OMFJHNMDIBF_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_FieldCodec_Nullable_int___o *pGVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((DAT_04568212 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec<Nullable<int>>_WriteTagAndValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&OMFJHNMDIBF_TypeInfo);
    DAT_04568212 = 1;
  }
  if ((__this->fields).EMOLIBOCKJK.fields.hasValue != false) {
    if ((OMFJHNMDIBF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pGVar1 = OMFJHNMDIBF_TypeInfo->static_fields->BBDGIEPPGAM;
    if (pGVar1 == (Google_Protobuf_FieldCodec_Nullable_int___o *)0x0) goto LAB_0353fe88;
    Google_Protobuf_FieldCodec<Nullable<int>>__WriteTagAndValue
              (pGVar1,JBGJLELBMJF,(System_Nullable_int__o)(__this->fields).EMOLIBOCKJK.fields,
               Method_Google_Protobuf_FieldCodec<Nullable<int>>_WriteTagAndValue__);
  }
  if ((__this->fields).JMACIOLHEOF != (PIADCKMDDAK_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353fe88;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).JMACIOLHEOF,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).IEDLACLJJOK != (PIADCKMDDAK_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353fe88;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x1a,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).IEDLACLJJOK,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).NLLKMEMKBAF.fields.hasValue != false) {
    if ((OMFJHNMDIBF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pGVar1 = OMFJHNMDIBF_TypeInfo->static_fields->DBPADDIIBMJ;
    if (pGVar1 == (Google_Protobuf_FieldCodec_Nullable_int___o *)0x0) {
LAB_0353fe88:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_FieldCodec<Nullable<int>>__WriteTagAndValue
              (pGVar1,JBGJLELBMJF,(System_Nullable_int__o)(__this->fields).NLLKMEMKBAF.fields,
               Method_Google_Protobuf_FieldCodec<Nullable<int>>_WriteTagAndValue__);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}

