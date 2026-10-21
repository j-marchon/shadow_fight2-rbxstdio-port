// KMFOEBNKLEO$$FGGPIDCDHHG @ RVA 0x32DD12C

System_IObservable_GLINEGMOOBM__o *
KMFOEBNKLEO__FGGPIDCDHHG(NDPMLPGANCI_o *DHMOPKGOBHL,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Action_Action_T___o *addHandler;
  System_Action_Action_T___o *removeHandler;
  System_IObservable_T__o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045675cf & 1) == 0) {
    FUN_01bab630(&System_Action<Action<GLINEGMOOBM>>_TypeInfo);
    FUN_01bab630(&Method_KMFOEBNKLEO_OOCCLMEOPBK_KEBEFMKJPND__);
    FUN_01bab630(&Method_KMFOEBNKLEO_OOCCLMEOPBK_KKFGECIGNDH__);
    FUN_01bab630(&KMFOEBNKLEO_OOCCLMEOPBK_TypeInfo);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<GLINEGMOOBM>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_045675cf = 1;
    method = extraout_x1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(KMFOEBNKLEO_OOCCLMEOPBK_TypeInfo,method);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)DHMOPKGOBHL;
    thunk_FUN_01c20e04(__this + 1,DHMOPKGOBHL);
    addHandler = (System_Action_Action_T___o *)
                 thunk_FUN_01bda818(System_Action<Action<GLINEGMOOBM>>_TypeInfo);
    System_Action<object>___ctor();
    removeHandler =
         (System_Action_Action_T___o *)
         thunk_FUN_01bda818(System_Action<Action<GLINEGMOOBM>>_TypeInfo);
    System_Action<object>___ctor();
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar1 = UniRx_Observable__FromEvent<object>
                       (addHandler,removeHandler,Method_UniRx_Observable_FromEvent<GLINEGMOOBM>__);
    return (System_IObservable_GLINEGMOOBM__o *)pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

