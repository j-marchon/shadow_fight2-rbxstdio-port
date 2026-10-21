// JHMFOIIPEHB$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x30CEAFC

Google_Protobuf_Reflection_MessageDescriptor_o *
JHMFOIIPEHB__pb__Google_Protobuf_IMessage_get_Descriptor(JHMFOIIPEHB_o *__this,MethodInfo *method)

{
  JHMFOIIPEHB_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045662eb & 1) == 0) {
    FUN_01bab630(&JHMFOIIPEHB_TypeInfo);
    DAT_045662eb = 1;
    method = extraout_x1;
  }
  method_00 = JHMFOIIPEHB_TypeInfo;
  if ((JHMFOIIPEHB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (JHMFOIIPEHB_c *)thunk_FUN_01ba7564(JHMFOIIPEHB_TypeInfo,method);
  }
  pGVar1 = JHMFOIIPEHB__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

