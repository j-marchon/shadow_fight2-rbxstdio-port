// KJNCNBJIJPC$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x331AEA8

Google_Protobuf_Reflection_MessageDescriptor_o *
KJNCNBJIJPC__pb__Google_Protobuf_IMessage_get_Descriptor(KJNCNBJIJPC_o *__this,MethodInfo *method)

{
  KJNCNBJIJPC_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0341aeb8 to 0351aebb has its CatchHandler @ 0341aee4 */
                    /* try { // try from 0341aebc to 0351aef3 has its CatchHandler @ 0341ad20 */
  if ((DAT_0456780c & 1) == 0) {
    FUN_01bab630(&KJNCNBJIJPC_TypeInfo);
    DAT_0456780c = 1;
    method = extraout_x1;
  }
  method_00 = KJNCNBJIJPC_TypeInfo;
  if ((KJNCNBJIJPC_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0341aeb8 with catch @ 0341aee4 */
    method_00 = (KJNCNBJIJPC_c *)thunk_FUN_01ba7564(KJNCNBJIJPC_TypeInfo,method);
  }
  pGVar1 = KJNCNBJIJPC__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

