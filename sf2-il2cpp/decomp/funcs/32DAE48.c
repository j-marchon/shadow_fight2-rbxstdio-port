// HAIGJHOMMPL$$IJGMKIKNLNP @ RVA 0x32DAE48

System_IObservable_Unit__o * HAIGJHOMMPL__IJGMKIKNLNP(HAIGJHOMMPL_o *__this,MethodInfo *method)

{
  System_Func_bool__bool__o **ppSVar1;
  System_IObservable_T__o *source;
  System_IObservable_Unit__o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  UniRx_ReactiveProperty_bool__o *source_00;
  System_Func_bool__bool__o *predicate;
  
  if ((DAT_045675ba & 1) == 0) {
    FUN_01bab630(&System_Func<bool,_bool>_TypeInfo);
    FUN_01bab630(&Method_UniRx_Observable_AsUnitObservable<bool>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<bool>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_HAIGJHOMMPL_<>c_EEAGCPLFMCK__);
    FUN_01bab630(&HAIGJHOMMPL_<>c_TypeInfo);
    DAT_045675ba = 1;
    method = extraout_x1;
  }
  source_00 = (__this->fields).DDKAEOMHAPH;
  if ((HAIGJHOMMPL_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HAIGJHOMMPL_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  predicate = HAIGJHOMMPL_<>c_TypeInfo->static_fields->__9__1_0;
  if (predicate == (System_Func_bool__bool__o *)0x0) {
    if ((HAIGJHOMMPL_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HAIGJHOMMPL_<>c_TypeInfo,method);
    }
    predicate = (System_Func_bool__bool__o *)thunk_FUN_01bda818(System_Func<bool,_bool>_TypeInfo);
    System_Func<bool,_bool>___ctor();
    ppSVar1 = &HAIGJHOMMPL_<>c_TypeInfo->static_fields->__9__1_0;
    *ppSVar1 = predicate;
    thunk_FUN_01c20e04(ppSVar1,predicate);
    method = extraout_x1_01;
  }
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Observable_TypeInfo,method);
  }
  source = UniRx_Observable__Where<bool>
                     ((System_IObservable_T__o *)source_00,(System_Func_T__bool__o *)predicate,
                      Method_UniRx_Observable_Where<bool>__);
  pSVar2 = UniRx_Observable__AsUnitObservable<bool>
                     (source,Method_UniRx_Observable_AsUnitObservable<bool>__);
  return pSVar2;
}

