// BKMLILFFPIH$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3047504

Google_Protobuf_Reflection_MessageDescriptor_o *
BKMLILFFPIH__pb__Google_Protobuf_IMessage_get_Descriptor(BKMLILFFPIH_o *__this,MethodInfo *method)

{
  BKMLILFFPIH_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565de9 & 1) == 0) {
    FUN_01bab630(&BKMLILFFPIH_TypeInfo);
    DAT_04565de9 = 1;
    method = extraout_x1;
  }
  method_00 = BKMLILFFPIH_TypeInfo;
  if ((BKMLILFFPIH_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (BKMLILFFPIH_c *)thunk_FUN_01ba7564(BKMLILFFPIH_TypeInfo,method);
  }
  pGVar1 = BKMLILFFPIH__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

