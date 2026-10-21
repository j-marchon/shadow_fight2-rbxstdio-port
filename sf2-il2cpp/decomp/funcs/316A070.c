// GKKKJLJFGBG$$.cctor @ RVA 0x316A070

void GKKKJLJFGBG___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_GKKKJLJFGBG__o *__this;
  Google_Protobuf_FieldCodec_int__o *pGVar1;
  Google_Protobuf_FieldCodec_PGICCMFLDPI__o *pGVar2;
  Google_Protobuf_FieldCodec_int__o **ppGVar3;
  Google_Protobuf_FieldCodec_PGICCMFLDPI__o **ppGVar4;
  
  if ((DAT_045668e3 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<PGICCMFLDPI>__);
    FUN_01bab630(&System_Func<GKKKJLJFGBG>_TypeInfo);
    FUN_01bab630(&GKKKJLJFGBG_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<GKKKJLJFGBG>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<GKKKJLJFGBG>_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    FUN_01bab630(&Method_GKKKJLJFGBG_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&GKKKJLJFGBG_<>c_TypeInfo);
    DAT_045668e3 = 1;
  }
  if ((GKKKJLJFGBG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<GKKKJLJFGBG>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_GKKKJLJFGBG__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<GKKKJLJFGBG>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<GKKKJLJFGBG>__ctor__);
  GKKKJLJFGBG_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(GKKKJLJFGBG_TypeInfo->static_fields,__this);
  pGVar1 = Google_Protobuf_FieldCodec__ForInt32(10,(MethodInfo *)0x0);
  ppGVar3 = &GKKKJLJFGBG_TypeInfo->static_fields->IIBJMKJBAPD;
  *ppGVar3 = pGVar1;
  thunk_FUN_01c20e04(ppGVar3,pGVar1);
  if ((PGICCMFLDPI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04566914 == '\0') {
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04566914 = '\x01';
  }
  if ((PGICCMFLDPI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar2 = (Google_Protobuf_FieldCodec_PGICCMFLDPI__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x12,(Google_Protobuf_MessageParser_T__o *)
                           PGICCMFLDPI_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<PGICCMFLDPI>__);
  ppGVar4 = &GKKKJLJFGBG_TypeInfo->static_fields->LONJEFPICPE;
  *ppGVar4 = pGVar2;
  thunk_FUN_01c20e04(ppGVar4,pGVar2);
  return;
}

