// LKJJCAEOJBG$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x354210C

Google_Protobuf_Reflection_MessageDescriptor_o *
LKJJCAEOJBG__pb__Google_Protobuf_IMessage_get_Descriptor(LKJJCAEOJBG_o *__this,MethodInfo *method)

{
  LKJJCAEOJBG_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568afe & 1) == 0) {
    FUN_01bab630(&LKJJCAEOJBG_TypeInfo);
    DAT_04568afe = 1;
    method = extraout_x1;
  }
  method_00 = LKJJCAEOJBG_TypeInfo;
  if ((LKJJCAEOJBG_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LKJJCAEOJBG_c *)thunk_FUN_01ba7564(LKJJCAEOJBG_TypeInfo,method);
  }
  pGVar1 = LKJJCAEOJBG__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

