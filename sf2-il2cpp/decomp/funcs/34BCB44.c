// PBGDDCFGPJI$$.cctor @ RVA 0x34BCB44

void PBGDDCFGPJI___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_PBGDDCFGPJI__o *__this;
  
  if ((DAT_045685ee & 1) == 0) {
    FUN_01bab630(&System_Func<PBGDDCFGPJI>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<PBGDDCFGPJI>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<PBGDDCFGPJI>_TypeInfo);
    FUN_01bab630(&PBGDDCFGPJI_TypeInfo);
    FUN_01bab630(&Method_PBGDDCFGPJI_<>c_ICLFIHGKJJH__);
    FUN_01bab630(&PBGDDCFGPJI_<>c_TypeInfo);
    DAT_045685ee = 1;
  }
  if ((PBGDDCFGPJI_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<PBGDDCFGPJI>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_PBGDDCFGPJI__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<PBGDDCFGPJI>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<PBGDDCFGPJI>__ctor__);
  PBGDDCFGPJI_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(PBGDDCFGPJI_TypeInfo->static_fields,__this);
  return;
}

