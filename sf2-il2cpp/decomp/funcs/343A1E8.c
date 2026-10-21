// AADKBCFCLKK$$CalculateSize @ RVA 0x343A1E8

int32_t AADKBCFCLKK__CalculateSize(AADKBCFCLKK_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  long lVar2;
  KDADMJGPAOM_o *value;
  PGICCMFLDPI_o *pPVar3;
  Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *__this_01;
  int iVar4;
  
  if ((DAT_045681c4 & 1) == 0) {
    FUN_01bab630(&AADKBCFCLKK_TypeInfo);
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_CalculateSize__);
    DAT_045681c4 = 1;
    method = extraout_x1;
  }
  lVar2 = (__this->fields).AMKHEHFFAKJ;
  if (lVar2 == 0) {
    iVar4 = 0;
  }
  else {
                    /* try { // try from 0353a248 to 0363a373 has its CatchHandler @ 0353a248
                       catch() { ... } // from try @ 0353a248 with catch @ 0353a248
                       catch() { ... } // from try @ 0353a4b4 with catch @ 0353a248
                       catch() { ... } // from try @ 0353a55c with catch @ 0353a248
                       catch() { ... } // from try @ 0353a564 with catch @ 0353a248
                       catch() { ... } // from try @ 0353a620 with catch @ 0353a248 */
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(lVar2,(MethodInfo *)0x0);
    iVar4 = iVar1 + 1;
  }
  value = (__this->fields).LHFLMBNKPHF;
  if (value != (KDADMJGPAOM_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value,(MethodInfo *)0x0);
    iVar4 = iVar4 + iVar1 + 1;
  }
  pPVar3 = (__this->fields).LBKLNIPHGMM;
  if (pPVar3 != (PGICCMFLDPI_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)pPVar3,(MethodInfo *)0x0);
    iVar4 = iVar4 + iVar1 + 1;
  }
  lVar2 = (__this->fields).IKNCNGMNPPK;
  if (lVar2 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(lVar2,(MethodInfo *)0x0);
    iVar4 = iVar4 + iVar1 + 1;
  }
  __this_01 = (__this->fields).MPAIPMANDEO;
  if ((__this->fields).IOLELGMBJFL != false) {
    iVar4 = iVar4 + 2;
  }
  if ((AADKBCFCLKK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0) {
    iVar1 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       AADKBCFCLKK_TypeInfo->static_fields->CHLJPKPACJB,
                       Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_CalculateSize__
                      );
    pPVar3 = (__this->fields).FAEDHKAJJNK;
    iVar4 = iVar1 + iVar4;
    if (pPVar3 != (PGICCMFLDPI_o *)0x0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                        ((Google_Protobuf_IMessage_o *)pPVar3,(MethodInfo *)0x0);
      iVar4 = iVar4 + iVar1 + 1;
    }
    __this_00 = (__this->fields).CKFPENBPNML;
                    /* try { // try from 0353a374 to 0363a39b has its CatchHandler @ 0353a584 */
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar4 = iVar1 + iVar4;
    }
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

