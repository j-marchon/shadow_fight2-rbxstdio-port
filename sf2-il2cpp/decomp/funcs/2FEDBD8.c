// KCJMBDCBIIF$$KLNMLOOCAAO @ RVA 0x2FEDBD8

void KCJMBDCBIIF__KLNMLOOCAAO
               (KCJMBDCBIIF_o *__this,OJKCDJCBOBL_o *DBIAAJNKHLH,
               System_Action_DLOALGNBPNL__o *BLMFLPJJMPF,MethodInfo *method)

{
  int32_t iVar1;
  KKLJIDJBFEI_o *__this_00;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF_00;
  Il2CppObject *__this_01;
  
  if ((DAT_04565a46 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&KCJMBDCBIIF_GOEDJGBJPKD_TypeInfo);
    FUN_01bab630(&Method_JICOLGELJGE<DLOALGNBPNL>_OPCNBJOLDNG__);
    FUN_01bab630(&Method_KCJMBDCBIIF_HAFBJDICOGK__);
    FUN_01bab630(&StringLiteral_17028);
    DAT_04565a46 = 1;
  }
  iVar1 = JICOLGELJGE<object>__OPCNBJOLDNG
                    ((JICOLGELJGE_T__o *)__this,(System_Action_T__o *)BLMFLPJJMPF,
                     Method_JICOLGELJGE<DLOALGNBPNL>_OPCNBJOLDNG__);
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  BLMFLPJJMPF_00 =
       (System_Action_KEFHDOHHHML__o *)thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
  System_Action<object>___ctor();
  __this_01 = (Il2CppObject *)thunk_FUN_01bda818(KCJMBDCBIIF_GOEDJGBJPKD_TypeInfo);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  __this_01[1].klass = (Il2CppClass *)DBIAAJNKHLH;
  thunk_FUN_01c20e04(__this_01 + 1,DBIAAJNKHLH);
  *(int32_t *)&__this_01[1].monitor = iVar1;
  if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
    KDPDBGNOFEN__KLNMLOOCAAO
              ((KDPDBGNOFEN_o *)__this_00,StringLiteral_17028,
               (Google_Protobuf_IMessage_o *)DBIAAJNKHLH,BLMFLPJJMPF_00,0.0,__this_01,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

