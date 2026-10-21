// AFLJMCMKCIG$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x31329B4

Google_Protobuf_Reflection_MessageDescriptor_o *
AFLJMCMKCIG__pb__Google_Protobuf_IMessage_get_Descriptor(AFLJMCMKCIG_o *__this,MethodInfo *method)

{
  AFLJMCMKCIG_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045666d9 & 1) == 0) {
    FUN_01bab630(&AFLJMCMKCIG_TypeInfo);
    DAT_045666d9 = 1;
    method = extraout_x1;
  }
  method_00 = AFLJMCMKCIG_TypeInfo;
  if ((AFLJMCMKCIG_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (AFLJMCMKCIG_c *)thunk_FUN_01ba7564(AFLJMCMKCIG_TypeInfo,method);
  }
  pGVar1 = AFLJMCMKCIG__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

