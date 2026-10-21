// BJEFHIBMHEJ$$.cctor @ RVA 0x310B838

void BJEFHIBMHEJ___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_BJEFHIBMHEJ__o *__this;
  
  if ((DAT_04566542 & 1) == 0) {
    FUN_01bab630(&BJEFHIBMHEJ_TypeInfo);
    FUN_01bab630(&System_Func<BJEFHIBMHEJ>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<BJEFHIBMHEJ>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<BJEFHIBMHEJ>_TypeInfo);
    FUN_01bab630(&Method_BJEFHIBMHEJ_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&BJEFHIBMHEJ_<>c_TypeInfo);
    DAT_04566542 = 1;
  }
  if ((BJEFHIBMHEJ_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<BJEFHIBMHEJ>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_BJEFHIBMHEJ__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<BJEFHIBMHEJ>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<BJEFHIBMHEJ>__ctor__);
  BJEFHIBMHEJ_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(BJEFHIBMHEJ_TypeInfo->static_fields,__this);
  return;
}

