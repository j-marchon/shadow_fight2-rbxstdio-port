// BFLFFPLIIFM$$.cctor @ RVA 0x3233004

void BFLFFPLIIFM___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_BFLFFPLIIFM__o *__this;
  
  if ((DAT_04566ff1 & 1) == 0) {
    FUN_01bab630(&BFLFFPLIIFM_TypeInfo);
    FUN_01bab630(&System_Func<BFLFFPLIIFM>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<BFLFFPLIIFM>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<BFLFFPLIIFM>_TypeInfo);
    FUN_01bab630(&Method_BFLFFPLIIFM_<>c_ICLFIHGKJJH__);
    FUN_01bab630(&BFLFFPLIIFM_<>c_TypeInfo);
    DAT_04566ff1 = 1;
  }
  if ((BFLFFPLIIFM_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<BFLFFPLIIFM>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_BFLFFPLIIFM__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<BFLFFPLIIFM>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<BFLFFPLIIFM>__ctor__);
  BFLFFPLIIFM_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(BFLFFPLIIFM_TypeInfo->static_fields,__this);
  return;
}

