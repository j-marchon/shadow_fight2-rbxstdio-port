// IHMIMECHIAN$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x343C8F0

Google_Protobuf_Reflection_MessageDescriptor_o *
IHMIMECHIAN__pb__Google_Protobuf_IMessage_get_Descriptor(IHMIMECHIAN_o *__this,MethodInfo *method)

{
  IHMIMECHIAN_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045681e5 & 1) == 0) {
    FUN_01bab630(&IHMIMECHIAN_TypeInfo);
    DAT_045681e5 = 1;
    method = extraout_x1;
  }
  method_00 = IHMIMECHIAN_TypeInfo;
  if ((IHMIMECHIAN_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (IHMIMECHIAN_c *)thunk_FUN_01ba7564(IHMIMECHIAN_TypeInfo,method);
  }
  pGVar1 = IHMIMECHIAN__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

