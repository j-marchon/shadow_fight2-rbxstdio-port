// FAACNCKMEJM$$.cctor @ RVA 0x31BC208

void FAACNCKMEJM___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_FAACNCKMEJM__o *__this;
  
  if ((DAT_04566bed & 1) == 0) {
    FUN_01bab630(&FAACNCKMEJM_TypeInfo);
    FUN_01bab630(&System_Func<FAACNCKMEJM>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<FAACNCKMEJM>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<FAACNCKMEJM>_TypeInfo);
    FUN_01bab630(&Method_FAACNCKMEJM_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&FAACNCKMEJM_<>c_TypeInfo);
    DAT_04566bed = 1;
  }
  if ((FAACNCKMEJM_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<FAACNCKMEJM>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_FAACNCKMEJM__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<FAACNCKMEJM>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<FAACNCKMEJM>__ctor__);
  FAACNCKMEJM_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(FAACNCKMEJM_TypeInfo->static_fields,__this);
  return;
}

