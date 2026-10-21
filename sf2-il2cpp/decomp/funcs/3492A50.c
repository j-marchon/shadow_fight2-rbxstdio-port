// ALOGBMGGBEP$$.cctor @ RVA 0x3492A50

void ALOGBMGGBEP___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_ALOGBMGGBEP__o *__this;
  
  if ((DAT_04568430 & 1) == 0) {
    FUN_01bab630(&ALOGBMGGBEP_TypeInfo);
    FUN_01bab630(&System_Func<ALOGBMGGBEP>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<ALOGBMGGBEP>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<ALOGBMGGBEP>_TypeInfo);
    FUN_01bab630(&Method_ALOGBMGGBEP_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&ALOGBMGGBEP_<>c_TypeInfo);
    DAT_04568430 = 1;
  }
  if ((ALOGBMGGBEP_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<ALOGBMGGBEP>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_ALOGBMGGBEP__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<ALOGBMGGBEP>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<ALOGBMGGBEP>__ctor__);
  ALOGBMGGBEP_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(ALOGBMGGBEP_TypeInfo->static_fields,__this);
  return;
}

