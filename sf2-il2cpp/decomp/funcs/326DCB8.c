// LMEMJBOBHBE$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x326DCB8

Google_Protobuf_Reflection_MessageDescriptor_o *
LMEMJBOBHBE__pb__Google_Protobuf_IMessage_get_Descriptor(LMEMJBOBHBE_o *__this,MethodInfo *method)

{
  LMEMJBOBHBE_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0336dcbc to 0346dcc3 has its CatchHandler @ 0336dddc */
                    /* try { // try from 0336dcc4 to 0346dcc7 has its CatchHandler @ 0336ddcc */
  if ((DAT_045671fd & 1) == 0) {
    FUN_01bab630(&LMEMJBOBHBE_TypeInfo);
                    /* try { // try from 0336dce0 to 0346dd33 has its CatchHandler @ 0336de9c */
    DAT_045671fd = 1;
    method = extraout_x1;
  }
  method_00 = LMEMJBOBHBE_TypeInfo;
  if ((LMEMJBOBHBE_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LMEMJBOBHBE_c *)thunk_FUN_01ba7564(LMEMJBOBHBE_TypeInfo,method);
  }
  pGVar1 = LMEMJBOBHBE__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

