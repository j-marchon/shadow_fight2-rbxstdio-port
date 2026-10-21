// HBLHCCMEEEC$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3153E2C

Google_Protobuf_Reflection_MessageDescriptor_o *
HBLHCCMEEEC__pb__Google_Protobuf_IMessage_get_Descriptor(HBLHCCMEEEC_o *__this,MethodInfo *method)

{
  HBLHCCMEEEC_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566820 & 1) == 0) {
    FUN_01bab630(&HBLHCCMEEEC_TypeInfo);
    DAT_04566820 = 1;
    method = extraout_x1;
  }
  method_00 = HBLHCCMEEEC_TypeInfo;
  if ((HBLHCCMEEEC_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (HBLHCCMEEEC_c *)thunk_FUN_01ba7564(HBLHCCMEEEC_TypeInfo,method);
  }
  pGVar1 = HBLHCCMEEEC__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

