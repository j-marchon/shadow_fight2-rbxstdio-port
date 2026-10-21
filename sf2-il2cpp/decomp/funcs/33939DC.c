// KDADMJGPAOM$$.cctor @ RVA 0x33939DC

void KDADMJGPAOM___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_KDADMJGPAOM__o *__this;
  
  if ((DAT_04567c3b & 1) == 0) {
    FUN_01bab630(&System_Func<KDADMJGPAOM>_TypeInfo);
    FUN_01bab630(&KDADMJGPAOM_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<KDADMJGPAOM>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<KDADMJGPAOM>_TypeInfo);
    FUN_01bab630(&Method_KDADMJGPAOM_<>c_OEFEKGDDHPN__);
    FUN_01bab630(&KDADMJGPAOM_<>c_TypeInfo);
    DAT_04567c3b = 1;
  }
  if ((KDADMJGPAOM_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<KDADMJGPAOM>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_KDADMJGPAOM__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<KDADMJGPAOM>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<KDADMJGPAOM>__ctor__);
  KDADMJGPAOM_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(KDADMJGPAOM_TypeInfo->static_fields,__this);
  return;
}

