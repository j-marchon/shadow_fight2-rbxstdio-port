// FIMAAAOEIGM$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3425E94

Google_Protobuf_Reflection_MessageDescriptor_o *
FIMAAAOEIGM__pb__Google_Protobuf_IMessage_get_Descriptor(FIMAAAOEIGM_o *__this,MethodInfo *method)

{
  FIMAAAOEIGM_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456810c & 1) == 0) {
    FUN_01bab630(&FIMAAAOEIGM_TypeInfo);
    DAT_0456810c = 1;
    method = extraout_x1;
  }
  method_00 = FIMAAAOEIGM_TypeInfo;
  if ((FIMAAAOEIGM_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (FIMAAAOEIGM_c *)thunk_FUN_01ba7564(FIMAAAOEIGM_TypeInfo,method);
  }
  pGVar1 = FIMAAAOEIGM__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

