// ICPMLKOEANF$$.cctor @ RVA 0x32508FC

void ICPMLKOEANF___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_ICPMLKOEANF__o *__this;
  
  if ((DAT_04567127 & 1) == 0) {
    FUN_01bab630(&System_Func<ICPMLKOEANF>_TypeInfo);
    FUN_01bab630(&ICPMLKOEANF_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<ICPMLKOEANF>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<ICPMLKOEANF>_TypeInfo);
    FUN_01bab630(&Method_ICPMLKOEANF_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&ICPMLKOEANF_<>c_TypeInfo);
    DAT_04567127 = 1;
  }
  if ((ICPMLKOEANF_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<ICPMLKOEANF>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_ICPMLKOEANF__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<ICPMLKOEANF>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<ICPMLKOEANF>__ctor__);
  ICPMLKOEANF_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(ICPMLKOEANF_TypeInfo->static_fields,__this);
  return;
}

