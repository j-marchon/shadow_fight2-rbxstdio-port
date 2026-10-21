// JCFJFJCKLKG$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3331868

Google_Protobuf_Reflection_MessageDescriptor_o *
JCFJFJCKLKG__pb__Google_Protobuf_IMessage_get_Descriptor(JCFJFJCKLKG_o *__this,MethodInfo *method)

{
  JCFJFJCKLKG_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456790d & 1) == 0) {
    FUN_01bab630(&JCFJFJCKLKG_TypeInfo);
    DAT_0456790d = 1;
    method = extraout_x1;
  }
  method_00 = JCFJFJCKLKG_TypeInfo;
  if ((JCFJFJCKLKG_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (JCFJFJCKLKG_c *)thunk_FUN_01ba7564(JCFJFJCKLKG_TypeInfo,method);
  }
  pGVar1 = JCFJFJCKLKG__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

