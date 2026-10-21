// IBMLPPNMDCI$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x30F63A8

Google_Protobuf_Reflection_MessageDescriptor_o *
IBMLPPNMDCI__pb__Google_Protobuf_IMessage_get_Descriptor(IBMLPPNMDCI_o *__this,MethodInfo *method)

{
  IBMLPPNMDCI_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456645c & 1) == 0) {
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    DAT_0456645c = 1;
    method = extraout_x1;
  }
  method_00 = IBMLPPNMDCI_TypeInfo;
  if ((IBMLPPNMDCI_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (IBMLPPNMDCI_c *)thunk_FUN_01ba7564(IBMLPPNMDCI_TypeInfo,method);
  }
  pGVar1 = IBMLPPNMDCI__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

