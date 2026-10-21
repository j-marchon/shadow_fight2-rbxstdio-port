// OLHGMELLLFK$$CalculateSize @ RVA 0x3194A90

int32_t OLHGMELLLFK__CalculateSize(OLHGMELLLFK_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_ByteString_o *pGVar2;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar3;
  
  if ((DAT_04566a5b & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04566a5b = 1;
    method = extraout_x1;
  }
  pGVar2 = (__this->fields).OACFBJNMHCM;
  if (pGVar2 != (Google_Protobuf_ByteString_o *)0x0) {
    iVar1 = Google_Protobuf_ByteString__get_Length(pGVar2,(MethodInfo *)0x0);
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    else {
      pGVar2 = (__this->fields).OACFBJNMHCM;
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeBytesSize(pGVar2,(MethodInfo *)0x0);
      iVar3 = iVar1 + 1;
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar3 = iVar1 + iVar3;
    }
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

