// LFELBGMCDHD$$.cctor @ RVA 0x33A06A8

void LFELBGMCDHD___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_LFELBGMCDHD__o *__this;
  Google_Protobuf_FieldCodec_GKLPDMLELJF__o *pGVar1;
  Google_Protobuf_FieldCodec_GKLPDMLELJF__o **ppGVar2;
  
  if ((DAT_04567cb0 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<GKLPDMLELJF>__);
    FUN_01bab630(&System_Func<LFELBGMCDHD>_TypeInfo);
    FUN_01bab630(&GKLPDMLELJF_TypeInfo);
    FUN_01bab630(&LFELBGMCDHD_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<LFELBGMCDHD>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<LFELBGMCDHD>_TypeInfo);
    FUN_01bab630(&Method_LFELBGMCDHD_<>c_ICLFIHGKJJH__);
    FUN_01bab630(&LFELBGMCDHD_<>c_TypeInfo);
    DAT_04567cb0 = 1;
  }
  if ((LFELBGMCDHD_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<LFELBGMCDHD>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_LFELBGMCDHD__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<LFELBGMCDHD>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<LFELBGMCDHD>__ctor__);
  LFELBGMCDHD_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(LFELBGMCDHD_TypeInfo->static_fields,__this);
  if ((GKLPDMLELJF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04567d82 == '\0') {
    FUN_01bab630(&GKLPDMLELJF_TypeInfo);
    DAT_04567d82 = '\x01';
  }
  if ((GKLPDMLELJF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar1 = (Google_Protobuf_FieldCodec_GKLPDMLELJF__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (10,(Google_Protobuf_MessageParser_T__o *)
                         GKLPDMLELJF_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<GKLPDMLELJF>__);
  ppGVar2 = &LFELBGMCDHD_TypeInfo->static_fields->IODFLINNJEL;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}

