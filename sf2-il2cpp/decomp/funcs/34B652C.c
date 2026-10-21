// OJEHKJHEBID$$WriteTo @ RVA 0x34B652C

void OJEHKJHEBID__WriteTo
               (OJEHKJHEBID_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *__this_01;
  System_String_o *pSVar1;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *__this_02;
  
  if ((DAT_0456858a & 1) == 0) {
    FUN_01bab630(&OJEHKJHEBID_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_WriteTo__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_WriteTo__);
    DAT_0456858a = 1;
  }
  if ((__this->fields).ADEIKPGDIPM != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_035b6724;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).ADEIKPGDIPM,(MethodInfo *)0x0);
  }
  pSVar1 = (__this->fields).GJNOEAKNMOG;
  if (pSVar1 != (System_String_o *)0x0) {
    if ((pSVar1->fields)._stringLength != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_035b6724;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteString
                (JBGJLELBMJF,(__this->fields).GJNOEAKNMOG,(MethodInfo *)0x0);
    }
    if ((__this->fields).HAKDPKINDPN != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_035b6724;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x18,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteInt64
                (JBGJLELBMJF,(__this->fields).HAKDPKINDPN,(MethodInfo *)0x0);
    }
    if ((__this->fields).GPDALMOAKGG != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_035b6724;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x20,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteInt32
                (JBGJLELBMJF,(__this->fields).GPDALMOAKGG,(MethodInfo *)0x0);
    }
    if ((__this->fields).IBFEHEDKGAL != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_035b6724;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x28,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteInt32
                (JBGJLELBMJF,(__this->fields).IBFEHEDKGAL,(MethodInfo *)0x0);
    }
    if ((__this->fields).MMIHELOLFPP != (EEHFEPPDBHL_o *)0x0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_035b6724;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x32,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteMessage
                (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).MMIHELOLFPP,
                 (MethodInfo *)0x0);
    }
    __this_02 = (__this->fields).MABPCBMOECE;
    if ((OJEHKJHEBID_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (__this_02 != (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<object>__WriteTo
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,JBGJLELBMJF,
                 (Google_Protobuf_FieldCodec_T__o *)OJEHKJHEBID_TypeInfo->static_fields->CCHHCINKGLK
                 ,Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_WriteTo__);
      __this_00 = (__this->fields).MJIHCLLODMF;
      if (__this_00 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0) {
        Google_Protobuf_Collections_RepeatedField<object>__WriteTo
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,JBGJLELBMJF,
                   (Google_Protobuf_FieldCodec_T__o *)
                   OJEHKJHEBID_TypeInfo->static_fields->ENELKKDEGPJ,
                   Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_WriteTo__);
        __this_01 = (__this->fields).CKFPENBPNML;
        if (__this_01 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
          Google_Protobuf_UnknownFieldSet__WriteTo(__this_01,JBGJLELBMJF,(MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
  }
LAB_035b6724:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

