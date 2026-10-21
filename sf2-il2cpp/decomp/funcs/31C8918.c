// DBNIPENAEKO$$CalculateSize @ RVA 0x31C8918

int32_t DBNIPENAEKO__CalculateSize(DBNIPENAEKO_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  AFLJMCMKCIG_o *value;
  Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *__this_01;
  System_String_o *value_00;
  int iVar2;
  
  if ((DAT_04566c45 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&DBNIPENAEKO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_CalculateSize__);
    DAT_04566c45 = 1;
    method = extraout_x1;
  }
  iVar2 = (__this->fields).LCAENFFHHEI;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar2,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  value = (__this->fields).HBCNHAMIMGF;
  if (value != (AFLJMCMKCIG_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value,(MethodInfo *)0x0);
    iVar2 = iVar2 + iVar1 + 1;
  }
  __this_01 = (__this->fields).BMMFCMJLFKN;
  if ((DBNIPENAEKO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *)0x0) {
    iVar1 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       DBNIPENAEKO_TypeInfo->static_fields->FHPMBCKAFHD,
                       Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_CalculateSize__
                      );
    value_00 = (__this->fields).BHMHGIBMMMB;
    if (value_00 != (System_String_o *)0x0) {
      iVar2 = iVar1 + iVar2;
      if ((value_00->fields)._stringLength != 0) {
        if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar1 = Google_Protobuf_CodedOutputStream__ComputeStringSize(value_00,(MethodInfo *)0x0);
        iVar2 = iVar2 + iVar1 + 1;
      }
      __this_00 = (__this->fields).CKFPENBPNML;
      if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
        iVar2 = iVar1 + iVar2;
      }
      return iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

