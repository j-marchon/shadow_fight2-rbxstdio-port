// MGDJPGGPDJI$$.cctor @ RVA 0x34A4334

void MGDJPGGPDJI___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_MGDJPGGPDJI__o *__this;
  
  if ((DAT_045684d9 & 1) == 0) {
    FUN_01bab630(&System_Func<MGDJPGGPDJI>_TypeInfo);
    FUN_01bab630(&MGDJPGGPDJI_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<MGDJPGGPDJI>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<MGDJPGGPDJI>_TypeInfo);
    FUN_01bab630(&Method_MGDJPGGPDJI_<>c_LNJPIHAONCC__);
    FUN_01bab630(&MGDJPGGPDJI_<>c_TypeInfo);
    DAT_045684d9 = 1;
  }
  if ((MGDJPGGPDJI_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<MGDJPGGPDJI>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_MGDJPGGPDJI__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<MGDJPGGPDJI>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<MGDJPGGPDJI>__ctor__);
  MGDJPGGPDJI_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(MGDJPGGPDJI_TypeInfo->static_fields,__this);
  return;
}

