// ENFPENIMCIK$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3378960

Google_Protobuf_Reflection_MessageDescriptor_o *
ENFPENIMCIK__pb__Google_Protobuf_IMessage_get_Descriptor(ENFPENIMCIK_o *__this,MethodInfo *method)

{
  ENFPENIMCIK_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567b5b & 1) == 0) {
    FUN_01bab630(&ENFPENIMCIK_TypeInfo);
    DAT_04567b5b = 1;
    method = extraout_x1;
  }
  method_00 = ENFPENIMCIK_TypeInfo;
  if ((ENFPENIMCIK_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (ENFPENIMCIK_c *)thunk_FUN_01ba7564(ENFPENIMCIK_TypeInfo,method);
  }
  pGVar1 = ENFPENIMCIK__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

