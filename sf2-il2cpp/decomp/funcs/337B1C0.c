// NIGMCJIMBHO$$ToString @ RVA 0x337B1C0

System_String_o * NIGMCJIMBHO__ToString(NIGMCJIMBHO_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567b89 & 1) == 0) {
                    /* try { // try from 0347b1e4 to 0357b20f has its CatchHandler @ 0347b784 */
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04567b89 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}

