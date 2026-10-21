// EEOMEMBBGNA$$ELPDKEKBAMO @ RVA 0x32F89C4

void EEOMEMBBGNA__ELPDKEKBAMO
               (EEOMEMBBGNA_o *__this,int64_t FKIGDGJPIAC,System_Action_KEFHDOHHHML__o *GBLADNMICPP,
               MethodInfo *method)

{
  Google_Protobuf_WellKnownTypes_Int64Value_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  
                    /* try { // try from 033f89e4 to 034f8a0f has its CatchHandler @ 033f8b6c */
  if ((DAT_045676ad & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_EEOMEMBBGNA_CHAMCKJPFDF__);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
    FUN_01bab630(&StringLiteral_17012);
    DAT_045676ad = 1;
  }
  __this_00 = (Google_Protobuf_WellKnownTypes_Int64Value_o *)
              thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
  Google_Protobuf_WellKnownTypes_Int64Value___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Google_Protobuf_WellKnownTypes_Int64Value_o *)0x0) {
                    /* try { // try from 033f8a48 to 034f8a53 has its CatchHandler @ 033f8b5c */
    (__this_00->fields).value_ = FKIGDGJPIAC;
    __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                    /* try { // try from 033f8a60 to 034f8a67 has its CatchHandler @ 033f8b60 */
                    /* try { // try from 033f8a6c to 034f8a77 has its CatchHandler @ 033f8b64 */
    BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                  thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
                    /* try { // try from 033f8aa0 to 034f8b0f has its CatchHandler @ 033f8d4c */
      KDPDBGNOFEN__KLNMLOOCAAO
                ((KDPDBGNOFEN_o *)__this_01,StringLiteral_17012,
                 (Google_Protobuf_IMessage_o *)__this_00,BLMFLPJJMPF,0.0,(Il2CppObject *)GBLADNMICPP
                 ,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

