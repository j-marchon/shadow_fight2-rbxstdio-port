// NILODIIEDJE$$NBDCGCKPKEE @ RVA 0x34CBA04

System_IObservable_string__o *
NILODIIEDJE__NBDCGCKPKEE(NCNJEIBHGBH_o *ELHFHAPBFMI,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Action_Action_T___o *addHandler;
  System_Action_Action_T___o *removeHandler;
  System_IObservable_T__o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 035cba20 to 036cba2b has its CatchHandler @ 035cbb94 */
  if ((DAT_04568672 & 1) == 0) {
                    /* try { // try from 035cba2c to 036cba43 has its CatchHandler @ 035cb5cc */
                    /* catch() { ... } // from try @ 035cb96c with catch @ 035cba30 */
                    /* catch() { ... } // from try @ 035cb958 with catch @ 035cba34 */
    FUN_01bab630(&System_Action<Action<string>>_TypeInfo);
    FUN_01bab630(&Method_NILODIIEDJE_MCLAEIPMCEN_ENIAFCONMHP__);
                    /* try { // try from 035cba44 to 036cba47 has its CatchHandler @ 035cbb64 */
                    /* try { // try from 035cba48 to 036cbaf3 has its CatchHandler @ 035cb5cc */
    FUN_01bab630(&Method_NILODIIEDJE_MCLAEIPMCEN_HLLCKAPFKOA__);
    FUN_01bab630(&NILODIIEDJE_MCLAEIPMCEN_TypeInfo);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<string>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_04568672 = 1;
    method = extraout_x1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(NILODIIEDJE_MCLAEIPMCEN_TypeInfo,method);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)ELHFHAPBFMI;
    thunk_FUN_01c20e04(__this + 1,ELHFHAPBFMI);
    addHandler = (System_Action_Action_T___o *)
                 thunk_FUN_01bda818(System_Action<Action<string>>_TypeInfo);
    System_Action<object>___ctor();
    removeHandler =
         (System_Action_Action_T___o *)thunk_FUN_01bda818(System_Action<Action<string>>_TypeInfo);
                    /* try { // try from 035cbaf4 to 036cbafb has its CatchHandler @ 035cbbc8 */
                    /* try { // try from 035cbafc to 036cbaff has its CatchHandler @ 035cbbb4 */
                    /* try { // try from 035cbb00 to 036cbb03 has its CatchHandler @ 035cbbb0 */
    System_Action<object>___ctor();
                    /* try { // try from 035cbb04 to 036cbb07 has its CatchHandler @ 035cbba0 */
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 035cbb20 to 036cbb3f has its CatchHandler @ 035cbc7c */
    pSVar1 = UniRx_Observable__FromEvent<object>
                       (addHandler,removeHandler,Method_UniRx_Observable_FromEvent<string>__);
    return (System_IObservable_string__o *)pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

