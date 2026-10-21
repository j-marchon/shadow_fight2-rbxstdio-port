// EPCCNLNOALL$$.cctor @ RVA 0x32FB9C0

void EPCCNLNOALL___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_EPCCNLNOALL__o *__this;
  
                    /* try { // try from 033fb9d4 to 034fbac7 has its CatchHandler @ 033fb9d4
                       catch() { ... } // from try @ 033fb9d4 with catch @ 033fb9d4
                       catch() { ... } // from try @ 033fbae4 with catch @ 033fb9d4
                       catch() { ... } // from try @ 033fbb54 with catch @ 033fb9d4
                       catch() { ... } // from try @ 033fbb7c with catch @ 033fb9d4
                       catch() { ... } // from try @ 033fbbbc with catch @ 033fb9d4 */
  if ((DAT_045676de & 1) == 0) {
    FUN_01bab630(&EPCCNLNOALL_TypeInfo);
    FUN_01bab630(&System_Func<EPCCNLNOALL>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<EPCCNLNOALL>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<EPCCNLNOALL>_TypeInfo);
    FUN_01bab630(&Method_EPCCNLNOALL_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&EPCCNLNOALL_<>c_TypeInfo);
    DAT_045676de = 1;
  }
  if ((EPCCNLNOALL_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<EPCCNLNOALL>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_EPCCNLNOALL__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<EPCCNLNOALL>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<EPCCNLNOALL>__ctor__);
  EPCCNLNOALL_TypeInfo->static_fields->NNMODPGDIDE = __this;
                    /* try { // try from 033fbac8 to 034fbacf has its CatchHandler @ 033fbb60 */
  thunk_FUN_01c20e04(EPCCNLNOALL_TypeInfo->static_fields,__this);
  return;
}

