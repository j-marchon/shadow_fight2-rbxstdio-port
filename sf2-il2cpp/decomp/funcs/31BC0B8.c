// FAACNCKMEJM$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x31BC0B8

Google_Protobuf_Reflection_MessageDescriptor_o *
FAACNCKMEJM__pb__Google_Protobuf_IMessage_get_Descriptor(FAACNCKMEJM_o *__this,MethodInfo *method)

{
  FAACNCKMEJM_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566beb & 1) == 0) {
    FUN_01bab630(&FAACNCKMEJM_TypeInfo);
    DAT_04566beb = 1;
    method = extraout_x1;
  }
  method_00 = FAACNCKMEJM_TypeInfo;
  if ((FAACNCKMEJM_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (FAACNCKMEJM_c *)thunk_FUN_01ba7564(FAACNCKMEJM_TypeInfo,method);
  }
  pGVar1 = FAACNCKMEJM__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

