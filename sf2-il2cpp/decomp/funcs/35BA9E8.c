// OLCBPIHLPEC$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x35BA9E8

Google_Protobuf_Reflection_MessageDescriptor_o *
OLCBPIHLPEC__pb__Google_Protobuf_IMessage_get_Descriptor(OLCBPIHLPEC_o *__this,MethodInfo *method)

{
  OLCBPIHLPEC_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568ec9 & 1) == 0) {
    FUN_01bab630(&OLCBPIHLPEC_TypeInfo);
    DAT_04568ec9 = 1;
    method = extraout_x1;
  }
  method_00 = OLCBPIHLPEC_TypeInfo;
  if ((OLCBPIHLPEC_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (OLCBPIHLPEC_c *)thunk_FUN_01ba7564(OLCBPIHLPEC_TypeInfo,method);
  }
  pGVar1 = OLCBPIHLPEC__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

