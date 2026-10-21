// JMCDPBKILIN$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x31296F8

Google_Protobuf_Reflection_MessageDescriptor_o *
JMCDPBKILIN__pb__Google_Protobuf_IMessage_get_Descriptor(JMCDPBKILIN_o *__this,MethodInfo *method)

{
  JMCDPBKILIN_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566682 & 1) == 0) {
    FUN_01bab630(&JMCDPBKILIN_TypeInfo);
    DAT_04566682 = 1;
    method = extraout_x1;
  }
  method_00 = JMCDPBKILIN_TypeInfo;
  if ((JMCDPBKILIN_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (JMCDPBKILIN_c *)thunk_FUN_01ba7564(JMCDPBKILIN_TypeInfo,method);
  }
  pGVar1 = JMCDPBKILIN__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

