// ELBBEAGGAOH$$WriteTo @ RVA 0x324C08C

void ELBBEAGGAOH__WriteTo
               (ELBBEAGGAOH_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_ByteString_o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *__this_01;
  Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *__this_02;
  
  if ((DAT_045670fe & 1) == 0) {
    FUN_01bab630(&ELBBEAGGAOH_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>_WriteTo__);
    DAT_045670fe = 1;
  }
  if ((__this->fields).CBHDCHDBFGB != (KAMBBJFPLGM_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0334c2ac;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).CBHDCHDBFGB,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).IFDHENIKFKC != (KAMBBJFPLGM_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0334c2ac;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).IFDHENIKFKC,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).DNKENJFJOMD != (EKCGNICFDEO_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0334c2ac;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x1a,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).DNKENJFJOMD,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).FFDNNGLMPJJ != (EKCGNICFDEO_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0334c2ac;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x22,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).FFDNNGLMPJJ,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).KEIBPDJHHBB != (GLPEFEEGCPM_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0334c2ac;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x2a,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).KEIBPDJHHBB,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).MIINPPOCPCN != (PGICCMFLDPI_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0334c2ac;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x32,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).MIINPPOCPCN,
               (MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).DKOBFIICAFM;
  if (__this_00 != (Google_Protobuf_ByteString_o *)0x0) {
    iVar1 = Google_Protobuf_ByteString__get_Length(__this_00,(MethodInfo *)0x0);
    if (iVar1 != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0334c2ac;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x3a,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteBytes
                (JBGJLELBMJF,(__this->fields).DKOBFIICAFM,(MethodInfo *)0x0);
    }
    if ((__this->fields).EMNNAEAIMNH != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0334c2ac;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x40,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteInt32
                (JBGJLELBMJF,(__this->fields).EMNNAEAIMNH,(MethodInfo *)0x0);
    }
    __this_02 = (__this->fields).OOPOHLJPBHE;
    if ((ELBBEAGGAOH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (__this_02 != (Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<object>__WriteTo
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,JBGJLELBMJF,
                 (Google_Protobuf_FieldCodec_T__o *)ELBBEAGGAOH_TypeInfo->static_fields->AJFGPDHFEMK
                 ,Method_Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>_WriteTo__);
      __this_01 = (__this->fields).CKFPENBPNML;
      if (__this_01 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        Google_Protobuf_UnknownFieldSet__WriteTo(__this_01,JBGJLELBMJF,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
LAB_0334c2ac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

