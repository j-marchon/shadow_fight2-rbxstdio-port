// NGOFOPOGBMJ$$.cctor @ RVA 0x34E5A3C

void NGOFOPOGBMJ___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_NGOFOPOGBMJ__o *__this;
  
  if ((DAT_04568761 & 1) == 0) {
    FUN_01bab630(&System_Func<NGOFOPOGBMJ>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<NGOFOPOGBMJ>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<NGOFOPOGBMJ>_TypeInfo);
    FUN_01bab630(&NGOFOPOGBMJ_TypeInfo);
    FUN_01bab630(&Method_NGOFOPOGBMJ_<>c_ICLFIHGKJJH__);
    FUN_01bab630(&NGOFOPOGBMJ_<>c_TypeInfo);
    DAT_04568761 = 1;
  }
  if ((NGOFOPOGBMJ_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<NGOFOPOGBMJ>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_NGOFOPOGBMJ__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<NGOFOPOGBMJ>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<NGOFOPOGBMJ>__ctor__);
                    /* try { // try from 035e5b2c to 036e5b33 has its CatchHandler @ 035e5ce4 */
  NGOFOPOGBMJ_TypeInfo->static_fields->NNMODPGDIDE = __this;
                    /* try { // try from 035e5b40 to 036e5b4b has its CatchHandler @ 035e5ce0 */
  thunk_FUN_01c20e04(NGOFOPOGBMJ_TypeInfo->static_fields,__this);
  return;
}

