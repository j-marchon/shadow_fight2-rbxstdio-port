// NLFLMJPNOLF$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x32A7B0C

Google_Protobuf_Reflection_MessageDescriptor_o *
NLFLMJPNOLF__pb__Google_Protobuf_IMessage_get_Descriptor(NLFLMJPNOLF_o *__this,MethodInfo *method)

{
  NLFLMJPNOLF_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 033a7a48 with catch @ 033a7b10 */
                    /* catch() { ... } // from try @ 033a79a4 with catch @ 033a7b14 */
                    /* catch() { ... } // from try @ 033a78cc with catch @ 033a7b18 */
                    /* catch() { ... } // from try @ 033a78ac with catch @ 033a7b1c */
  if ((DAT_04567409 & 1) == 0) {
                    /* catch() { ... } // from try @ 033a7864 with catch @ 033a7b28
                       catch() { ... } // from try @ 033a7aa4 with catch @ 033a7b28 */
                    /* try { // try from 033a7b30 to 034a7b33 has its CatchHandler @ 033a7c24 */
    FUN_01bab630(&NLFLMJPNOLF_TypeInfo);
                    /* try { // try from 033a7b34 to 034a7b4b has its CatchHandler @ 033a7424 */
    DAT_04567409 = 1;
    method = extraout_x1;
  }
  method_00 = NLFLMJPNOLF_TypeInfo;
  if ((NLFLMJPNOLF_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (NLFLMJPNOLF_c *)thunk_FUN_01ba7564(NLFLMJPNOLF_TypeInfo,method);
  }
                    /* try { // try from 033a7b4c to 034a7b4f has its CatchHandler @ 033a7c04 */
  pGVar1 = NLFLMJPNOLF__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

