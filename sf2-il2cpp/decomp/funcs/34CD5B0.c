// KCPFIELGGLA$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x34CD5B0

Google_Protobuf_Reflection_MessageDescriptor_o *
KCPFIELGGLA__pb__Google_Protobuf_IMessage_get_Descriptor(KCPFIELGGLA_o *__this,MethodInfo *method)

{
  KCPFIELGGLA_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456868b & 1) == 0) {
    FUN_01bab630(&KCPFIELGGLA_TypeInfo);
    DAT_0456868b = 1;
    method = extraout_x1;
  }
  method_00 = KCPFIELGGLA_TypeInfo;
  if ((KCPFIELGGLA_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (KCPFIELGGLA_c *)thunk_FUN_01ba7564(KCPFIELGGLA_TypeInfo,method);
  }
  pGVar1 = KCPFIELGGLA__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

