// EBBCMCKFDAE$$IPNBKKOEKPJ @ RVA 0x33323CC

System_IObservable_MPAKDCNMLEG__o *
EBBCMCKFDAE__IPNBKKOEKPJ(KKEKKPIDGBK_o *KMIOAIFNJJD,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Action_Action_T___o *addHandler;
  System_Action_Action_T___o *removeHandler;
  System_IObservable_T__o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456791c & 1) == 0) {
    FUN_01bab630(&System_Action<Action<MPAKDCNMLEG>>_TypeInfo);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<MPAKDCNMLEG>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_EBBCMCKFDAE_PGAHKHCDGCF_FCHHJHAALCG__);
    FUN_01bab630(&Method_EBBCMCKFDAE_PGAHKHCDGCF_IBPJJIJDMDE__);
    FUN_01bab630(&EBBCMCKFDAE_PGAHKHCDGCF_TypeInfo);
    DAT_0456791c = 1;
    method = extraout_x1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(EBBCMCKFDAE_PGAHKHCDGCF_TypeInfo,method);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)KMIOAIFNJJD;
    thunk_FUN_01c20e04(__this + 1,KMIOAIFNJJD);
    addHandler = (System_Action_Action_T___o *)
                 thunk_FUN_01bda818(System_Action<Action<MPAKDCNMLEG>>_TypeInfo);
    System_Action<object>___ctor();
    removeHandler =
         (System_Action_Action_T___o *)
         thunk_FUN_01bda818(System_Action<Action<MPAKDCNMLEG>>_TypeInfo);
    System_Action<object>___ctor();
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar1 = UniRx_Observable__FromEvent<Int32Enum>
                       (addHandler,removeHandler,Method_UniRx_Observable_FromEvent<MPAKDCNMLEG>__);
    return (System_IObservable_MPAKDCNMLEG__o *)pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

