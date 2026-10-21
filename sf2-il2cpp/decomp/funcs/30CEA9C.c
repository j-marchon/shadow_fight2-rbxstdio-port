// JHMFOIIPEHB$$ToString @ RVA 0x30CEA9C

System_String_o * JHMFOIIPEHB__ToString(JHMFOIIPEHB_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045662ea & 1) == 0) {
                    /* try { // try from 031ceabc to 032ceacb has its CatchHandler @ 031ceacc */
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
                    /* catch() { ... } // from try @ 031ce9b4 with catch @ 031ceacc
                       catch() { ... } // from try @ 031ceabc with catch @ 031ceacc */
    DAT_045662ea = 1;
    method = extraout_x1;
  }
                    /* try { // try from 031cead0 to 032cead3 has its CatchHandler @ 031ceadc */
                    /* try { // try from 031cead4 to 032ceadf has its CatchHandler @ 031cde74 */
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031cead0 with catch @ 031ceadc
                        */
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
                    /* try { // try from 031ceae0 to 032cebcf has its CatchHandler @ 031ceae0
                       catch() { ... } // from try @ 031ceae0 with catch @ 031ceae0
                       catch() { ... } // from try @ 031cec08 with catch @ 031ceae0
                       catch() { ... } // from try @ 031cec90 with catch @ 031ceae0
                       catch() { ... } // from try @ 031cec9c with catch @ 031ceae0
                       catch() { ... } // from try @ 031ced34 with catch @ 031ceae0 */
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}

