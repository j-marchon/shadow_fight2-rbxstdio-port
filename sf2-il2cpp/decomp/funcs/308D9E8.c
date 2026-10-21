// KKGHPKOFEHM$$CalculateSize @ RVA 0x308D9E8

int32_t KKGHPKOFEHM__CalculateSize(KKGHPKOFEHM_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *extraout_x1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  KAMBBJFPLGM_o *value;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_01;
  int iVar2;
  
  if ((DAT_04566072 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&KKGHPKOFEHM_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_CalculateSize__);
    DAT_04566072 = 1;
    method = extraout_x1;
  }
  value = (__this->fields).OPHCNELIOLD;
  if (value == (KAMBBJFPLGM_o *)0x0) {
    iVar2 = 0;
  }
  else {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  __this_01 = (__this->fields).NNDJCFCJGMO;
  if ((KKGHPKOFEHM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    iVar1 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       KKGHPKOFEHM_TypeInfo->static_fields->NIOOECHHOMN,
                       Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_CalculateSize__
                      );
    __this_00 = (__this->fields).CKFPENBPNML;
    iVar2 = iVar1 + iVar2;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar2 = iVar1 + iVar2;
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

