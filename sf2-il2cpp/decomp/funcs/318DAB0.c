// LKAFKHBBNOH$$.cctor @ RVA 0x318DAB0

void LKAFKHBBNOH___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_LKAFKHBBNOH__o *__this;
  
  if ((DAT_04566a1f & 1) == 0) {
    FUN_01bab630(&System_Func<LKAFKHBBNOH>_TypeInfo);
    FUN_01bab630(&LKAFKHBBNOH_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<LKAFKHBBNOH>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<LKAFKHBBNOH>_TypeInfo);
    FUN_01bab630(&Method_LKAFKHBBNOH_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&LKAFKHBBNOH_<>c_TypeInfo);
    DAT_04566a1f = 1;
  }
  if ((LKAFKHBBNOH_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<LKAFKHBBNOH>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_LKAFKHBBNOH__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<LKAFKHBBNOH>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<LKAFKHBBNOH>__ctor__);
  LKAFKHBBNOH_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(LKAFKHBBNOH_TypeInfo->static_fields,__this);
  return;
}

