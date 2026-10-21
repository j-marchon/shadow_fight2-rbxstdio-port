// IBMLPPNMDCI$$.cctor @ RVA 0x30F63F4

void IBMLPPNMDCI___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_IBMLPPNMDCI__o *__this;
  Google_Protobuf_FieldCodec_long__o *pGVar1;
  Google_Protobuf_FieldCodec_long__o **ppGVar2;
  
  if ((DAT_0456645d & 1) == 0) {
    FUN_01bab630(&System_Func<IBMLPPNMDCI>_TypeInfo);
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<IBMLPPNMDCI>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<IBMLPPNMDCI>_TypeInfo);
    FUN_01bab630(&Method_IBMLPPNMDCI_<>c_ICLFIHGKJJH__);
    FUN_01bab630(&IBMLPPNMDCI_<>c_TypeInfo);
    DAT_0456645d = 1;
  }
  if ((IBMLPPNMDCI_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<IBMLPPNMDCI>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_IBMLPPNMDCI__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<IBMLPPNMDCI>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<IBMLPPNMDCI>__ctor__);
  IBMLPPNMDCI_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(IBMLPPNMDCI_TypeInfo->static_fields,__this);
  pGVar1 = Google_Protobuf_FieldCodec__ForInt64(10,(MethodInfo *)0x0);
  ppGVar2 = &IBMLPPNMDCI_TypeInfo->static_fields->IODFLINNJEL;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}

