// NIGMCJIMBHO$$.cctor @ RVA 0x337B0A8

void NIGMCJIMBHO___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_NIGMCJIMBHO__o *__this;
  
  if ((DAT_04567b88 & 1) == 0) {
    FUN_01bab630(&System_Func<NIGMCJIMBHO>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<NIGMCJIMBHO>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<NIGMCJIMBHO>_TypeInfo);
    FUN_01bab630(&NIGMCJIMBHO_TypeInfo);
    FUN_01bab630(&Method_NIGMCJIMBHO_<>c_ICLFIHGKJJH__);
    FUN_01bab630(&NIGMCJIMBHO_<>c_TypeInfo);
    DAT_04567b88 = 1;
  }
  if ((NIGMCJIMBHO_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<NIGMCJIMBHO>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_NIGMCJIMBHO__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<NIGMCJIMBHO>_TypeInfo);
                    /* try { // try from 0347b188 to 0357b1af has its CatchHandler @ 0347b788 */
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<NIGMCJIMBHO>__ctor__);
  NIGMCJIMBHO_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(NIGMCJIMBHO_TypeInfo->static_fields,__this);
  return;
}

