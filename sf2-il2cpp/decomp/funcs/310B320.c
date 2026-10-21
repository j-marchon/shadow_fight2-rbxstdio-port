// BJEFHIBMHEJ$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x310B320

Google_Protobuf_Reflection_MessageDescriptor_o *
BJEFHIBMHEJ__pb__Google_Protobuf_IMessage_get_Descriptor(BJEFHIBMHEJ_o *__this,MethodInfo *method)

{
  BJEFHIBMHEJ_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0320b334 to 0330b33f has its CatchHandler @ 0320b390 */
  if ((DAT_0456653d & 1) == 0) {
                    /* try { // try from 0320b340 to 0330b34f has its CatchHandler @ 0320b38c */
    FUN_01bab630(&BJEFHIBMHEJ_TypeInfo);
    DAT_0456653d = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0320b350 to 0330b377 has its CatchHandler @ 0320b240 */
  method_00 = BJEFHIBMHEJ_TypeInfo;
  if ((BJEFHIBMHEJ_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (BJEFHIBMHEJ_c *)thunk_FUN_01ba7564(BJEFHIBMHEJ_TypeInfo,method);
  }
  pGVar1 = BJEFHIBMHEJ__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

