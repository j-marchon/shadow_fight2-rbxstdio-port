// CDAAECGFKON$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3211B8C

Google_Protobuf_Reflection_MessageDescriptor_o *
CDAAECGFKON__pb__Google_Protobuf_IMessage_get_Descriptor(CDAAECGFKON_o *__this,MethodInfo *method)

{
  CDAAECGFKON_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566e96 & 1) == 0) {
    FUN_01bab630(&CDAAECGFKON_TypeInfo);
    DAT_04566e96 = 1;
    method = extraout_x1;
  }
  method_00 = CDAAECGFKON_TypeInfo;
  if ((CDAAECGFKON_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (CDAAECGFKON_c *)thunk_FUN_01ba7564(CDAAECGFKON_TypeInfo,method);
  }
  pGVar1 = CDAAECGFKON__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

