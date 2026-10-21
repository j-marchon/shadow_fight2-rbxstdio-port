// NLFLMJPNOLF$$.cctor @ RVA 0x32A78EC

void NLFLMJPNOLF___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_NLFLMJPNOLF__o *__this;
  Google_Protobuf_FieldCodec_long__o *pGVar1;
  Google_Protobuf_FieldCodec_long__o **ppGVar2;
  
                    /* try { // try from 033a7908 to 034a795b has its CatchHandler @ 033a7b04 */
  if ((DAT_04567407 & 1) == 0) {
    FUN_01bab630(&System_Func<NLFLMJPNOLF>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<NLFLMJPNOLF>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<NLFLMJPNOLF>_TypeInfo);
    FUN_01bab630(&NLFLMJPNOLF_TypeInfo);
    FUN_01bab630(&Method_NLFLMJPNOLF_<>c_LNJPIHAONCC__);
    FUN_01bab630(&NLFLMJPNOLF_<>c_TypeInfo);
    DAT_04567407 = 1;
  }
                    /* try { // try from 033a7970 to 034a7977 has its CatchHandler @ 033a7aec */
                    /* try { // try from 033a797c to 034a7993 has its CatchHandler @ 033a7b00 */
  if ((NLFLMJPNOLF_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 033a79a4 to 034a79e3 has its CatchHandler @ 033a7b14 */
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<NLFLMJPNOLF>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_NLFLMJPNOLF__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<NLFLMJPNOLF>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<NLFLMJPNOLF>__ctor__);
  NLFLMJPNOLF_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(NLFLMJPNOLF_TypeInfo->static_fields,__this);
                    /* try { // try from 033a79f4 to 034a79ff has its CatchHandler @ 033a7ae4 */
  pGVar1 = Google_Protobuf_FieldCodec__ForInt64(0x1a,(MethodInfo *)0x0);
  ppGVar2 = &NLFLMJPNOLF_TypeInfo->static_fields->CCHHCINKGLK;
                    /* try { // try from 033a7a14 to 034a7a1b has its CatchHandler @ 033a7adc */
  *ppGVar2 = pGVar1;
                    /* try { // try from 033a7a20 to 034a7a37 has its CatchHandler @ 033a7afc */
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}

