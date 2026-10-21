// BDMABHJEEGD$$.cctor @ RVA 0x310C308

void BDMABHJEEGD___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_BDMABHJEEGD__o *__this;
  
  if ((DAT_0456654b & 1) == 0) {
    FUN_01bab630(&BDMABHJEEGD_TypeInfo);
    FUN_01bab630(&System_Func<BDMABHJEEGD>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<BDMABHJEEGD>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<BDMABHJEEGD>_TypeInfo);
    FUN_01bab630(&Method_BDMABHJEEGD_<>c_KPFEPLDDLCD__);
    FUN_01bab630(&BDMABHJEEGD_<>c_TypeInfo);
    DAT_0456654b = 1;
  }
  if ((BDMABHJEEGD_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<BDMABHJEEGD>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_BDMABHJEEGD__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<BDMABHJEEGD>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<BDMABHJEEGD>__ctor__);
  BDMABHJEEGD_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(BDMABHJEEGD_TypeInfo->static_fields,__this);
  return;
}

