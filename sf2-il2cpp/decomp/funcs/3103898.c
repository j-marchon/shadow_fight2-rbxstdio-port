// CBPENMDOJDB$$.cctor @ RVA 0x3103898

void CBPENMDOJDB___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_CBPENMDOJDB__o *__this;
  
  if ((DAT_045664db & 1) == 0) {
    FUN_01bab630(&CBPENMDOJDB_TypeInfo);
    FUN_01bab630(&System_Func<CBPENMDOJDB>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<CBPENMDOJDB>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<CBPENMDOJDB>_TypeInfo);
    FUN_01bab630(&Method_CBPENMDOJDB_<>c_AEOCKHPMHLJ__);
    FUN_01bab630(&CBPENMDOJDB_<>c_TypeInfo);
    DAT_045664db = 1;
  }
  if ((CBPENMDOJDB_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<CBPENMDOJDB>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_CBPENMDOJDB__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<CBPENMDOJDB>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<CBPENMDOJDB>__ctor__);
  CBPENMDOJDB_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(CBPENMDOJDB_TypeInfo->static_fields,__this);
  return;
}

