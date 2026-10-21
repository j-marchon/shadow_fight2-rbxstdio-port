// KEGDLHPEJBG$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x35A96B0

Google_Protobuf_Reflection_MessageDescriptor_o *
KEGDLHPEJBG__pb__Google_Protobuf_IMessage_get_Descriptor(KEGDLHPEJBG_o *__this,MethodInfo *method)

{
  KEGDLHPEJBG_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568e37 & 1) == 0) {
    FUN_01bab630(&KEGDLHPEJBG_TypeInfo);
    DAT_04568e37 = 1;
    method = extraout_x1;
  }
  method_00 = KEGDLHPEJBG_TypeInfo;
  if ((KEGDLHPEJBG_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 036a96ec to 037a96f3 has its CatchHandler @ 036a9bcc */
    method_00 = (KEGDLHPEJBG_c *)thunk_FUN_01ba7564(KEGDLHPEJBG_TypeInfo,method);
  }
  pGVar1 = KEGDLHPEJBG__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

