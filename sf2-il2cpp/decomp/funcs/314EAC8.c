// KBLFOOJFIIG$$.cctor @ RVA 0x314EAC8

void KBLFOOJFIIG___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_KBLFOOJFIIG__o *__this;
  
  if ((DAT_045667f1 & 1) == 0) {
    FUN_01bab630(&System_Func<KBLFOOJFIIG>_TypeInfo);
    FUN_01bab630(&KBLFOOJFIIG_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<KBLFOOJFIIG>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<KBLFOOJFIIG>_TypeInfo);
    FUN_01bab630(&Method_KBLFOOJFIIG_<>c_ICLFIHGKJJH__);
    FUN_01bab630(&KBLFOOJFIIG_<>c_TypeInfo);
    DAT_045667f1 = 1;
  }
  if ((KBLFOOJFIIG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<KBLFOOJFIIG>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_KBLFOOJFIIG__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<KBLFOOJFIIG>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<KBLFOOJFIIG>__ctor__);
  KBLFOOJFIIG_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(KBLFOOJFIIG_TypeInfo->static_fields,__this);
  return;
}

