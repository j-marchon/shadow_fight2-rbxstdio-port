// NILODIIEDJE$$MCMBHJBMFPN @ RVA 0x34CBDB8

System_IObservable_string__o *
NILODIIEDJE__MCMBHJBMFPN(NCNJEIBHGBH_o *ELHFHAPBFMI,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Action_Action_T___o *addHandler;
  System_Action_Action_T___o *removeHandler;
  System_IObservable_T__o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568675 & 1) == 0) {
    FUN_01bab630(&System_Action<Action<string>>_TypeInfo);
    FUN_01bab630(&Method_NILODIIEDJE_GPJLMCEEJBI_DKBAECHJJPJ__);
    FUN_01bab630(&Method_NILODIIEDJE_GPJLMCEEJBI_MAJFNFGCFDH__);
    FUN_01bab630(&NILODIIEDJE_GPJLMCEEJBI_TypeInfo);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<string>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_04568675 = 1;
    method = extraout_x1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(NILODIIEDJE_GPJLMCEEJBI_TypeInfo,method);
                    /* try { // try from 035cbe3c to 036cbe43 has its CatchHandler @ 035cbf60 */
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
                    /* try { // try from 035cbe4c to 036cbe57 has its CatchHandler @ 035cbf58 */
                    /* try { // try from 035cbe64 to 036cbe73 has its CatchHandler @ 035cbf64 */
                    /* try { // try from 035cbe74 to 036cbe83 has its CatchHandler @ 035cbf54 */
    __this[1].klass = (Il2CppClass *)ELHFHAPBFMI;
    thunk_FUN_01c20e04(__this + 1,ELHFHAPBFMI);
    addHandler = (System_Action_Action_T___o *)
                 thunk_FUN_01bda818(System_Action<Action<string>>_TypeInfo);
                    /* try { // try from 035cbe88 to 036cbe93 has its CatchHandler @ 035cbf48 */
                    /* try { // try from 035cbe94 to 036cbe9f has its CatchHandler @ 035cbf50 */
    System_Action<object>___ctor();
                    /* try { // try from 035cbea0 to 036cbeab has its CatchHandler @ 035cbf4c */
    removeHandler =
         (System_Action_Action_T___o *)thunk_FUN_01bda818(System_Action<Action<string>>_TypeInfo);
    System_Action<object>___ctor();
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar1 = UniRx_Observable__FromEvent<object>
                       (addHandler,removeHandler,Method_UniRx_Observable_FromEvent<string>__);
    return (System_IObservable_string__o *)pSVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035cbee8 to 036cbf0b has its CatchHandler @ 035cbf5c */
  FUN_01bab8c8();
}

