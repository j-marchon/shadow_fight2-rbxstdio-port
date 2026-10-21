// CADIGFIBFEN$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3565964

Google_Protobuf_Reflection_MessageDescriptor_o *
CADIGFIBFEN__pb__Google_Protobuf_IMessage_get_Descriptor(CADIGFIBFEN_o *__this,MethodInfo *method)

{
  CADIGFIBFEN_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568bee & 1) == 0) {
    FUN_01bab630(&CADIGFIBFEN_TypeInfo);
    DAT_04568bee = 1;
    method = extraout_x1;
  }
  method_00 = CADIGFIBFEN_TypeInfo;
  if ((CADIGFIBFEN_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (CADIGFIBFEN_c *)thunk_FUN_01ba7564(CADIGFIBFEN_TypeInfo,method);
  }
  pGVar1 = CADIGFIBFEN__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

