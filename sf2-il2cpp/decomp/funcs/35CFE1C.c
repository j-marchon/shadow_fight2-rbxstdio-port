// BPBGAAHBFKH$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x35CFE1C

Google_Protobuf_Reflection_MessageDescriptor_o *
BPBGAAHBFKH__pb__Google_Protobuf_IMessage_get_Descriptor(BPBGAAHBFKH_o *__this,MethodInfo *method)

{
  BPBGAAHBFKH_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568fd7 & 1) == 0) {
    FUN_01bab630(&BPBGAAHBFKH_TypeInfo);
    DAT_04568fd7 = 1;
    method = extraout_x1;
  }
  method_00 = BPBGAAHBFKH_TypeInfo;
  if ((BPBGAAHBFKH_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (BPBGAAHBFKH_c *)thunk_FUN_01ba7564(BPBGAAHBFKH_TypeInfo,method);
  }
  pGVar1 = BPBGAAHBFKH__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

