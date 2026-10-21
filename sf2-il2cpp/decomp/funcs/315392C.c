// HBLHCCMEEEC$$.cctor @ RVA 0x315392C

void HBLHCCMEEEC___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_HBLHCCMEEEC__o *__this;
  
  if ((DAT_0456681b & 1) == 0) {
    FUN_01bab630(&System_Func<HBLHCCMEEEC>_TypeInfo);
    FUN_01bab630(&HBLHCCMEEEC_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<HBLHCCMEEEC>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<HBLHCCMEEEC>_TypeInfo);
    FUN_01bab630(&Method_HBLHCCMEEEC_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&HBLHCCMEEEC_<>c_TypeInfo);
    DAT_0456681b = 1;
  }
  if ((HBLHCCMEEEC_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<HBLHCCMEEEC>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_HBLHCCMEEEC__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<HBLHCCMEEEC>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<HBLHCCMEEEC>__ctor__);
  HBLHCCMEEEC_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(HBLHCCMEEEC_TypeInfo->static_fields,__this);
  return;
}

