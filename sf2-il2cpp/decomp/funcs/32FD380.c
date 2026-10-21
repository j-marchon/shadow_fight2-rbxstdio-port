// PGICCMFLDPI$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x32FD380

Google_Protobuf_Reflection_MessageDescriptor_o *
PGICCMFLDPI__pb__Google_Protobuf_IMessage_get_Descriptor(PGICCMFLDPI_o *__this,MethodInfo *method)

{
  PGICCMFLDPI_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 033fd364 with catch @ 033fd390 */
  if ((DAT_045676f8 & 1) == 0) {
                    /* try { // try from 033fd3a0 to 034fd3a7 has its CatchHandler @ 033fd3bc */
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
                    /* try { // try from 033fd3a8 to 034fd3b3 has its CatchHandler @ 033fd08c */
    DAT_045676f8 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 033fd3b4 to 034fd3bb has its CatchHandler @ 033fd3bc */
  method_00 = PGICCMFLDPI_TypeInfo;
  if ((PGICCMFLDPI_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033fd3a0 with catch @ 033fd3bc
                       catch(type#2 @ 00000000) { ... } // from try @ 033fd3b4 with catch @ 033fd3bc
                        */
    method_00 = (PGICCMFLDPI_c *)thunk_FUN_01ba7564(PGICCMFLDPI_TypeInfo,method);
  }
                    /* try { // try from 033fd3c0 to 034fd6a7 has its CatchHandler @ 033fd3c0
                       catch() { ... } // from try @ 033fd3c0 with catch @ 033fd3c0
                       catch() { ... } // from try @ 033fd854 with catch @ 033fd3c0
                       catch() { ... } // from try @ 033fd938 with catch @ 033fd3c0
                       catch() { ... } // from try @ 033fd940 with catch @ 033fd3c0
                       catch() { ... } // from try @ 033fda20 with catch @ 033fd3c0 */
  pGVar1 = PGICCMFLDPI__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

