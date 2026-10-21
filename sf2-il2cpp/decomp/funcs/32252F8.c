// GLPEFEEGCPM$$.cctor @ RVA 0x32252F8

void GLPEFEEGCPM___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_GLPEFEEGCPM__o *__this;
  Google_Protobuf_FieldCodec_KGBIBHEFBHA__o *pGVar1;
  Google_Protobuf_FieldCodec_KGBIBHEFBHA__o **ppGVar2;
  
  if ((DAT_04566f75 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<KGBIBHEFBHA>__);
    FUN_01bab630(&System_Func<GLPEFEEGCPM>_TypeInfo);
    FUN_01bab630(&GLPEFEEGCPM_TypeInfo);
    FUN_01bab630(&KGBIBHEFBHA_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<GLPEFEEGCPM>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<GLPEFEEGCPM>_TypeInfo);
    FUN_01bab630(&Method_GLPEFEEGCPM_<>c_KBFHKMJCKCO__);
    FUN_01bab630(&GLPEFEEGCPM_<>c_TypeInfo);
    DAT_04566f75 = 1;
  }
  if ((GLPEFEEGCPM_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<GLPEFEEGCPM>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_GLPEFEEGCPM__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<GLPEFEEGCPM>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<GLPEFEEGCPM>__ctor__);
  GLPEFEEGCPM_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(GLPEFEEGCPM_TypeInfo->static_fields,__this);
  if ((KGBIBHEFBHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_0456707b == '\0') {
    FUN_01bab630(&KGBIBHEFBHA_TypeInfo);
    DAT_0456707b = '\x01';
  }
  if ((KGBIBHEFBHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar1 = (Google_Protobuf_FieldCodec_KGBIBHEFBHA__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x1a,(Google_Protobuf_MessageParser_T__o *)
                           KGBIBHEFBHA_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<KGBIBHEFBHA>__);
  ppGVar2 = &GLPEFEEGCPM_TypeInfo->static_fields->CHLJPKPACJB;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}

