// OJHLANCHFPC$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x34D95F8

Google_Protobuf_Reflection_MessageDescriptor_o *
OJHLANCHFPC__pb__Google_Protobuf_IMessage_get_Descriptor(OJHLANCHFPC_o *__this,MethodInfo *method)

{
  OJHLANCHFPC_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045686fd & 1) == 0) {
    FUN_01bab630(&OJHLANCHFPC_TypeInfo);
    DAT_045686fd = 1;
    method = extraout_x1;
  }
  method_00 = OJHLANCHFPC_TypeInfo;
  if ((OJHLANCHFPC_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (OJHLANCHFPC_c *)thunk_FUN_01ba7564(OJHLANCHFPC_TypeInfo,method);
  }
  pGVar1 = OJHLANCHFPC__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

