// JKGLCCGGPBJ$$EBCEFHJFIFA @ RVA 0x3237658

System_IObservable_Unit__o * JKGLCCGGPBJ__EBCEFHJFIFA(LAJPNJAAODE_o *FGMLDCCMDII,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Action_Action__o *addHandler;
  System_Action_Action__o *removeHandler;
  System_IObservable_Unit__o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567031 & 1) == 0) {
    FUN_01bab630(&System_Action<Action>_TypeInfo);
    FUN_01bab630(&Method_JKGLCCGGPBJ_FNLLMMMNOPE_CBNLIOPBGKC__);
    FUN_01bab630(&Method_JKGLCCGGPBJ_FNLLMMMNOPE_IGHPDNDKIPC__);
    FUN_01bab630(&JKGLCCGGPBJ_FNLLMMMNOPE_TypeInfo);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_04567031 = 1;
    method = extraout_x1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(JKGLCCGGPBJ_FNLLMMMNOPE_TypeInfo,method);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)FGMLDCCMDII;
    thunk_FUN_01c20e04(__this + 1,FGMLDCCMDII);
    addHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
    System_Action<object>___ctor();
    removeHandler = (System_Action_Action__o *)thunk_FUN_01bda818(System_Action<Action>_TypeInfo);
    System_Action<object>___ctor();
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar1 = UniRx_Observable__FromEvent(addHandler,removeHandler,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

