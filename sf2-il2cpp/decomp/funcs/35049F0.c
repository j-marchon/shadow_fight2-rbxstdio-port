// JGELBDHDHAO$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x35049F0

Google_Protobuf_Reflection_MessageDescriptor_o *
JGELBDHDHAO__pb__Google_Protobuf_IMessage_get_Descriptor(JGELBDHDHAO_o *__this,MethodInfo *method)

{
  JGELBDHDHAO_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456888b & 1) == 0) {
    FUN_01bab630(&JGELBDHDHAO_TypeInfo);
    DAT_0456888b = 1;
    method = extraout_x1;
  }
  method_00 = JGELBDHDHAO_TypeInfo;
  if ((JGELBDHDHAO_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (JGELBDHDHAO_c *)thunk_FUN_01ba7564(JGELBDHDHAO_TypeInfo,method);
  }
  pGVar1 = JGELBDHDHAO__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

