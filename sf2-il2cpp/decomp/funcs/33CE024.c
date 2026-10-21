// FADHMEJJCPO$$.cctor @ RVA 0x33CE024

void FADHMEJJCPO___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_FADHMEJJCPO__o *__this;
  
  if ((DAT_04567e3c & 1) == 0) {
    FUN_01bab630(&FADHMEJJCPO_TypeInfo);
    FUN_01bab630(&System_Func<FADHMEJJCPO>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<FADHMEJJCPO>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<FADHMEJJCPO>_TypeInfo);
    FUN_01bab630(&Method_FADHMEJJCPO_<>c_PICNPKNBICJ__);
    FUN_01bab630(&FADHMEJJCPO_<>c_TypeInfo);
    DAT_04567e3c = 1;
  }
  if ((FADHMEJJCPO_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<FADHMEJJCPO>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_FADHMEJJCPO__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<FADHMEJJCPO>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<FADHMEJJCPO>__ctor__);
  FADHMEJJCPO_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(FADHMEJJCPO_TypeInfo->static_fields,__this);
  return;
}

