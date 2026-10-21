// MFLHNKGKEGA$$HLMFKEBLCFN @ RVA 0x316420C

System_IObservable_Unit__o * MFLHNKGKEGA__HLMFKEBLCFN(MFLHNKGKEGA_o *__this,MethodInfo *method)

{
  System_Func_string____bool__o **ppSVar1;
  System_IObservable_T__o *source;
  System_IObservable_Unit__o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  UniRx_ReactiveProperty_string____o *source_00;
  System_Func_string____bool__o *predicate;
  
  if ((DAT_0456689e & 1) == 0) {
    FUN_01bab630(&System_Func<string[],_bool>_TypeInfo);
    FUN_01bab630(&Method_UniRx_Observable_AsUnitObservable<string[]>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<string[]>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_MFLHNKGKEGA_<>c_MHFLDBDFDJB__);
    FUN_01bab630(&MFLHNKGKEGA_<>c_TypeInfo);
    DAT_0456689e = 1;
    method = extraout_x1;
  }
  source_00 = (__this->fields).IDPIHPBEHFC;
  if ((MFLHNKGKEGA_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MFLHNKGKEGA_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  predicate = MFLHNKGKEGA_<>c_TypeInfo->static_fields->__9__11_0;
  if (predicate == (System_Func_string____bool__o *)0x0) {
    if ((MFLHNKGKEGA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MFLHNKGKEGA_<>c_TypeInfo,method);
    }
    predicate = (System_Func_string____bool__o *)
                thunk_FUN_01bda818(System_Func<string[],_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    ppSVar1 = &MFLHNKGKEGA_<>c_TypeInfo->static_fields->__9__11_0;
    *ppSVar1 = predicate;
    thunk_FUN_01c20e04(ppSVar1,predicate);
    method = extraout_x1_01;
  }
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Observable_TypeInfo,method);
  }
  source = UniRx_Observable__Where<object>
                     ((System_IObservable_T__o *)source_00,(System_Func_T__bool__o *)predicate,
                      Method_UniRx_Observable_Where<string[]>__);
  pSVar2 = UniRx_Observable__AsUnitObservable<object>
                     (source,Method_UniRx_Observable_AsUnitObservable<string[]>__);
  return pSVar2;
}

