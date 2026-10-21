// NODLJPNGNBG$$.cctor @ RVA 0x3091104

void NODLJPNGNBG___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_NODLJPNGNBG__o *__this;
  
  if ((DAT_045660a1 & 1) == 0) {
    FUN_01bab630(&System_Func<NODLJPNGNBG>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<NODLJPNGNBG>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<NODLJPNGNBG>_TypeInfo);
    FUN_01bab630(&NODLJPNGNBG_TypeInfo);
    FUN_01bab630(&Method_NODLJPNGNBG_<>c_DMLACMHIPML__);
    FUN_01bab630(&NODLJPNGNBG_<>c_TypeInfo);
    DAT_045660a1 = 1;
  }
  if ((NODLJPNGNBG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<NODLJPNGNBG>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_NODLJPNGNBG__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<NODLJPNGNBG>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<NODLJPNGNBG>__ctor__);
  NODLJPNGNBG_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(NODLJPNGNBG_TypeInfo->static_fields,__this);
  return;
}

