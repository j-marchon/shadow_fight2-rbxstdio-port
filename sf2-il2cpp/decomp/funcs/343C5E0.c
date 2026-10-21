// IHMIMECHIAN$$WriteTo @ RVA 0x343C5E0

void IHMIMECHIAN__WriteTo
               (IHMIMECHIAN_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_int__o *__this_01;
  
  if ((DAT_045681e2 & 1) == 0) {
    FUN_01bab630(&IHMIMECHIAN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>_WriteTo__);
    DAT_045681e2 = 1;
  }
  if ((__this->fields).CHLCOKOBIHN != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353c7f8;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).CHLCOKOBIHN,(MethodInfo *)0x0);
  }
  if ((__this->fields).KFBIHGFDAOL != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353c7f8;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).KFBIHGFDAOL,(MethodInfo *)0x0);
  }
  if ((__this->fields).POHDGAPDBGK != false) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353c7f8;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x18,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteBool
              (JBGJLELBMJF,(__this->fields).POHDGAPDBGK,(MethodInfo *)0x0);
  }
  if ((__this->fields).PJMOADBJNKH != false) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353c7f8;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x20,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteBool
              (JBGJLELBMJF,(__this->fields).PJMOADBJNKH,(MethodInfo *)0x0);
  }
  if ((__this->fields).NNCLFDMPFHP != false) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353c7f8;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x28,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteBool
              (JBGJLELBMJF,(__this->fields).NNCLFDMPFHP,(MethodInfo *)0x0);
  }
  if ((__this->fields).HOFAHGOCDCE != false) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353c7f8;
                    /* try { // try from 0353c70c to 0363cf1b has its CatchHandler @ 0353c70c
                       catch() { ... } // from try @ 0353c70c with catch @ 0353c70c
                       catch() { ... } // from try @ 0353cff0 with catch @ 0353c70c
                       catch() { ... } // from try @ 0353d0cc with catch @ 0353c70c
                       catch() { ... } // from try @ 0353d170 with catch @ 0353c70c */
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x30,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteBool
              (JBGJLELBMJF,(__this->fields).HOFAHGOCDCE,(MethodInfo *)0x0);
  }
  if ((__this->fields).KLOGBBKOLFL != 0.0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353c7f8;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x3d,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteFloat
              (JBGJLELBMJF,(__this->fields).KLOGBBKOLFL,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).IKCCLDMOOKP;
  if ((IHMIMECHIAN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_int__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<int>__WriteTo
              (__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)IHMIMECHIAN_TypeInfo->static_fields->EEBAEBIODDF,
               Method_Google_Protobuf_Collections_RepeatedField<int>_WriteTo__);
    if ((__this->fields).LADINGEOKCK != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353c7f8;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x48,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteInt32
                (JBGJLELBMJF,(__this->fields).LADINGEOKCK,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_0353c7f8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

