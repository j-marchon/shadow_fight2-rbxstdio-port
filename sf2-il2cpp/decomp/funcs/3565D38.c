// CADIGFIBFEN$$.cctor @ RVA 0x3565D38

void CADIGFIBFEN___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_CADIGFIBFEN__o *__this;
  
  if ((DAT_04568bf3 & 1) == 0) {
    FUN_01bab630(&CADIGFIBFEN_TypeInfo);
    FUN_01bab630(&System_Func<CADIGFIBFEN>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<CADIGFIBFEN>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<CADIGFIBFEN>_TypeInfo);
    FUN_01bab630(&Method_CADIGFIBFEN_<>c_LNJPIHAONCC__);
    FUN_01bab630(&CADIGFIBFEN_<>c_TypeInfo);
    DAT_04568bf3 = 1;
  }
  if ((CADIGFIBFEN_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<CADIGFIBFEN>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_CADIGFIBFEN__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<CADIGFIBFEN>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<CADIGFIBFEN>__ctor__);
  CADIGFIBFEN_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(CADIGFIBFEN_TypeInfo->static_fields,__this);
  return;
}

