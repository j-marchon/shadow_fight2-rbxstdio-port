// NGOFOPOGBMJ$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x34E5C04

Google_Protobuf_Reflection_MessageDescriptor_o *
NGOFOPOGBMJ__pb__Google_Protobuf_IMessage_get_Descriptor(NGOFOPOGBMJ_o *__this,MethodInfo *method)

{
  NGOFOPOGBMJ_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568762 & 1) == 0) {
    FUN_01bab630(&NGOFOPOGBMJ_TypeInfo);
    DAT_04568762 = 1;
    method = extraout_x1;
  }
  method_00 = NGOFOPOGBMJ_TypeInfo;
  if ((NGOFOPOGBMJ_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (NGOFOPOGBMJ_c *)thunk_FUN_01ba7564(NGOFOPOGBMJ_TypeInfo,method);
  }
  pGVar1 = NGOFOPOGBMJ__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

