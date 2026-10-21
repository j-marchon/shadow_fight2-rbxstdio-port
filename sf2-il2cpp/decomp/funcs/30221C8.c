// OKKPDLAJBFD$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x30221C8

Google_Protobuf_Reflection_MessageDescriptor_o *
OKKPDLAJBFD__pb__Google_Protobuf_IMessage_get_Descriptor(OKKPDLAJBFD_o *__this,MethodInfo *method)

{
  OKKPDLAJBFD_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565c59 & 1) == 0) {
    FUN_01bab630(&OKKPDLAJBFD_TypeInfo);
    DAT_04565c59 = 1;
    method = extraout_x1;
  }
  method_00 = OKKPDLAJBFD_TypeInfo;
  if ((OKKPDLAJBFD_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (OKKPDLAJBFD_c *)thunk_FUN_01ba7564(OKKPDLAJBFD_TypeInfo,method);
  }
  pGVar1 = OKKPDLAJBFD__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

