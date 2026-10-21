// CADIGFIBFEN$$CalculateSize @ RVA 0x3565580

int32_t CADIGFIBFEN__CalculateSize(CADIGFIBFEN_o *__this,MethodInfo *method)

{
  int value;
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  PGICCMFLDPI_o *value_00;
  uint uVar2;
  
  if ((DAT_04568bea & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04568bea = 1;
    method = extraout_x1;
  }
  value_00 = (__this->fields).MIINPPOCPCN;
  uVar2 = (uint)(__this->fields).PCKJAOOKJKK << 1;
  if (value_00 != (PGICCMFLDPI_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value_00,(MethodInfo *)0x0);
    uVar2 = (uVar2 | 1) + iVar1;
  }
  value = (__this->fields).BLGKCOLNMCK;
  if ((__this->fields).PLIIOMEEPLO != false) {
    uVar2 = uVar2 + 2;
  }
  if (value != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeEnumSize(value,(MethodInfo *)0x0);
    uVar2 = uVar2 + iVar1 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    uVar2 = iVar1 + uVar2;
  }
  return uVar2;
}

