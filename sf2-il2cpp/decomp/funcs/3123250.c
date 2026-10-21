// KMDOLFBIGNC$$.cctor @ RVA 0x3123250

void KMDOLFBIGNC___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_KMDOLFBIGNC__o *__this;
  
  if ((DAT_0456663b & 1) == 0) {
    FUN_01bab630(&System_Func<KMDOLFBIGNC>_TypeInfo);
    FUN_01bab630(&KMDOLFBIGNC_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<KMDOLFBIGNC>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<KMDOLFBIGNC>_TypeInfo);
    FUN_01bab630(&Method_KMDOLFBIGNC_<>c_OEFEKGDDHPN__);
    FUN_01bab630(&KMDOLFBIGNC_<>c_TypeInfo);
    DAT_0456663b = 1;
  }
  if ((KMDOLFBIGNC_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<KMDOLFBIGNC>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_KMDOLFBIGNC__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<KMDOLFBIGNC>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<KMDOLFBIGNC>__ctor__);
  KMDOLFBIGNC_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(KMDOLFBIGNC_TypeInfo->static_fields,__this);
  return;
}

