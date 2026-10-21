// OKKPDLAJBFD$$.cctor @ RVA 0x3022214

void OKKPDLAJBFD___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_OKKPDLAJBFD__o *__this;
  
  if ((DAT_04565c5a & 1) == 0) {
    FUN_01bab630(&System_Func<OKKPDLAJBFD>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<OKKPDLAJBFD>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<OKKPDLAJBFD>_TypeInfo);
    FUN_01bab630(&OKKPDLAJBFD_TypeInfo);
    FUN_01bab630(&Method_OKKPDLAJBFD_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&OKKPDLAJBFD_<>c_TypeInfo);
    DAT_04565c5a = 1;
  }
  if ((OKKPDLAJBFD_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<OKKPDLAJBFD>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_OKKPDLAJBFD__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<OKKPDLAJBFD>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<OKKPDLAJBFD>__ctor__);
  OKKPDLAJBFD_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(OKKPDLAJBFD_TypeInfo->static_fields,__this);
  return;
}

