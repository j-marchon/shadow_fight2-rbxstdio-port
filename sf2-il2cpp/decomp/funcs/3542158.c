// LKJJCAEOJBG$$.cctor @ RVA 0x3542158

void LKJJCAEOJBG___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_LKJJCAEOJBG__o *__this;
  
  if ((DAT_04568aff & 1) == 0) {
    FUN_01bab630(&System_Func<LKJJCAEOJBG>_TypeInfo);
    FUN_01bab630(&LKJJCAEOJBG_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<LKJJCAEOJBG>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<LKJJCAEOJBG>_TypeInfo);
    FUN_01bab630(&Method_LKJJCAEOJBG_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&LKJJCAEOJBG_<>c_TypeInfo);
    DAT_04568aff = 1;
  }
  if ((LKJJCAEOJBG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<LKJJCAEOJBG>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_LKJJCAEOJBG__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<LKJJCAEOJBG>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<LKJJCAEOJBG>__ctor__);
  LKJJCAEOJBG_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(LKJJCAEOJBG_TypeInfo->static_fields,__this);
  return;
}

