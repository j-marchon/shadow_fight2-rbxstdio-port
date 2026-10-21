// GGDHPLABCGI$$.cctor @ RVA 0x30720F8

void GGDHPLABCGI___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_GGDHPLABCGI__o *__this;
  
  if ((DAT_04565f81 & 1) == 0) {
    FUN_01bab630(&System_Func<GGDHPLABCGI>_TypeInfo);
    FUN_01bab630(&GGDHPLABCGI_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<GGDHPLABCGI>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<GGDHPLABCGI>_TypeInfo);
    FUN_01bab630(&Method_GGDHPLABCGI_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&GGDHPLABCGI_<>c_TypeInfo);
    DAT_04565f81 = 1;
  }
  if ((GGDHPLABCGI_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<GGDHPLABCGI>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_GGDHPLABCGI__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<GGDHPLABCGI>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<GGDHPLABCGI>__ctor__);
  GGDHPLABCGI_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(GGDHPLABCGI_TypeInfo->static_fields,__this);
  return;
}

