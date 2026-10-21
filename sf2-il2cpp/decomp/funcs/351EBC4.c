// BIELHCFJAMH$$CBOMNHFBKIP @ RVA 0x351EBC4

System_IObservable_bool__o * BIELHCFJAMH__CBOMNHFBKIP(CPABHCDGLPI_o *JIAMBOGFHID,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Action_Action_T___o *addHandler;
  System_Action_Action_T___o *removeHandler;
  System_IObservable_T__o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0361ebe0 to 0371ec5f has its CatchHandler @ 0361e3e4 */
  if ((DAT_045689a9 & 1) == 0) {
    FUN_01bab630(&System_Action<Action<bool>>_TypeInfo);
    FUN_01bab630(&Method_BIELHCFJAMH_FFEMPLJFDEL_ILHPJKHOCAN__);
    FUN_01bab630(&Method_BIELHCFJAMH_FFEMPLJFDEL_PEHKINONJOM__);
    FUN_01bab630(&BIELHCFJAMH_FFEMPLJFDEL_TypeInfo);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<bool>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_045689a9 = 1;
    method = extraout_x1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(BIELHCFJAMH_FFEMPLJFDEL_TypeInfo,method);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
                    /* try { // try from 0361ec60 to 0371ec67 has its CatchHandler @ 0361efe4 */
                    /* try { // try from 0361ec74 to 0371ec7b has its CatchHandler @ 0361efdc */
                    /* try { // try from 0361ec80 to 0371ec9f has its CatchHandler @ 0361efbc */
    __this[1].klass = (Il2CppClass *)JIAMBOGFHID;
    thunk_FUN_01c20e04(__this + 1,JIAMBOGFHID);
    addHandler = (System_Action_Action_T___o *)
                 thunk_FUN_01bda818(System_Action<Action<bool>>_TypeInfo);
                    /* try { // try from 0361eca0 to 0371ecaf has its CatchHandler @ 0361efa8 */
    System_Action<object>___ctor();
    removeHandler =
         (System_Action_Action_T___o *)thunk_FUN_01bda818(System_Action<Action<bool>>_TypeInfo);
    System_Action<object>___ctor();
                    /* try { // try from 0361ecc8 to 0371eccf has its CatchHandler @ 0361ef9c */
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0361ece4 to 0371eceb has its CatchHandler @ 0361efb4 */
    pSVar1 = UniRx_Observable__FromEvent<bool>
                       (addHandler,removeHandler,Method_UniRx_Observable_FromEvent<bool>__);
    return (System_IObservable_bool__o *)pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

