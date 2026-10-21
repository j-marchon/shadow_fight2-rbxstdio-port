// OLHGMELLLFK$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3194D18

Google_Protobuf_Reflection_MessageDescriptor_o *
OLHGMELLLFK__pb__Google_Protobuf_IMessage_get_Descriptor(OLHGMELLLFK_o *__this,MethodInfo *method)

{
  OLHGMELLLFK_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566a5f & 1) == 0) {
    FUN_01bab630(&OLHGMELLLFK_TypeInfo);
    DAT_04566a5f = 1;
    method = extraout_x1;
  }
  method_00 = OLHGMELLLFK_TypeInfo;
  if ((OLHGMELLLFK_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (OLHGMELLLFK_c *)thunk_FUN_01ba7564(OLHGMELLLFK_TypeInfo,method);
  }
  pGVar1 = OLHGMELLLFK__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

