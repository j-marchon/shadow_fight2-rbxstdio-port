// OMFJHNMDIBF$$ToString @ RVA 0x343F4FC

System_String_o * OMFJHNMDIBF__ToString(OMFJHNMDIBF_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 0353f4cc with catch @ 0353f4fc
                       catch() { ... } // from try @ 0353f4e4 with catch @ 0353f4fc */
                    /* catch() { ... } // from try @ 0353f4d4 with catch @ 0353f500 */
                    /* catch() { ... } // from try @ 0353f3d0 with catch @ 0353f504 */
                    /* catch() { ... } // from try @ 0353f334 with catch @ 0353f508 */
                    /* catch() { ... } // from try @ 0353f404 with catch @ 0353f50c */
                    /* catch() { ... } // from try @ 0353f368 with catch @ 0353f510
                       catch() { ... } // from try @ 0353f48c with catch @ 0353f510 */
                    /* catch() { ... } // from try @ 0353f2f8 with catch @ 0353f514 */
  if ((DAT_0456820a & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
                    /* try { // try from 0353f52c to 0363f52f has its CatchHandler @ 0353f5b8 */
    DAT_0456820a = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0353f530 to 0363f583 has its CatchHandler @ 0353f0b0 */
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}

