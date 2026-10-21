// IMBPILFKGEO$$.cctor @ RVA 0x30ABE10

void IMBPILFKGEO___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_IMBPILFKGEO__o *__this;
  
  if ((DAT_045661a5 & 1) == 0) {
    FUN_01bab630(&System_Func<IMBPILFKGEO>_TypeInfo);
    FUN_01bab630(&IMBPILFKGEO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<IMBPILFKGEO>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<IMBPILFKGEO>_TypeInfo);
    FUN_01bab630(&Method_IMBPILFKGEO_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&IMBPILFKGEO_<>c_TypeInfo);
    DAT_045661a5 = 1;
  }
  if ((IMBPILFKGEO_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<IMBPILFKGEO>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_IMBPILFKGEO__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<IMBPILFKGEO>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<IMBPILFKGEO>__ctor__);
  IMBPILFKGEO_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(IMBPILFKGEO_TypeInfo->static_fields,__this);
  return;
}

