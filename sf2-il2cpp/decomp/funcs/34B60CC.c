// OJEHKJHEBID$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x34B60CC

Google_Protobuf_Reflection_MessageDescriptor_o *
OJEHKJHEBID__pb__Google_Protobuf_IMessage_get_Descriptor(OJEHKJHEBID_o *__this,MethodInfo *method)

{
  OJEHKJHEBID_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568586 & 1) == 0) {
    FUN_01bab630(&OJEHKJHEBID_TypeInfo);
    DAT_04568586 = 1;
    method = extraout_x1;
  }
  method_00 = OJEHKJHEBID_TypeInfo;
  if ((OJEHKJHEBID_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (OJEHKJHEBID_c *)thunk_FUN_01ba7564(OJEHKJHEBID_TypeInfo,method);
  }
  pGVar1 = OJEHKJHEBID__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

