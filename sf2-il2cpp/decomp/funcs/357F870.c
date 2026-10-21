// EOLFEKNCPLM$$.ctor @ RVA 0x357F870

void EOLFEKNCPLM___ctor(EOLFEKNCPLM_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_04568cbd & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_ByteString_TypeInfo);
    DAT_04568cbd = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_ByteString_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_ByteString_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04561f53 == '\0') {
    FUN_01bab630(&Google_Protobuf_ByteString_TypeInfo);
    DAT_04561f53 = '\x01';
    method = extraout_x1_01;
  }
  if ((Google_Protobuf_ByteString_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_ByteString_TypeInfo,method);
  }
  (__this->fields).OACFBJNMHCM = Google_Protobuf_ByteString_TypeInfo->static_fields->empty;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

