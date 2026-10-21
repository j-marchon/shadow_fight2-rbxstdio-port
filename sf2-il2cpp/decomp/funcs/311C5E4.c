// HDDKPFAHBBN$$.cctor @ RVA 0x311C5E4

void HDDKPFAHBBN___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_HDDKPFAHBBN__o *__this;
  
  if ((DAT_045665f5 & 1) == 0) {
    FUN_01bab630(&System_Func<HDDKPFAHBBN>_TypeInfo);
    FUN_01bab630(&HDDKPFAHBBN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<HDDKPFAHBBN>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<HDDKPFAHBBN>_TypeInfo);
    FUN_01bab630(&Method_HDDKPFAHBBN_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&HDDKPFAHBBN_<>c_TypeInfo);
    DAT_045665f5 = 1;
  }
  if ((HDDKPFAHBBN_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<HDDKPFAHBBN>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_HDDKPFAHBBN__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<HDDKPFAHBBN>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<HDDKPFAHBBN>__ctor__);
  HDDKPFAHBBN_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(HDDKPFAHBBN_TypeInfo->static_fields,__this);
  return;
}

