// FADHMEJJCPO$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x33CE2C4

Google_Protobuf_Reflection_MessageDescriptor_o *
FADHMEJJCPO__pb__Google_Protobuf_IMessage_get_Descriptor(FADHMEJJCPO_o *__this,MethodInfo *method)

{
  FADHMEJJCPO_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567e3e & 1) == 0) {
    FUN_01bab630(&FADHMEJJCPO_TypeInfo);
    DAT_04567e3e = 1;
    method = extraout_x1;
  }
  method_00 = FADHMEJJCPO_TypeInfo;
  if ((FADHMEJJCPO_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (FADHMEJJCPO_c *)thunk_FUN_01ba7564(FADHMEJJCPO_TypeInfo,method);
  }
  pGVar1 = FADHMEJJCPO__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

