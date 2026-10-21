// EIBAKHBHMAO$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x304F6E4

Google_Protobuf_Reflection_MessageDescriptor_o *
EIBAKHBHMAO__pb__Google_Protobuf_IMessage_get_Descriptor(EIBAKHBHMAO_o *__this,MethodInfo *method)

{
  EIBAKHBHMAO_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565e3b & 1) == 0) {
    FUN_01bab630(&EIBAKHBHMAO_TypeInfo);
    DAT_04565e3b = 1;
    method = extraout_x1;
  }
  method_00 = EIBAKHBHMAO_TypeInfo;
  if ((EIBAKHBHMAO_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (EIBAKHBHMAO_c *)thunk_FUN_01ba7564(EIBAKHBHMAO_TypeInfo,method);
  }
  pGVar1 = EIBAKHBHMAO__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

