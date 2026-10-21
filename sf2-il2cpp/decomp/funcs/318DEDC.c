// LKAFKHBBNOH$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x318DEDC

Google_Protobuf_Reflection_MessageDescriptor_o *
LKAFKHBBNOH__pb__Google_Protobuf_IMessage_get_Descriptor(LKAFKHBBNOH_o *__this,MethodInfo *method)

{
  LKAFKHBBNOH_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566a23 & 1) == 0) {
    FUN_01bab630(&LKAFKHBBNOH_TypeInfo);
    DAT_04566a23 = 1;
    method = extraout_x1;
  }
  method_00 = LKAFKHBBNOH_TypeInfo;
  if ((LKAFKHBBNOH_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LKAFKHBBNOH_c *)thunk_FUN_01ba7564(LKAFKHBBNOH_TypeInfo,method);
  }
  pGVar1 = LKAFKHBBNOH__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

