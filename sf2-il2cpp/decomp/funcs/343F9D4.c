// OMFJHNMDIBF$$CalculateSize @ RVA 0x343F9D4

int32_t OMFJHNMDIBF__CalculateSize(OMFJHNMDIBF_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Google_Protobuf_FieldCodec_Nullable_int___o *pGVar3;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  PIADCKMDDAK_o *pPVar4;
  
  if ((DAT_0456820f & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec<Nullable<int>>_CalculateSizeWithTag__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&OMFJHNMDIBF_TypeInfo);
    DAT_0456820f = 1;
    method = extraout_x1;
  }
  if ((__this->fields).EMOLIBOCKJK.fields.hasValue == false) {
    iVar1 = 0;
  }
  else {
    if ((OMFJHNMDIBF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(OMFJHNMDIBF_TypeInfo,method);
    }
    pGVar3 = OMFJHNMDIBF_TypeInfo->static_fields->BBDGIEPPGAM;
    if (pGVar3 == (Google_Protobuf_FieldCodec_Nullable_int___o *)0x0) goto LAB_0353fb40;
    iVar1 = Google_Protobuf_FieldCodec<Nullable<int>>__CalculateSizeWithTag
                      (pGVar3,(System_Nullable_int__o)(__this->fields).EMOLIBOCKJK.fields,
                       Method_Google_Protobuf_FieldCodec<Nullable<int>>_CalculateSizeWithTag__);
  }
  pPVar4 = (__this->fields).JMACIOLHEOF;
  if (pPVar4 != (PIADCKMDDAK_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)pPVar4,(MethodInfo *)0x0);
    iVar1 = iVar1 + iVar2 + 1;
  }
  pPVar4 = (__this->fields).IEDLACLJJOK;
  if (pPVar4 != (PIADCKMDDAK_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)pPVar4,(MethodInfo *)0x0);
    iVar1 = iVar1 + iVar2 + 1;
  }
  if ((__this->fields).NLLKMEMKBAF.fields.hasValue != false) {
    if ((OMFJHNMDIBF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pGVar3 = OMFJHNMDIBF_TypeInfo->static_fields->DBPADDIIBMJ;
    if (pGVar3 == (Google_Protobuf_FieldCodec_Nullable_int___o *)0x0) {
LAB_0353fb40:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar2 = Google_Protobuf_FieldCodec<Nullable<int>>__CalculateSizeWithTag
                      (pGVar3,(System_Nullable_int__o)(__this->fields).NLLKMEMKBAF.fields,
                       Method_Google_Protobuf_FieldCodec<Nullable<int>>_CalculateSizeWithTag__);
    iVar1 = iVar2 + iVar1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar1 = iVar2 + iVar1;
  }
  return iVar1;
}

