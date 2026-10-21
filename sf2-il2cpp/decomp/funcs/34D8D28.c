// OJHLANCHFPC$$.cctor @ RVA 0x34D8D28

void OJHLANCHFPC___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_OJHLANCHFPC__o *__this;
  
  if ((DAT_045686f4 & 1) == 0) {
    FUN_01bab630(&System_Func<OJHLANCHFPC>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<OJHLANCHFPC>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<OJHLANCHFPC>_TypeInfo);
    FUN_01bab630(&OJHLANCHFPC_TypeInfo);
    FUN_01bab630(&Method_OJHLANCHFPC_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&OJHLANCHFPC_<>c_TypeInfo);
    DAT_045686f4 = 1;
  }
  if ((OJHLANCHFPC_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<OJHLANCHFPC>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_OJHLANCHFPC__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<OJHLANCHFPC>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<OJHLANCHFPC>__ctor__);
  OJHLANCHFPC_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(OJHLANCHFPC_TypeInfo->static_fields,__this);
  return;
}

