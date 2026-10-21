// ELBBEAGGAOH$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x324BBAC

Google_Protobuf_Reflection_MessageDescriptor_o *
ELBBEAGGAOH__pb__Google_Protobuf_IMessage_get_Descriptor(ELBBEAGGAOH_o *__this,MethodInfo *method)

{
  ELBBEAGGAOH_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045670f9 & 1) == 0) {
    FUN_01bab630(&ELBBEAGGAOH_TypeInfo);
    DAT_045670f9 = 1;
    method = extraout_x1;
  }
  method_00 = ELBBEAGGAOH_TypeInfo;
  if ((ELBBEAGGAOH_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (ELBBEAGGAOH_c *)thunk_FUN_01ba7564(ELBBEAGGAOH_TypeInfo,method);
  }
  pGVar1 = ELBBEAGGAOH__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

