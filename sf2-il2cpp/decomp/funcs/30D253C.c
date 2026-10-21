// BECIPDJBAOG$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x30D253C

Google_Protobuf_Reflection_MessageDescriptor_o *
BECIPDJBAOG__pb__Google_Protobuf_IMessage_get_Descriptor(BECIPDJBAOG_o *__this,MethodInfo *method)

{
  BECIPDJBAOG_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566312 & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    DAT_04566312 = 1;
    method = extraout_x1;
  }
  method_00 = BECIPDJBAOG_TypeInfo;
  if ((BECIPDJBAOG_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (BECIPDJBAOG_c *)thunk_FUN_01ba7564(BECIPDJBAOG_TypeInfo,method);
  }
  pGVar1 = BECIPDJBAOG__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

