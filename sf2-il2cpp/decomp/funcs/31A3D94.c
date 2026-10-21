// HGADMOBFBBF$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x31A3D94

Google_Protobuf_Reflection_MessageDescriptor_o *
HGADMOBFBBF__pb__Google_Protobuf_IMessage_get_Descriptor(HGADMOBFBBF_o *__this,MethodInfo *method)

{
  HGADMOBFBBF_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 032a3d80 with catch @ 032a3da4 */
                    /* try { // try from 032a3dac to 033a3db3 has its CatchHandler @ 032a3dc8 */
  if ((DAT_04566af6 & 1) == 0) {
                    /* try { // try from 032a3db4 to 033a3dbf has its CatchHandler @ 032a3aec */
    FUN_01bab630(&HGADMOBFBBF_TypeInfo);
                    /* try { // try from 032a3dc0 to 033a3dc7 has its CatchHandler @ 032a3dc8 */
    DAT_04566af6 = 1;
    method = extraout_x1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032a3dac with catch @ 032a3dc8
                       catch(type#2 @ 00000000) { ... } // from try @ 032a3dc0 with catch @ 032a3dc8
                        */
  method_00 = HGADMOBFBBF_TypeInfo;
  if ((HGADMOBFBBF_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (HGADMOBFBBF_c *)thunk_FUN_01ba7564(HGADMOBFBBF_TypeInfo,method);
  }
  pGVar1 = HGADMOBFBBF__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

