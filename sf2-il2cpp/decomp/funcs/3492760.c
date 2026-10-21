// ALOGBMGGBEP$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3492760

Google_Protobuf_Reflection_MessageDescriptor_o *
ALOGBMGGBEP__pb__Google_Protobuf_IMessage_get_Descriptor(ALOGBMGGBEP_o *__this,MethodInfo *method)

{
  ALOGBMGGBEP_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456842b & 1) == 0) {
    FUN_01bab630(&ALOGBMGGBEP_TypeInfo);
    DAT_0456842b = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03592798 to 0369279f has its CatchHandler @ 035927e4 */
  method_00 = ALOGBMGGBEP_TypeInfo;
  if ((ALOGBMGGBEP_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (ALOGBMGGBEP_c *)thunk_FUN_01ba7564(ALOGBMGGBEP_TypeInfo,method);
  }
  pGVar1 = ALOGBMGGBEP__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

