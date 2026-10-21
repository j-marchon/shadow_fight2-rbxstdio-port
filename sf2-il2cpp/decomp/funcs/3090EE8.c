// NODLJPNGNBG$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3090EE8

Google_Protobuf_Reflection_MessageDescriptor_o *
NODLJPNGNBG__pb__Google_Protobuf_IMessage_get_Descriptor(NODLJPNGNBG_o *__this,MethodInfo *method)

{
  NODLJPNGNBG_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456609e & 1) == 0) {
    FUN_01bab630(&NODLJPNGNBG_TypeInfo);
    DAT_0456609e = 1;
    method = extraout_x1;
  }
  method_00 = NODLJPNGNBG_TypeInfo;
  if ((NODLJPNGNBG_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (NODLJPNGNBG_c *)thunk_FUN_01ba7564(NODLJPNGNBG_TypeInfo,method);
  }
  pGVar1 = NODLJPNGNBG__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

