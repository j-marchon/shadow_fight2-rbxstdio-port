// GALHNMPIEHA$$NECEOCDKNIJ @ RVA 0x3166D2C

void GALHNMPIEHA__NECEOCDKNIJ(GALHNMPIEHA_o *__this,BDMABHJEEGD_o *JOBNGBCPEGO,MethodInfo *method)

{
  bool bVar1;
  KKLJIDJBFEI_o *__this_00;
  Google_Protobuf_WellKnownTypes_Int32Value_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)JOBNGBCPEGO;
  if ((DAT_045668c1 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_GALHNMPIEHA_MOFPGBHFKMM__);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Int32Value_TypeInfo);
    FUN_01bab630(&StringLiteral_17577);
    DAT_045668c1 = 1;
    method_00 = extraout_x1;
  }
  bVar1 = GALHNMPIEHA__OALAPMJJBLJ(JOBNGBCPEGO,method_00);
  if (bVar1) {
    __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    __this_01 = (Google_Protobuf_WellKnownTypes_Int32Value_o *)
                thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Int32Value_TypeInfo);
    Google_Protobuf_WellKnownTypes_Int32Value___ctor(__this_01,(MethodInfo *)0x0);
    if ((JOBNGBCPEGO != (BDMABHJEEGD_o *)0x0) &&
       (__this_01 != (Google_Protobuf_WellKnownTypes_Int32Value_o *)0x0)) {
      (__this_01->fields).value_ = (JOBNGBCPEGO->fields).OHMDCKEDOGH;
      BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
        KDPDBGNOFEN__KLNMLOOCAAO
                  ((KDPDBGNOFEN_o *)__this_00,StringLiteral_17577,
                   (Google_Protobuf_IMessage_o *)__this_01,BLMFLPJJMPF,0.0,(Il2CppObject *)0x0,
                   (MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

