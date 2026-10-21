// HCFOFHGNBKP$$.cctor @ RVA 0x314B8F4

void HCFOFHGNBKP___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_HCFOFHGNBKP__o *__this;
  
  if ((DAT_045667c1 & 1) == 0) {
    FUN_01bab630(&System_Func<HCFOFHGNBKP>_TypeInfo);
    FUN_01bab630(&HCFOFHGNBKP_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<HCFOFHGNBKP>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<HCFOFHGNBKP>_TypeInfo);
    FUN_01bab630(&Method_HCFOFHGNBKP_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&HCFOFHGNBKP_<>c_TypeInfo);
    DAT_045667c1 = 1;
  }
  if ((HCFOFHGNBKP_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<HCFOFHGNBKP>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_HCFOFHGNBKP__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<HCFOFHGNBKP>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<HCFOFHGNBKP>__ctor__);
  HCFOFHGNBKP_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(HCFOFHGNBKP_TypeInfo->static_fields,__this);
  return;
}

