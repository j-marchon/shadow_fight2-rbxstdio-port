// OLCBPIHLPEC$$.cctor @ RVA 0x35BB024

void OLCBPIHLPEC___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_OLCBPIHLPEC__o *__this;
  
  if ((DAT_04568ece & 1) == 0) {
    FUN_01bab630(&System_Func<OLCBPIHLPEC>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<OLCBPIHLPEC>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<OLCBPIHLPEC>_TypeInfo);
    FUN_01bab630(&OLCBPIHLPEC_TypeInfo);
    FUN_01bab630(&Method_OLCBPIHLPEC_<>c_DMLACMHIPML__);
    FUN_01bab630(&OLCBPIHLPEC_<>c_TypeInfo);
    DAT_04568ece = 1;
  }
  if ((OLCBPIHLPEC_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<OLCBPIHLPEC>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_OLCBPIHLPEC__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<OLCBPIHLPEC>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<OLCBPIHLPEC>__ctor__);
  OLCBPIHLPEC_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(OLCBPIHLPEC_TypeInfo->static_fields,__this);
  return;
}

