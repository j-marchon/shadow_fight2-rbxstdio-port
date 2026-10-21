// KJNCNBJIJPC$$WriteTo @ RVA 0x331B790

void KJNCNBJIJPC__WriteTo
               (KJNCNBJIJPC_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *__this_01;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_02;
  Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *__this_03;
  
  if ((DAT_04567815 & 1) == 0) {
    FUN_01bab630(&KJNCNBJIJPC_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_WriteTo__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_WriteTo__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_WriteTo__);
    DAT_04567815 = 1;
  }
  if ((__this->fields).OLGJBKMCGIC != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0341b970;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).OLGJBKMCGIC,(MethodInfo *)0x0);
  }
  __this_02 = (__this->fields).DDEAFMPDPBJ;
  if ((KJNCNBJIJPC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_02 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__WriteTo
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)KJNCNBJIJPC_TypeInfo->static_fields->EEIBKMBPHLJ,
               Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_WriteTo__);
    if ((__this->fields).OJBIFDEEBNO != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0341b970;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x18,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteInt32
                (JBGJLELBMJF,(__this->fields).OJBIFDEEBNO,(MethodInfo *)0x0);
    }
    __this_03 = (__this->fields).EACBGCPPLBO;
    if ((KJNCNBJIJPC_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (__this_03 != (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<object>__WriteTo
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_03,JBGJLELBMJF,
                 (Google_Protobuf_FieldCodec_T__o *)KJNCNBJIJPC_TypeInfo->static_fields->HIEFPDFMLFP
                 ,Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_WriteTo__);
      __this_00 = (__this->fields).KELNJLBBHEC;
      if (__this_00 != (Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *)0x0) {
        Google_Protobuf_Collections_RepeatedField<object>__WriteTo
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,JBGJLELBMJF,
                   (Google_Protobuf_FieldCodec_T__o *)
                   KJNCNBJIJPC_TypeInfo->static_fields->MDBMPJNDNLI,
                   Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_WriteTo__);
        if ((__this->fields).HFNMLHEEAJM != false) {
          if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0341b970;
          Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x30,(MethodInfo *)0x0);
          Google_Protobuf_CodedOutputStream__WriteBool
                    (JBGJLELBMJF,(__this->fields).HFNMLHEEAJM,(MethodInfo *)0x0);
        }
        if ((__this->fields).GAGJCDGEGBL != 0) {
          if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0341b970;
          Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x38,(MethodInfo *)0x0);
          Google_Protobuf_CodedOutputStream__WriteInt32
                    (JBGJLELBMJF,(__this->fields).GAGJCDGEGBL,(MethodInfo *)0x0);
        }
        __this_01 = (__this->fields).CKFPENBPNML;
        if (__this_01 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
          Google_Protobuf_UnknownFieldSet__WriteTo(__this_01,JBGJLELBMJF,(MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
  }
LAB_0341b970:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

