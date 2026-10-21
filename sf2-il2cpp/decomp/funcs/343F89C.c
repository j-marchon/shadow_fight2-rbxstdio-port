// OMFJHNMDIBF$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x343F89C

Google_Protobuf_Reflection_MessageDescriptor_o *
OMFJHNMDIBF__pb__Google_Protobuf_IMessage_get_Descriptor(OMFJHNMDIBF_o *__this,MethodInfo *method)

{
  OMFJHNMDIBF_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456820d & 1) == 0) {
    FUN_01bab630(&OMFJHNMDIBF_TypeInfo);
    DAT_0456820d = 1;
    method = extraout_x1;
  }
  method_00 = OMFJHNMDIBF_TypeInfo;
  if ((OMFJHNMDIBF_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (OMFJHNMDIBF_c *)thunk_FUN_01ba7564(OMFJHNMDIBF_TypeInfo,method);
  }
  pGVar1 = OMFJHNMDIBF__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

