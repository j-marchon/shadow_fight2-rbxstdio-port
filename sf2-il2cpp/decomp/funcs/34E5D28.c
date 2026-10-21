// NGOFOPOGBMJ$$ToString @ RVA 0x34E5D28

System_String_o * NGOFOPOGBMJ__ToString(NGOFOPOGBMJ_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 035e5cfc with catch @ 035e5d28 */
                    /* try { // try from 035e5d38 to 036e5d3f has its CatchHandler @ 035e5d54 */
                    /* try { // try from 035e5d40 to 036e5d4b has its CatchHandler @ 035e5998 */
  if ((DAT_04568764 & 1) == 0) {
                    /* try { // try from 035e5d4c to 036e5d53 has its CatchHandler @ 035e5d54 */
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
                    /* catch() { ... } // from try @ 035e5d38 with catch @ 035e5d54
                       catch() { ... } // from try @ 035e5d4c with catch @ 035e5d54 */
    DAT_04568764 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}

