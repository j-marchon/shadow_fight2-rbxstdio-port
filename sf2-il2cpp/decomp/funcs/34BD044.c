// PBGDDCFGPJI$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x34BD044

Google_Protobuf_Reflection_MessageDescriptor_o *
PBGDDCFGPJI__pb__Google_Protobuf_IMessage_get_Descriptor(PBGDDCFGPJI_o *__this,MethodInfo *method)

{
  PBGDDCFGPJI_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045685f4 & 1) == 0) {
    FUN_01bab630(&PBGDDCFGPJI_TypeInfo);
    DAT_045685f4 = 1;
    method = extraout_x1;
  }
  method_00 = PBGDDCFGPJI_TypeInfo;
  if ((PBGDDCFGPJI_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (PBGDDCFGPJI_c *)thunk_FUN_01ba7564(PBGDDCFGPJI_TypeInfo,method);
  }
  pGVar1 = PBGDDCFGPJI__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

