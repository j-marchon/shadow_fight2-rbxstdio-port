// BKMLILFFPIH$$.cctor @ RVA 0x3047654

void BKMLILFFPIH___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_BKMLILFFPIH__o *__this;
  
  if ((DAT_04565dea & 1) == 0) {
    FUN_01bab630(&BKMLILFFPIH_TypeInfo);
    FUN_01bab630(&System_Func<BKMLILFFPIH>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<BKMLILFFPIH>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<BKMLILFFPIH>_TypeInfo);
    FUN_01bab630(&Method_BKMLILFFPIH_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&BKMLILFFPIH_<>c_TypeInfo);
    DAT_04565dea = 1;
  }
  if ((BKMLILFFPIH_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<BKMLILFFPIH>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_BKMLILFFPIH__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<BKMLILFFPIH>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<BKMLILFFPIH>__ctor__);
  BKMLILFFPIH_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(BKMLILFFPIH_TypeInfo->static_fields,__this);
  return;
}

