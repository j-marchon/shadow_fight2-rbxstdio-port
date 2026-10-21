// IHMIMECHIAN$$CalculateSize @ RVA 0x343D440

int32_t IHMIMECHIAN__CalculateSize(IHMIMECHIAN_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  Google_Protobuf_Collections_RepeatedField_int__o *__this_01;
  int iVar3;
  
  if ((DAT_045681ef & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&IHMIMECHIAN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>_CalculateSize__);
    DAT_045681ef = 1;
    method = extraout_x1;
  }
  iVar3 = (__this->fields).CHLCOKOBIHN;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar3,(MethodInfo *)0x0);
    iVar3 = iVar2 + 1;
  }
  iVar1 = (__this->fields).KFBIHGFDAOL;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  if ((__this->fields).POHDGAPDBGK != false) {
    iVar3 = iVar3 + 2;
  }
  if ((__this->fields).PJMOADBJNKH != false) {
    iVar3 = iVar3 + 2;
  }
  if ((__this->fields).NNCLFDMPFHP != false) {
    iVar3 = iVar3 + 2;
  }
  __this_01 = (__this->fields).IKCCLDMOOKP;
  if ((__this->fields).HOFAHGOCDCE != false) {
    iVar3 = iVar3 + 2;
  }
  if ((__this->fields).KLOGBBKOLFL != 0.0) {
    iVar3 = iVar3 + 5;
  }
  if ((IHMIMECHIAN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_int__o *)0x0) {
    iVar2 = Google_Protobuf_Collections_RepeatedField<int>__CalculateSize
                      (__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       IHMIMECHIAN_TypeInfo->static_fields->EEBAEBIODDF,
                       Method_Google_Protobuf_Collections_RepeatedField<int>_CalculateSize__);
    iVar1 = (__this->fields).LADINGEOKCK;
    iVar3 = iVar2 + iVar3;
    if (iVar1 != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
      iVar3 = iVar3 + iVar2 + 1;
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar3 = iVar2 + iVar3;
    }
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

