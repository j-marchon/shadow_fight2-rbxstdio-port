// OBCMNBDBNFO$$ToString @ RVA 0x350278C

System_String_o * OBCMNBDBNFO__ToString(OBCMNBDBNFO_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568865 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04568865 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}

