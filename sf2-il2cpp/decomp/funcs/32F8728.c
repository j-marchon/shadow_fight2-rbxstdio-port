// EEOMEMBBGNA$$BGDACMBMPJP @ RVA 0x32F8728

void EEOMEMBBGNA__BGDACMBMPJP
               (EEOMEMBBGNA_o *__this,int64_t KNPEFJLKLAL,System_Action_KEFHDOHHHML__o *HFHIAKJDOGK,
               MethodInfo *method)

{
  Google_Protobuf_WellKnownTypes_Int64Value_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  
  if ((DAT_045676be & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_EEOMEMBBGNA_DJLHKEGALPA__);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
    FUN_01bab630(&StringLiteral_17026);
    DAT_045676be = 1;
  }
  __this_00 = (Google_Protobuf_WellKnownTypes_Int64Value_o *)
              thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
  Google_Protobuf_WellKnownTypes_Int64Value___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Google_Protobuf_WellKnownTypes_Int64Value_o *)0x0) {
    (__this_00->fields).value_ = KNPEFJLKLAL;
    __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                  thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
      KDPDBGNOFEN__KLNMLOOCAAO
                ((KDPDBGNOFEN_o *)__this_01,StringLiteral_17026,
                 (Google_Protobuf_IMessage_o *)__this_00,BLMFLPJJMPF,0.0,(Il2CppObject *)HFHIAKJDOGK
                 ,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

