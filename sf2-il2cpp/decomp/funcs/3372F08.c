// CLDGCKOKINJ$$HBDJIJNFKFG @ RVA 0x3372F08

System_IObservable_OHAHOONNEIC__o *
CLDGCKOKINJ__HBDJIJNFKFG(CFOCLEDKNKL_o *NFOGGNINBBP,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Action_Action_T___o *addHandler;
  System_Action_Action_T___o *removeHandler;
  System_IObservable_T__o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 03472b98 with catch @ 03472f08 */
                    /* try { // try from 03472f20 to 03572f23 has its CatchHandler @ 03472f38 */
  if ((DAT_04567b38 & 1) == 0) {
                    /* catch() { ... } // from try @ 03472f20 with catch @ 03472f38 */
    FUN_01bab630(&System_Action<Action<OHAHOONNEIC>>_TypeInfo);
    FUN_01bab630(&Method_CLDGCKOKINJ_MPBHCOJJGBM_GAHAPJGKEHK__);
    FUN_01bab630(&Method_CLDGCKOKINJ_MPBHCOJJGBM_PFKPLMJHMIN__);
    FUN_01bab630(&CLDGCKOKINJ_MPBHCOJJGBM_TypeInfo);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<OHAHOONNEIC>__);
                    /* try { // try from 03472f70 to 03572f97 has its CatchHandler @ 03472fac */
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_04567b38 = 1;
    method = extraout_x1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(CLDGCKOKINJ_MPBHCOJJGBM_TypeInfo,method);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
                    /* try { // try from 03472f98 to 03572fa3 has its CatchHandler @ 03472908 */
                    /* try { // try from 03472fa4 to 03572fab has its CatchHandler @ 03472fac */
                    /* catch() { ... } // from try @ 03472f70 with catch @ 03472fac
                       catch() { ... } // from try @ 03472fa4 with catch @ 03472fac */
    __this[1].klass = (Il2CppClass *)NFOGGNINBBP;
    thunk_FUN_01c20e04(__this + 1,NFOGGNINBBP);
    addHandler = (System_Action_Action_T___o *)
                 thunk_FUN_01bda818(System_Action<Action<OHAHOONNEIC>>_TypeInfo);
    System_Action<object>___ctor();
    removeHandler =
         (System_Action_Action_T___o *)
         thunk_FUN_01bda818(System_Action<Action<OHAHOONNEIC>>_TypeInfo);
    System_Action<object>___ctor();
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar1 = UniRx_Observable__FromEvent<object>
                       (addHandler,removeHandler,Method_UniRx_Observable_FromEvent<OHAHOONNEIC>__);
    return (System_IObservable_OHAHOONNEIC__o *)pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

