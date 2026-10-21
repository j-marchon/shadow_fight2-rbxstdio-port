// FEEEICKDOFK$$CICIPAHCKDB @ RVA 0x336BB8C

System_IObservable_Unit__o * FEEEICKDOFK__CICIPAHCKDB(BLEFOFGCKEF_o *FPEEDALPDOF,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Action_Action__o *addHandler;
  System_Action_Action__o *removeHandler;
  System_IObservable_Unit__o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0346bb94 to 0356bc37 has its CatchHandler @ 0346bb94
                       catch() { ... } // from try @ 0346bb94 with catch @ 0346bb94
                       catch() { ... } // from try @ 0346bcbc with catch @ 0346bb94
                       catch() { ... } // from try @ 0346bd24 with catch @ 0346bb94
                       catch() { ... } // from try @ 0346bd68 with catch @ 0346bb94
                       catch() { ... } // from try @ 0346bda8 with catch @ 0346bb94 */
  if ((DAT_04567aef & 1) == 0) {
    FUN_01bab630(&System_Action<Action>_TypeInfo);
    FUN_01bab630(&Method_FEEEICKDOFK_EJLEDCDEOMI_GNOJGMBLBNH__);
    FUN_01bab630(&Method_FEEEICKDOFK_EJLEDCDEOMI_HCOAEHCMAIM__);
    FUN_01bab630(&FEEEICKDOFK_EJLEDCDEOMI_TypeInfo);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_04567aef = 1;
    method = extraout_x1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(FEEEICKDOFK_EJLEDCDEOMI_TypeInfo,method);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)FPEEDALPDOF;
                    /* try { // try from 0346bc38 to 0356bc3f has its CatchHandler @ 0346bd4c */
    thunk_FUN_01c20e04(__this + 1,FPEEDALPDOF);
    addHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
                    /* try { // try from 0346bc4c to 0356bc53 has its CatchHandler @ 0346bd48 */
    System_Action<object>___ctor();
    removeHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
                    /* try { // try from 0346bc64 to 0356bc6b has its CatchHandler @ 0346bd30 */
                    /* try { // try from 0346bc74 to 0356bc7b has its CatchHandler @ 0346bd44 */
    System_Action<object>___ctor();
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0346bc8c to 0356bc93 has its CatchHandler @ 0346bd2c */
                    /* try { // try from 0346bc9c to 0356bca3 has its CatchHandler @ 0346bd40 */
    pSVar1 = UniRx_Observable__FromEvent(addHandler,removeHandler,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

