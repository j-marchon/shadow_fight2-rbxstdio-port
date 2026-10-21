// HBHFOKIPAHA$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x338FD04

Google_Protobuf_Reflection_MessageDescriptor_o *
HBHFOKIPAHA__pb__Google_Protobuf_IMessage_get_Descriptor(HBHFOKIPAHA_o *__this,MethodInfo *method)

{
  HBHFOKIPAHA_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567c18 & 1) == 0) {
    FUN_01bab630(&HBHFOKIPAHA_TypeInfo);
    DAT_04567c18 = 1;
    method = extraout_x1;
  }
  method_00 = HBHFOKIPAHA_TypeInfo;
  if ((HBHFOKIPAHA_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (HBHFOKIPAHA_c *)thunk_FUN_01ba7564(HBHFOKIPAHA_TypeInfo,method);
  }
  pGVar1 = HBHFOKIPAHA__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

