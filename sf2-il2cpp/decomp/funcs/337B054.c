// NIGMCJIMBHO$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x337B054

Google_Protobuf_Reflection_MessageDescriptor_o *
NIGMCJIMBHO__pb__Google_Protobuf_IMessage_get_Descriptor(NIGMCJIMBHO_o *__this,MethodInfo *method)

{
  NIGMCJIMBHO_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567b86 & 1) == 0) {
    FUN_01bab630(&NIGMCJIMBHO_TypeInfo);
    DAT_04567b86 = 1;
    method = extraout_x1;
  }
  method_00 = NIGMCJIMBHO_TypeInfo;
  if ((NIGMCJIMBHO_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (NIGMCJIMBHO_c *)thunk_FUN_01ba7564(NIGMCJIMBHO_TypeInfo,method);
  }
  pGVar1 = NIGMCJIMBHO__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

