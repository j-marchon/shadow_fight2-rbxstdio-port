// FMIEFKAKOMG$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3280634

Google_Protobuf_Reflection_MessageDescriptor_o *
FMIEFKAKOMG__pb__Google_Protobuf_IMessage_get_Descriptor(FMIEFKAKOMG_o *__this,MethodInfo *method)

{
  FMIEFKAKOMG_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456728a & 1) == 0) {
    FUN_01bab630(&FMIEFKAKOMG_TypeInfo);
                    /* try { // try from 03380660 to 03480667 has its CatchHandler @ 033806c0 */
    DAT_0456728a = 1;
    method = extraout_x1;
  }
  method_00 = FMIEFKAKOMG_TypeInfo;
  if ((FMIEFKAKOMG_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (FMIEFKAKOMG_c *)thunk_FUN_01ba7564(FMIEFKAKOMG_TypeInfo,method);
  }
                    /* try { // try from 03380674 to 0348067b has its CatchHandler @ 033806b4 */
                    /* try { // try from 0338067c to 034806a3 has its CatchHandler @ 033804bc */
  pGVar1 = FMIEFKAKOMG__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

