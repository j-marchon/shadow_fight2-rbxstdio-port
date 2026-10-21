// ELBBEAGGAOH$$CalculateSize @ RVA 0x324B310

int32_t ELBBEAGGAOH__CalculateSize(ELBBEAGGAOH_o *__this,MethodInfo *method)

{
  int value;
  int32_t iVar1;
  Google_Protobuf_ByteString_o *pGVar2;
  MethodInfo *extraout_x1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  KAMBBJFPLGM_o *pKVar3;
  EKCGNICFDEO_o *pEVar4;
  GLPEFEEGCPM_o *value_00;
  PGICCMFLDPI_o *value_01;
  Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *__this_01;
  int iVar5;
  
  if ((DAT_045670f3 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&ELBBEAGGAOH_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>_CalculateSize__);
    DAT_045670f3 = 1;
    method = extraout_x1;
  }
  pKVar3 = (__this->fields).CBHDCHDBFGB;
  if (pKVar3 == (KAMBBJFPLGM_o *)0x0) {
    iVar5 = 0;
  }
  else {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)pKVar3,(MethodInfo *)0x0);
    iVar5 = iVar1 + 1;
  }
  pKVar3 = (__this->fields).IFDHENIKFKC;
  if (pKVar3 != (KAMBBJFPLGM_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)pKVar3,(MethodInfo *)0x0);
    iVar5 = iVar5 + iVar1 + 1;
  }
  pEVar4 = (__this->fields).DNKENJFJOMD;
  if (pEVar4 != (EKCGNICFDEO_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)pEVar4,(MethodInfo *)0x0);
    iVar5 = iVar5 + iVar1 + 1;
  }
  pEVar4 = (__this->fields).FFDNNGLMPJJ;
  if (pEVar4 != (EKCGNICFDEO_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)pEVar4,(MethodInfo *)0x0);
    iVar5 = iVar5 + iVar1 + 1;
  }
  value_00 = (__this->fields).KEIBPDJHHBB;
  if (value_00 != (GLPEFEEGCPM_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value_00,(MethodInfo *)0x0);
    iVar5 = iVar5 + iVar1 + 1;
  }
  value_01 = (__this->fields).MIINPPOCPCN;
  if (value_01 != (PGICCMFLDPI_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value_01,(MethodInfo *)0x0);
    iVar5 = iVar5 + iVar1 + 1;
  }
  pGVar2 = (__this->fields).DKOBFIICAFM;
  if (pGVar2 != (Google_Protobuf_ByteString_o *)0x0) {
    iVar1 = Google_Protobuf_ByteString__get_Length(pGVar2,(MethodInfo *)0x0);
    if (iVar1 != 0) {
      pGVar2 = (__this->fields).DKOBFIICAFM;
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeBytesSize(pGVar2,(MethodInfo *)0x0);
      iVar5 = iVar5 + iVar1 + 1;
    }
    value = (__this->fields).EMNNAEAIMNH;
    if (value != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(value,(MethodInfo *)0x0);
      iVar5 = iVar5 + iVar1 + 1;
    }
    __this_01 = (__this->fields).OOPOHLJPBHE;
    if ((ELBBEAGGAOH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (__this_01 != (Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *)0x0) {
      iVar1 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                         (Google_Protobuf_FieldCodec_T__o *)
                         ELBBEAGGAOH_TypeInfo->static_fields->AJFGPDHFEMK,
                         Method_Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>_CalculateSize__
                        );
      __this_00 = (__this->fields).CKFPENBPNML;
      iVar5 = iVar1 + iVar5;
      if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
        iVar5 = iVar1 + iVar5;
      }
      return iVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

