// BDMABHJEEGD$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x310C428

Google_Protobuf_Reflection_MessageDescriptor_o *
BDMABHJEEGD__pb__Google_Protobuf_IMessage_get_Descriptor(BDMABHJEEGD_o *__this,MethodInfo *method)

{
  BDMABHJEEGD_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456654c & 1) == 0) {
    FUN_01bab630(&BDMABHJEEGD_TypeInfo);
    DAT_0456654c = 1;
    method = extraout_x1;
  }
  method_00 = BDMABHJEEGD_TypeInfo;
  if ((BDMABHJEEGD_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (BDMABHJEEGD_c *)thunk_FUN_01ba7564(BDMABHJEEGD_TypeInfo,method);
  }
  pGVar1 = BDMABHJEEGD__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

