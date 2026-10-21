// LMEMJBOBHBE$$ToString @ RVA 0x326DA88

System_String_o * LMEMJBOBHBE__ToString(LMEMJBOBHBE_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0336da98 to 0346da9f has its CatchHandler @ 0336dbc0 */
  if ((DAT_045671f9 & 1) == 0) {
                    /* try { // try from 0336daac to 0346daaf has its CatchHandler @ 0336dbb8 */
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_045671f9 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0336dac0 to 0346dac7 has its CatchHandler @ 0336ddac */
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
                    /* try { // try from 0336dad4 to 0346dadb has its CatchHandler @ 0336dda8 */
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}

