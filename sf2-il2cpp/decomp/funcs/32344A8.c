// DLOALGNBPNL$$ToString @ RVA 0x32344A8

System_String_o * DLOALGNBPNL__ToString(DLOALGNBPNL_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 03334478 with catch @ 033344a8 */
                    /* catch() { ... } // from try @ 0333438c with catch @ 033344ac */
                    /* catch() { ... } // from try @ 03334398 with catch @ 033344b0 */
                    /* catch() { ... } // from try @ 03334324 with catch @ 033344b4 */
                    /* catch() { ... } // from try @ 033342c8 with catch @ 033344b8 */
                    /* catch() { ... } // from try @ 03334470 with catch @ 033344bc */
  if ((DAT_0456700b & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
                    /* try { // try from 033344d4 to 034344d7 has its CatchHandler @ 033344e4 */
    DAT_0456700b = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 033344d4 with catch @ 033344e4 */
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
                    /* try { // try from 033344ec to 03434553 has its CatchHandler @ 03334568 */
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}

