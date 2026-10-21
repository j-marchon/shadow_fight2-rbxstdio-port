// JMCDPBKILIN$$.cctor @ RVA 0x3129540

void JMCDPBKILIN___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_JMCDPBKILIN__o *__this;
  Google_Protobuf_FieldCodec_BECIPDJBAOG__o *pGVar1;
  Google_Protobuf_FieldCodec_BECIPDJBAOG__o **ppGVar2;
  
  if ((DAT_04566681 & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<BECIPDJBAOG>__);
    FUN_01bab630(&System_Func<JMCDPBKILIN>_TypeInfo);
    FUN_01bab630(&JMCDPBKILIN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<JMCDPBKILIN>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<JMCDPBKILIN>_TypeInfo);
    FUN_01bab630(&Method_JMCDPBKILIN_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&JMCDPBKILIN_<>c_TypeInfo);
    DAT_04566681 = 1;
  }
  if ((JMCDPBKILIN_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<JMCDPBKILIN>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_JMCDPBKILIN__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<JMCDPBKILIN>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<JMCDPBKILIN>__ctor__);
  JMCDPBKILIN_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(JMCDPBKILIN_TypeInfo->static_fields,__this);
  if ((BECIPDJBAOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04566742 == '\0') {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    DAT_04566742 = '\x01';
  }
  if ((BECIPDJBAOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar1 = (Google_Protobuf_FieldCodec_BECIPDJBAOG__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (10,(Google_Protobuf_MessageParser_T__o *)
                         BECIPDJBAOG_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<BECIPDJBAOG>__);
  ppGVar2 = &JMCDPBKILIN_TypeInfo->static_fields->EKPNGGCFBJH;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}

