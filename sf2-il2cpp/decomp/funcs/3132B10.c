// AFLJMCMKCIG$$.cctor @ RVA 0x3132B10

void AFLJMCMKCIG___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_AFLJMCMKCIG__o *__this;
  
  if ((DAT_045666dc & 1) == 0) {
    FUN_01bab630(&AFLJMCMKCIG_TypeInfo);
    FUN_01bab630(&System_Func<AFLJMCMKCIG>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<AFLJMCMKCIG>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<AFLJMCMKCIG>_TypeInfo);
    FUN_01bab630(&Method_AFLJMCMKCIG_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&AFLJMCMKCIG_<>c_TypeInfo);
    DAT_045666dc = 1;
  }
  if ((AFLJMCMKCIG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<AFLJMCMKCIG>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_AFLJMCMKCIG__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<AFLJMCMKCIG>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<AFLJMCMKCIG>__ctor__);
  AFLJMCMKCIG_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(AFLJMCMKCIG_TypeInfo->static_fields,__this);
  return;
}

