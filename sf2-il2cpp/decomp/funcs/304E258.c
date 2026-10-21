// AJINOJNMEEK$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x304E258

Google_Protobuf_Reflection_MessageDescriptor_o *
AJINOJNMEEK__pb__Google_Protobuf_IMessage_get_Descriptor(AJINOJNMEEK_o *__this,MethodInfo *method)

{
  AJINOJNMEEK_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565e2a & 1) == 0) {
    FUN_01bab630(&AJINOJNMEEK_TypeInfo);
    DAT_04565e2a = 1;
    method = extraout_x1;
  }
  method_00 = AJINOJNMEEK_TypeInfo;
  if ((AJINOJNMEEK_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (AJINOJNMEEK_c *)thunk_FUN_01ba7564(AJINOJNMEEK_TypeInfo,method);
  }
  pGVar1 = AJINOJNMEEK__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

