// DBNIPENAEKO$$.cctor @ RVA 0x31C9358

void DBNIPENAEKO___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_DBNIPENAEKO__o *__this;
  Google_Protobuf_FieldCodec_AFLJMCMKCIG__o *pGVar1;
  Google_Protobuf_FieldCodec_AFLJMCMKCIG__o **ppGVar2;
  
  if ((DAT_04566c4d & 1) == 0) {
    FUN_01bab630(&AFLJMCMKCIG_TypeInfo);
    FUN_01bab630(&DBNIPENAEKO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<AFLJMCMKCIG>__);
    FUN_01bab630(&System_Func<DBNIPENAEKO>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<DBNIPENAEKO>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<DBNIPENAEKO>_TypeInfo);
    FUN_01bab630(&Method_DBNIPENAEKO_<>c_LNJPIHAONCC__);
    FUN_01bab630(&DBNIPENAEKO_<>c_TypeInfo);
    DAT_04566c4d = 1;
  }
  if ((DBNIPENAEKO_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<DBNIPENAEKO>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_DBNIPENAEKO__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<DBNIPENAEKO>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<DBNIPENAEKO>__ctor__);
  DBNIPENAEKO_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(DBNIPENAEKO_TypeInfo->static_fields,__this);
  if ((AFLJMCMKCIG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04566c74 == '\0') {
    FUN_01bab630(&AFLJMCMKCIG_TypeInfo);
    DAT_04566c74 = '\x01';
  }
  if ((AFLJMCMKCIG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar1 = (Google_Protobuf_FieldCodec_AFLJMCMKCIG__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x1a,(Google_Protobuf_MessageParser_T__o *)
                           AFLJMCMKCIG_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<AFLJMCMKCIG>__);
  ppGVar2 = &DBNIPENAEKO_TypeInfo->static_fields->FHPMBCKAFHD;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}

