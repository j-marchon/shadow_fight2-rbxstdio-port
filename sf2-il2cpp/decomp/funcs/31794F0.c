// MEPKDDGONGE$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x31794F0

Google_Protobuf_Reflection_MessageDescriptor_o *
MEPKDDGONGE__pb__Google_Protobuf_IMessage_get_Descriptor(MEPKDDGONGE_o *__this,MethodInfo *method)

{
  MEPKDDGONGE_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566976 & 1) == 0) {
    FUN_01bab630(&MEPKDDGONGE_TypeInfo);
    DAT_04566976 = 1;
    method = extraout_x1;
  }
  method_00 = MEPKDDGONGE_TypeInfo;
  if ((MEPKDDGONGE_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MEPKDDGONGE_c *)thunk_FUN_01ba7564(MEPKDDGONGE_TypeInfo,method);
  }
  pGVar1 = MEPKDDGONGE__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

