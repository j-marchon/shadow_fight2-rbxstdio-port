// JHMFOIIPEHB$$.cctor @ RVA 0x30CEC4C

void JHMFOIIPEHB___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_JHMFOIIPEHB__o *__this;
  
  if ((DAT_045662ec & 1) == 0) {
    FUN_01bab630(&System_Func<JHMFOIIPEHB>_TypeInfo);
    FUN_01bab630(&JHMFOIIPEHB_TypeInfo);
                    /* try { // try from 031cec8c to 032cec8f has its CatchHandler @ 031ceca4 */
                    /* try { // try from 031cec90 to 032cec97 has its CatchHandler @ 031ceae0 */
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<JHMFOIIPEHB>__ctor__);
                    /* try { // try from 031cec98 to 032cec9b has its CatchHandler @ 031cec9c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031cebd0 with catch @ 031cec9c
                       catch(type#1 @ 03f99f68) { ... } // from try @ 031cec98 with catch @ 031cec9c
                       try { // try from 031cec9c to 032cecbb has its CatchHandler @ 031ceae0 */
    FUN_01bab630(&Google_Protobuf_MessageParser<JHMFOIIPEHB>_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031cebf4 with catch @ 031ceca0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031cec8c with catch @ 031ceca4
                        */
    FUN_01bab630(&Method_JHMFOIIPEHB_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&JHMFOIIPEHB_<>c_TypeInfo);
                    /* try { // try from 031cecbc to 032cecbf has its CatchHandler @ 031cecd4 */
    DAT_045662ec = 1;
  }
                    /* catch() { ... } // from try @ 031cecbc with catch @ 031cecd4 */
  if ((JHMFOIIPEHB_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<JHMFOIIPEHB>_TypeInfo);
                    /* try { // try from 031ced0c to 032ced33 has its CatchHandler @ 031ced48 */
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_JHMFOIIPEHB__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<JHMFOIIPEHB>_TypeInfo);
                    /* try { // try from 031ced34 to 032ced3f has its CatchHandler @ 031ceae0 */
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<JHMFOIIPEHB>__ctor__);
                    /* try { // try from 031ced40 to 032ced47 has its CatchHandler @ 031ced48 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031ced0c with catch @ 031ced48
                       catch(type#2 @ 00000000) { ... } // from try @ 031ced40 with catch @ 031ced48
                        */
  JHMFOIIPEHB_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(JHMFOIIPEHB_TypeInfo->static_fields,__this);
  return;
}

