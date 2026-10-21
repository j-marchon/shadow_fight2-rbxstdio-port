// GKLPDMLELJF$$CalculateSize @ RVA 0x34B9CF0

int32_t GKLPDMLELJF__CalculateSize(GKLPDMLELJF_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Google_Protobuf_FieldCodec_Nullable_long___o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *__this_01;
  MethodInfo *extraout_x1;
  int iVar3;
  long value;
  System_String_o *pSVar4;
  
  if ((DAT_045685b8 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec<Nullable<long>>_CalculateSizeWithTag__);
    FUN_01bab630(&GKLPDMLELJF_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<long>_get_HasValue__);
    DAT_045685b8 = 1;
    method = extraout_x1;
  }
  value = (__this->fields).ANAJGHJEEOC;
  iVar3 = 0;
  if (value != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(value,(MethodInfo *)0x0);
    iVar3 = iVar2 + 1;
  }
  pSVar4 = (__this->fields).FFOIEHLJLDA;
  if (pSVar4 != (System_String_o *)0x0) {
    if ((pSVar4->fields)._stringLength != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeStringSize(pSVar4,(MethodInfo *)0x0);
      iVar3 = iVar3 + iVar2 + 1;
    }
    pSVar4 = (__this->fields).LLBEKLPKDHK;
    if (pSVar4 != (System_String_o *)0x0) {
      if ((pSVar4->fields)._stringLength != 0) {
        if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar2 = Google_Protobuf_CodedOutputStream__ComputeStringSize(pSVar4,(MethodInfo *)0x0);
        iVar3 = iVar3 + iVar2 + 1;
      }
      iVar1 = (__this->fields).PEBHLKLGDBM;
      if (iVar1 != 0) {
        if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
        iVar3 = iVar3 + iVar2 + 1;
      }
      iVar1 = (__this->fields).PFJPLCAIGJH;
      if (iVar1 != 0) {
        if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar2 = Google_Protobuf_CodedOutputStream__ComputeEnumSize(iVar1,(MethodInfo *)0x0);
        iVar3 = iVar3 + iVar2 + 1;
      }
      if ((__this->fields).ADEIKPGDIPM.fields.hasValue != false) {
        if ((GKLPDMLELJF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = GKLPDMLELJF_TypeInfo->static_fields->OBHAFPFOAHP;
        if (__this_00 == (Google_Protobuf_FieldCodec_Nullable_long___o *)0x0) goto LAB_035b9ea4;
        iVar2 = Google_Protobuf_FieldCodec<Nullable<long>>__CalculateSizeWithTag
                          (__this_00,(System_Nullable_long__o)(__this->fields).ADEIKPGDIPM.fields,
                           Method_Google_Protobuf_FieldCodec<Nullable<long>>_CalculateSizeWithTag__)
        ;
        iVar3 = iVar2 + iVar3;
      }
      __this_01 = (__this->fields).CKFPENBPNML;
      if (__this_01 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_01,(MethodInfo *)0x0);
        iVar3 = iVar2 + iVar3;
      }
      return iVar3;
    }
  }
LAB_035b9ea4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

