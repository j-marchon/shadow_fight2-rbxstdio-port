// MGDJPGGPDJI$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x34A3F10

Google_Protobuf_Reflection_MessageDescriptor_o *
MGDJPGGPDJI__pb__Google_Protobuf_IMessage_get_Descriptor(MGDJPGGPDJI_o *__this,MethodInfo *method)

{
  MGDJPGGPDJI_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045684d6 & 1) == 0) {
    FUN_01bab630(&MGDJPGGPDJI_TypeInfo);
    DAT_045684d6 = 1;
    method = extraout_x1;
  }
  method_00 = MGDJPGGPDJI_TypeInfo;
  if ((MGDJPGGPDJI_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MGDJPGGPDJI_c *)thunk_FUN_01ba7564(MGDJPGGPDJI_TypeInfo,method);
  }
  pGVar1 = MGDJPGGPDJI__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

