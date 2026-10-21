// OJKCDJCBOBL$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x35C28F0

Google_Protobuf_Reflection_MessageDescriptor_o *
OJKCDJCBOBL__pb__Google_Protobuf_IMessage_get_Descriptor(OJKCDJCBOBL_o *__this,MethodInfo *method)

{
  OJKCDJCBOBL_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 036c28f0 to 037c28fb has its CatchHandler @ 036c26a4 */
                    /* try { // try from 036c28fc to 037c2903 has its CatchHandler @ 036c2904 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036c28e8 with catch @ 036c2904
                       catch(type#2 @ 00000000) { ... } // from try @ 036c28fc with catch @ 036c2904
                        */
  if ((DAT_04568f44 & 1) == 0) {
    FUN_01bab630(&OJKCDJCBOBL_TypeInfo);
    DAT_04568f44 = 1;
    method = extraout_x1;
  }
  method_00 = OJKCDJCBOBL_TypeInfo;
  if ((OJKCDJCBOBL_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (OJKCDJCBOBL_c *)thunk_FUN_01ba7564(OJKCDJCBOBL_TypeInfo,method);
  }
  pGVar1 = OJKCDJCBOBL__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

