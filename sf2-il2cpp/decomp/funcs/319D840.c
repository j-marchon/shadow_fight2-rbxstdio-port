// GPKDMPJJEOO$$.cctor @ RVA 0x319D840

void GPKDMPJJEOO___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_GPKDMPJJEOO__o *__this;
  Google_Protobuf_FieldCodec_string__o *keyCodec;
  Google_Protobuf_FieldCodec_string__o *valueCodec;
  Google_Protobuf_Collections_MapField_Codec_string__string__o *__this_00;
  Google_Protobuf_Collections_MapField_Codec_string__string__o **ppGVar1;
  
  if ((DAT_04566aba & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_MapField_Codec<string,_string>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_MapField_Codec<string,_string>_TypeInfo);
    FUN_01bab630(&System_Func<GPKDMPJJEOO>_TypeInfo);
    FUN_01bab630(&GPKDMPJJEOO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<GPKDMPJJEOO>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<GPKDMPJJEOO>_TypeInfo);
    FUN_01bab630(&Method_GPKDMPJJEOO_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&GPKDMPJJEOO_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566aba = 1;
  }
  if ((GPKDMPJJEOO_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<GPKDMPJJEOO>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_GPKDMPJJEOO__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<GPKDMPJJEOO>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<GPKDMPJJEOO>__ctor__);
  GPKDMPJJEOO_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(GPKDMPJJEOO_TypeInfo->static_fields,__this);
  keyCodec = Google_Protobuf_FieldCodec__ForString(10,StringLiteral_1,(MethodInfo *)0x0);
  valueCodec = Google_Protobuf_FieldCodec__ForString(0x12,StringLiteral_1,(MethodInfo *)0x0);
  __this_00 = (Google_Protobuf_Collections_MapField_Codec_string__string__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_MapField_Codec<string,_string>_TypeInfo
                                );
  Google_Protobuf_Collections_MapField_Codec<object,_object>___ctor
            ((Google_Protobuf_Collections_MapField_Codec_TKey__TValue__o *)__this_00,
             (Google_Protobuf_FieldCodec_TKey__o *)keyCodec,
             (Google_Protobuf_FieldCodec_TValue__o *)valueCodec,0x12,
             Method_Google_Protobuf_Collections_MapField_Codec<string,_string>__ctor__);
  ppGVar1 = &GPKDMPJJEOO_TypeInfo->static_fields->BKAFBNGLAFE;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  return;
}

