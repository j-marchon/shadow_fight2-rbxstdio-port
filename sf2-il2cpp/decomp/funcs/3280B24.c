// FMIEFKAKOMG$$.cctor @ RVA 0x3280B24

void FMIEFKAKOMG___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_FMIEFKAKOMG__o *__this;
  
  if ((DAT_0456728f & 1) == 0) {
    FUN_01bab630(&FMIEFKAKOMG_TypeInfo);
                    /* try { // try from 03380b5c to 03480b83 has its CatchHandler @ 03380f1c */
    FUN_01bab630(&System_Func<FMIEFKAKOMG>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<FMIEFKAKOMG>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<FMIEFKAKOMG>_TypeInfo);
    FUN_01bab630(&Method_FMIEFKAKOMG_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&FMIEFKAKOMG_<>c_TypeInfo);
    DAT_0456728f = 1;
  }
                    /* try { // try from 03380b9c to 03480bb7 has its CatchHandler @ 03380f14 */
                    /* try { // try from 03380bb8 to 03480d77 has its CatchHandler @ 03380878 */
  if ((FMIEFKAKOMG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<FMIEFKAKOMG>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_FMIEFKAKOMG__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<FMIEFKAKOMG>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<FMIEFKAKOMG>__ctor__);
  FMIEFKAKOMG_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(FMIEFKAKOMG_TypeInfo->static_fields,__this);
  return;
}

