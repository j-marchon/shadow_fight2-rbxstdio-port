// EMBNHHOCCBH$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x35AA394

Google_Protobuf_Reflection_MessageDescriptor_o *
EMBNHHOCCBH__pb__Google_Protobuf_IMessage_get_Descriptor(EMBNHHOCCBH_o *__this,MethodInfo *method)

{
  EMBNHHOCCBH_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568e44 & 1) == 0) {
    FUN_01bab630(&EMBNHHOCCBH_TypeInfo);
    DAT_04568e44 = 1;
    method = extraout_x1;
  }
  method_00 = EMBNHHOCCBH_TypeInfo;
  if ((EMBNHHOCCBH_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (EMBNHHOCCBH_c *)thunk_FUN_01ba7564(EMBNHHOCCBH_TypeInfo,method);
  }
  pGVar1 = EMBNHHOCCBH__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

