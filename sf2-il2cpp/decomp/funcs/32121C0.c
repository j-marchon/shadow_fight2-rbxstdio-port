// CDAAECGFKON$$.cctor @ RVA 0x32121C0

void CDAAECGFKON___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_CDAAECGFKON__o *__this;
  
  if ((DAT_04566e9d & 1) == 0) {
    FUN_01bab630(&CDAAECGFKON_TypeInfo);
    FUN_01bab630(&System_Func<CDAAECGFKON>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<CDAAECGFKON>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<CDAAECGFKON>_TypeInfo);
    FUN_01bab630(&Method_CDAAECGFKON_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&CDAAECGFKON_<>c_TypeInfo);
    DAT_04566e9d = 1;
  }
  if ((CDAAECGFKON_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<CDAAECGFKON>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_CDAAECGFKON__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<CDAAECGFKON>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<CDAAECGFKON>__ctor__);
  CDAAECGFKON_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(CDAAECGFKON_TypeInfo->static_fields,__this);
  return;
}

