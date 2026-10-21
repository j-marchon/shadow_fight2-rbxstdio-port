// MEPKDDGONGE$$.cctor @ RVA 0x31792C8

void MEPKDDGONGE___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_MEPKDDGONGE__o *__this;
  Google_Protobuf_FieldCodec_string__o *pGVar1;
  Google_Protobuf_FieldCodec_string__o **ppGVar2;
  
  if ((DAT_04566974 & 1) == 0) {
    FUN_01bab630(&System_Func<MEPKDDGONGE>_TypeInfo);
    FUN_01bab630(&MEPKDDGONGE_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<MEPKDDGONGE>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<MEPKDDGONGE>_TypeInfo);
    FUN_01bab630(&Method_MEPKDDGONGE_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&MEPKDDGONGE_<>c_TypeInfo);
    DAT_04566974 = 1;
  }
  if ((MEPKDDGONGE_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<MEPKDDGONGE>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_MEPKDDGONGE__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<MEPKDDGONGE>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<MEPKDDGONGE>__ctor__);
  MEPKDDGONGE_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(MEPKDDGONGE_TypeInfo->static_fields,__this);
  pGVar1 = Google_Protobuf_FieldCodec__ForString(0x12,(MethodInfo *)0x0);
  ppGVar2 = &MEPKDDGONGE_TypeInfo->static_fields->ADCKHCEHBAG;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}

