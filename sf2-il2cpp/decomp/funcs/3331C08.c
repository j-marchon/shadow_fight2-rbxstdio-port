// JCFJFJCKLKG$$.cctor @ RVA 0x3331C08

void JCFJFJCKLKG___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_JCFJFJCKLKG__o *__this;
  Google_Protobuf_FieldCodec_ICPMLKOEANF__o *pGVar1;
  Google_Protobuf_FieldCodec_ICPMLKOEANF__o **ppGVar2;
  
  if ((DAT_04567914 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<ICPMLKOEANF>__);
    FUN_01bab630(&System_Func<JCFJFJCKLKG>_TypeInfo);
    FUN_01bab630(&ICPMLKOEANF_TypeInfo);
    FUN_01bab630(&JCFJFJCKLKG_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<JCFJFJCKLKG>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<JCFJFJCKLKG>_TypeInfo);
    FUN_01bab630(&Method_JCFJFJCKLKG_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&JCFJFJCKLKG_<>c_TypeInfo);
    DAT_04567914 = 1;
  }
  if ((JCFJFJCKLKG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<JCFJFJCKLKG>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_JCFJFJCKLKG__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<JCFJFJCKLKG>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<JCFJFJCKLKG>__ctor__);
  JCFJFJCKLKG_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(JCFJFJCKLKG_TypeInfo->static_fields,__this);
  if ((ICPMLKOEANF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045679bd == '\0') {
    FUN_01bab630(&ICPMLKOEANF_TypeInfo);
    DAT_045679bd = '\x01';
  }
  if ((ICPMLKOEANF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar1 = (Google_Protobuf_FieldCodec_ICPMLKOEANF__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x12,(Google_Protobuf_MessageParser_T__o *)
                           ICPMLKOEANF_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<ICPMLKOEANF>__);
  ppGVar2 = &JCFJFJCKLKG_TypeInfo->static_fields->HCFIGOCMMPG;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}

