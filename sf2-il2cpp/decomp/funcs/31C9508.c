// DBNIPENAEKO$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x31C9508

Google_Protobuf_Reflection_MessageDescriptor_o *
DBNIPENAEKO__pb__Google_Protobuf_IMessage_get_Descriptor(DBNIPENAEKO_o *__this,MethodInfo *method)

{
  DBNIPENAEKO_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 032c9508 to 033c9707 has its CatchHandler @ 032c9508
                       catch() { ... } // from try @ 032c9508 with catch @ 032c9508
                       catch() { ... } // from try @ 032c9778 with catch @ 032c9508
                       catch() { ... } // from try @ 032c97d8 with catch @ 032c9508
                       catch() { ... } // from try @ 032c9810 with catch @ 032c9508
                       catch() { ... } // from try @ 032c9840 with catch @ 032c9508 */
  if ((DAT_04566c4e & 1) == 0) {
    FUN_01bab630(&DBNIPENAEKO_TypeInfo);
    DAT_04566c4e = 1;
    method = extraout_x1;
  }
  method_00 = DBNIPENAEKO_TypeInfo;
  if ((DBNIPENAEKO_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (DBNIPENAEKO_c *)thunk_FUN_01ba7564(DBNIPENAEKO_TypeInfo,method);
  }
  pGVar1 = DBNIPENAEKO__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

