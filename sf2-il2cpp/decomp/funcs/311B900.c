// KAMBBJFPLGM$$WriteTo @ RVA 0x311B900

void KAMBBJFPLGM__WriteTo
               (KAMBBJFPLGM_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *__this_01;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar1;
  Google_Protobuf_Collections_RepeatedField_string__o *__this_02;
  
  if ((DAT_045665ea & 1) == 0) {
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<EIBAKHBHMAO>_WriteTo__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_WriteTo__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<string>_WriteTo__);
    DAT_045665ea = 1;
  }
  if ((__this->fields).FLAFELDNABC != (EOLFEKNCPLM_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0321bbf0;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).FLAFELDNABC,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).CBEJJIHKEGF != (NGOFOPOGBMJ_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0321bbf0;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).CBEJJIHKEGF,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).EMOLIBOCKJK != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0321bbf0;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x18,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).EMOLIBOCKJK,(MethodInfo *)0x0);
  }
  pGVar1 = (__this->fields).LEJBLHJFJHP;
  if ((KAMBBJFPLGM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (pGVar1 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__WriteTo
              ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)KAMBBJFPLGM_TypeInfo->static_fields->JJNDCMILECE,
               Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_WriteTo__);
    if ((__this->fields).IJBBNNHJPLF != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0321bbf0;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x28,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteInt32
                (JBGJLELBMJF,(__this->fields).IJBBNNHJPLF,(MethodInfo *)0x0);
    }
    if ((__this->fields).GFIFLFPODAE != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0321bbf0;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x30,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteInt64
                (JBGJLELBMJF,(__this->fields).GFIFLFPODAE,(MethodInfo *)0x0);
    }
    if ((__this->fields).FLFGAIPCCJK != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0321bbf0;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x38,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteInt64
                (JBGJLELBMJF,(__this->fields).FLFGAIPCCJK,(MethodInfo *)0x0);
    }
    pGVar1 = (__this->fields).AKFPFIHIHOC;
    if ((KAMBBJFPLGM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pGVar1 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<object>__WriteTo
                ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,JBGJLELBMJF,
                 (Google_Protobuf_FieldCodec_T__o *)KAMBBJFPLGM_TypeInfo->static_fields->ACFGKMKAECB
                 ,Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_WriteTo__);
      if ((__this->fields).GNKNDHJHFOC != 0) {
        if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0321bbf0;
        Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x48,(MethodInfo *)0x0);
        Google_Protobuf_CodedOutputStream__WriteInt32
                  (JBGJLELBMJF,(__this->fields).GNKNDHJHFOC,(MethodInfo *)0x0);
      }
      if ((__this->fields).IGPJEDLPAGI != (BPBGAAHBFKH_o *)0x0) {
        if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0321bbf0;
        Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x52,(MethodInfo *)0x0);
        Google_Protobuf_CodedOutputStream__WriteMessage
                  (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).IGPJEDLPAGI,
                   (MethodInfo *)0x0);
      }
      __this_02 = (__this->fields).HBIHNBPPEEO;
      if ((KAMBBJFPLGM_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_02 != (Google_Protobuf_Collections_RepeatedField_string__o *)0x0) {
        Google_Protobuf_Collections_RepeatedField<object>__WriteTo
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,JBGJLELBMJF,
                   (Google_Protobuf_FieldCodec_T__o *)
                   KAMBBJFPLGM_TypeInfo->static_fields->IIMNAMKPOPF,
                   Method_Google_Protobuf_Collections_RepeatedField<string>_WriteTo__);
        __this_00 = (__this->fields).FDELJPKNGKF;
        if (__this_00 != (Google_Protobuf_Collections_RepeatedField_EIBAKHBHMAO__o *)0x0) {
          Google_Protobuf_Collections_RepeatedField<object>__WriteTo
                    ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,JBGJLELBMJF,
                     (Google_Protobuf_FieldCodec_T__o *)
                     KAMBBJFPLGM_TypeInfo->static_fields->ADEIEGJOBLG,
                     Method_Google_Protobuf_Collections_RepeatedField<EIBAKHBHMAO>_WriteTo__);
          if ((__this->fields).LIGHEGAMGHD != (KEGDLHPEJBG_o *)0x0) {
            if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0321bbf0;
            Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x6a,(MethodInfo *)0x0);
            Google_Protobuf_CodedOutputStream__WriteMessage
                      (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).LIGHEGAMGHD,
                       (MethodInfo *)0x0);
          }
          __this_01 = (__this->fields).CKFPENBPNML;
          if (__this_01 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
            Google_Protobuf_UnknownFieldSet__WriteTo(__this_01,JBGJLELBMJF,(MethodInfo *)0x0);
            return;
          }
          return;
        }
      }
    }
  }
LAB_0321bbf0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

