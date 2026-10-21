// BIELHCFJAMH$$PPJJDLHLJOG @ RVA 0x351ED00

System_IObservable_bool__o * BIELHCFJAMH__PPJJDLHLJOG(CPABHCDGLPI_o *JIAMBOGFHID,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Action_Action_T___o *addHandler;
  System_Action_Action_T___o *removeHandler;
  System_IObservable_T__o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0361ed04 to 0371ed0b has its CatchHandler @ 0361efac */
                    /* try { // try from 0361ed0c to 0371ed9f has its CatchHandler @ 0361e3e4 */
  if ((DAT_045689aa & 1) == 0) {
    FUN_01bab630(&System_Action<Action<bool>>_TypeInfo);
    FUN_01bab630(&Method_BIELHCFJAMH_KHDMOCKBDNF_NPCPLLJJGIB__);
    FUN_01bab630(&Method_BIELHCFJAMH_KHDMOCKBDNF_NPPPNOOFJFN__);
    FUN_01bab630(&BIELHCFJAMH_KHDMOCKBDNF_TypeInfo);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<bool>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_045689aa = 1;
    method = extraout_x1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(BIELHCFJAMH_KHDMOCKBDNF_TypeInfo,method);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
                    /* try { // try from 0361eda0 to 0371edc7 has its CatchHandler @ 0361f0a8 */
    __this[1].klass = (Il2CppClass *)JIAMBOGFHID;
    thunk_FUN_01c20e04(__this + 1,JIAMBOGFHID);
    addHandler = (System_Action_Action_T___o *)
                 thunk_FUN_01bda818(System_Action<Action<bool>>_TypeInfo);
    System_Action<object>___ctor();
    removeHandler =
         (System_Action_Action_T___o *)thunk_FUN_01bda818(System_Action<Action<bool>>_TypeInfo);
                    /* try { // try from 0361edfc to 0371ee27 has its CatchHandler @ 0361f0a4 */
    System_Action<object>___ctor();
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar1 = UniRx_Observable__FromEvent<bool>
                       (addHandler,removeHandler,Method_UniRx_Observable_FromEvent<bool>__);
    return (System_IObservable_bool__o *)pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

