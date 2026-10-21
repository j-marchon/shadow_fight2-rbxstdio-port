// ELBBEAGGAOH$$.cctor @ RVA 0x324C2B8

void ELBBEAGGAOH___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_ELBBEAGGAOH__o *__this;
  Google_Protobuf_FieldCodec_KMAOIKKMFJF__o *pGVar1;
  Google_Protobuf_FieldCodec_KMAOIKKMFJF__o **ppGVar2;
  
  if ((DAT_045670ff & 1) == 0) {
    FUN_01bab630(&ELBBEAGGAOH_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<KMAOIKKMFJF>__);
    FUN_01bab630(&System_Func<ELBBEAGGAOH>_TypeInfo);
    FUN_01bab630(&KMAOIKKMFJF_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<ELBBEAGGAOH>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<ELBBEAGGAOH>_TypeInfo);
    FUN_01bab630(&Method_ELBBEAGGAOH_<>c_CDFJHKCBBBE__);
    FUN_01bab630(&ELBBEAGGAOH_<>c_TypeInfo);
    DAT_045670ff = 1;
  }
  if ((ELBBEAGGAOH_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<ELBBEAGGAOH>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_ELBBEAGGAOH__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<ELBBEAGGAOH>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<ELBBEAGGAOH>__ctor__);
  ELBBEAGGAOH_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(ELBBEAGGAOH_TypeInfo->static_fields,__this);
  if ((KMAOIKKMFJF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04567180 == '\0') {
    FUN_01bab630(&KMAOIKKMFJF_TypeInfo);
    DAT_04567180 = '\x01';
  }
  if ((KMAOIKKMFJF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar1 = (Google_Protobuf_FieldCodec_KMAOIKKMFJF__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x4a,(Google_Protobuf_MessageParser_T__o *)
                           KMAOIKKMFJF_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<KMAOIKKMFJF>__);
  ppGVar2 = &ELBBEAGGAOH_TypeInfo->static_fields->AJFGPDHFEMK;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}

