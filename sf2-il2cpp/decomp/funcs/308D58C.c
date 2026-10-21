// KKGHPKOFEHM$$WriteTo @ RVA 0x308D58C

void KKGHPKOFEHM__WriteTo
               (KKGHPKOFEHM_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_01;
  
  if ((DAT_0456606d & 1) == 0) {
    FUN_01bab630(&KKGHPKOFEHM_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_WriteTo__);
    DAT_0456606d = 1;
  }
  if ((__this->fields).OPHCNELIOLD != (KAMBBJFPLGM_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0318d66c;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).OPHCNELIOLD,
               (MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).NNDJCFCJGMO;
  if ((KKGHPKOFEHM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__WriteTo
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)KKGHPKOFEHM_TypeInfo->static_fields->NIOOECHHOMN,
               Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_WriteTo__);
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_0318d66c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

