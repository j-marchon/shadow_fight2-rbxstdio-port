// HDDKPFAHBBN$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x311CABC

Google_Protobuf_Reflection_MessageDescriptor_o *
HDDKPFAHBBN__pb__Google_Protobuf_IMessage_get_Descriptor(HDDKPFAHBBN_o *__this,MethodInfo *method)

{
  HDDKPFAHBBN_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045665f9 & 1) == 0) {
    FUN_01bab630(&HDDKPFAHBBN_TypeInfo);
    DAT_045665f9 = 1;
    method = extraout_x1;
  }
  method_00 = HDDKPFAHBBN_TypeInfo;
  if ((HDDKPFAHBBN_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (HDDKPFAHBBN_c *)thunk_FUN_01ba7564(HDDKPFAHBBN_TypeInfo,method);
  }
  pGVar1 = HDDKPFAHBBN__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

