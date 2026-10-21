// LFELBGMCDHD$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x33A0458

Google_Protobuf_Reflection_MessageDescriptor_o *
LFELBGMCDHD__pb__Google_Protobuf_IMessage_get_Descriptor(LFELBGMCDHD_o *__this,MethodInfo *method)

{
  LFELBGMCDHD_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567cab & 1) == 0) {
    FUN_01bab630(&LFELBGMCDHD_TypeInfo);
    DAT_04567cab = 1;
    method = extraout_x1;
  }
  method_00 = LFELBGMCDHD_TypeInfo;
  if ((LFELBGMCDHD_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LFELBGMCDHD_c *)thunk_FUN_01ba7564(LFELBGMCDHD_TypeInfo,method);
  }
  pGVar1 = LFELBGMCDHD__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

