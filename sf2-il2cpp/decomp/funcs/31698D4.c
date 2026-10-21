// GKKKJLJFGBG$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x31698D4

Google_Protobuf_Reflection_MessageDescriptor_o *
GKKKJLJFGBG__pb__Google_Protobuf_IMessage_get_Descriptor(GKKKJLJFGBG_o *__this,MethodInfo *method)

{
  GKKKJLJFGBG_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045668db & 1) == 0) {
    FUN_01bab630(&GKKKJLJFGBG_TypeInfo);
    DAT_045668db = 1;
    method = extraout_x1;
  }
  method_00 = GKKKJLJFGBG_TypeInfo;
  if ((GKKKJLJFGBG_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (GKKKJLJFGBG_c *)thunk_FUN_01ba7564(GKKKJLJFGBG_TypeInfo,method);
  }
  pGVar1 = GKKKJLJFGBG__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

