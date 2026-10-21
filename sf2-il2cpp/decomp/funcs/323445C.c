// DLOALGNBPNL$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x323445C

Google_Protobuf_Reflection_MessageDescriptor_o *
DLOALGNBPNL__pb__Google_Protobuf_IMessage_get_Descriptor(DLOALGNBPNL_o *__this,MethodInfo *method)

{
  DLOALGNBPNL_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03334470 to 03434477 has its CatchHandler @ 033344bc */
  if ((DAT_0456700a & 1) == 0) {
                    /* try { // try from 03334478 to 0343447b has its CatchHandler @ 033344a8 */
                    /* try { // try from 0333447c to 0343447f has its CatchHandler @ 033344a4 */
                    /* try { // try from 03334480 to 03434483 has its CatchHandler @ 03334498 */
    FUN_01bab630(&DLOALGNBPNL_TypeInfo);
                    /* try { // try from 03334484 to 03434487 has its CatchHandler @ 033341fc */
                    /* try { // try from 03334488 to 0343448b has its CatchHandler @ 03334494 */
    DAT_0456700a = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0333448c to 034344d3 has its CatchHandler @ 033341fc */
                    /* catch() { ... } // from try @ 03334488 with catch @ 03334494 */
  method_00 = DLOALGNBPNL_TypeInfo;
  if ((DLOALGNBPNL_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03334480 with catch @ 03334498 */
    method_00 = (DLOALGNBPNL_c *)thunk_FUN_01ba7564(DLOALGNBPNL_TypeInfo,method);
  }
                    /* catch() { ... } // from try @ 033343b4 with catch @ 0333449c */
                    /* catch() { ... } // from try @ 033343c0 with catch @ 033344a0 */
                    /* catch() { ... } // from try @ 0333447c with catch @ 033344a4 */
  pGVar1 = DLOALGNBPNL__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

