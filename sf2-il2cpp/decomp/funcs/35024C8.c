// OBCMNBDBNFO$$.cctor @ RVA 0x35024C8

void OBCMNBDBNFO___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_OBCMNBDBNFO__o *__this;
  Google_Protobuf_FieldCodec_KMDOLFBIGNC__o *pGVar1;
  Google_Protobuf_FieldCodec_KMDOLFBIGNC__o **ppGVar2;
  
  if ((DAT_04568863 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<KMDOLFBIGNC>__);
    FUN_01bab630(&System_Func<OBCMNBDBNFO>_TypeInfo);
    FUN_01bab630(&KMDOLFBIGNC_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<OBCMNBDBNFO>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<OBCMNBDBNFO>_TypeInfo);
    FUN_01bab630(&OBCMNBDBNFO_TypeInfo);
    FUN_01bab630(&Method_OBCMNBDBNFO_<>c_KPFEPLDDLCD__);
    FUN_01bab630(&OBCMNBDBNFO_<>c_TypeInfo);
    DAT_04568863 = 1;
  }
  if ((OBCMNBDBNFO_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<OBCMNBDBNFO>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_OBCMNBDBNFO__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<OBCMNBDBNFO>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<OBCMNBDBNFO>__ctor__);
  OBCMNBDBNFO_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(OBCMNBDBNFO_TypeInfo->static_fields,__this);
  if ((KMDOLFBIGNC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04567f48 == '\0') {
    FUN_01bab630(&KMDOLFBIGNC_TypeInfo);
    DAT_04567f48 = '\x01';
  }
  if ((KMDOLFBIGNC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar1 = (Google_Protobuf_FieldCodec_KMDOLFBIGNC__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x3a,(Google_Protobuf_MessageParser_T__o *)
                           KMDOLFBIGNC_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<KMDOLFBIGNC>__);
  ppGVar2 = &OBCMNBDBNFO_TypeInfo->static_fields->FLKKFFHAJBM;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}

