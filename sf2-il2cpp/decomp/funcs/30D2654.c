// BECIPDJBAOG$$CalculateSize @ RVA 0x30D2654

int32_t BECIPDJBAOG__CalculateSize(BECIPDJBAOG_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  System_String_o *value;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar4;
  int iVar5;
  
  if ((DAT_04566316 & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_CalculateSize__);
    DAT_04566316 = 1;
    method = extraout_x1;
  }
  value = (__this->fields).JPHFGCIDDHE;
  if (value != (System_String_o *)0x0) {
    if ((value->fields)._stringLength == 0) {
      iVar5 = 0;
    }
    else {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeStringSize(value,(MethodInfo *)0x0);
      iVar5 = iVar2 + 1;
    }
    pGVar4 = (__this->fields).LEJBLHJFJHP;
    if ((BECIPDJBAOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pGVar4 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
      iVar2 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar4,
                         (Google_Protobuf_FieldCodec_T__o *)
                         BECIPDJBAOG_TypeInfo->static_fields->JJNDCMILECE,
                         Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_CalculateSize__
                        );
      pGVar4 = (__this->fields).AKFPFIHIHOC;
      if (pGVar4 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
        iVar3 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                          ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar4,
                           (Google_Protobuf_FieldCodec_T__o *)
                           BECIPDJBAOG_TypeInfo->static_fields->ACFGKMKAECB,
                           Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_CalculateSize__
                          );
        iVar1 = (__this->fields).EMOLIBOCKJK;
        iVar5 = iVar2 + iVar5 + iVar3;
        if (iVar1 != 0) {
          if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
          iVar5 = iVar5 + iVar2 + 1;
        }
        iVar1 = (__this->fields).NLLKMEMKBAF;
        if (iVar1 != 0) {
          if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
          iVar5 = iVar5 + iVar2 + 1;
        }
        __this_00 = (__this->fields).CKFPENBPNML;
        if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
          iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
          iVar5 = iVar2 + iVar5;
        }
        return iVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

