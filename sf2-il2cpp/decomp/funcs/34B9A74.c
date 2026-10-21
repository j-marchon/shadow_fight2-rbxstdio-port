// GKLPDMLELJF$$WriteTo @ RVA 0x34B9A74

void GKLPDMLELJF__WriteTo
               (GKLPDMLELJF_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_FieldCodec_Nullable_long___o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *__this_01;
  System_String_o *pSVar1;
  
  if ((DAT_045685b3 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec<Nullable<long>>_WriteTagAndValue__);
    FUN_01bab630(&GKLPDMLELJF_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<long>_get_HasValue__);
    DAT_045685b3 = 1;
  }
  if ((__this->fields).ANAJGHJEEOC != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_035b9c18;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).ANAJGHJEEOC,(MethodInfo *)0x0);
  }
  pSVar1 = (__this->fields).FFOIEHLJLDA;
  if (pSVar1 != (System_String_o *)0x0) {
    if ((pSVar1->fields)._stringLength != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_035b9c18;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteString
                (JBGJLELBMJF,(__this->fields).FFOIEHLJLDA,(MethodInfo *)0x0);
    }
    pSVar1 = (__this->fields).LLBEKLPKDHK;
    if (pSVar1 != (System_String_o *)0x0) {
      if ((pSVar1->fields)._stringLength != 0) {
        if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_035b9c18;
        Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x1a,(MethodInfo *)0x0);
        Google_Protobuf_CodedOutputStream__WriteString
                  (JBGJLELBMJF,(__this->fields).LLBEKLPKDHK,(MethodInfo *)0x0);
      }
      if ((__this->fields).PEBHLKLGDBM != 0) {
        if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_035b9c18;
        Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x20,(MethodInfo *)0x0);
        Google_Protobuf_CodedOutputStream__WriteInt32
                  (JBGJLELBMJF,(__this->fields).PEBHLKLGDBM,(MethodInfo *)0x0);
      }
      if ((__this->fields).PFJPLCAIGJH != 0) {
        if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_035b9c18;
        Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x28,(MethodInfo *)0x0);
        Google_Protobuf_CodedOutputStream__WriteEnum
                  (JBGJLELBMJF,(__this->fields).PFJPLCAIGJH,(MethodInfo *)0x0);
      }
      if ((__this->fields).ADEIKPGDIPM.fields.hasValue != false) {
        if ((GKLPDMLELJF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = GKLPDMLELJF_TypeInfo->static_fields->OBHAFPFOAHP;
        if (__this_00 == (Google_Protobuf_FieldCodec_Nullable_long___o *)0x0) goto LAB_035b9c18;
        Google_Protobuf_FieldCodec<Nullable<long>>__WriteTagAndValue
                  (__this_00,JBGJLELBMJF,
                   (System_Nullable_long__o)(__this->fields).ADEIKPGDIPM.fields,
                   Method_Google_Protobuf_FieldCodec<Nullable<long>>_WriteTagAndValue__);
      }
      __this_01 = (__this->fields).CKFPENBPNML;
      if (__this_01 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        Google_Protobuf_UnknownFieldSet__WriteTo(__this_01,JBGJLELBMJF,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
LAB_035b9c18:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

