// ICBMOMGINFH$$.cctor @ RVA 0x317DE5C

void ICBMOMGINFH___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_ICBMOMGINFH__o *__this;
  
  if ((DAT_0456699c & 1) == 0) {
    FUN_01bab630(&System_Func<ICBMOMGINFH>_TypeInfo);
    FUN_01bab630(&ICBMOMGINFH_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<ICBMOMGINFH>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<ICBMOMGINFH>_TypeInfo);
    FUN_01bab630(&Method_ICBMOMGINFH_<>c_LNJPIHAONCC__);
    FUN_01bab630(&ICBMOMGINFH_<>c_TypeInfo);
    DAT_0456699c = 1;
  }
  if ((ICBMOMGINFH_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<ICBMOMGINFH>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_ICBMOMGINFH__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<ICBMOMGINFH>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<ICBMOMGINFH>__ctor__);
  ICBMOMGINFH_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(ICBMOMGINFH_TypeInfo->static_fields,__this);
  return;
}

