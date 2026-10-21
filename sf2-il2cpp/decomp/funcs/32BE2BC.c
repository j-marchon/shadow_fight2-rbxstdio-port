// PIADCKMDDAK$$.cctor @ RVA 0x32BE2BC

void PIADCKMDDAK___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_PIADCKMDDAK__o *__this;
  
  if ((DAT_045674b4 & 1) == 0) {
    FUN_01bab630(&System_Func<PIADCKMDDAK>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<PIADCKMDDAK>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<PIADCKMDDAK>_TypeInfo);
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    FUN_01bab630(&Method_PIADCKMDDAK_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&PIADCKMDDAK_<>c_TypeInfo);
    DAT_045674b4 = 1;
  }
  if ((PIADCKMDDAK_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<PIADCKMDDAK>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_PIADCKMDDAK__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<PIADCKMDDAK>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<PIADCKMDDAK>__ctor__);
  PIADCKMDDAK_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(PIADCKMDDAK_TypeInfo->static_fields,__this);
  return;
}

