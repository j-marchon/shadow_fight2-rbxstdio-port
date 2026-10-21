// KAMBBJFPLGM$$.cctor @ RVA 0x311A9C8

void KAMBBJFPLGM___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_KAMBBJFPLGM__o *__this;
  Google_Protobuf_FieldCodec_PIADCKMDDAK__o *pGVar1;
  Google_Protobuf_FieldCodec_string__o *pGVar2;
  Google_Protobuf_FieldCodec_EIBAKHBHMAO__o *pGVar3;
  Google_Protobuf_FieldCodec_PIADCKMDDAK__o **ppGVar4;
  Google_Protobuf_FieldCodec_string__o **ppGVar5;
  Google_Protobuf_FieldCodec_EIBAKHBHMAO__o **ppGVar6;
  
  if ((DAT_045665e2 & 1) == 0) {
    FUN_01bab630(&EIBAKHBHMAO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<EIBAKHBHMAO>__);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<PIADCKMDDAK>__);
    FUN_01bab630(&System_Func<KAMBBJFPLGM>_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<KAMBBJFPLGM>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<KAMBBJFPLGM>_TypeInfo);
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    FUN_01bab630(&Method_KAMBBJFPLGM_<>c_PGGMGGKMLPG__);
    FUN_01bab630(&KAMBBJFPLGM_<>c_TypeInfo);
    DAT_045665e2 = 1;
  }
  if ((KAMBBJFPLGM_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<KAMBBJFPLGM>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_KAMBBJFPLGM__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<KAMBBJFPLGM>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<KAMBBJFPLGM>__ctor__);
  KAMBBJFPLGM_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(KAMBBJFPLGM_TypeInfo->static_fields,__this);
  if ((PIADCKMDDAK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045660fa == '\0') {
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    DAT_045660fa = '\x01';
  }
  if ((PIADCKMDDAK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar1 = (Google_Protobuf_FieldCodec_PIADCKMDDAK__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x22,(Google_Protobuf_MessageParser_T__o *)
                           PIADCKMDDAK_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<PIADCKMDDAK>__);
  ppGVar4 = &KAMBBJFPLGM_TypeInfo->static_fields->JJNDCMILECE;
  *ppGVar4 = pGVar1;
  thunk_FUN_01c20e04(ppGVar4,pGVar1);
  if (DAT_045660fa == '\0') {
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    DAT_045660fa = '\x01';
  }
  if ((PIADCKMDDAK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar1 = (Google_Protobuf_FieldCodec_PIADCKMDDAK__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x42,(Google_Protobuf_MessageParser_T__o *)
                           PIADCKMDDAK_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<PIADCKMDDAK>__);
  ppGVar4 = &KAMBBJFPLGM_TypeInfo->static_fields->ACFGKMKAECB;
  *ppGVar4 = pGVar1;
  thunk_FUN_01c20e04(ppGVar4,pGVar1);
  pGVar2 = Google_Protobuf_FieldCodec__ForString(0x5a,(MethodInfo *)0x0);
  ppGVar5 = &KAMBBJFPLGM_TypeInfo->static_fields->IIMNAMKPOPF;
  *ppGVar5 = pGVar2;
  thunk_FUN_01c20e04(ppGVar5,pGVar2);
  if ((EIBAKHBHMAO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04566663 == '\0') {
    FUN_01bab630(&EIBAKHBHMAO_TypeInfo);
    DAT_04566663 = '\x01';
  }
  if ((EIBAKHBHMAO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar3 = (Google_Protobuf_FieldCodec_EIBAKHBHMAO__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x62,(Google_Protobuf_MessageParser_T__o *)
                           EIBAKHBHMAO_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<EIBAKHBHMAO>__);
  ppGVar6 = &KAMBBJFPLGM_TypeInfo->static_fields->ADEIEGJOBLG;
  *ppGVar6 = pGVar3;
  thunk_FUN_01c20e04(ppGVar6,pGVar3);
  return;
}

