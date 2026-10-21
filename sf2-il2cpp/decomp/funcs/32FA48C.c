// EEOMEMBBGNA$$FKOLNCFEANA @ RVA 0x32FA48C

void EEOMEMBBGNA__FKOLNCFEANA
               (EEOMEMBBGNA_o *__this,int64_t KNPEFJLKLAL,System_Action_KEFHDOHHHML__o *PFEFEKFHILE,
               MethodInfo *method)

{
  Google_Protobuf_WellKnownTypes_Int64Value_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  
  if ((DAT_045676cc & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
                    /* try { // try from 033fa4cc to 034fa4f3 has its CatchHandler @ 033fa76c */
    FUN_01bab630(&Method_EEOMEMBBGNA_CONJKPKBICI__);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
    FUN_01bab630(&StringLiteral_17024);
    DAT_045676cc = 1;
  }
  __this_00 = (Google_Protobuf_WellKnownTypes_Int64Value_o *)
              thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
  Google_Protobuf_WellKnownTypes_Int64Value___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Google_Protobuf_WellKnownTypes_Int64Value_o *)0x0) {
    (__this_00->fields).value_ = KNPEFJLKLAL;
    __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                    /* try { // try from 033fa528 to 034fa553 has its CatchHandler @ 033fa768 */
    BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                  thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
                    /* try { // try from 033fa55c to 034fa5a3 has its CatchHandler @ 033fa770 */
      KDPDBGNOFEN__KLNMLOOCAAO
                ((KDPDBGNOFEN_o *)__this_01,StringLiteral_17024,
                 (Google_Protobuf_IMessage_o *)__this_00,BLMFLPJJMPF,0.0,(Il2CppObject *)PFEFEKFHILE
                 ,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

