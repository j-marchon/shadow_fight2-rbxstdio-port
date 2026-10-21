// NILODIIEDJE$$GNABHMFOLKD @ RVA 0x34CB8C8

System_IObservable_FKNCNNOOOIO__o *
NILODIIEDJE__GNABHMFOLKD(NCNJEIBHGBH_o *ELHFHAPBFMI,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Action_Action_T___o *addHandler;
  System_Action_Action_T___o *removeHandler;
  System_IObservable_T__o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 035cb8d4 to 036cb8db has its CatchHandler @ 035cbb9c */
                    /* try { // try from 035cb8ec to 036cb8f3 has its CatchHandler @ 035cbba8 */
  if ((DAT_04568671 & 1) == 0) {
    FUN_01bab630(&Method_NILODIIEDJE_ADMMOACPKMF_FJIMMAIFDCB__);
    FUN_01bab630(&Method_NILODIIEDJE_ADMMOACPKMF_LLOIDILOOBM__);
    FUN_01bab630(&NILODIIEDJE_ADMMOACPKMF_TypeInfo);
    FUN_01bab630(&System_Action<Action<FKNCNNOOOIO>>_TypeInfo);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<FKNCNNOOOIO>__);
                    /* try { // try from 035cb934 to 036cb93f has its CatchHandler @ 035cbb84 */
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_04568671 = 1;
    method = extraout_x1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(NILODIIEDJE_ADMMOACPKMF_TypeInfo,method);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
                    /* try { // try from 035cb958 to 036cb95f has its CatchHandler @ 035cba34 */
                    /* try { // try from 035cb96c to 036cb97b has its CatchHandler @ 035cba30 */
    __this[1].klass = (Il2CppClass *)ELHFHAPBFMI;
    thunk_FUN_01c20e04(__this + 1,ELHFHAPBFMI);
                    /* try { // try from 035cb990 to 036cb997 has its CatchHandler @ 035cbb7c */
    addHandler = (System_Action_Action_T___o *)
                 thunk_FUN_01bda818(System_Action<Action<FKNCNNOOOIO>>_TypeInfo);
                    /* try { // try from 035cb99c to 036cb9a7 has its CatchHandler @ 035cbb80 */
    System_Action<object>___ctor();
    removeHandler =
         (System_Action_Action_T___o *)
         thunk_FUN_01bda818(System_Action<Action<FKNCNNOOOIO>>_TypeInfo);
    System_Action<object>___ctor();
                    /* try { // try from 035cb9c8 to 036cb9d3 has its CatchHandler @ 035cbb78 */
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 035cb9e8 to 036cb9f3 has its CatchHandler @ 035cbb8c */
    pSVar1 = UniRx_Observable__FromEvent<object>
                       (addHandler,removeHandler,Method_UniRx_Observable_FromEvent<FKNCNNOOOIO>__);
    return (System_IObservable_FKNCNNOOOIO__o *)pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

