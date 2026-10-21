// EIBAKHBHMAO$$.cctor @ RVA 0x304F9A8

void EIBAKHBHMAO___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_EIBAKHBHMAO__o *__this;
  
  if ((DAT_04565e40 & 1) == 0) {
    FUN_01bab630(&EIBAKHBHMAO_TypeInfo);
    FUN_01bab630(&System_Func<EIBAKHBHMAO>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<EIBAKHBHMAO>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<EIBAKHBHMAO>_TypeInfo);
    FUN_01bab630(&Method_EIBAKHBHMAO_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&EIBAKHBHMAO_<>c_TypeInfo);
    DAT_04565e40 = 1;
  }
  if ((EIBAKHBHMAO_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<EIBAKHBHMAO>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_EIBAKHBHMAO__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<EIBAKHBHMAO>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<EIBAKHBHMAO>__ctor__);
  EIBAKHBHMAO_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(EIBAKHBHMAO_TypeInfo->static_fields,__this);
  return;
}

