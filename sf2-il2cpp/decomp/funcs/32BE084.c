// PIADCKMDDAK$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x32BE084

Google_Protobuf_Reflection_MessageDescriptor_o *
PIADCKMDDAK__pb__Google_Protobuf_IMessage_get_Descriptor(PIADCKMDDAK_o *__this,MethodInfo *method)

{
  PIADCKMDDAK_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045674b1 & 1) == 0) {
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    DAT_045674b1 = 1;
    method = extraout_x1;
  }
  method_00 = PIADCKMDDAK_TypeInfo;
  if ((PIADCKMDDAK_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (PIADCKMDDAK_c *)thunk_FUN_01ba7564(PIADCKMDDAK_TypeInfo,method);
  }
  pGVar1 = PIADCKMDDAK__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

