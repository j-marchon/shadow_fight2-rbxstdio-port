// GKLPDMLELJF$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x34B9C1C

Google_Protobuf_Reflection_MessageDescriptor_o *
GKLPDMLELJF__pb__Google_Protobuf_IMessage_get_Descriptor(GKLPDMLELJF_o *__this,MethodInfo *method)

{
  GKLPDMLELJF_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045685b4 & 1) == 0) {
    FUN_01bab630(&GKLPDMLELJF_TypeInfo);
    DAT_045685b4 = 1;
    method = extraout_x1;
  }
  method_00 = GKLPDMLELJF_TypeInfo;
  if ((GKLPDMLELJF_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (GKLPDMLELJF_c *)thunk_FUN_01ba7564(GKLPDMLELJF_TypeInfo,method);
  }
  pGVar1 = GKLPDMLELJF__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

