// EKCGNICFDEO$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x351B204

Google_Protobuf_Reflection_MessageDescriptor_o *
EKCGNICFDEO__pb__Google_Protobuf_IMessage_get_Descriptor(EKCGNICFDEO_o *__this,MethodInfo *method)

{
  EKCGNICFDEO_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456897f & 1) == 0) {
    FUN_01bab630(&EKCGNICFDEO_TypeInfo);
    DAT_0456897f = 1;
    method = extraout_x1;
  }
  method_00 = EKCGNICFDEO_TypeInfo;
  if ((EKCGNICFDEO_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (EKCGNICFDEO_c *)thunk_FUN_01ba7564(EKCGNICFDEO_TypeInfo,method);
  }
  pGVar1 = EKCGNICFDEO__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

