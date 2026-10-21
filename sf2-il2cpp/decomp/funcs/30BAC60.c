// DMOPGPMINJD$$.cctor @ RVA 0x30BAC60

void DMOPGPMINJD___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_DMOPGPMINJD__o *__this;
  
  if ((DAT_04566237 & 1) == 0) {
    FUN_01bab630(&DMOPGPMINJD_TypeInfo);
    FUN_01bab630(&System_Func<DMOPGPMINJD>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<DMOPGPMINJD>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<DMOPGPMINJD>_TypeInfo);
    FUN_01bab630(&Method_DMOPGPMINJD_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&DMOPGPMINJD_<>c_TypeInfo);
    DAT_04566237 = 1;
  }
  if ((DMOPGPMINJD_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<DMOPGPMINJD>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_DMOPGPMINJD__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<DMOPGPMINJD>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<DMOPGPMINJD>__ctor__);
  DMOPGPMINJD_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(DMOPGPMINJD_TypeInfo->static_fields,__this);
  return;
}

