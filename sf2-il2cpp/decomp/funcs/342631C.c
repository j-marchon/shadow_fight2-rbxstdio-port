// FIMAAAOEIGM$$.cctor @ RVA 0x342631C

void FIMAAAOEIGM___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_FIMAAAOEIGM__o *__this;
  
  if ((DAT_04568111 & 1) == 0) {
    FUN_01bab630(&FIMAAAOEIGM_TypeInfo);
    FUN_01bab630(&System_Func<FIMAAAOEIGM>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<FIMAAAOEIGM>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<FIMAAAOEIGM>_TypeInfo);
    FUN_01bab630(&Method_FIMAAAOEIGM_<>c_LNJPIHAONCC__);
    FUN_01bab630(&FIMAAAOEIGM_<>c_TypeInfo);
    DAT_04568111 = 1;
  }
  if ((FIMAAAOEIGM_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<FIMAAAOEIGM>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_FIMAAAOEIGM__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<FIMAAAOEIGM>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<FIMAAAOEIGM>__ctor__);
  FIMAAAOEIGM_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(FIMAAAOEIGM_TypeInfo->static_fields,__this);
  return;
}

