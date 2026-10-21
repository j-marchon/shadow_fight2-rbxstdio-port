// AJINOJNMEEK$$CalculateSize @ RVA 0x304DDA0

int32_t AJINOJNMEEK__CalculateSize(AJINOJNMEEK_o *__this,MethodInfo *method)

{
  int value;
  int32_t iVar1;
  Google_Protobuf_FieldCodec_string__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *__this_01;
  MethodInfo *extraout_x1;
  int iVar2;
  System_String_o *value_00;
  
                    /* try { // try from 0314dda4 to 0324ddbf has its CatchHandler @ 0314df58 */
  if ((DAT_04565e26 & 1) == 0) {
                    /* try { // try from 0314ddc0 to 0324ded7 has its CatchHandler @ 0314dae8 */
    FUN_01bab630(&AJINOJNMEEK_TypeInfo);
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec<string>_CalculateSizeWithTag__);
    DAT_04565e26 = 1;
    method = extraout_x1;
  }
  value = (__this->fields).EMDNDLOODLG;
  iVar2 = 0;
  if (value != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeEnumSize(value,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  value_00 = (__this->fields).EGELDFKMOCJ;
  if (value_00 != (System_String_o *)0x0) {
    if ((value_00->fields)._stringLength != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeStringSize(value_00,(MethodInfo *)0x0);
      iVar2 = iVar2 + iVar1 + 1;
    }
    if ((__this->fields).ABFBDJFPIMM != (System_String_o *)0x0) {
      if ((AJINOJNMEEK_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = AJINOJNMEEK_TypeInfo->static_fields->GLHDOIAKLDH;
      if (__this_00 == (Google_Protobuf_FieldCodec_string__o *)0x0) goto LAB_0314debc;
      iVar1 = Google_Protobuf_FieldCodec<object>__CalculateSizeWithTag
                        ((Google_Protobuf_FieldCodec_T__o *)__this_00,
                         (Il2CppObject *)(__this->fields).ABFBDJFPIMM,
                         Method_Google_Protobuf_FieldCodec<string>_CalculateSizeWithTag__);
      iVar2 = iVar1 + iVar2;
    }
    __this_01 = (__this->fields).CKFPENBPNML;
    if (__this_01 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_01,(MethodInfo *)0x0);
      iVar2 = iVar1 + iVar2;
    }
    return iVar2;
  }
LAB_0314debc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

