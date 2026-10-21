// KBLFOOJFIIG$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x314EBE0

Google_Protobuf_Reflection_MessageDescriptor_o *
KBLFOOJFIIG__pb__Google_Protobuf_IMessage_get_Descriptor(KBLFOOJFIIG_o *__this,MethodInfo *method)

{
  KBLFOOJFIIG_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045667f2 & 1) == 0) {
    FUN_01bab630(&KBLFOOJFIIG_TypeInfo);
    DAT_045667f2 = 1;
    method = extraout_x1;
  }
  method_00 = KBLFOOJFIIG_TypeInfo;
  if ((KBLFOOJFIIG_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (KBLFOOJFIIG_c *)thunk_FUN_01ba7564(KBLFOOJFIIG_TypeInfo,method);
  }
  pGVar1 = KBLFOOJFIIG__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

