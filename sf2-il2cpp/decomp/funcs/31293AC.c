// JMCDPBKILIN$$CalculateSize @ RVA 0x31293AC

int32_t JMCDPBKILIN__CalculateSize(JMCDPBKILIN_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *__this_01;
  KAMBBJFPLGM_o *value;
  
  if ((DAT_0456667e & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&JMCDPBKILIN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_CalculateSize__);
    DAT_0456667e = 1;
    method = extraout_x1;
  }
  __this_01 = (__this->fields).MJIIHOLHNCK;
  if ((JMCDPBKILIN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(JMCDPBKILIN_TypeInfo,method);
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *)0x0) {
    iVar1 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       JMCDPBKILIN_TypeInfo->static_fields->EKPNGGCFBJH,
                       Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_CalculateSize__
                      );
    value = (__this->fields).OPHCNELIOLD;
    if (value != (KAMBBJFPLGM_o *)0x0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                        ((Google_Protobuf_IMessage_o *)value,(MethodInfo *)0x0);
      iVar1 = iVar1 + iVar2 + 1;
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar1 = iVar2 + iVar1;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

