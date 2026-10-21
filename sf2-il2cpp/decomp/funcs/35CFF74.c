// BPBGAAHBFKH$$.cctor @ RVA 0x35CFF74

void BPBGAAHBFKH___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_BPBGAAHBFKH__o *__this;
  Google_Protobuf_FieldCodec_BDMABHJEEGD__o *pGVar1;
  Google_Protobuf_FieldCodec_BDMABHJEEGD__o **ppGVar2;
  
  if ((DAT_04568fda & 1) == 0) {
    FUN_01bab630(&BDMABHJEEGD_TypeInfo);
    FUN_01bab630(&BPBGAAHBFKH_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<BDMABHJEEGD>__);
    FUN_01bab630(&System_Func<BPBGAAHBFKH>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<BPBGAAHBFKH>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<BPBGAAHBFKH>_TypeInfo);
    FUN_01bab630(&Method_BPBGAAHBFKH_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&BPBGAAHBFKH_<>c_TypeInfo);
    DAT_04568fda = 1;
  }
  if ((BPBGAAHBFKH_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<BPBGAAHBFKH>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_BPBGAAHBFKH__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<BPBGAAHBFKH>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<BPBGAAHBFKH>__ctor__);
  BPBGAAHBFKH_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(BPBGAAHBFKH_TypeInfo->static_fields,__this);
  if ((BDMABHJEEGD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04567f51 == '\0') {
    FUN_01bab630(&BDMABHJEEGD_TypeInfo);
    DAT_04567f51 = '\x01';
  }
  if ((BDMABHJEEGD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar1 = (Google_Protobuf_FieldCodec_BDMABHJEEGD__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x12,(Google_Protobuf_MessageParser_T__o *)
                           BDMABHJEEGD_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<BDMABHJEEGD>__);
  ppGVar2 = &BPBGAAHBFKH_TypeInfo->static_fields->ODAOMAKCEEH;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}

