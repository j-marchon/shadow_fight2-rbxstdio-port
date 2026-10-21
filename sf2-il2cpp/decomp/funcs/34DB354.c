// DBOOKMFPFNI$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x34DB354

Google_Protobuf_Reflection_MessageDescriptor_o *
DBOOKMFPFNI__pb__Google_Protobuf_IMessage_get_Descriptor(DBOOKMFPFNI_o *__this,MethodInfo *method)

{
  DBOOKMFPFNI_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568711 & 1) == 0) {
    FUN_01bab630(&DBOOKMFPFNI_TypeInfo);
    DAT_04568711 = 1;
    method = extraout_x1;
  }
  method_00 = DBOOKMFPFNI_TypeInfo;
  if ((DBOOKMFPFNI_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (DBOOKMFPFNI_c *)thunk_FUN_01ba7564(DBOOKMFPFNI_TypeInfo,method);
  }
  pGVar1 = DBOOKMFPFNI__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

