// KAMBBJFPLGM$$CalculateSize @ RVA 0x311BC04

int32_t KAMBBJFPLGM__CalculateSize(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *__this_01;
  EOLFEKNCPLM_o *value;
  NGOFOPOGBMJ_o *value_00;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar4;
  long lVar5;
  BPBGAAHBFKH_o *value_01;
  Google_Protobuf_Collections_RepeatedField_string__o *__this_02;
  KEGDLHPEJBG_o *value_02;
  int iVar6;
  
  if ((DAT_045665ed & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<EIBAKHBHMAO>_CalculateSize__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_CalculateSize__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<string>_CalculateSize__);
    DAT_045665ed = 1;
    method = extraout_x1;
  }
  value = (__this->fields).FLAFELDNABC;
  if (value == (EOLFEKNCPLM_o *)0x0) {
    iVar6 = 0;
  }
  else {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value,(MethodInfo *)0x0);
    iVar6 = iVar2 + 1;
  }
  value_00 = (__this->fields).CBEJJIHKEGF;
  if (value_00 != (NGOFOPOGBMJ_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value_00,(MethodInfo *)0x0);
    iVar6 = iVar6 + iVar2 + 1;
  }
  iVar1 = (__this->fields).EMOLIBOCKJK;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar6 = iVar6 + iVar2 + 1;
  }
  pGVar4 = (__this->fields).LEJBLHJFJHP;
  if ((KAMBBJFPLGM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (pGVar4 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    iVar2 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar4,
                       (Google_Protobuf_FieldCodec_T__o *)
                       KAMBBJFPLGM_TypeInfo->static_fields->JJNDCMILECE,
                       Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_CalculateSize__
                      );
    iVar1 = (__this->fields).IJBBNNHJPLF;
    iVar6 = iVar2 + iVar6;
    if (iVar1 != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
      iVar6 = iVar6 + iVar2 + 1;
    }
    lVar5 = (__this->fields).GFIFLFPODAE;
    if (lVar5 != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(lVar5,(MethodInfo *)0x0);
      iVar6 = iVar6 + iVar2 + 1;
    }
    lVar5 = (__this->fields).FLFGAIPCCJK;
    if (lVar5 != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(lVar5,(MethodInfo *)0x0);
      iVar6 = iVar6 + iVar2 + 1;
    }
    pGVar4 = (__this->fields).AKFPFIHIHOC;
    if ((KAMBBJFPLGM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pGVar4 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
      iVar2 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar4,
                         (Google_Protobuf_FieldCodec_T__o *)
                         KAMBBJFPLGM_TypeInfo->static_fields->ACFGKMKAECB,
                         Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_CalculateSize__
                        );
      iVar1 = (__this->fields).GNKNDHJHFOC;
      iVar6 = iVar2 + iVar6;
      if (iVar1 != 0) {
        if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
        iVar6 = iVar6 + iVar2 + 1;
      }
      value_01 = (__this->fields).IGPJEDLPAGI;
      if (value_01 != (BPBGAAHBFKH_o *)0x0) {
        if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar2 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                          ((Google_Protobuf_IMessage_o *)value_01,(MethodInfo *)0x0);
        iVar6 = iVar6 + iVar2 + 1;
      }
      __this_02 = (__this->fields).HBIHNBPPEEO;
      if ((KAMBBJFPLGM_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_02 != (Google_Protobuf_Collections_RepeatedField_string__o *)0x0) {
        iVar2 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                          ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,
                           (Google_Protobuf_FieldCodec_T__o *)
                           KAMBBJFPLGM_TypeInfo->static_fields->IIMNAMKPOPF,
                           Method_Google_Protobuf_Collections_RepeatedField<string>_CalculateSize__)
        ;
        __this_01 = (__this->fields).FDELJPKNGKF;
        if (__this_01 != (Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *)0x0) {
          iVar3 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                             (Google_Protobuf_FieldCodec_T__o *)
                             KAMBBJFPLGM_TypeInfo->static_fields->ADEIEGJOBLG,
                             Method_Google_Protobuf_Collections_RepeatedField<EIBAKHBHMAO>_CalculateSize__
                            );
          value_02 = (__this->fields).LIGHEGAMGHD;
          iVar6 = iVar2 + iVar6 + iVar3;
          if (value_02 != (KEGDLHPEJBG_o *)0x0) {
            if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            iVar2 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                              ((Google_Protobuf_IMessage_o *)value_02,(MethodInfo *)0x0);
            iVar6 = iVar6 + iVar2 + 1;
          }
          __this_00 = (__this->fields).CKFPENBPNML;
          if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
            iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
            iVar6 = iVar2 + iVar6;
          }
          return iVar6;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

