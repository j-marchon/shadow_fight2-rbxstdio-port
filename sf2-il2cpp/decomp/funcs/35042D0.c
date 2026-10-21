// JGELBDHDHAO$$.cctor @ RVA 0x35042D0

void JGELBDHDHAO___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_JGELBDHDHAO__o *__this;
  Google_Protobuf_FieldCodec_PIADCKMDDAK__o *pGVar1;
  Google_Protobuf_FieldCodec_PIADCKMDDAK__o **ppGVar2;
  
  if ((DAT_04568882 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<PIADCKMDDAK>__);
    FUN_01bab630(&System_Func<JGELBDHDHAO>_TypeInfo);
    FUN_01bab630(&JGELBDHDHAO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<JGELBDHDHAO>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<JGELBDHDHAO>_TypeInfo);
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    FUN_01bab630(&Method_JGELBDHDHAO_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&JGELBDHDHAO_<>c_TypeInfo);
    DAT_04568882 = 1;
  }
  if ((JGELBDHDHAO_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<JGELBDHDHAO>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_JGELBDHDHAO__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<JGELBDHDHAO>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<JGELBDHDHAO>__ctor__);
  JGELBDHDHAO_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(JGELBDHDHAO_TypeInfo->static_fields,__this);
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
  ppGVar2 = &JGELBDHDHAO_TypeInfo->static_fields->EEIBKMBPHLJ;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}

