// KMAOIKKMFJF$$.cctor @ RVA 0x3032D18

void KMAOIKKMFJF___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_KMAOIKKMFJF__o *__this;
  
  if ((DAT_04565d14 & 1) == 0) {
    FUN_01bab630(&System_Func<KMAOIKKMFJF>_TypeInfo);
    FUN_01bab630(&KMAOIKKMFJF_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<KMAOIKKMFJF>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<KMAOIKKMFJF>_TypeInfo);
    FUN_01bab630(&Method_KMAOIKKMFJF_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&KMAOIKKMFJF_<>c_TypeInfo);
    DAT_04565d14 = 1;
  }
  if ((KMAOIKKMFJF_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<KMAOIKKMFJF>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_KMAOIKKMFJF__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<KMAOIKKMFJF>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<KMAOIKKMFJF>__ctor__);
  KMAOIKKMFJF_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(KMAOIKKMFJF_TypeInfo->static_fields,__this);
  return;
}

