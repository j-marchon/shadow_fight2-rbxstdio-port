// AADKBCFCLKK$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3439BA0

Google_Protobuf_Reflection_MessageDescriptor_o *
AADKBCFCLKK__pb__Google_Protobuf_IMessage_get_Descriptor(AADKBCFCLKK_o *__this,MethodInfo *method)

{
  AADKBCFCLKK_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045681bd & 1) == 0) {
    FUN_01bab630(&AADKBCFCLKK_TypeInfo);
    DAT_045681bd = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03539bd8 to 03639be7 has its CatchHandler @ 03539e84 */
  method_00 = AADKBCFCLKK_TypeInfo;
  if ((AADKBCFCLKK_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (AADKBCFCLKK_c *)thunk_FUN_01ba7564(AADKBCFCLKK_TypeInfo,method);
  }
  pGVar1 = AADKBCFCLKK__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

