// GPKDMPJJEOO$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x319DFB0

Google_Protobuf_Reflection_MessageDescriptor_o *
GPKDMPJJEOO__pb__Google_Protobuf_IMessage_get_Descriptor(GPKDMPJJEOO_o *__this,MethodInfo *method)

{
  GPKDMPJJEOO_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566ac1 & 1) == 0) {
    FUN_01bab630(&GPKDMPJJEOO_TypeInfo);
    DAT_04566ac1 = 1;
    method = extraout_x1;
  }
  method_00 = GPKDMPJJEOO_TypeInfo;
  if ((GPKDMPJJEOO_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (GPKDMPJJEOO_c *)thunk_FUN_01ba7564(GPKDMPJJEOO_TypeInfo,method);
  }
  pGVar1 = GPKDMPJJEOO__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

