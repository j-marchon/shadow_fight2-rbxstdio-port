// KMDOLFBIGNC$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3122D1C

Google_Protobuf_Reflection_MessageDescriptor_o *
KMDOLFBIGNC__pb__Google_Protobuf_IMessage_get_Descriptor(KMDOLFBIGNC_o *__this,MethodInfo *method)

{
  KMDOLFBIGNC_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566635 & 1) == 0) {
    FUN_01bab630(&KMDOLFBIGNC_TypeInfo);
    DAT_04566635 = 1;
    method = extraout_x1;
  }
  method_00 = KMDOLFBIGNC_TypeInfo;
  if ((KMDOLFBIGNC_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (KMDOLFBIGNC_c *)thunk_FUN_01ba7564(KMDOLFBIGNC_TypeInfo,method);
  }
  pGVar1 = KMDOLFBIGNC__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

