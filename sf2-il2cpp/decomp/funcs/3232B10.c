// BFLFFPLIIFM$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3232B10

Google_Protobuf_Reflection_MessageDescriptor_o *
BFLFFPLIIFM__pb__Google_Protobuf_IMessage_get_Descriptor(BFLFFPLIIFM_o *__this,MethodInfo *method)

{
  BFLFFPLIIFM_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566feb & 1) == 0) {
    FUN_01bab630(&BFLFFPLIIFM_TypeInfo);
    DAT_04566feb = 1;
    method = extraout_x1;
  }
  method_00 = BFLFFPLIIFM_TypeInfo;
  if ((BFLFFPLIIFM_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (BFLFFPLIIFM_c *)thunk_FUN_01ba7564(BFLFFPLIIFM_TypeInfo,method);
  }
  pGVar1 = BFLFFPLIIFM__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

