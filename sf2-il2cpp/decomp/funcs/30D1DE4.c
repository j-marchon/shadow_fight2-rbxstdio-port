// BECIPDJBAOG$$WriteTo @ RVA 0x30D1DE4

void BECIPDJBAOG__WriteTo
               (BECIPDJBAOG_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  System_String_o *pSVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar2;
  
  if ((DAT_0456630d & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_WriteTo__);
    DAT_0456630d = 1;
  }
  pSVar1 = (__this->fields).JPHFGCIDDHE;
  if (pSVar1 != (System_String_o *)0x0) {
    if ((pSVar1->fields)._stringLength != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_031d1f44;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteString
                (JBGJLELBMJF,(__this->fields).JPHFGCIDDHE,(MethodInfo *)0x0);
    }
    pGVar2 = (__this->fields).LEJBLHJFJHP;
    if ((BECIPDJBAOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pGVar2 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<object>__WriteTo
                ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,JBGJLELBMJF,
                 (Google_Protobuf_FieldCodec_T__o *)BECIPDJBAOG_TypeInfo->static_fields->JJNDCMILECE
                 ,Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_WriteTo__);
      pGVar2 = (__this->fields).AKFPFIHIHOC;
      if (pGVar2 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
        Google_Protobuf_Collections_RepeatedField<object>__WriteTo
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,JBGJLELBMJF,
                   (Google_Protobuf_FieldCodec_T__o *)
                   BECIPDJBAOG_TypeInfo->static_fields->ACFGKMKAECB,
                   Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_WriteTo__);
        if ((__this->fields).EMOLIBOCKJK != 0) {
          if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_031d1f44;
          Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x20,(MethodInfo *)0x0);
          Google_Protobuf_CodedOutputStream__WriteInt32
                    (JBGJLELBMJF,(__this->fields).EMOLIBOCKJK,(MethodInfo *)0x0);
        }
        if ((__this->fields).NLLKMEMKBAF != 0) {
          if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_031d1f44;
          Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x28,(MethodInfo *)0x0);
          Google_Protobuf_CodedOutputStream__WriteInt32
                    (JBGJLELBMJF,(__this->fields).NLLKMEMKBAF,(MethodInfo *)0x0);
        }
        __this_00 = (__this->fields).CKFPENBPNML;
        if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
          Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
  }
LAB_031d1f44:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

