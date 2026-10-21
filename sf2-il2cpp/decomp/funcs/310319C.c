// CBPENMDOJDB$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x310319C

Google_Protobuf_Reflection_MessageDescriptor_o *
CBPENMDOJDB__pb__Google_Protobuf_IMessage_get_Descriptor(CBPENMDOJDB_o *__this,MethodInfo *method)

{
  CBPENMDOJDB_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045664d6 & 1) == 0) {
    FUN_01bab630(&CBPENMDOJDB_TypeInfo);
    DAT_045664d6 = 1;
    method = extraout_x1;
  }
  method_00 = CBPENMDOJDB_TypeInfo;
  if ((CBPENMDOJDB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (CBPENMDOJDB_c *)thunk_FUN_01ba7564(CBPENMDOJDB_TypeInfo,method);
  }
  pGVar1 = CBPENMDOJDB__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

