// HCFOFHGNBKP$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x314BAF0

Google_Protobuf_Reflection_MessageDescriptor_o *
HCFOFHGNBKP__pb__Google_Protobuf_IMessage_get_Descriptor(HCFOFHGNBKP_o *__this,MethodInfo *method)

{
  HCFOFHGNBKP_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045667c3 & 1) == 0) {
    FUN_01bab630(&HCFOFHGNBKP_TypeInfo);
    DAT_045667c3 = 1;
    method = extraout_x1;
  }
  method_00 = HCFOFHGNBKP_TypeInfo;
  if ((HCFOFHGNBKP_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (HCFOFHGNBKP_c *)thunk_FUN_01ba7564(HCFOFHGNBKP_TypeInfo,method);
  }
  pGVar1 = HCFOFHGNBKP__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

