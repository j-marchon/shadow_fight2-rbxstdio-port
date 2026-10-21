// IHMIMECHIAN$$.cctor @ RVA 0x343D304

void IHMIMECHIAN___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_IHMIMECHIAN__o *__this;
  Google_Protobuf_FieldCodec_int__o *pGVar1;
  Google_Protobuf_FieldCodec_int__o **ppGVar2;
  
  if ((DAT_045681ee & 1) == 0) {
    FUN_01bab630(&System_Func<IHMIMECHIAN>_TypeInfo);
    FUN_01bab630(&IHMIMECHIAN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<IHMIMECHIAN>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<IHMIMECHIAN>_TypeInfo);
    FUN_01bab630(&Method_IHMIMECHIAN_<>c_MHAEKPPOEIL__);
    FUN_01bab630(&IHMIMECHIAN_<>c_TypeInfo);
    DAT_045681ee = 1;
  }
  if ((IHMIMECHIAN_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<IHMIMECHIAN>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_IHMIMECHIAN__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<IHMIMECHIAN>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<IHMIMECHIAN>__ctor__);
  IHMIMECHIAN_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(IHMIMECHIAN_TypeInfo->static_fields,__this);
  pGVar1 = Google_Protobuf_FieldCodec__ForInt32(0x42,(MethodInfo *)0x0);
  ppGVar2 = &IHMIMECHIAN_TypeInfo->static_fields->EEBAEBIODDF;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}

