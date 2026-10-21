// DMOPGPMINJD$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x30BA974

Google_Protobuf_Reflection_MessageDescriptor_o *
DMOPGPMINJD__pb__Google_Protobuf_IMessage_get_Descriptor(DMOPGPMINJD_o *__this,MethodInfo *method)

{
  DMOPGPMINJD_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566232 & 1) == 0) {
    FUN_01bab630(&DMOPGPMINJD_TypeInfo);
    DAT_04566232 = 1;
    method = extraout_x1;
  }
  method_00 = DMOPGPMINJD_TypeInfo;
  if ((DMOPGPMINJD_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (DMOPGPMINJD_c *)thunk_FUN_01ba7564(DMOPGPMINJD_TypeInfo,method);
  }
  pGVar1 = DMOPGPMINJD__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

