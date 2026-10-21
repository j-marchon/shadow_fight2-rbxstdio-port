// IMBPILFKGEO$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x30ABCB0

Google_Protobuf_Reflection_MessageDescriptor_o *
IMBPILFKGEO__pb__Google_Protobuf_IMessage_get_Descriptor(IMBPILFKGEO_o *__this,MethodInfo *method)

{
  IMBPILFKGEO_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045661a2 & 1) == 0) {
    FUN_01bab630(&IMBPILFKGEO_TypeInfo);
    DAT_045661a2 = 1;
    method = extraout_x1;
  }
  method_00 = IMBPILFKGEO_TypeInfo;
  if ((IMBPILFKGEO_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (IMBPILFKGEO_c *)thunk_FUN_01ba7564(IMBPILFKGEO_TypeInfo,method);
  }
  pGVar1 = IMBPILFKGEO__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

