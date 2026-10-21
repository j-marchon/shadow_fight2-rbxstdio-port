// KKGHPKOFEHM$$.cctor @ RVA 0x308D19C

void KKGHPKOFEHM___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_KKGHPKOFEHM__o *__this;
  Google_Protobuf_FieldCodec_PIADCKMDDAK__o *pGVar1;
  Google_Protobuf_FieldCodec_PIADCKMDDAK__o **ppGVar2;
  
  if ((DAT_04566069 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<PIADCKMDDAK>__);
    FUN_01bab630(&System_Func<KKGHPKOFEHM>_TypeInfo);
    FUN_01bab630(&KKGHPKOFEHM_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<KKGHPKOFEHM>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<KKGHPKOFEHM>_TypeInfo);
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    FUN_01bab630(&Method_KKGHPKOFEHM_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&KKGHPKOFEHM_<>c_TypeInfo);
    DAT_04566069 = 1;
  }
  if ((KKGHPKOFEHM_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<KKGHPKOFEHM>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_KKGHPKOFEHM__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<KKGHPKOFEHM>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<KKGHPKOFEHM>__ctor__);
  KKGHPKOFEHM_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(KKGHPKOFEHM_TypeInfo->static_fields,__this);
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
                     (0x12,(Google_Protobuf_MessageParser_T__o *)
                           PIADCKMDDAK_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<PIADCKMDDAK>__);
  ppGVar2 = &KKGHPKOFEHM_TypeInfo->static_fields->NIOOECHHOMN;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}

