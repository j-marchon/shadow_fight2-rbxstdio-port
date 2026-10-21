// CJFBGEEIPBA$$HKPDBKGKBOO @ RVA 0x3364194

void CJFBGEEIPBA__HKPDBKGKBOO
               (CJFBGEEIPBA_o *__this,int64_t FKIGDGJPIAC,System_Action_NLFLMJPNOLF__o *IELDNEAAPBE,
               MethodInfo *method)

{
  Google_Protobuf_WellKnownTypes_Int64Value_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  
  if ((DAT_04567aa4 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_CJFBGEEIPBA_INMBMELGIBH__);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
    FUN_01bab630(&StringLiteral_17046);
    DAT_04567aa4 = 1;
  }
  __this_00 = (Google_Protobuf_WellKnownTypes_Int64Value_o *)
              thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
  Google_Protobuf_WellKnownTypes_Int64Value___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Google_Protobuf_WellKnownTypes_Int64Value_o *)0x0) {
    (__this_00->fields).value_ = FKIGDGJPIAC;
    __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                  thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
      KDPDBGNOFEN__KLNMLOOCAAO
                ((KDPDBGNOFEN_o *)__this_01,StringLiteral_17046,
                 (Google_Protobuf_IMessage_o *)__this_00,BLMFLPJJMPF,0.0,(Il2CppObject *)IELDNEAAPBE
                 ,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

