// GGDHPLABCGI$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3071F10

Google_Protobuf_Reflection_MessageDescriptor_o *
GGDHPLABCGI__pb__Google_Protobuf_IMessage_get_Descriptor(GGDHPLABCGI_o *__this,MethodInfo *method)

{
  GGDHPLABCGI_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565f7f & 1) == 0) {
    FUN_01bab630(&GGDHPLABCGI_TypeInfo);
    DAT_04565f7f = 1;
    method = extraout_x1;
  }
  method_00 = GGDHPLABCGI_TypeInfo;
  if ((GGDHPLABCGI_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (GGDHPLABCGI_c *)thunk_FUN_01ba7564(GGDHPLABCGI_TypeInfo,method);
  }
  pGVar1 = GGDHPLABCGI__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

