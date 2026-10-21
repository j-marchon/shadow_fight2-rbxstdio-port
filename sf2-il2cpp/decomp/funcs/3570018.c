// NLDPAHFABGL$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3570018

Google_Protobuf_Reflection_MessageDescriptor_o *
NLDPAHFABGL__pb__Google_Protobuf_IMessage_get_Descriptor(NLDPAHFABGL_o *__this,MethodInfo *method)

{
  NLDPAHFABGL_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0367001c to 03770023 has its CatchHandler @ 03672c90 */
                    /* try { // try from 03670030 to 03770037 has its CatchHandler @ 03672c8c */
  if ((DAT_04568c5a & 1) == 0) {
    FUN_01bab630(&NLDPAHFABGL_TypeInfo);
    DAT_04568c5a = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03670048 to 0377004f has its CatchHandler @ 03672c88 */
                    /* try { // try from 03670050 to 0377005f has its CatchHandler @ 03672c84 */
  method_00 = NLDPAHFABGL_TypeInfo;
  if ((NLDPAHFABGL_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (NLDPAHFABGL_c *)thunk_FUN_01ba7564(NLDPAHFABGL_TypeInfo,method);
  }
  pGVar1 = NLDPAHFABGL__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

