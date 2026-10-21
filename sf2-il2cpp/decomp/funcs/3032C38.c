// KMAOIKKMFJF$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3032C38

Google_Protobuf_Reflection_MessageDescriptor_o *
KMAOIKKMFJF__pb__Google_Protobuf_IMessage_get_Descriptor(KMAOIKKMFJF_o *__this,MethodInfo *method)

{
  KMAOIKKMFJF_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565d13 & 1) == 0) {
    FUN_01bab630(&KMAOIKKMFJF_TypeInfo);
    DAT_04565d13 = 1;
    method = extraout_x1;
  }
  method_00 = KMAOIKKMFJF_TypeInfo;
  if ((KMAOIKKMFJF_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (KMAOIKKMFJF_c *)thunk_FUN_01ba7564(KMAOIKKMFJF_TypeInfo,method);
  }
  pGVar1 = KMAOIKKMFJF__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

