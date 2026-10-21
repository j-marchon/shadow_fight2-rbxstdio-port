// OJFPEINHCDP$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3293154

Google_Protobuf_Reflection_MessageDescriptor_o *
OJFPEINHCDP__pb__Google_Protobuf_IMessage_get_Descriptor(OJFPEINHCDP_o *__this,MethodInfo *method)

{
  OJFPEINHCDP_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03393168 to 0349316b has its CatchHandler @ 03393180 */
                    /* try { // try from 0339316c to 03493177 has its CatchHandler @ 0339318c */
  if ((DAT_0456733e & 1) == 0) {
                    /* try { // try from 03393178 to 034931a3 has its CatchHandler @ 03392fc0 */
    FUN_01bab630(&OJFPEINHCDP_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393120 with catch @ 0339317c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393168 with catch @ 03393180
                        */
    DAT_0456733e = 1;
    method = extraout_x1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033930d8 with catch @ 03393184
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033930c4 with catch @ 03393188
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0339316c with catch @ 0339318c
                        */
  method_00 = OJFPEINHCDP_TypeInfo;
  if ((OJFPEINHCDP_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (OJFPEINHCDP_c *)thunk_FUN_01ba7564(OJFPEINHCDP_TypeInfo,method);
  }
  pGVar1 = OJFPEINHCDP__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

