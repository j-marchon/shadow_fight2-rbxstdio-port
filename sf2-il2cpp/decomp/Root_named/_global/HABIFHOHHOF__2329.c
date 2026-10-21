// TypeDefIndex 2329
// Namespace: 
// [Extension]
// public static class HABIFHOHHOF
// Fields:

// ===== public static IObservable<object> ELOBMGDKLPK(CloseButton BECCOGAMKJL)  [RVA 0x331F76C]
// HABIFHOHHOF$$ELOBMGDKLPK @ RVA 0x331F76C

System_IObservable_object__o *
HABIFHOHHOF__ELOBMGDKLPK(CloseButton_o *BECCOGAMKJL,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Action_Action_T___o *addHandler;
  System_Action_Action_T___o *removeHandler;
  System_IObservable_T__o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456783a & 1) == 0) {
    FUN_01bab630(&System_Action<Action<object>>_TypeInfo);
    FUN_01bab630(&Method_HABIFHOHHOF_IFJOCBLPEFD_OGIICMEPDKL__);
    FUN_01bab630(&Method_HABIFHOHHOF_IFJOCBLPEFD_PEBEFILGAGG__);
    FUN_01bab630(&HABIFHOHHOF_IFJOCBLPEFD_TypeInfo);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<object>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_0456783a = 1;
    method = extraout_x1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(HABIFHOHHOF_IFJOCBLPEFD_TypeInfo,method);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)BECCOGAMKJL;
    thunk_FUN_01c20e04(__this + 1,BECCOGAMKJL);
    addHandler = (System_Action_Action_T___o *)
                 thunk_FUN_01bda818(System_Action<Action<object>>_TypeInfo);
    System_Action<object>___ctor();
    removeHandler =
         (System_Action_Action_T___o *)thunk_FUN_01bda818(System_Action<Action<object>>_TypeInfo);
    System_Action<object>___ctor();
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar1 = UniRx_Observable__FromEvent<object>
                       (addHandler,removeHandler,Method_UniRx_Observable_FromEvent<object>__);
    return (System_IObservable_object__o *)pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

