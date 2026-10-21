// HBHFOKIPAHA$$.cctor @ RVA 0x339010C

void HBHFOKIPAHA___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_HBHFOKIPAHA__o *__this;
  
  if ((DAT_04567c1b & 1) == 0) {
    FUN_01bab630(&System_Func<HBHFOKIPAHA>_TypeInfo);
    FUN_01bab630(&HBHFOKIPAHA_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<HBHFOKIPAHA>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<HBHFOKIPAHA>_TypeInfo);
    FUN_01bab630(&Method_HBHFOKIPAHA_<>c_OEFEKGDDHPN__);
    FUN_01bab630(&HBHFOKIPAHA_<>c_TypeInfo);
    DAT_04567c1b = 1;
  }
  if ((HBHFOKIPAHA_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<HBHFOKIPAHA>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_HBHFOKIPAHA__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<HBHFOKIPAHA>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<HBHFOKIPAHA>__ctor__);
  HBHFOKIPAHA_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(HBHFOKIPAHA_TypeInfo->static_fields,__this);
  return;
}

