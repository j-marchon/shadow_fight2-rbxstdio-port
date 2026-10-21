// KAMBBJFPLGM$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x311A51C

Google_Protobuf_Reflection_MessageDescriptor_o *
KAMBBJFPLGM__pb__Google_Protobuf_IMessage_get_Descriptor(KAMBBJFPLGM_o *__this,MethodInfo *method)

{
  KAMBBJFPLGM_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0321a52c to 0331a533 has its CatchHandler @ 0321a5a8 */
  if ((DAT_045665df & 1) == 0) {
                    /* try { // try from 0321a540 to 0331a547 has its CatchHandler @ 0321a5a4 */
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
                    /* try { // try from 0321a548 to 0331a597 has its CatchHandler @ 0321a444 */
    DAT_045665df = 1;
    method = extraout_x1;
  }
  method_00 = KAMBBJFPLGM_TypeInfo;
  if ((KAMBBJFPLGM_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (KAMBBJFPLGM_c *)thunk_FUN_01ba7564(KAMBBJFPLGM_TypeInfo,method);
  }
  pGVar1 = KAMBBJFPLGM__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

