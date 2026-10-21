// EEHFEPPDBHL$$.cctor @ RVA 0x329C274

void EEHFEPPDBHL___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_EEHFEPPDBHL__o *__this;
  
  if ((DAT_0456739f & 1) == 0) {
    FUN_01bab630(&EEHFEPPDBHL_TypeInfo);
    FUN_01bab630(&System_Func<EEHFEPPDBHL>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<EEHFEPPDBHL>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<EEHFEPPDBHL>_TypeInfo);
    FUN_01bab630(&Method_EEHFEPPDBHL_<>c_LNJPIHAONCC__);
    FUN_01bab630(&EEHFEPPDBHL_<>c_TypeInfo);
    DAT_0456739f = 1;
  }
  if ((EEHFEPPDBHL_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<EEHFEPPDBHL>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_EEHFEPPDBHL__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<EEHFEPPDBHL>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<EEHFEPPDBHL>__ctor__);
  EEHFEPPDBHL_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(EEHFEPPDBHL_TypeInfo->static_fields,__this);
  return;
}

