// KKGHPKOFEHM$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x308DB48

Google_Protobuf_Reflection_MessageDescriptor_o *
KKGHPKOFEHM__pb__Google_Protobuf_IMessage_get_Descriptor(KKGHPKOFEHM_o *__this,MethodInfo *method)

{
  KKGHPKOFEHM_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566075 & 1) == 0) {
    FUN_01bab630(&KKGHPKOFEHM_TypeInfo);
    DAT_04566075 = 1;
    method = extraout_x1;
  }
  method_00 = KKGHPKOFEHM_TypeInfo;
  if ((KKGHPKOFEHM_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (KKGHPKOFEHM_c *)thunk_FUN_01ba7564(KKGHPKOFEHM_TypeInfo,method);
  }
  pGVar1 = KKGHPKOFEHM__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

