// OBCMNBDBNFO$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3502E78

Google_Protobuf_Reflection_MessageDescriptor_o *
OBCMNBDBNFO__pb__Google_Protobuf_IMessage_get_Descriptor(OBCMNBDBNFO_o *__this,MethodInfo *method)

{
  OBCMNBDBNFO_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456886c & 1) == 0) {
    FUN_01bab630(&OBCMNBDBNFO_TypeInfo);
    DAT_0456886c = 1;
    method = extraout_x1;
  }
  method_00 = OBCMNBDBNFO_TypeInfo;
  if ((OBCMNBDBNFO_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (OBCMNBDBNFO_c *)thunk_FUN_01ba7564(OBCMNBDBNFO_TypeInfo,method);
  }
  pGVar1 = OBCMNBDBNFO__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

