// OLCBPIHLPEC$$CalculateSize @ RVA 0x35BB518

int32_t OLCBPIHLPEC__CalculateSize(OLCBPIHLPEC_o *__this,MethodInfo *method)

{
  int value;
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  long value_00;
  System_String_o *pSVar3;
  PGICCMFLDPI_o *value_01;
  
  if ((DAT_04568ed5 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04568ed5 = 1;
    method = extraout_x1;
  }
  value_00 = (__this->fields).NGODFBDEMLE;
  iVar2 = 0;
  if (value_00 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(value_00,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  pSVar3 = (__this->fields).IAEBJKOPDAO;
  if (pSVar3 != (System_String_o *)0x0) {
    if ((pSVar3->fields)._stringLength != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeStringSize(pSVar3,(MethodInfo *)0x0);
      iVar2 = iVar2 + iVar1 + 1;
    }
    value = (__this->fields).EMDNDLOODLG;
    if (value != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeEnumSize(value,(MethodInfo *)0x0);
      iVar2 = iVar2 + iVar1 + 1;
    }
    pSVar3 = (__this->fields).EGELDFKMOCJ;
    if (pSVar3 != (System_String_o *)0x0) {
      if ((pSVar3->fields)._stringLength != 0) {
        if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar1 = Google_Protobuf_CodedOutputStream__ComputeStringSize(pSVar3,(MethodInfo *)0x0);
        iVar2 = iVar2 + iVar1 + 1;
      }
      value_01 = (__this->fields).MIINPPOCPCN;
      if (value_01 != (PGICCMFLDPI_o *)0x0) {
        if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                          ((Google_Protobuf_IMessage_o *)value_01,(MethodInfo *)0x0);
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

