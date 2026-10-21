// GLPEFEEGCPM$$WriteTo @ RVA 0x3224D9C

void GLPEFEEGCPM__WriteTo
               (GLPEFEEGCPM_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *__this_01;
  
  if ((DAT_04566f6d & 1) == 0) {
    FUN_01bab630(&GLPEFEEGCPM_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_WriteTo__);
    DAT_04566f6d = 1;
  }
  if ((__this->fields).PBBGNHKFEPG != (FADHMEJJCPO_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03324ea8;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).PBBGNHKFEPG,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).LAEGCKIFDOC != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03324ea8;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).LAEGCKIFDOC,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).MPAIPMANDEO;
  if ((GLPEFEEGCPM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__WriteTo
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)GLPEFEEGCPM_TypeInfo->static_fields->CHLJPKPACJB,
               Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_WriteTo__);
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_03324ea8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

