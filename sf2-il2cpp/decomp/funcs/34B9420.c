// GKLPDMLELJF$$.cctor @ RVA 0x34B9420

void GKLPDMLELJF___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_GKLPDMLELJF__o *__this;
  Google_Protobuf_FieldCodec_Nullable_T___o *pGVar1;
  Google_Protobuf_FieldCodec_Nullable_long___o **ppGVar2;
  
  if ((DAT_045685ac & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForStructWrapper<long>__);
    FUN_01bab630(&System_Func<GKLPDMLELJF>_TypeInfo);
    FUN_01bab630(&GKLPDMLELJF_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<GKLPDMLELJF>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<GKLPDMLELJF>_TypeInfo);
    FUN_01bab630(&Method_GKLPDMLELJF_<>c_JCPCMMMKCFE__);
    FUN_01bab630(&GKLPDMLELJF_<>c_TypeInfo);
    DAT_045685ac = 1;
  }
  if ((GKLPDMLELJF_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<GKLPDMLELJF>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_GKLPDMLELJF__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<GKLPDMLELJF>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<GKLPDMLELJF>__ctor__);
  GKLPDMLELJF_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(GKLPDMLELJF_TypeInfo->static_fields,__this);
  pGVar1 = Google_Protobuf_FieldCodec__ForStructWrapper<long>
                     (0x32,Method_Google_Protobuf_FieldCodec_ForStructWrapper<long>__);
  ppGVar2 = &GKLPDMLELJF_TypeInfo->static_fields->OBHAFPFOAHP;
  *ppGVar2 = (Google_Protobuf_FieldCodec_Nullable_long___o *)pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}

