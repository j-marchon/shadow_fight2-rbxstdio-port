// NLBPJNEGNNM$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3557060

Google_Protobuf_Reflection_MessageDescriptor_o *
NLBPJNEGNNM__pb__Google_Protobuf_IMessage_get_Descriptor(NLBPJNEGNNM_o *__this,MethodInfo *method)

{
  NLBPJNEGNNM_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568b70 & 1) == 0) {
    FUN_01bab630(&NLBPJNEGNNM_TypeInfo);
    DAT_04568b70 = 1;
    method = extraout_x1;
  }
  method_00 = NLBPJNEGNNM_TypeInfo;
  if ((NLBPJNEGNNM_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (NLBPJNEGNNM_c *)thunk_FUN_01ba7564(NLBPJNEGNNM_TypeInfo,method);
  }
  pGVar1 = NLBPJNEGNNM__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

