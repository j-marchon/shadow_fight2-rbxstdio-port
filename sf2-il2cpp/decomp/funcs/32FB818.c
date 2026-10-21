// EPCCNLNOALL$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x32FB818

Google_Protobuf_Reflection_MessageDescriptor_o *
EPCCNLNOALL__pb__Google_Protobuf_IMessage_get_Descriptor(EPCCNLNOALL_o *__this,MethodInfo *method)

{
  EPCCNLNOALL_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045676dc & 1) == 0) {
    FUN_01bab630(&EPCCNLNOALL_TypeInfo);
    DAT_045676dc = 1;
    method = extraout_x1;
  }
  method_00 = EPCCNLNOALL_TypeInfo;
  if ((EPCCNLNOALL_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (EPCCNLNOALL_c *)thunk_FUN_01ba7564(EPCCNLNOALL_TypeInfo,method);
  }
  pGVar1 = EPCCNLNOALL__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

