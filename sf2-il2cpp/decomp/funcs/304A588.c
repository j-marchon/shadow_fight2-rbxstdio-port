// EGMONPGHHDP$$MJPJLODOPOH @ RVA 0x304A588

void EGMONPGHHDP__MJPJLODOPOH
               (EGMONPGHHDP_o *__this,int32_t HGIALBGPMAO,System_Action_o *BLMFLPJJMPF,
               System_String_o *GINPHGBMEGC,MethodInfo *method)

{
  Il2CppObject *__this_00;
  JMDPBFOCHHP_CKEMIAEPGKD_o *pJVar1;
  ENFPENIMCIK_o *__this_01;
  KKLJIDJBFEI_o *__this_02;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF_00;
  MethodInfo *method_00;
  
  if ((DAT_04565e00 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&ENFPENIMCIK_TypeInfo);
    FUN_01bab630(&Method_EGMONPGHHDP_NGGKGGENADG_DJEPMIIAJMC__);
    FUN_01bab630(&EGMONPGHHDP_NGGKGGENADG_TypeInfo);
    FUN_01bab630(&StringLiteral_16777);
    DAT_04565e00 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(EGMONPGHHDP_NGGKGGENADG_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    __this_00[1].monitor = BLMFLPJJMPF;
    thunk_FUN_01c20e04(&__this_00[1].monitor,BLMFLPJJMPF);
    __this_00[2].klass = (Il2CppClass *)GINPHGBMEGC;
    thunk_FUN_01c20e04(__this_00 + 2,GINPHGBMEGC);
    pJVar1 = EGMONPGHHDP__OKBKFJKEAAG(__this,method_00);
    if (pJVar1 == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) {
      return;
    }
    __this_01 = (ENFPENIMCIK_o *)thunk_FUN_01bda818(ENFPENIMCIK_TypeInfo);
    ENFPENIMCIK___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (ENFPENIMCIK_o *)0x0) {
      ENFPENIMCIK__HCOCAAIGNNL(__this_01,(pJVar1->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
      (__this_01->fields).CBIFOEGLMNM = HGIALBGPMAO;
      __this_02 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      BLMFLPJJMPF_00 =
           (System_Action_KEFHDOHHHML__o *)thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_02 != (KKLJIDJBFEI_o *)0x0) {
        KDPDBGNOFEN__KLNMLOOCAAO
                  ((KDPDBGNOFEN_o *)__this_02,StringLiteral_16777,
                   (Google_Protobuf_IMessage_o *)__this_01,BLMFLPJJMPF_00,0.0,(Il2CppObject *)0x0,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

