// EOLFEKNCPLM$$.cctor @ RVA 0x357FDB0

void EOLFEKNCPLM___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_EOLFEKNCPLM__o *__this;
  
  if ((DAT_04568cc1 & 1) == 0) {
    FUN_01bab630(&EOLFEKNCPLM_TypeInfo);
    FUN_01bab630(&System_Func<EOLFEKNCPLM>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<EOLFEKNCPLM>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<EOLFEKNCPLM>_TypeInfo);
    FUN_01bab630(&Method_EOLFEKNCPLM_<>c_AEOCKHPMHLJ__);
    FUN_01bab630(&EOLFEKNCPLM_<>c_TypeInfo);
    DAT_04568cc1 = 1;
  }
  if ((EOLFEKNCPLM_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<EOLFEKNCPLM>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_EOLFEKNCPLM__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<EOLFEKNCPLM>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<EOLFEKNCPLM>__ctor__);
  EOLFEKNCPLM_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(EOLFEKNCPLM_TypeInfo->static_fields,__this);
  return;
}

