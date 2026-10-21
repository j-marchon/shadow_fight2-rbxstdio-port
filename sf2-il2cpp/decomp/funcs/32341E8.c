// DLOALGNBPNL$$.cctor @ RVA 0x32341E8

void DLOALGNBPNL___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_DLOALGNBPNL__o *__this;
  Google_Protobuf_FieldCodec_CBPENMDOJDB__o *pGVar1;
  Google_Protobuf_FieldCodec_CBPENMDOJDB__o **ppGVar2;
  
                    /* try { // try from 033341fc to 034342c7 has its CatchHandler @ 033341fc
                       catch() { ... } // from try @ 033341fc with catch @ 033341fc
                       catch() { ... } // from try @ 033343cc with catch @ 033341fc
                       catch() { ... } // from try @ 03334484 with catch @ 033341fc
                       catch() { ... } // from try @ 0333448c with catch @ 033341fc
                       catch() { ... } // from try @ 03334554 with catch @ 033341fc */
  if ((DAT_04567007 & 1) == 0) {
    FUN_01bab630(&CBPENMDOJDB_TypeInfo);
    FUN_01bab630(&DLOALGNBPNL_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<CBPENMDOJDB>__);
    FUN_01bab630(&System_Func<DLOALGNBPNL>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<DLOALGNBPNL>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<DLOALGNBPNL>_TypeInfo);
    FUN_01bab630(&Method_DLOALGNBPNL_<>c_ICLFIHGKJJH__);
    FUN_01bab630(&DLOALGNBPNL_<>c_TypeInfo);
    DAT_04567007 = 1;
  }
  if ((DLOALGNBPNL_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<DLOALGNBPNL>_TypeInfo);
                    /* try { // try from 033342c8 to 034342ef has its CatchHandler @ 033344b8 */
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_DLOALGNBPNL__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<DLOALGNBPNL>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<DLOALGNBPNL>__ctor__);
  DLOALGNBPNL_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(DLOALGNBPNL_TypeInfo->static_fields,__this);
  if ((CBPENMDOJDB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03334324 to 0343434f has its CatchHandler @ 033344b4 */
  if (DAT_0456707c == '\0') {
    FUN_01bab630(&CBPENMDOJDB_TypeInfo);
    DAT_0456707c = '\x01';
  }
  if ((CBPENMDOJDB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar1 = (Google_Protobuf_FieldCodec_CBPENMDOJDB__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (10,(Google_Protobuf_MessageParser_T__o *)
                         CBPENMDOJDB_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<CBPENMDOJDB>__);
  ppGVar2 = &DLOALGNBPNL_TypeInfo->static_fields->IODFLINNJEL;
  *ppGVar2 = pGVar1;
                    /* try { // try from 0333438c to 03434393 has its CatchHandler @ 033344ac */
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}

