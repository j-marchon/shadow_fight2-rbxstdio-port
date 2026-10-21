// HBHFOKIPAHA$$CalculateSize @ RVA 0x338FB20

int32_t HBHFOKIPAHA__CalculateSize(HBHFOKIPAHA_o *__this,MethodInfo *method)

{
  int value;
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  long lVar3;
  
  if ((DAT_04567c16 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04567c16 = 1;
    method = extraout_x1;
  }
  lVar3 = (__this->fields).MAHGAIJBBHF;
  iVar2 = 0;
  if (lVar3 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(lVar3,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  lVar3 = (__this->fields).MKGNDFBBANC;
  if (lVar3 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(lVar3,(MethodInfo *)0x0);
    iVar2 = iVar2 + iVar1 + 1;
  }
  value = (__this->fields).IGBAAAHPLAA;
  if (value != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeEnumSize(value,(MethodInfo *)0x0);
    iVar2 = iVar2 + iVar1 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar2 = iVar1 + iVar2;
  }
  return iVar2;
}

