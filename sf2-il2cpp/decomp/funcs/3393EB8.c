// KDADMJGPAOM$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3393EB8

Google_Protobuf_Reflection_MessageDescriptor_o *
KDADMJGPAOM__pb__Google_Protobuf_IMessage_get_Descriptor(KDADMJGPAOM_o *__this,MethodInfo *method)

{
  KDADMJGPAOM_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567c3e & 1) == 0) {
    FUN_01bab630(&KDADMJGPAOM_TypeInfo);
    DAT_04567c3e = 1;
    method = extraout_x1;
  }
  method_00 = KDADMJGPAOM_TypeInfo;
  if ((KDADMJGPAOM_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (KDADMJGPAOM_c *)thunk_FUN_01ba7564(KDADMJGPAOM_TypeInfo,method);
  }
  pGVar1 = KDADMJGPAOM__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

