// AJINOJNMEEK$$.cctor @ RVA 0x304DC50

void AJINOJNMEEK___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_AJINOJNMEEK__o *__this;
  Google_Protobuf_FieldCodec_string__o *pGVar1;
  Google_Protobuf_FieldCodec_string__o **ppGVar2;
  
  if ((DAT_04565e25 & 1) == 0) {
    FUN_01bab630(&AJINOJNMEEK_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForClassWrapper<string>__);
    FUN_01bab630(&System_Func<AJINOJNMEEK>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<AJINOJNMEEK>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<AJINOJNMEEK>_TypeInfo);
    FUN_01bab630(&Method_AJINOJNMEEK_<>c_AFCHNCJIIDO__);
    FUN_01bab630(&AJINOJNMEEK_<>c_TypeInfo);
    DAT_04565e25 = 1;
  }
  if ((AJINOJNMEEK_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0314dd20 to 0324dd47 has its CatchHandler @ 0314df54 */
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<AJINOJNMEEK>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_AJINOJNMEEK__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<AJINOJNMEEK>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<AJINOJNMEEK>__ctor__);
  AJINOJNMEEK_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(AJINOJNMEEK_TypeInfo->static_fields,__this);
  pGVar1 = (Google_Protobuf_FieldCodec_string__o *)
           Google_Protobuf_FieldCodec__ForClassWrapper<object>
                     (0x1a,Method_Google_Protobuf_FieldCodec_ForClassWrapper<string>__);
                    /* try { // try from 0314dd7c to 0324dda3 has its CatchHandler @ 0314df50 */
  ppGVar2 = &AJINOJNMEEK_TypeInfo->static_fields->GLHDOIAKLDH;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}

