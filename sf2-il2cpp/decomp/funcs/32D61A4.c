// EAJJPPPJENA$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x32D61A4

Google_Protobuf_Reflection_MessageDescriptor_o *
EAJJPPPJENA__pb__Google_Protobuf_IMessage_get_Descriptor(EAJJPPPJENA_o *__this,MethodInfo *method)

{
  EAJJPPPJENA_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456758c & 1) == 0) {
    FUN_01bab630(&EAJJPPPJENA_TypeInfo);
    DAT_0456758c = 1;
    method = extraout_x1;
  }
  method_00 = EAJJPPPJENA_TypeInfo;
  if ((EAJJPPPJENA_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (EAJJPPPJENA_c *)thunk_FUN_01ba7564(EAJJPPPJENA_TypeInfo,method);
  }
  pGVar1 = EAJJPPPJENA__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

