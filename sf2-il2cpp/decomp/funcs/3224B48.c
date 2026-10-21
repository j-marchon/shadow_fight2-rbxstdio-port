// GLPEFEEGCPM$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3224B48

Google_Protobuf_Reflection_MessageDescriptor_o *
GLPEFEEGCPM__pb__Google_Protobuf_IMessage_get_Descriptor(GLPEFEEGCPM_o *__this,MethodInfo *method)

{
  GLPEFEEGCPM_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566f6b & 1) == 0) {
    FUN_01bab630(&GLPEFEEGCPM_TypeInfo);
    DAT_04566f6b = 1;
    method = extraout_x1;
  }
  method_00 = GLPEFEEGCPM_TypeInfo;
  if ((GLPEFEEGCPM_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (GLPEFEEGCPM_c *)thunk_FUN_01ba7564(GLPEFEEGCPM_TypeInfo,method);
  }
  pGVar1 = GLPEFEEGCPM__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

