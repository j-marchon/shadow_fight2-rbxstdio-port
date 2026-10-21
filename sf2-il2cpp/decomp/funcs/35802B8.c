// EOLFEKNCPLM$$CalculateSize @ RVA 0x35802B8

int32_t EOLFEKNCPLM__CalculateSize(EOLFEKNCPLM_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Google_Protobuf_ByteString_o *pGVar3;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar4;
  GKLPDMLELJF_o *value;
  OBCMNBDBNFO_o *value_00;
  
  if ((DAT_04568cc6 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04568cc6 = 1;
    method = extraout_x1;
  }
  value = (__this->fields).MCOPPCNPAHF;
  iVar4 = 0;
  if (value != (GKLPDMLELJF_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value,(MethodInfo *)0x0);
    iVar4 = iVar2 + 1;
  }
  value_00 = (__this->fields).PLJJCOHGICK;
  if (value_00 != (OBCMNBDBNFO_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value_00,(MethodInfo *)0x0);
    iVar4 = iVar4 + iVar2 + 1;
  }
  pGVar3 = (__this->fields).OACFBJNMHCM;
  if (pGVar3 != (Google_Protobuf_ByteString_o *)0x0) {
    iVar2 = Google_Protobuf_ByteString__get_Length(pGVar3,(MethodInfo *)0x0);
    if (iVar2 != 0) {
      pGVar3 = (__this->fields).OACFBJNMHCM;
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeBytesSize(pGVar3,(MethodInfo *)0x0);
      iVar4 = iVar4 + iVar2 + 1;
    }
    iVar1 = (__this->fields).LEEKCALJFJN;
    if (iVar1 != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
      iVar4 = iVar4 + iVar2 + 1;
    }
    iVar1 = (__this->fields).IINFDIJOFIG;
    if (iVar1 != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
      iVar4 = iVar4 + iVar2 + 1;
    }
    iVar1 = (__this->fields).ODDCBFOLIGB;
    if (iVar1 != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
      iVar4 = iVar4 + iVar2 + 1;
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar4 = iVar2 + iVar4;
    }
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

