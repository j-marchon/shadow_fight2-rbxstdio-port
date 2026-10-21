// EOLFEKNCPLM$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x357FD64

Google_Protobuf_Reflection_MessageDescriptor_o *
EOLFEKNCPLM__pb__Google_Protobuf_IMessage_get_Descriptor(EOLFEKNCPLM_o *__this,MethodInfo *method)

{
  EOLFEKNCPLM_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568cc0 & 1) == 0) {
    FUN_01bab630(&EOLFEKNCPLM_TypeInfo);
    DAT_04568cc0 = 1;
    method = extraout_x1;
  }
  method_00 = EOLFEKNCPLM_TypeInfo;
  if ((EOLFEKNCPLM_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (EOLFEKNCPLM_c *)thunk_FUN_01ba7564(EOLFEKNCPLM_TypeInfo,method);
  }
  pGVar1 = EOLFEKNCPLM__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

