// NILODIIEDJE$$CILCCPJGCFM @ RVA 0x34CBC7C

System_IObservable_FKNCNNOOOIO__o *
NILODIIEDJE__CILCCPJGCFM(NCNJEIBHGBH_o *ELHFHAPBFMI,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Action_Action_T___o *addHandler;
  System_Action_Action_T___o *removeHandler;
  System_IObservable_T__o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 035cbb20 with catch @ 035cbc7c
                       catch() { ... } // from try @ 035cbc00 with catch @ 035cbc7c
                       catch() { ... } // from try @ 035cbc74 with catch @ 035cbc7c */
                    /* try { // try from 035cbc80 to 036cbe3b has its CatchHandler @ 035cbc80
                       catch() { ... } // from try @ 035cbc80 with catch @ 035cbc80
                       catch() { ... } // from try @ 035cbf0c with catch @ 035cbc80
                       catch() { ... } // from try @ 035cbf44 with catch @ 035cbc80
                       catch() { ... } // from try @ 035cbf84 with catch @ 035cbc80
                       catch() { ... } // from try @ 035cbfb4 with catch @ 035cbc80 */
  if ((DAT_04568674 & 1) == 0) {
    FUN_01bab630(&System_Action<Action<FKNCNNOOOIO>>_TypeInfo);
    FUN_01bab630(&Method_NILODIIEDJE_DPJILPJEPAC_BACMJBFJEMJ__);
    FUN_01bab630(&Method_NILODIIEDJE_DPJILPJEPAC_KCFODBLCFON__);
    FUN_01bab630(&NILODIIEDJE_DPJILPJEPAC_TypeInfo);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<FKNCNNOOOIO>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_04568674 = 1;
    method = extraout_x1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(NILODIIEDJE_DPJILPJEPAC_TypeInfo,method);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)ELHFHAPBFMI;
    thunk_FUN_01c20e04(__this + 1,ELHFHAPBFMI);
    addHandler = (System_Action_Action_T___o *)
                 thunk_FUN_01bda818(System_Action<Action<FKNCNNOOOIO>>_TypeInfo);
    System_Action<object>___ctor();
    removeHandler =
         (System_Action_Action_T___o *)
         thunk_FUN_01bda818(System_Action<Action<FKNCNNOOOIO>>_TypeInfo);
    System_Action<object>___ctor();
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar1 = UniRx_Observable__FromEvent<object>
                       (addHandler,removeHandler,Method_UniRx_Observable_FromEvent<FKNCNNOOOIO>__);
    return (System_IObservable_FKNCNNOOOIO__o *)pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

