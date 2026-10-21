// KGBIBHEFBHA$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x33043A4

Google_Protobuf_Reflection_MessageDescriptor_o *
KGBIBHEFBHA__pb__Google_Protobuf_IMessage_get_Descriptor(KGBIBHEFBHA_o *__this,MethodInfo *method)

{
  KGBIBHEFBHA_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567740 & 1) == 0) {
    FUN_01bab630(&KGBIBHEFBHA_TypeInfo);
    DAT_04567740 = 1;
    method = extraout_x1;
  }
  method_00 = KGBIBHEFBHA_TypeInfo;
  if ((KGBIBHEFBHA_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (KGBIBHEFBHA_c *)thunk_FUN_01ba7564(KGBIBHEFBHA_TypeInfo,method);
  }
  pGVar1 = KGBIBHEFBHA__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

