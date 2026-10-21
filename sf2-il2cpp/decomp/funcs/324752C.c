// CHDGOFBHAFI$$KDLABEFIDFG @ RVA 0x324752C

void CHDGOFBHAFI__KDLABEFIDFG(CHDGOFBHAFI_o *__this,AADKBCFCLKK_o *DKMMBMBMJBO,MethodInfo *method)

{
  NODLJPNGNBG_o *pNVar1;
  KKLJIDJBFEI_o *__this_00;
  Google_Protobuf_WellKnownTypes_Empty_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)DKMMBMBMJBO;
  if ((DAT_045670c9 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_CHDGOFBHAFI_NMCMPPIKBJP__);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Empty_TypeInfo);
    FUN_01bab630(&StringLiteral_20403);
    DAT_045670c9 = 1;
    method_00 = extraout_x1;
  }
  if ((DKMMBMBMJBO != (AADKBCFCLKK_o *)0x0) &&
     (pNVar1 = CHDGOFBHAFI__AFHLHFMLNEO
                         ((System_Collections_Generic_IList_NODLJPNGNBG__o *)
                          (DKMMBMBMJBO->fields).MPAIPMANDEO,method_00),
     pNVar1 != (NODLJPNGNBG_o *)0x0)) {
    if ((pNVar1->fields).DMFDEJEDMPO != false) {
      return;
    }
    __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    __this_01 = (Google_Protobuf_WellKnownTypes_Empty_o *)
                thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Empty_TypeInfo);
    Google_Protobuf_WellKnownTypes_Empty___ctor(__this_01,(MethodInfo *)0x0);
    BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                  thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
      KDPDBGNOFEN__KLNMLOOCAAO
                ((KDPDBGNOFEN_o *)__this_00,StringLiteral_20403,
                 (Google_Protobuf_IMessage_o *)__this_01,BLMFLPJJMPF,0.0,(Il2CppObject *)0x0,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

