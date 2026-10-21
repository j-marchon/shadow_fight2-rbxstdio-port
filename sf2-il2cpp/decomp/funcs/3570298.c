// NLDPAHFABGL$$ToString @ RVA 0x3570298

System_String_o * NLDPAHFABGL__ToString(NLDPAHFABGL_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 036702ac to 037702b3 has its CatchHandler @ 03672ff4 */
                    /* try { // try from 036702b4 to 037702c7 has its CatchHandler @ 03672ff0 */
  if ((DAT_04568c5d & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04568c5d = 1;
    method = extraout_x1;
  }
                    /* try { // try from 036702d4 to 037702d7 has its CatchHandler @ 03672fec */
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
                    /* try { // try from 036702e8 to 037702ef has its CatchHandler @ 03673250 */
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}

