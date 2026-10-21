// ICPMLKOEANF$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3250C18

Google_Protobuf_Reflection_MessageDescriptor_o *
ICPMLKOEANF__pb__Google_Protobuf_IMessage_get_Descriptor(ICPMLKOEANF_o *__this,MethodInfo *method)

{
  ICPMLKOEANF_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456712a & 1) == 0) {
    FUN_01bab630(&ICPMLKOEANF_TypeInfo);
    DAT_0456712a = 1;
    method = extraout_x1;
  }
  method_00 = ICPMLKOEANF_TypeInfo;
  if ((ICPMLKOEANF_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (ICPMLKOEANF_c *)thunk_FUN_01ba7564(ICPMLKOEANF_TypeInfo,method);
  }
  pGVar1 = ICPMLKOEANF__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

