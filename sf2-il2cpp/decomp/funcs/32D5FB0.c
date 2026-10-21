// EAJJPPPJENA$$.cctor @ RVA 0x32D5FB0

void EAJJPPPJENA___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_EAJJPPPJENA__o *__this;
  
  if ((DAT_0456758a & 1) == 0) {
    FUN_01bab630(&EAJJPPPJENA_TypeInfo);
    FUN_01bab630(&System_Func<EAJJPPPJENA>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<EAJJPPPJENA>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<EAJJPPPJENA>_TypeInfo);
    FUN_01bab630(&Method_EAJJPPPJENA_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&EAJJPPPJENA_<>c_TypeInfo);
    DAT_0456758a = 1;
  }
  if ((EAJJPPPJENA_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<EAJJPPPJENA>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_EAJJPPPJENA__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<EAJJPPPJENA>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<EAJJPPPJENA>__ctor__);
  EAJJPPPJENA_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(EAJJPPPJENA_TypeInfo->static_fields,__this);
  return;
}

