// EEHFEPPDBHL$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x329BF18

Google_Protobuf_Reflection_MessageDescriptor_o *
EEHFEPPDBHL__pb__Google_Protobuf_IMessage_get_Descriptor(EEHFEPPDBHL_o *__this,MethodInfo *method)

{
  EEHFEPPDBHL_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567399 & 1) == 0) {
    FUN_01bab630(&EEHFEPPDBHL_TypeInfo);
    DAT_04567399 = 1;
    method = extraout_x1;
  }
  method_00 = EEHFEPPDBHL_TypeInfo;
  if ((EEHFEPPDBHL_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (EEHFEPPDBHL_c *)thunk_FUN_01ba7564(EEHFEPPDBHL_TypeInfo,method);
  }
  pGVar1 = EEHFEPPDBHL__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

