// OLHGMELLLFK$$.cctor @ RVA 0x3195048

void OLHGMELLLFK___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_OLHGMELLLFK__o *__this;
  
  if ((DAT_04566a64 & 1) == 0) {
    FUN_01bab630(&System_Func<OLHGMELLLFK>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<OLHGMELLLFK>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<OLHGMELLLFK>_TypeInfo);
    FUN_01bab630(&OLHGMELLLFK_TypeInfo);
    FUN_01bab630(&Method_OLHGMELLLFK_<>c_ICLFIHGKJJH__);
    FUN_01bab630(&OLHGMELLLFK_<>c_TypeInfo);
    DAT_04566a64 = 1;
  }
  if ((OLHGMELLLFK_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<OLHGMELLLFK>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_OLHGMELLLFK__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<OLHGMELLLFK>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<OLHGMELLLFK>__ctor__);
  OLHGMELLLFK_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(OLHGMELLLFK_TypeInfo->static_fields,__this);
  return;
}

